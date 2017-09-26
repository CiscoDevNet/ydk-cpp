
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_74.hpp"
#include "Cisco_IOS_XE_native_75.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::FormatType()
    :
    circuit_id(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId>())
{
    circuit_id->parent = this;

    yang_name = "format-type"; yang_parent_name = "option"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::~FormatType()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::has_data() const
{
    return (circuit_id !=  nullptr && circuit_id->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::has_operation() const
{
    return is_set(yfilter)
	|| (circuit_id !=  nullptr && circuit_id->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId>();
        }
        return circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "circuit-id")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::CircuitId()
    :
    string{YType::str, "string"}
{

    yang_name = "circuit-id"; yang_parent_name = "format-type"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::~CircuitId()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::has_data() const
{
    return string.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(string.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.yfilter)) leaf_name_data.push_back(string.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "string")
    {
        string = value;
        string.value_namespace = name_space;
        string.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "string")
    {
        string.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Dhcp::Snooping::Vlan_::Information::Option::FormatType::CircuitId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "string")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::has_data() const
{
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::Nbar()
    :
    protocol_discovery(nullptr) // presence node
{

    yang_name = "nbar"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::~Nbar()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::has_data() const
{
    return (protocol_discovery !=  nullptr && protocol_discovery->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::has_operation() const
{
    return is_set(yfilter)
	|| (protocol_discovery !=  nullptr && protocol_discovery->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-discovery")
    {
        if(protocol_discovery == nullptr)
        {
            protocol_discovery = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery>();
        }
        return protocol_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_discovery != nullptr)
    {
        children["protocol-discovery"] = protocol_discovery;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "protocol-discovery")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::ProtocolDiscovery()
    :
    ipv4_ipv6{YType::enumeration, "ipv4-ipv6"}
{

    yang_name = "protocol-discovery"; yang_parent_name = "nbar"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::~ProtocolDiscovery()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::has_data() const
{
    return ipv4_ipv6.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_ipv6.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-discovery";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_ipv6.is_set || is_set(ipv4_ipv6.yfilter)) leaf_name_data.push_back(ipv4_ipv6.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6 = value;
        ipv4_ipv6.value_namespace = name_space;
        ipv4_ipv6.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-ipv6")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{

    yang_name = "no-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::~NoAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::NoAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::Pim()
    :
    dr_priority{YType::uint32, "Cisco-IOS-XE-multicast:dr-priority"},
    nbma_mode{YType::empty, "Cisco-IOS-XE-multicast:nbma-mode"},
    sparse_mode{YType::enumeration, "Cisco-IOS-XE-multicast:sparse-mode"},
    spt_threshold{YType::enumeration, "Cisco-IOS-XE-multicast:spt-threshold"}
    	,
    accept_register(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister>())
	,query_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval>())
{
    accept_register->parent = this;
    query_interval->parent = this;

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::~Pim()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::has_data() const
{
    return dr_priority.is_set
	|| nbma_mode.is_set
	|| sparse_mode.is_set
	|| spt_threshold.is_set
	|| (accept_register !=  nullptr && accept_register->has_data())
	|| (query_interval !=  nullptr && query_interval->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| ydk::is_set(nbma_mode.yfilter)
	|| ydk::is_set(sparse_mode.yfilter)
	|| ydk::is_set(spt_threshold.yfilter)
	|| (accept_register !=  nullptr && accept_register->has_operation())
	|| (query_interval !=  nullptr && query_interval->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());
    if (nbma_mode.is_set || is_set(nbma_mode.yfilter)) leaf_name_data.push_back(nbma_mode.get_name_leafdata());
    if (sparse_mode.is_set || is_set(sparse_mode.yfilter)) leaf_name_data.push_back(sparse_mode.get_name_leafdata());
    if (spt_threshold.is_set || is_set(spt_threshold.yfilter)) leaf_name_data.push_back(spt_threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accept-register")
    {
        if(accept_register == nullptr)
        {
            accept_register = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister>();
        }
        return accept_register;
    }

    if(child_yang_name == "query-interval")
    {
        if(query_interval == nullptr)
        {
            query_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval>();
        }
        return query_interval;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accept_register != nullptr)
    {
        children["accept-register"] = accept_register;
    }

    if(query_interval != nullptr)
    {
        children["query-interval"] = query_interval;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode = value;
        nbma_mode.value_namespace = name_space;
        nbma_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sparse-mode")
    {
        sparse_mode = value;
        sparse_mode.value_namespace = name_space;
        sparse_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold = value;
        spt_threshold.value_namespace = name_space;
        spt_threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
    if(value_path == "nbma-mode")
    {
        nbma_mode.yfilter = yfilter;
    }
    if(value_path == "sparse-mode")
    {
        sparse_mode.yfilter = yfilter;
    }
    if(value_path == "spt-threshold")
    {
        spt_threshold.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accept-register" || name == "query-interval" || name == "dr-priority" || name == "nbma-mode" || name == "sparse-mode" || name == "spt-threshold")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::AcceptRegister()
    :
    list{YType::str, "list"}
{

    yang_name = "accept-register"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::~AcceptRegister()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::has_data() const
{
    return list.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(list.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:accept-register";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (list.is_set || is_set(list.yfilter)) leaf_name_data.push_back(list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "list")
    {
        list = value;
        list.value_namespace = name_space;
        list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "list")
    {
        list.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::AcceptRegister::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "list")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::QueryInterval()
    :
    milliseconds_interval{YType::uint16, "milliseconds-interval"},
    msec{YType::empty, "msec"},
    seconds_interval{YType::uint16, "seconds-interval"}
{

    yang_name = "query-interval"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::~QueryInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::has_data() const
{
    return milliseconds_interval.is_set
	|| msec.is_set
	|| seconds_interval.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(milliseconds_interval.yfilter)
	|| ydk::is_set(msec.yfilter)
	|| ydk::is_set(seconds_interval.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:query-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (milliseconds_interval.is_set || is_set(milliseconds_interval.yfilter)) leaf_name_data.push_back(milliseconds_interval.get_name_leafdata());
    if (msec.is_set || is_set(msec.yfilter)) leaf_name_data.push_back(msec.get_name_leafdata());
    if (seconds_interval.is_set || is_set(seconds_interval.yfilter)) leaf_name_data.push_back(seconds_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval = value;
        milliseconds_interval.value_namespace = name_space;
        milliseconds_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msec")
    {
        msec = value;
        msec.value_namespace = name_space;
        msec.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds-interval")
    {
        seconds_interval = value;
        seconds_interval.value_namespace = name_space;
        seconds_interval.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "milliseconds-interval")
    {
        milliseconds_interval.yfilter = yfilter;
    }
    if(value_path == "msec")
    {
        msec.yfilter = yfilter;
    }
    if(value_path == "seconds-interval")
    {
        seconds_interval.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::QueryInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "milliseconds-interval" || name == "msec" || name == "seconds-interval")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::~Policy()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::has_data() const
{
    return route_map.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::~Rip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"},
    text{YType::empty, "text"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| text.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Rip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{

    yang_name = "route-cache"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::~RouteCache()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(same_interface.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.yfilter)) leaf_name_data.push_back(same_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cef")
    {
        cef = value;
        cef.value_namespace = name_space;
        cef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
        same_interface.value_namespace = name_space;
        same_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cef")
    {
        cef.yfilter = yfilter;
    }
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "same-interface")
    {
        same_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cef" || name == "flow" || name == "policy" || name == "same-interface")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{

    yang_name = "route-cache-conf"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::has_data() const
{
    return route_cache.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_cache.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.yfilter)) leaf_name_data.push_back(route_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
        route_cache.value_namespace = name_space;
        route_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-cache")
    {
        route_cache.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::RouteCacheConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-cache")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Router()
    :
    isis(nullptr) // presence node
{

    yang_name = "router"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::~Router()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{

    yang_name = "isis"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::~Isis()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::SummaryAddress()
{

    yang_name = "summary-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{

    yang_name = "eigrp"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::has_data() const
{
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::SummaryAddress::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ip" || name == "mask" || name == "metric")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::~Tcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Verify()
    :
    source(nullptr) // presence node
	,unicast(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::~Verify()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::has_data() const
{
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::~Source()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::Vlan_()
    :
    dhcp_snooping(nullptr) // presence node
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::~Vlan_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::has_data() const
{
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_snooping != nullptr)
    {
        children["dhcp-snooping"] = dhcp_snooping;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{

    yang_name = "dhcp-snooping"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::has_data() const
{
    return port_security.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Source::Vlan_::DhcpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-security")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
	,source(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::has_data() const
{
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_path != nullptr)
    {
        children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-path" || name == "source")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::ReversePath()
{

    yang_name = "reverse-path"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::ReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::Source()
    :
    allow_default{YType::empty, "allow-default"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    reachable_via{YType::enumeration, "reachable-via"}
{

    yang_name = "source"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::has_data() const
{
    return allow_default.is_set
	|| allow_self_ping.is_set
	|| reachable_via.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_default.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(reachable_via.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_default.is_set || is_set(allow_default.yfilter)) leaf_name_data.push_back(allow_default.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (reachable_via.is_set || is_set(reachable_via.yfilter)) leaf_name_data.push_back(reachable_via.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-default")
    {
        allow_default = value;
        allow_default.value_namespace = name_space;
        allow_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-via")
    {
        reachable_via = value;
        reachable_via.value_namespace = name_space;
        reachable_via.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-default")
    {
        allow_default.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "reachable-via")
    {
        reachable_via.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-default" || name == "allow-self-ping" || name == "reachable-via")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::VirtualReassembly()
    :
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"},
    max_fragments{YType::uint32, "max-fragments"},
    max_reassemblies{YType::uint32, "max-reassemblies"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "virtual-reassembly"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::has_data() const
{
    return drop_fragments.is_set
	|| in.is_set
	|| max_fragments.is_set
	|| max_reassemblies.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_fragments.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(max_fragments.yfilter)
	|| ydk::is_set(max_reassemblies.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_fragments.is_set || is_set(drop_fragments.yfilter)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.yfilter)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (max_reassemblies.is_set || is_set(max_reassemblies.yfilter)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
        drop_fragments.value_namespace = name_space;
        drop_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
        max_fragments.value_namespace = name_space;
        max_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
        max_reassemblies.value_namespace = name_space;
        max_reassemblies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "max-fragments")
    {
        max_fragments.yfilter = yfilter;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::VirtualReassembly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-fragments" || name == "in" || name == "max-fragments" || name == "max-reassemblies" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
        sitemap.value_namespace = name_space;
        sitemap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "sitemap")
    {
        sitemap.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
        liin_vrf.value_namespace = name_space;
        liin_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
        mgmtvrf.value_namespace = name_space;
        mgmtvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf.yfilter = yfilter;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::CiscoIOSXEInterfacesIp_()
    :
    admission{YType::str, "admission"},
    directed_broadcast{YType::str, "directed-broadcast"},
    local_proxy_arp{YType::empty, "local-proxy-arp"},
    mroute_cache{YType::boolean, "mroute-cache"},
    mtu{YType::uint16, "mtu"},
    proxy_arp{YType::boolean, "proxy-arp"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"}
    	,
    access_group(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup>())
	,address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address>())
	,arp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp>())
	,authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication>())
	,dhcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp>())
	,hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval>())
	,hold_time(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime>())
	,no_address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress>())
	,pim(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim>())
	,policy(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy>())
	,rip(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip>())
	,route_cache(nullptr) // presence node
	,route_cache_conf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf>())
	,router(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router>())
	,summary_address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress>())
	,tcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp>())
	,verify(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify>())
	,virtual_reassembly(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly>())
	,vrf(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf>())
{
    access_group->parent = this;
    address->parent = this;
    arp->parent = this;
    authentication->parent = this;
    dhcp->parent = this;
    hello_interval->parent = this;
    hold_time->parent = this;
    no_address->parent = this;
    pim->parent = this;
    policy->parent = this;
    rip->parent = this;
    route_cache_conf->parent = this;
    router->parent = this;
    summary_address->parent = this;
    tcp->parent = this;
    verify->parent = this;
    virtual_reassembly->parent = this;
    vrf->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_ip"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::~CiscoIOSXEInterfacesIp_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::has_data() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_data())
            return true;
    }
    return admission.is_set
	|| directed_broadcast.is_set
	|| local_proxy_arp.is_set
	|| mroute_cache.is_set
	|| mtu.is_set
	|| proxy_arp.is_set
	|| redirects.is_set
	|| unnumbered.is_set
	|| (access_group !=  nullptr && access_group->has_data())
	|| (address !=  nullptr && address->has_data())
	|| (arp !=  nullptr && arp->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hold_time !=  nullptr && hold_time->has_data())
	|| (no_address !=  nullptr && no_address->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (rip !=  nullptr && rip->has_data())
	|| (route_cache !=  nullptr && route_cache->has_data())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_data())
	|| (router !=  nullptr && router->has_data())
	|| (summary_address !=  nullptr && summary_address->has_data())
	|| (tcp !=  nullptr && tcp->has_data())
	|| (verify !=  nullptr && verify->has_data())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::has_operation() const
{
    for (std::size_t index=0; index<helper_address.size(); index++)
    {
        if(helper_address[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(admission.yfilter)
	|| ydk::is_set(directed_broadcast.yfilter)
	|| ydk::is_set(local_proxy_arp.yfilter)
	|| ydk::is_set(mroute_cache.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(proxy_arp.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| (access_group !=  nullptr && access_group->has_operation())
	|| (address !=  nullptr && address->has_operation())
	|| (arp !=  nullptr && arp->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hold_time !=  nullptr && hold_time->has_operation())
	|| (no_address !=  nullptr && no_address->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (rip !=  nullptr && rip->has_operation())
	|| (route_cache !=  nullptr && route_cache->has_operation())
	|| (route_cache_conf !=  nullptr && route_cache_conf->has_operation())
	|| (router !=  nullptr && router->has_operation())
	|| (summary_address !=  nullptr && summary_address->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation())
	|| (verify !=  nullptr && verify->has_operation())
	|| (virtual_reassembly !=  nullptr && virtual_reassembly->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_ip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (admission.is_set || is_set(admission.yfilter)) leaf_name_data.push_back(admission.get_name_leafdata());
    if (directed_broadcast.is_set || is_set(directed_broadcast.yfilter)) leaf_name_data.push_back(directed_broadcast.get_name_leafdata());
    if (local_proxy_arp.is_set || is_set(local_proxy_arp.yfilter)) leaf_name_data.push_back(local_proxy_arp.get_name_leafdata());
    if (mroute_cache.is_set || is_set(mroute_cache.yfilter)) leaf_name_data.push_back(mroute_cache.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (proxy_arp.is_set || is_set(proxy_arp.yfilter)) leaf_name_data.push_back(proxy_arp.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-group")
    {
        if(access_group == nullptr)
        {
            access_group = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup>();
        }
        return access_group;
    }

    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address>();
        }
        return address;
    }

    if(child_yang_name == "arp")
    {
        if(arp == nullptr)
        {
            arp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp>();
        }
        return arp;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "helper-address")
    {
        for(auto const & c : helper_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress>();
        c->parent = this;
        helper_address.push_back(c);
        return c;
    }

    if(child_yang_name == "hold-time")
    {
        if(hold_time == nullptr)
        {
            hold_time = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime>();
        }
        return hold_time;
    }

    if(child_yang_name == "no-address")
    {
        if(no_address == nullptr)
        {
            no_address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress>();
        }
        return no_address;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "rip")
    {
        if(rip == nullptr)
        {
            rip = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip>();
        }
        return rip;
    }

    if(child_yang_name == "route-cache")
    {
        if(route_cache == nullptr)
        {
            route_cache = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache>();
        }
        return route_cache;
    }

    if(child_yang_name == "route-cache-conf")
    {
        if(route_cache_conf == nullptr)
        {
            route_cache_conf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf>();
        }
        return route_cache_conf;
    }

    if(child_yang_name == "router")
    {
        if(router == nullptr)
        {
            router = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router>();
        }
        return router;
    }

    if(child_yang_name == "summary-address")
    {
        if(summary_address == nullptr)
        {
            summary_address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress>();
        }
        return summary_address;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "verify")
    {
        if(verify == nullptr)
        {
            verify = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify>();
        }
        return verify;
    }

    if(child_yang_name == "virtual-reassembly")
    {
        if(virtual_reassembly == nullptr)
        {
            virtual_reassembly = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly>();
        }
        return virtual_reassembly;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_group != nullptr)
    {
        children["access-group"] = access_group;
    }

    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(arp != nullptr)
    {
        children["arp"] = arp;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    for (auto const & c : helper_address)
    {
        children[c->get_segment_path()] = c;
    }

    if(hold_time != nullptr)
    {
        children["hold-time"] = hold_time;
    }

    if(no_address != nullptr)
    {
        children["no-address"] = no_address;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(rip != nullptr)
    {
        children["rip"] = rip;
    }

    if(route_cache != nullptr)
    {
        children["route-cache"] = route_cache;
    }

    if(route_cache_conf != nullptr)
    {
        children["route-cache-conf"] = route_cache_conf;
    }

    if(router != nullptr)
    {
        children["router"] = router;
    }

    if(summary_address != nullptr)
    {
        children["summary-address"] = summary_address;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    if(verify != nullptr)
    {
        children["verify"] = verify;
    }

    if(virtual_reassembly != nullptr)
    {
        children["virtual-reassembly"] = virtual_reassembly;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "admission")
    {
        admission = value;
        admission.value_namespace = name_space;
        admission.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast = value;
        directed_broadcast.value_namespace = name_space;
        directed_broadcast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp = value;
        local_proxy_arp.value_namespace = name_space;
        local_proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache = value;
        mroute_cache.value_namespace = name_space;
        mroute_cache.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp = value;
        proxy_arp.value_namespace = name_space;
        proxy_arp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "admission")
    {
        admission.yfilter = yfilter;
    }
    if(value_path == "directed-broadcast")
    {
        directed_broadcast.yfilter = yfilter;
    }
    if(value_path == "local-proxy-arp")
    {
        local_proxy_arp.yfilter = yfilter;
    }
    if(value_path == "mroute-cache")
    {
        mroute_cache.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "proxy-arp")
    {
        proxy_arp.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-group" || name == "address" || name == "arp" || name == "authentication" || name == "dhcp" || name == "hello-interval" || name == "helper-address" || name == "hold-time" || name == "no-address" || name == "pim" || name == "policy" || name == "rip" || name == "route-cache" || name == "route-cache-conf" || name == "router" || name == "summary-address" || name == "tcp" || name == "verify" || name == "virtual-reassembly" || name == "vrf" || name == "admission" || name == "directed-broadcast" || name == "local-proxy-arp" || name == "mroute-cache" || name == "mtu" || name == "proxy-arp" || name == "redirects" || name == "unnumbered")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::AccessGroup()
    :
    in(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In>())
	,out(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out>())
{
    in->parent = this;
    out->parent = this;

    yang_name = "access-group"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::~AccessGroup()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::has_data() const
{
    return (in !=  nullptr && in->has_data())
	|| (out !=  nullptr && out->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::has_operation() const
{
    return is_set(yfilter)
	|| (in !=  nullptr && in->has_operation())
	|| (out !=  nullptr && out->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "in")
    {
        if(in == nullptr)
        {
            in = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In>();
        }
        return in;
    }

    if(child_yang_name == "out")
    {
        if(out == nullptr)
        {
            out = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out>();
        }
        return out;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(in != nullptr)
    {
        children["in"] = in;
    }

    if(out != nullptr)
    {
        children["out"] = out;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::In()
    :
    acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl>())
	,common_acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl>())
{
    acl->parent = this;
    common_acl->parent = this;

    yang_name = "in"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::~In()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "common-acl")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    in{YType::empty, "in"}
{

    yang_name = "acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::~Acl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::has_data() const
{
    return acl_name.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    in{YType::empty, "in"}
{

    yang_name = "common-acl"; yang_parent_name = "in"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::has_data() const
{
    return common.is_set
	|| in.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(in.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::In::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "in")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Out()
    :
    acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl>())
	,common_acl(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl>())
{
    acl->parent = this;
    common_acl->parent = this;

    yang_name = "out"; yang_parent_name = "access-group"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::~Out()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::has_data() const
{
    return (acl !=  nullptr && acl->has_data())
	|| (common_acl !=  nullptr && common_acl->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::has_operation() const
{
    return is_set(yfilter)
	|| (acl !=  nullptr && acl->has_operation())
	|| (common_acl !=  nullptr && common_acl->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "out";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "acl")
    {
        if(acl == nullptr)
        {
            acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl>();
        }
        return acl;
    }

    if(child_yang_name == "common-acl")
    {
        if(common_acl == nullptr)
        {
            common_acl = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl>();
        }
        return common_acl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(acl != nullptr)
    {
        children["acl"] = acl;
    }

    if(common_acl != nullptr)
    {
        children["common-acl"] = common_acl;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl" || name == "common-acl")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::Acl()
    :
    acl_name{YType::str, "acl-name"},
    out{YType::empty, "out"}
{

    yang_name = "acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::~Acl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::has_data() const
{
    return acl_name.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acl_name.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_name.is_set || is_set(acl_name.yfilter)) leaf_name_data.push_back(acl_name.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acl-name")
    {
        acl_name = value;
        acl_name.value_namespace = name_space;
        acl_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acl-name")
    {
        acl_name.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::Acl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acl-name" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::CommonAcl()
    :
    common{YType::str, "common"},
    out{YType::empty, "out"}
{

    yang_name = "common-acl"; yang_parent_name = "out"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::~CommonAcl()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::has_data() const
{
    return common.is_set
	|| out.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(common.yfilter)
	|| ydk::is_set(out.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "common-acl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common.is_set || is_set(common.yfilter)) leaf_name_data.push_back(common.get_name_leafdata());
    if (out.is_set || is_set(out.yfilter)) leaf_name_data.push_back(out.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "common")
    {
        common = value;
        common.value_namespace = name_space;
        common.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out")
    {
        out = value;
        out.value_namespace = name_space;
        out.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "common")
    {
        common.yfilter = yfilter;
    }
    if(value_path == "out")
    {
        out.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::AccessGroup::Out::CommonAcl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "common" || name == "out")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Address()
    :
    negotiated{YType::empty, "negotiated"}
    	,
    dhcp(nullptr) // presence node
	,primary(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary>())
{
    primary->parent = this;

    yang_name = "address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::has_data() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_data())
            return true;
    }
    return negotiated.is_set
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (primary !=  nullptr && primary->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::has_operation() const
{
    for (std::size_t index=0; index<secondary.size(); index++)
    {
        if(secondary[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(negotiated.yfilter)
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (primary !=  nullptr && primary->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (negotiated.is_set || is_set(negotiated.yfilter)) leaf_name_data.push_back(negotiated.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "primary")
    {
        if(primary == nullptr)
        {
            primary = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary>();
        }
        return primary;
    }

    if(child_yang_name == "secondary")
    {
        for(auto const & c : secondary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary>();
        c->parent = this;
        secondary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(primary != nullptr)
    {
        children["primary"] = primary;
    }

    for (auto const & c : secondary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "negotiated")
    {
        negotiated = value;
        negotiated.value_namespace = name_space;
        negotiated.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "negotiated")
    {
        negotiated.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp" || name == "primary" || name == "secondary" || name == "negotiated")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::Dhcp()
    :
    hostname{YType::str, "hostname"}
    	,
    client_id(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId>())
{
    client_id->parent = this;

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::has_data() const
{
    return hostname.is_set
	|| (client_id !=  nullptr && client_id->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hostname.yfilter)
	|| (client_id !=  nullptr && client_id->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.yfilter)) leaf_name_data.push_back(hostname.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client-id")
    {
        if(client_id == nullptr)
        {
            client_id = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId>();
        }
        return client_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client_id != nullptr)
    {
        children["client-id"] = client_id;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hostname")
    {
        hostname = value;
        hostname.value_namespace = name_space;
        hostname.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hostname")
    {
        hostname.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client-id" || name == "hostname")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::ClientId()
    :
    fastethernet{YType::str, "FastEthernet"},
    fortygigabitethernet{YType::str, "FortyGigabitEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    port_channel{YType::uint32, "Port-channel"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    vlan{YType::uint16, "vlan"}
{

    yang_name = "client-id"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::~ClientId()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::has_data() const
{
    return fastethernet.is_set
	|| fortygigabitethernet.is_set
	|| gigabitethernet.is_set
	|| port_channel.is_set
	|| tengigabitethernet.is_set
	|| vlan.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(fastethernet.yfilter)
	|| ydk::is_set(fortygigabitethernet.yfilter)
	|| ydk::is_set(gigabitethernet.yfilter)
	|| ydk::is_set(port_channel.yfilter)
	|| ydk::is_set(tengigabitethernet.yfilter)
	|| ydk::is_set(vlan.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fastethernet.is_set || is_set(fastethernet.yfilter)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (fortygigabitethernet.is_set || is_set(fortygigabitethernet.yfilter)) leaf_name_data.push_back(fortygigabitethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.yfilter)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.yfilter)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.yfilter)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.yfilter)) leaf_name_data.push_back(vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
        fastethernet.value_namespace = name_space;
        fastethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet = value;
        fortygigabitethernet.value_namespace = name_space;
        fortygigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
        gigabitethernet.value_namespace = name_space;
        gigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
        port_channel.value_namespace = name_space;
        port_channel.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
        tengigabitethernet.value_namespace = name_space;
        tengigabitethernet.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan")
    {
        vlan = value;
        vlan.value_namespace = name_space;
        vlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "FastEthernet")
    {
        fastethernet.yfilter = yfilter;
    }
    if(value_path == "FortyGigabitEthernet")
    {
        fortygigabitethernet.yfilter = yfilter;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet.yfilter = yfilter;
    }
    if(value_path == "Port-channel")
    {
        port_channel.yfilter = yfilter;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet.yfilter = yfilter;
    }
    if(value_path == "vlan")
    {
        vlan.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Dhcp::ClientId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "FastEthernet" || name == "FortyGigabitEthernet" || name == "GigabitEthernet" || name == "Port-channel" || name == "TenGigabitEthernet" || name == "vlan")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::Primary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"}
{

    yang_name = "primary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::~Primary()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::has_data() const
{
    return address.is_set
	|| mask.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "primary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Primary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::Secondary()
    :
    address{YType::str, "address"},
    mask{YType::str, "mask"},
    secondary{YType::empty, "secondary"}
{

    yang_name = "secondary"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::~Secondary()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::has_data() const
{
    return address.is_set
	|| mask.is_set
	|| secondary.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(secondary.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "secondary" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.yfilter)) leaf_name_data.push_back(secondary.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "secondary")
    {
        secondary = value;
        secondary.value_namespace = name_space;
        secondary.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
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

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Address::Secondary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "mask" || name == "secondary")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Arp()
    :
    inspection(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection>())
{
    inspection->parent = this;

    yang_name = "arp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::~Arp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::has_data() const
{
    return (inspection !=  nullptr && inspection->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::has_operation() const
{
    return is_set(yfilter)
	|| (inspection !=  nullptr && inspection->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "arp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "inspection")
    {
        if(inspection == nullptr)
        {
            inspection = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection>();
        }
        return inspection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(inspection != nullptr)
    {
        children["inspection"] = inspection;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inspection")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Inspection()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit>())
{
    limit->parent = this;

    yang_name = "inspection"; yang_parent_name = "arp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::~Inspection()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::has_data() const
{
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(trust.yfilter)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inspection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.yfilter)) leaf_name_data.push_back(trust.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "trust")
    {
        trust = value;
        trust.value_namespace = name_space;
        trust.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "trust")
    {
        trust.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "limit" || name == "trust")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::Limit()
    :
    none{YType::empty, "none"},
    rate{YType::uint32, "rate"}
{

    yang_name = "limit"; yang_parent_name = "inspection"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::~Limit()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::has_data() const
{
    return none.is_set
	|| rate.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(none.yfilter)
	|| ydk::is_set(rate.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.yfilter)) leaf_name_data.push_back(none.get_name_leafdata());
    if (rate.is_set || is_set(rate.yfilter)) leaf_name_data.push_back(rate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "none")
    {
        none = value;
        none.value_namespace = name_space;
        none.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rate")
    {
        rate = value;
        rate.value_namespace = name_space;
        rate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "none")
    {
        none.yfilter = yfilter;
    }
    if(value_path == "rate")
    {
        rate.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Arp::Inspection::Limit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "none" || name == "rate")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode>())
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::KeyChain()
    :
    eigrp{YType::uint16, "eigrp"},
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::has_data() const
{
    return eigrp.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::Mode()
    :
    eigrp{YType::uint16, "eigrp"},
    md5{YType::empty, "md5"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::has_data() const
{
    return eigrp.is_set
	|| md5.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(md5.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "md5")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::Dhcp()
{

    yang_name = "dhcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::HelloInterval()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hello-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::HelperAddress()
    :
    address{YType::str, "address"},
    global{YType::empty, "global"},
    vrf{YType::str, "vrf"}
{

    yang_name = "helper-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::~HelperAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::has_data() const
{
    return address.is_set
	|| global.is_set
	|| vrf.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(global.yfilter)
	|| ydk::is_set(vrf.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "helper-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (global.is_set || is_set(global.yfilter)) leaf_name_data.push_back(global.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global")
    {
        global = value;
        global.value_namespace = name_space;
        global.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "global")
    {
        global.yfilter = yfilter;
    }
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HelperAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "global" || name == "vrf")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::HoldTime()
    :
    eigrp{YType::uint16, "eigrp"},
    seconds{YType::uint16, "seconds"}
{

    yang_name = "hold-time"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::~HoldTime()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::has_data() const
{
    return eigrp.is_set
	|| seconds.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(eigrp.yfilter)
	|| ydk::is_set(seconds.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hold-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (eigrp.is_set || is_set(eigrp.yfilter)) leaf_name_data.push_back(eigrp.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "eigrp")
    {
        eigrp = value;
        eigrp.value_namespace = name_space;
        eigrp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "eigrp")
    {
        eigrp.yfilter = yfilter;
    }
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::HoldTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp" || name == "seconds")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::NoAddress()
    :
    address{YType::boolean, "address"}
{

    yang_name = "no-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::~NoAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::has_data() const
{
    return address.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "no-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::NoAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::Pim()
{

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::~Pim()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::Policy()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "policy"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::~Policy()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::has_data() const
{
    return route_map.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Policy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Rip()
    :
    authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication>())
{
    authentication->parent = this;

    yang_name = "rip"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::~Rip()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::has_data() const
{
    return (authentication !=  nullptr && authentication->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::has_operation() const
{
    return is_set(yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rip";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Authentication()
    :
    key_chain{YType::str, "key-chain"}
    	,
    mode(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode>())
{
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "rip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::has_data() const
{
    return key_chain.is_set
	|| (mode !=  nullptr && mode->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(key_chain.yfilter)
	|| (mode !=  nullptr && mode->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key_chain.is_set || is_set(key_chain.yfilter)) leaf_name_data.push_back(key_chain.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode>();
        }
        return mode;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "key-chain")
    {
        key_chain = value;
        key_chain.value_namespace = name_space;
        key_chain.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "key-chain")
    {
        key_chain.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mode" || name == "key-chain")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::Mode()
    :
    md5{YType::empty, "md5"},
    text{YType::empty, "text"}
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::has_data() const
{
    return md5.is_set
	|| text.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(md5.yfilter)
	|| ydk::is_set(text.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (md5.is_set || is_set(md5.yfilter)) leaf_name_data.push_back(md5.get_name_leafdata());
    if (text.is_set || is_set(text.yfilter)) leaf_name_data.push_back(text.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "md5")
    {
        md5 = value;
        md5.value_namespace = name_space;
        md5.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "text")
    {
        text = value;
        text.value_namespace = name_space;
        text.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "md5")
    {
        md5.yfilter = yfilter;
    }
    if(value_path == "text")
    {
        text.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Rip::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{

    yang_name = "route-cache"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::~RouteCache()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cef.yfilter)
	|| ydk::is_set(flow.yfilter)
	|| ydk::is_set(policy.yfilter)
	|| ydk::is_set(same_interface.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.yfilter)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.yfilter)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.yfilter)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.yfilter)) leaf_name_data.push_back(same_interface.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cef")
    {
        cef = value;
        cef.value_namespace = name_space;
        cef.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow")
    {
        flow = value;
        flow.value_namespace = name_space;
        flow.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy")
    {
        policy = value;
        policy.value_namespace = name_space;
        policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
        same_interface.value_namespace = name_space;
        same_interface.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cef")
    {
        cef.yfilter = yfilter;
    }
    if(value_path == "flow")
    {
        flow.yfilter = yfilter;
    }
    if(value_path == "policy")
    {
        policy.yfilter = yfilter;
    }
    if(value_path == "same-interface")
    {
        same_interface.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCache::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cef" || name == "flow" || name == "policy" || name == "same-interface")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::RouteCacheConf()
    :
    route_cache{YType::boolean, "route-cache"}
{

    yang_name = "route-cache-conf"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::~RouteCacheConf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::has_data() const
{
    return route_cache.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_cache.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache-conf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_cache.is_set || is_set(route_cache.yfilter)) leaf_name_data.push_back(route_cache.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-cache")
    {
        route_cache = value;
        route_cache.value_namespace = name_space;
        route_cache.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-cache")
    {
        route_cache.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::RouteCacheConf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-cache")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Router()
    :
    isis(nullptr) // presence node
{

    yang_name = "router"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::~Router()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::has_operation() const
{
    return is_set(yfilter)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "isis")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{

    yang_name = "isis"; yang_parent_name = "router"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::~Isis()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Router::Isis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::SummaryAddress()
{

    yang_name = "summary-address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "eigrp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{

    yang_name = "eigrp"; yang_parent_name = "summary-address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::has_data() const
{
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(ip.yfilter)
	|| ydk::is_set(mask.yfilter)
	|| ydk::is_set(metric.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.yfilter)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mask")
    {
        mask = value;
        mask.value_namespace = name_space;
        mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
    if(value_path == "mask")
    {
        mask.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::SummaryAddress::Eigrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "ip" || name == "mask" || name == "metric")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::~Tcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Verify()
    :
    source(nullptr) // presence node
	,unicast(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::~Verify()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::has_data() const
{
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::has_operation() const
{
    return is_set(yfilter)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source" || name == "unicast")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::~Source()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::has_operation() const
{
    return is_set(yfilter)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vlan")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::Vlan_()
    :
    dhcp_snooping(nullptr) // presence node
{

    yang_name = "vlan"; yang_parent_name = "source"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::~Vlan_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::has_data() const
{
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::has_operation() const
{
    return is_set(yfilter)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_snooping != nullptr)
    {
        children["dhcp-snooping"] = dhcp_snooping;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dhcp-snooping")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{

    yang_name = "dhcp-snooping"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::has_data() const
{
    return port_security.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_security.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.yfilter)) leaf_name_data.push_back(port_security.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-security")
    {
        port_security = value;
        port_security.value_namespace = name_space;
        port_security.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-security")
    {
        port_security.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Source::Vlan_::DhcpSnooping::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-security")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
	,source(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::has_data() const
{
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::has_operation() const
{
    return is_set(yfilter)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_path != nullptr)
    {
        children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "reverse-path" || name == "source")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::ReversePath()
{

    yang_name = "reverse-path"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::ReversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::Source()
    :
    allow_default{YType::empty, "allow-default"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    reachable_via{YType::enumeration, "reachable-via"}
{

    yang_name = "source"; yang_parent_name = "unicast"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::has_data() const
{
    return allow_default.is_set
	|| allow_self_ping.is_set
	|| reachable_via.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(allow_default.yfilter)
	|| ydk::is_set(allow_self_ping.yfilter)
	|| ydk::is_set(reachable_via.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_default.is_set || is_set(allow_default.yfilter)) leaf_name_data.push_back(allow_default.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.yfilter)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (reachable_via.is_set || is_set(reachable_via.yfilter)) leaf_name_data.push_back(reachable_via.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "allow-default")
    {
        allow_default = value;
        allow_default.value_namespace = name_space;
        allow_default.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
        allow_self_ping.value_namespace = name_space;
        allow_self_ping.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reachable-via")
    {
        reachable_via = value;
        reachable_via.value_namespace = name_space;
        reachable_via.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "allow-default")
    {
        allow_default.yfilter = yfilter;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping.yfilter = yfilter;
    }
    if(value_path == "reachable-via")
    {
        reachable_via.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allow-default" || name == "allow-self-ping" || name == "reachable-via")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::VirtualReassembly()
    :
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"},
    max_fragments{YType::uint32, "max-fragments"},
    max_reassemblies{YType::uint32, "max-reassemblies"},
    timeout{YType::uint32, "timeout"}
{

    yang_name = "virtual-reassembly"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::has_data() const
{
    return drop_fragments.is_set
	|| in.is_set
	|| max_fragments.is_set
	|| max_reassemblies.is_set
	|| timeout.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(drop_fragments.yfilter)
	|| ydk::is_set(in.yfilter)
	|| ydk::is_set(max_fragments.yfilter)
	|| ydk::is_set(max_reassemblies.yfilter)
	|| ydk::is_set(timeout.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_fragments.is_set || is_set(drop_fragments.yfilter)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.yfilter)) leaf_name_data.push_back(in.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.yfilter)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (max_reassemblies.is_set || is_set(max_reassemblies.yfilter)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.yfilter)) leaf_name_data.push_back(timeout.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
        drop_fragments.value_namespace = name_space;
        drop_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in")
    {
        in = value;
        in.value_namespace = name_space;
        in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
        max_fragments.value_namespace = name_space;
        max_fragments.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
        max_reassemblies.value_namespace = name_space;
        max_reassemblies.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout")
    {
        timeout = value;
        timeout.value_namespace = name_space;
        timeout.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments.yfilter = yfilter;
    }
    if(value_path == "in")
    {
        in.yfilter = yfilter;
    }
    if(value_path == "max-fragments")
    {
        max_fragments.yfilter = yfilter;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies.yfilter = yfilter;
    }
    if(value_path == "timeout")
    {
        timeout.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::VirtualReassembly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-fragments" || name == "in" || name == "max-fragments" || name == "max-reassemblies" || name == "timeout")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Vrf()
    :
    receive{YType::str, "receive"},
    sitemap{YType::str, "sitemap"}
    	,
    forwarding(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding>())
{
    forwarding->parent = this;

    yang_name = "vrf"; yang_parent_name = "Cisco-IOS-XE-interfaces_ip"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::~Vrf()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::has_data() const
{
    return receive.is_set
	|| sitemap.is_set
	|| (forwarding !=  nullptr && forwarding->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter)
	|| ydk::is_set(sitemap.yfilter)
	|| (forwarding !=  nullptr && forwarding->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());
    if (sitemap.is_set || is_set(sitemap.yfilter)) leaf_name_data.push_back(sitemap.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forwarding")
    {
        if(forwarding == nullptr)
        {
            forwarding = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding>();
        }
        return forwarding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(forwarding != nullptr)
    {
        children["forwarding"] = forwarding;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sitemap")
    {
        sitemap = value;
        sitemap.value_namespace = name_space;
        sitemap.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
    if(value_path == "sitemap")
    {
        sitemap.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forwarding" || name == "receive" || name == "sitemap")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::Forwarding()
    :
    liin_vrf{YType::empty, "Liin-vrf"},
    mgmtvrf{YType::empty, "mgmtVrf"},
    word{YType::str, "word"}
{

    yang_name = "forwarding"; yang_parent_name = "vrf"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::~Forwarding()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::has_data() const
{
    return liin_vrf.is_set
	|| mgmtvrf.is_set
	|| word.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(liin_vrf.yfilter)
	|| ydk::is_set(mgmtvrf.yfilter)
	|| ydk::is_set(word.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forwarding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (liin_vrf.is_set || is_set(liin_vrf.yfilter)) leaf_name_data.push_back(liin_vrf.get_name_leafdata());
    if (mgmtvrf.is_set || is_set(mgmtvrf.yfilter)) leaf_name_data.push_back(mgmtvrf.get_name_leafdata());
    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf = value;
        liin_vrf.value_namespace = name_space;
        liin_vrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf = value;
        mgmtvrf.value_namespace = name_space;
        mgmtvrf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "Liin-vrf")
    {
        liin_vrf.yfilter = yfilter;
    }
    if(value_path == "mgmtVrf")
    {
        mgmtvrf.yfilter = yfilter;
    }
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Vrf::Forwarding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "Liin-vrf" || name == "mgmtVrf" || name == "word")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::CiscoIOSXEInterfacesIpv6()
    :
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"}
    	,
    address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address>())
	,crypto(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto>())
	,destination_guard(nullptr) // presence node
	,dhcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp>())
	,nd(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd>())
	,no_pim(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim>())
	,pim(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim>())
	,tcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp>())
{
    address->parent = this;
    crypto->parent = this;
    dhcp->parent = this;
    nd->parent = this;
    no_pim->parent = this;
    pim->parent = this;
    tcp->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_ipv6"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::~CiscoIOSXEInterfacesIpv6()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::has_data() const
{
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    return enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| unnumbered.is_set
	|| (address !=  nullptr && address->has_data())
	|| (crypto !=  nullptr && crypto->has_data())
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (no_pim !=  nullptr && no_pim->has_data())
	|| (pim !=  nullptr && pim->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::has_operation() const
{
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (crypto !=  nullptr && crypto->has_operation())
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (no_pim !=  nullptr && no_pim->has_operation())
	|| (pim !=  nullptr && pim->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "crypto")
    {
        if(crypto == nullptr)
        {
            crypto = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto>();
        }
        return crypto;
    }

    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "no-pim")
    {
        if(no_pim == nullptr)
        {
            no_pim = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim>();
        }
        return no_pim;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "traffic-filter")
    {
        for(auto const & c : traffic_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter>();
        c->parent = this;
        traffic_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(crypto != nullptr)
    {
        children["crypto"] = crypto;
    }

    if(destination_guard != nullptr)
    {
        children["destination-guard"] = destination_guard;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(no_pim != nullptr)
    {
        children["no-pim"] = no_pim;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    for (auto const & c : traffic_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "crypto" || name == "destination-guard" || name == "dhcp" || name == "nd" || name == "no-pim" || name == "pim" || name == "tcp" || name == "traffic-filter" || name == "enable" || name == "mtu" || name == "redirects" || name == "unnumbered")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Address()
    :
    autoconfig(nullptr) // presence node
	,dhcp(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::has_data() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return (autoconfig !=  nullptr && autoconfig->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::has_operation() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "link-local-address")
    {
        for(auto const & c : link_local_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress>();
        c->parent = this;
        link_local_address.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    for (auto const & c : link_local_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoconfig" || name == "dhcp" || name == "link-local-address" || name == "prefix-list")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{

    yang_name = "autoconfig"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::has_data() const
{
    return default_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::has_data() const
{
    return rapid_commit.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rapid_commit.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.yfilter)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
        rapid_commit.value_namespace = name_space;
        rapid_commit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rapid-commit")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    link_local{YType::empty, "link-local"}
{

    yang_name = "link-local-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| link_local.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(link_local.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (link_local.is_set || is_set(link_local.yfilter)) leaf_name_data.push_back(link_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local")
    {
        link_local = value;
        link_local.value_namespace = name_space;
        link_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "link-local")
    {
        link_local.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "link-local")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    anycast{YType::empty, "anycast"},
    eui_64{YType::empty, "eui-64"}
{

    yang_name = "prefix-list"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::~PrefixList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::has_data() const
{
    return prefix.is_set
	|| anycast.is_set
	|| eui_64.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(anycast.yfilter)
	|| ydk::is_set(eui_64.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (anycast.is_set || is_set(anycast.yfilter)) leaf_name_data.push_back(anycast.get_name_leafdata());
    if (eui_64.is_set || is_set(eui_64.yfilter)) leaf_name_data.push_back(eui_64.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast")
    {
        anycast = value;
        anycast.value_namespace = name_space;
        anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui-64")
    {
        eui_64 = value;
        eui_64.value_namespace = name_space;
        eui_64.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "anycast")
    {
        anycast.yfilter = yfilter;
    }
    if(value_path == "eui-64")
    {
        eui_64.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Address::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "anycast" || name == "eui-64")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::Crypto()
    :
    map{YType::str, "map"}
{

    yang_name = "crypto"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::~Crypto()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::has_data() const
{
    return map.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(map.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-crypto:crypto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (map.is_set || is_set(map.yfilter)) leaf_name_data.push_back(map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "map")
    {
        map = value;
        map.value_namespace = name_space;
        map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "map")
    {
        map.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Crypto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "map")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "destination-guard"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::DestinationGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client>())
	,guard(nullptr) // presence node
{
    client->parent = this;

    yang_name = "dhcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (client !=  nullptr && client->has_data())
	|| (guard !=  nullptr && guard->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard>();
        }
        return guard;
    }

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
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "client" || name == "guard" || name == "server")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Client()
    :
    request(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request>())
{
    request->parent = this;

    yang_name = "client"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::~Client()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::has_data() const
{
    return (request !=  nullptr && request->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::has_operation() const
{
    return is_set(yfilter)
	|| (request !=  nullptr && request->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "request")
    {
        if(request == nullptr)
        {
            request = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request>();
        }
        return request;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(request != nullptr)
    {
        children["request"] = request;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::Request()
    :
    vendor{YType::empty, "vendor"}
{

    yang_name = "request"; yang_parent_name = "client"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::~Request()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::has_data() const
{
    return vendor.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vendor.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "request";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vendor.is_set || is_set(vendor.yfilter)) leaf_name_data.push_back(vendor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vendor")
    {
        vendor = value;
        vendor.value_namespace = name_space;
        vendor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vendor")
    {
        vendor.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Client::Request::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vendor")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "guard"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::~Guard()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Guard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::Server()
    :
    word{YType::str, "word"},
    preference{YType::uint8, "preference"}
{

    yang_name = "server"; yang_parent_name = "dhcp"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::~Server()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::has_data() const
{
    return word.is_set
	|| preference.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(word.yfilter)
	|| ydk::is_set(preference.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server" <<"[word='" <<word <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.yfilter)) leaf_name_data.push_back(word.get_name_leafdata());
    if (preference.is_set || is_set(preference.yfilter)) leaf_name_data.push_back(preference.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "word")
    {
        word = value;
        word.value_namespace = name_space;
        word.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preference")
    {
        preference = value;
        preference.value_namespace = name_space;
        preference.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "word")
    {
        word.yfilter = yfilter;
    }
    if(value_path == "preference")
    {
        preference.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Dhcp::Server::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "word" || name == "preference")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::Nd()
{

    yang_name = "nd"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::~Nd()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::NoPim()
    :
    pim{YType::boolean, "pim"}
{

    yang_name = "no-pim"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::~NoPim()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::has_data() const
{
    return pim.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pim.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:no-pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pim.is_set || is_set(pim.yfilter)) leaf_name_data.push_back(pim.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pim")
    {
        pim = value;
        pim.value_namespace = name_space;
        pim.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pim")
    {
        pim.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::NoPim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pim")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Pim()
    :
    bfd{YType::empty, "bfd"},
    dr_priority{YType::uint32, "dr-priority"}
    	,
    bsr(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr>())
{
    bsr->parent = this;

    yang_name = "pim"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::~Pim()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::has_data() const
{
    return bfd.is_set
	|| dr_priority.is_set
	|| (bsr !=  nullptr && bsr->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bfd.yfilter)
	|| ydk::is_set(dr_priority.yfilter)
	|| (bsr !=  nullptr && bsr->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-multicast:pim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd.is_set || is_set(bfd.yfilter)) leaf_name_data.push_back(bfd.get_name_leafdata());
    if (dr_priority.is_set || is_set(dr_priority.yfilter)) leaf_name_data.push_back(dr_priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bsr")
    {
        if(bsr == nullptr)
        {
            bsr = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr>();
        }
        return bsr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bsr != nullptr)
    {
        children["bsr"] = bsr;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bfd")
    {
        bfd = value;
        bfd.value_namespace = name_space;
        bfd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dr-priority")
    {
        dr_priority = value;
        dr_priority.value_namespace = name_space;
        dr_priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bfd")
    {
        bfd.yfilter = yfilter;
    }
    if(value_path == "dr-priority")
    {
        dr_priority.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bsr" || name == "bfd" || name == "dr-priority")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::Bsr()
    :
    border{YType::empty, "border"}
{

    yang_name = "bsr"; yang_parent_name = "pim"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::~Bsr()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::has_data() const
{
    return border.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(border.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (border.is_set || is_set(border.yfilter)) leaf_name_data.push_back(border.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "border")
    {
        border = value;
        border.value_namespace = name_space;
        border.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "border")
    {
        border.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Pim::Bsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "border")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::~Tcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::TrafficFilter()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"}
{

    yang_name = "traffic-filter"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::~TrafficFilter()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::has_data() const
{
    return direction.is_set
	|| access_list.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-filter" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::CiscoIOSXEInterfacesIpv6_()
    :
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"},
    unnumbered{YType::str, "unnumbered"}
    	,
    address(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address>())
	,destination_guard(nullptr) // presence node
	,dhcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp>())
	,nd(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd>())
	,tcp(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp>())
{
    address->parent = this;
    dhcp->parent = this;
    nd->parent = this;
    tcp->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_ipv6"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::~CiscoIOSXEInterfacesIpv6_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::has_data() const
{
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    return enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| unnumbered.is_set
	|| (address !=  nullptr && address->has_data())
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (tcp !=  nullptr && tcp->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::has_operation() const
{
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(enable.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(redirects.yfilter)
	|| ydk::is_set(unnumbered.yfilter)
	|| (address !=  nullptr && address->has_operation())
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (tcp !=  nullptr && tcp->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.yfilter)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unnumbered.is_set || is_set(unnumbered.yfilter)) leaf_name_data.push_back(unnumbered.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address>();
        }
        return address;
    }

    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "tcp")
    {
        if(tcp == nullptr)
        {
            tcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp>();
        }
        return tcp;
    }

    if(child_yang_name == "traffic-filter")
    {
        for(auto const & c : traffic_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter>();
        c->parent = this;
        traffic_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(destination_guard != nullptr)
    {
        children["destination-guard"] = destination_guard;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(tcp != nullptr)
    {
        children["tcp"] = tcp;
    }

    for (auto const & c : traffic_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects")
    {
        redirects = value;
        redirects.value_namespace = name_space;
        redirects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unnumbered")
    {
        unnumbered = value;
        unnumbered.value_namespace = name_space;
        unnumbered.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "redirects")
    {
        redirects.yfilter = yfilter;
    }
    if(value_path == "unnumbered")
    {
        unnumbered.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "destination-guard" || name == "dhcp" || name == "nd" || name == "tcp" || name == "traffic-filter" || name == "enable" || name == "mtu" || name == "redirects" || name == "unnumbered")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Address()
    :
    autoconfig(nullptr) // presence node
	,dhcp(nullptr) // presence node
{

    yang_name = "address"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::~Address()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::has_data() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return (autoconfig !=  nullptr && autoconfig->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::has_operation() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "link-local-address")
    {
        for(auto const & c : link_local_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress>();
        c->parent = this;
        link_local_address.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    for (auto const & c : link_local_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "autoconfig" || name == "dhcp" || name == "link-local-address" || name == "prefix-list")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{

    yang_name = "autoconfig"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::has_data() const
{
    return default_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(default_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.yfilter)) leaf_name_data.push_back(default_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default")
    {
        default_ = value;
        default_.value_namespace = name_space;
        default_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default")
    {
        default_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Autoconfig::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "default")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{

    yang_name = "dhcp"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::has_data() const
{
    return rapid_commit.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rapid_commit.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.yfilter)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
        rapid_commit.value_namespace = name_space;
        rapid_commit.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rapid-commit")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    link_local{YType::empty, "link-local"}
{

    yang_name = "link-local-address"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| link_local.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(link_local.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address" <<"[address='" <<address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (link_local.is_set || is_set(link_local.yfilter)) leaf_name_data.push_back(link_local.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-local")
    {
        link_local = value;
        link_local.value_namespace = name_space;
        link_local.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "link-local")
    {
        link_local.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::LinkLocalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address" || name == "link-local")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    anycast{YType::empty, "anycast"},
    eui_64{YType::empty, "eui-64"}
{

    yang_name = "prefix-list"; yang_parent_name = "address"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::~PrefixList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::has_data() const
{
    return prefix.is_set
	|| anycast.is_set
	|| eui_64.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(anycast.yfilter)
	|| ydk::is_set(eui_64.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (anycast.is_set || is_set(anycast.yfilter)) leaf_name_data.push_back(anycast.get_name_leafdata());
    if (eui_64.is_set || is_set(eui_64.yfilter)) leaf_name_data.push_back(eui_64.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "anycast")
    {
        anycast = value;
        anycast.value_namespace = name_space;
        anycast.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eui-64")
    {
        eui_64 = value;
        eui_64.value_namespace = name_space;
        eui_64.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "anycast")
    {
        anycast.yfilter = yfilter;
    }
    if(value_path == "eui-64")
    {
        eui_64.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Address::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix" || name == "anycast" || name == "eui-64")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{

    yang_name = "destination-guard"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(attach_policy.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.yfilter)) leaf_name_data.push_back(attach_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
        attach_policy.value_namespace = name_space;
        attach_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "attach-policy")
    {
        attach_policy.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::DestinationGuard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attach-policy")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::Dhcp()
{

    yang_name = "dhcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::~Dhcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Dhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::Nd()
{

    yang_name = "nd"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::~Nd()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Nd::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{

    yang_name = "tcp"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::~Tcp()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(adjust_mss.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.yfilter)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
        adjust_mss.value_namespace = name_space;
        adjust_mss.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::Tcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjust-mss")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::TrafficFilter()
    :
    direction{YType::enumeration, "direction"},
    access_list{YType::str, "access-list"}
{

    yang_name = "traffic-filter"; yang_parent_name = "Cisco-IOS-XE-interfaces_ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::~TrafficFilter()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::has_data() const
{
    return direction.is_set
	|| access_list.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(direction.yfilter)
	|| ydk::is_set(access_list.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-filter" <<"[direction='" <<direction <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.yfilter)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (access_list.is_set || is_set(access_list.yfilter)) leaf_name_data.push_back(access_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "direction")
    {
        direction = value;
        direction.value_namespace = name_space;
        direction.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-list")
    {
        access_list = value;
        access_list.value_namespace = name_space;
        access_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "direction")
    {
        direction.yfilter = yfilter;
    }
    if(value_path == "access-list")
    {
        access_list.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "direction" || name == "access-list")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CiscoIOSXEInterfacesIsis()
    :
    lsp_interval{YType::uint32, "Cisco-IOS-XE-isis:lsp-interval"},
    mesh_group{YType::str, "Cisco-IOS-XE-isis:mesh-group"},
    network{YType::enumeration, "Cisco-IOS-XE-isis:network"},
    protocol{YType::enumeration, "Cisco-IOS-XE-isis:protocol"},
    retransmit_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-interval"},
    retransmit_throttle_interval{YType::uint16, "Cisco-IOS-XE-isis:retransmit-throttle-interval"},
    tag{YType::uint32, "Cisco-IOS-XE-isis:tag"}
    	,
    adjacency_filter(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter>())
	,advertise(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise>())
	,authentication(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication>())
	,circuit_type(nullptr) // presence node
	,csnp_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval>())
	,hello(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello>())
	,hello_interval(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval>())
	,hello_multiplier(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier>())
	,ipv6(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6>())
	,metric(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric>())
	,password(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password>())
	,priority(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority>())
	,three_way_handshake(nullptr) // presence node
{
    adjacency_filter->parent = this;
    advertise->parent = this;
    authentication->parent = this;
    csnp_interval->parent = this;
    hello->parent = this;
    hello_interval->parent = this;
    hello_multiplier->parent = this;
    ipv6->parent = this;
    metric->parent = this;
    password->parent = this;
    priority->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_isis"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::~CiscoIOSXEInterfacesIsis()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::has_data() const
{
    return lsp_interval.is_set
	|| mesh_group.is_set
	|| network.is_set
	|| protocol.is_set
	|| retransmit_interval.is_set
	|| retransmit_throttle_interval.is_set
	|| tag.is_set
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (circuit_type !=  nullptr && circuit_type->has_data())
	|| (csnp_interval !=  nullptr && csnp_interval->has_data())
	|| (hello !=  nullptr && hello->has_data())
	|| (hello_interval !=  nullptr && hello_interval->has_data())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (metric !=  nullptr && metric->has_data())
	|| (password !=  nullptr && password->has_data())
	|| (priority !=  nullptr && priority->has_data())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lsp_interval.yfilter)
	|| ydk::is_set(mesh_group.yfilter)
	|| ydk::is_set(network.yfilter)
	|| ydk::is_set(protocol.yfilter)
	|| ydk::is_set(retransmit_interval.yfilter)
	|| ydk::is_set(retransmit_throttle_interval.yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (adjacency_filter !=  nullptr && adjacency_filter->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (circuit_type !=  nullptr && circuit_type->has_operation())
	|| (csnp_interval !=  nullptr && csnp_interval->has_operation())
	|| (hello !=  nullptr && hello->has_operation())
	|| (hello_interval !=  nullptr && hello_interval->has_operation())
	|| (hello_multiplier !=  nullptr && hello_multiplier->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (metric !=  nullptr && metric->has_operation())
	|| (password !=  nullptr && password->has_operation())
	|| (priority !=  nullptr && priority->has_operation())
	|| (three_way_handshake !=  nullptr && three_way_handshake->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lsp_interval.is_set || is_set(lsp_interval.yfilter)) leaf_name_data.push_back(lsp_interval.get_name_leafdata());
    if (mesh_group.is_set || is_set(mesh_group.yfilter)) leaf_name_data.push_back(mesh_group.get_name_leafdata());
    if (network.is_set || is_set(network.yfilter)) leaf_name_data.push_back(network.get_name_leafdata());
    if (protocol.is_set || is_set(protocol.yfilter)) leaf_name_data.push_back(protocol.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.yfilter)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (retransmit_throttle_interval.is_set || is_set(retransmit_throttle_interval.yfilter)) leaf_name_data.push_back(retransmit_throttle_interval.get_name_leafdata());
    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "adjacency-filter")
    {
        if(adjacency_filter == nullptr)
        {
            adjacency_filter = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter>();
        }
        return adjacency_filter;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "circuit-type")
    {
        if(circuit_type == nullptr)
        {
            circuit_type = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType>();
        }
        return circuit_type;
    }

    if(child_yang_name == "csnp-interval")
    {
        if(csnp_interval == nullptr)
        {
            csnp_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval>();
        }
        return csnp_interval;
    }

    if(child_yang_name == "hello")
    {
        if(hello == nullptr)
        {
            hello = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello>();
        }
        return hello;
    }

    if(child_yang_name == "hello-interval")
    {
        if(hello_interval == nullptr)
        {
            hello_interval = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval>();
        }
        return hello_interval;
    }

    if(child_yang_name == "hello-multiplier")
    {
        if(hello_multiplier == nullptr)
        {
            hello_multiplier = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier>();
        }
        return hello_multiplier;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric>();
        }
        return metric;
    }

    if(child_yang_name == "password")
    {
        if(password == nullptr)
        {
            password = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password>();
        }
        return password;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority>();
        }
        return priority;
    }

    if(child_yang_name == "three-way-handshake")
    {
        if(three_way_handshake == nullptr)
        {
            three_way_handshake = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake>();
        }
        return three_way_handshake;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(adjacency_filter != nullptr)
    {
        children["adjacency-filter"] = adjacency_filter;
    }

    if(advertise != nullptr)
    {
        children["advertise"] = advertise;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(circuit_type != nullptr)
    {
        children["circuit-type"] = circuit_type;
    }

    if(csnp_interval != nullptr)
    {
        children["csnp-interval"] = csnp_interval;
    }

    if(hello != nullptr)
    {
        children["hello"] = hello;
    }

    if(hello_interval != nullptr)
    {
        children["hello-interval"] = hello_interval;
    }

    if(hello_multiplier != nullptr)
    {
        children["hello-multiplier"] = hello_multiplier;
    }

    if(ipv6 != nullptr)
    {
        children["ipv6"] = ipv6;
    }

    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    if(password != nullptr)
    {
        children["password"] = password;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    if(three_way_handshake != nullptr)
    {
        children["three-way-handshake"] = three_way_handshake;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval = value;
        lsp_interval.value_namespace = name_space;
        lsp_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mesh-group")
    {
        mesh_group = value;
        mesh_group.value_namespace = name_space;
        mesh_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "network")
    {
        network = value;
        network.value_namespace = name_space;
        network.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protocol")
    {
        protocol = value;
        protocol.value_namespace = name_space;
        protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
        retransmit_interval.value_namespace = name_space;
        retransmit_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval = value;
        retransmit_throttle_interval.value_namespace = name_space;
        retransmit_throttle_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lsp-interval")
    {
        lsp_interval.yfilter = yfilter;
    }
    if(value_path == "mesh-group")
    {
        mesh_group.yfilter = yfilter;
    }
    if(value_path == "network")
    {
        network.yfilter = yfilter;
    }
    if(value_path == "protocol")
    {
        protocol.yfilter = yfilter;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval.yfilter = yfilter;
    }
    if(value_path == "retransmit-throttle-interval")
    {
        retransmit_throttle_interval.yfilter = yfilter;
    }
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "adjacency-filter" || name == "advertise" || name == "authentication" || name == "circuit-type" || name == "csnp-interval" || name == "hello" || name == "hello-interval" || name == "hello-multiplier" || name == "ipv6" || name == "metric" || name == "password" || name == "priority" || name == "three-way-handshake" || name == "lsp-interval" || name == "mesh-group" || name == "network" || name == "protocol" || name == "retransmit-interval" || name == "retransmit-throttle-interval" || name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::AdjacencyFilter()
    :
    match_all{YType::empty, "match-all"},
    name{YType::str, "name"}
{

    yang_name = "adjacency-filter"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::~AdjacencyFilter()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::has_data() const
{
    return match_all.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(match_all.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:adjacency-filter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (match_all.is_set || is_set(match_all.yfilter)) leaf_name_data.push_back(match_all.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "match-all")
    {
        match_all = value;
        match_all.value_namespace = name_space;
        match_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "match-all")
    {
        match_all.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::AdjacencyFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "match-all" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::Advertise()
    :
    prefix{YType::empty, "prefix"}
{

    yang_name = "advertise"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::~Advertise()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::has_data() const
{
    return prefix.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Authentication()
    :
    key_chain(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain>())
	,mode(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode>())
	,send_only(nullptr) // presence node
{
    key_chain->parent = this;
    mode->parent = this;

    yang_name = "authentication"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::~Authentication()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::has_data() const
{
    return (key_chain !=  nullptr && key_chain->has_data())
	|| (mode !=  nullptr && mode->has_data())
	|| (send_only !=  nullptr && send_only->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| (key_chain !=  nullptr && key_chain->has_operation())
	|| (mode !=  nullptr && mode->has_operation())
	|| (send_only !=  nullptr && send_only->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain>();
        }
        return key_chain;
    }

    if(child_yang_name == "mode")
    {
        if(mode == nullptr)
        {
            mode = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode>();
        }
        return mode;
    }

    if(child_yang_name == "send-only")
    {
        if(send_only == nullptr)
        {
            send_only = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly>();
        }
        return send_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    if(mode != nullptr)
    {
        children["mode"] = mode;
    }

    if(send_only != nullptr)
    {
        children["send-only"] = send_only;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain" || name == "mode" || name == "send-only")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{

    yang_name = "key-chain"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::has_data() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_data())
            return true;
    }
    return name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::has_operation() const
{
    for (std::size_t index=0; index<key_chain_list.size(); index++)
    {
        if(key_chain_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain-list")
    {
        for(auto const & c : key_chain_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList>();
        c->parent = this;
        key_chain_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : key_chain_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "key-chain-list" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::KeyChainList()
    :
    levels{YType::enumeration, "levels"},
    name{YType::str, "name"}
{

    yang_name = "key-chain-list"; yang_parent_name = "key-chain"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::~KeyChainList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::has_data() const
{
    return levels.is_set
	|| name.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(name.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::KeyChain::KeyChainList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "name")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Mode()
    :
    md5(nullptr) // presence node
	,text(nullptr) // presence node
{

    yang_name = "mode"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::~Mode()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::has_data() const
{
    return (md5 !=  nullptr && md5->has_data())
	|| (text !=  nullptr && text->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::has_operation() const
{
    return is_set(yfilter)
	|| (md5 !=  nullptr && md5->has_operation())
	|| (text !=  nullptr && text->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mode";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5>();
        }
        return md5;
    }

    if(child_yang_name == "text")
    {
        if(text == nullptr)
        {
            text = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text>();
        }
        return text;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    if(text != nullptr)
    {
        children["text"] = text;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "md5" || name == "text")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::Md5()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "md5"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::~Md5()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Md5::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::Text()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "text"; yang_parent_name = "mode"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::~Text()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "text";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::Mode::Text::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::SendOnly()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "send-only"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::~SendOnly()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-only";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Authentication::SendOnly::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::CircuitType()
    :
    levels{YType::enumeration, "levels"}
{

    yang_name = "circuit-type"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::~CircuitType()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::has_data() const
{
    return levels.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:circuit-type";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpInterval()
    :
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::~CsnpInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::has_data() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::has_operation() const
{
    for (std::size_t index=0; index<csnp_interval_list.size(); index++)
    {
        if(csnp_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:csnp-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "csnp-interval-list")
    {
        for(auto const & c : csnp_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList>();
        c->parent = this;
        csnp_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : csnp_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "csnp-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::CsnpIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "csnp-interval-list"; yang_parent_name = "csnp-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::~CsnpIntervalList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "csnp-interval-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Hello()
    :
    padding(nullptr) // presence node
{

    yang_name = "hello"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::~Hello()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::has_data() const
{
    return (padding !=  nullptr && padding->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::has_operation() const
{
    return is_set(yfilter)
	|| (padding !=  nullptr && padding->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "padding")
    {
        if(padding == nullptr)
        {
            padding = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding>();
        }
        return padding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(padding != nullptr)
    {
        children["padding"] = padding;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "padding")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::Padding()
    :
    always{YType::empty, "always"}
{

    yang_name = "padding"; yang_parent_name = "hello"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::~Padding()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::has_data() const
{
    return always.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(always.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "padding";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.yfilter)) leaf_name_data.push_back(always.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "always")
    {
        always = value;
        always.value_namespace = name_space;
        always.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "always")
    {
        always.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Hello::Padding::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "always")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloInterval()
    :
    value_{YType::str, "value"}
{

    yang_name = "hello-interval"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::~HelloInterval()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::has_data() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::has_operation() const
{
    for (std::size_t index=0; index<hello_interval_list.size(); index++)
    {
        if(hello_interval_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-interval";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-interval-list")
    {
        for(auto const & c : hello_interval_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList>();
        c->parent = this;
        hello_interval_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_interval_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-interval-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::HelloIntervalList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "hello-interval-list"; yang_parent_name = "hello-interval"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::~HelloIntervalList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-interval-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplier()
    :
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::~HelloMultiplier()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::has_data() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::has_operation() const
{
    for (std::size_t index=0; index<hello_multiplier_list.size(); index++)
    {
        if(hello_multiplier_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:hello-multiplier";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hello-multiplier-list")
    {
        for(auto const & c : hello_multiplier_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList>();
        c->parent = this;
        hello_multiplier_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : hello_multiplier_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hello-multiplier-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::HelloMultiplierList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint16, "value"}
{

    yang_name = "hello-multiplier-list"; yang_parent_name = "hello-multiplier"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::~HelloMultiplierList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hello-multiplier-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Ipv6()
    :
    tag{YType::uint32, "tag"}
    	,
    metric(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric>())
{
    metric->parent = this;

    yang_name = "ipv6"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::~Ipv6()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::has_data() const
{
    return tag.is_set
	|| (metric !=  nullptr && metric->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tag.yfilter)
	|| (metric !=  nullptr && metric->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.yfilter)) leaf_name_data.push_back(tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric")
    {
        if(metric == nullptr)
        {
            metric = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric>();
        }
        return metric;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(metric != nullptr)
    {
        children["metric"] = metric;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tag")
    {
        tag = value;
        tag.value_namespace = name_space;
        tag.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tag")
    {
        tag.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric" || name == "tag")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::Metric()
    :
    value_{YType::str, "value"}
{

    yang_name = "metric"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::~Metric()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::Metric()
    :
    value_{YType::str, "value"}
{

    yang_name = "metric"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::~Metric()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::has_data() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::has_operation() const
{
    for (std::size_t index=0; index<metric_list.size(); index++)
    {
        if(metric_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:metric";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "metric-list")
    {
        for(auto const & c : metric_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList>();
        c->parent = this;
        metric_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : metric_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "metric-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::MetricList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::str, "value"}
{

    yang_name = "metric-list"; yang_parent_name = "metric"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::~MetricList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metric-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::Password()
    :
    password{YType::str, "password"}
{

    yang_name = "password"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::~Password()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::has_data() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_data())
            return true;
    }
    return password.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::has_operation() const
{
    for (std::size_t index=0; index<password_list.size(); index++)
    {
        if(password_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:password";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "password-list")
    {
        for(auto const & c : password_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList>();
        c->parent = this;
        password_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : password_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "password-list" || name == "password")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::PasswordList()
    :
    levels{YType::enumeration, "levels"},
    password{YType::str, "password"}
{

    yang_name = "password-list"; yang_parent_name = "password"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::~PasswordList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::has_data() const
{
    return levels.is_set
	|| password.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(password.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "password-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (password.is_set || is_set(password.yfilter)) leaf_name_data.push_back(password.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "password")
    {
        password = value;
        password.value_namespace = name_space;
        password.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "password")
    {
        password.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "password")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::Priority()
    :
    value_{YType::uint8, "value"}
{

    yang_name = "priority"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::~Priority()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::has_data() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_data())
            return true;
    }
    return value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::has_operation() const
{
    for (std::size_t index=0; index<priority_list.size(); index++)
    {
        if(priority_list[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:priority";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority-list")
    {
        for(auto const & c : priority_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList>();
        c->parent = this;
        priority_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : priority_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority-list" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::PriorityList()
    :
    levels{YType::enumeration, "levels"},
    value_{YType::uint8, "value"}
{

    yang_name = "priority-list"; yang_parent_name = "priority"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::~PriorityList()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::has_data() const
{
    return levels.is_set
	|| value_.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(levels.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority-list" <<"[levels='" <<levels <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (levels.is_set || is_set(levels.yfilter)) leaf_name_data.push_back(levels.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "levels")
    {
        levels = value;
        levels.value_namespace = name_space;
        levels.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "levels")
    {
        levels.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "levels" || name == "value")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::ThreeWayHandshake()
    :
    implementor{YType::enumeration, "implementor"}
{

    yang_name = "three-way-handshake"; yang_parent_name = "Cisco-IOS-XE-interfaces_isis"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::~ThreeWayHandshake()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::has_data() const
{
    return implementor.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(implementor.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-isis:three-way-handshake";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (implementor.is_set || is_set(implementor.yfilter)) leaf_name_data.push_back(implementor.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "implementor")
    {
        implementor = value;
        implementor.value_namespace = name_space;
        implementor.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "implementor")
    {
        implementor.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "implementor")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::CiscoIOSXEInterfacesIsis_()
{

    yang_name = "Cisco-IOS-XE-interfaces_isis"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::~CiscoIOSXEInterfacesIsis_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::has_data() const
{
    return false;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::has_operation() const
{
    return is_set(yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_isis";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesIsis_::has_leaf_or_child_of_name(const std::string & name) const
{
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::CiscoIOSXEInterfacesL2ProtocolTunnel()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::~CiscoIOSXEInterfacesL2ProtocolTunnel()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::DropThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp" || name == "packet-rate" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::ShutdownThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp" || name == "packet-rate" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::CiscoIOSXEInterfacesL2ProtocolTunnel_()
    :
    cdp{YType::empty, "cdp"},
    stp{YType::empty, "stp"},
    vtp{YType::empty, "vtp"}
    	,
    drop_threshold(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold>())
	,shutdown_threshold(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold>())
{
    drop_threshold->parent = this;
    shutdown_threshold->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::~CiscoIOSXEInterfacesL2ProtocolTunnel_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::has_data() const
{
    return cdp.is_set
	|| stp.is_set
	|| vtp.is_set
	|| (drop_threshold !=  nullptr && drop_threshold->has_data())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter)
	|| (drop_threshold !=  nullptr && drop_threshold->has_operation())
	|| (shutdown_threshold !=  nullptr && shutdown_threshold->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_l2protocol-tunnel";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "drop-threshold")
    {
        if(drop_threshold == nullptr)
        {
            drop_threshold = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold>();
        }
        return drop_threshold;
    }

    if(child_yang_name == "shutdown-threshold")
    {
        if(shutdown_threshold == nullptr)
        {
            shutdown_threshold = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold>();
        }
        return shutdown_threshold;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(drop_threshold != nullptr)
    {
        children["drop-threshold"] = drop_threshold;
    }

    if(shutdown_threshold != nullptr)
    {
        children["shutdown-threshold"] = shutdown_threshold;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "drop-threshold" || name == "shutdown-threshold" || name == "cdp" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::DropThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "drop-threshold"; yang_parent_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::~DropThreshold()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::DropThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp" || name == "packet-rate" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::ShutdownThreshold()
    :
    cdp{YType::uint16, "cdp"},
    packet_rate{YType::uint16, "packet-rate"},
    stp{YType::uint16, "stp"},
    vtp{YType::uint16, "vtp"}
{

    yang_name = "shutdown-threshold"; yang_parent_name = "Cisco-IOS-XE-interfaces_l2protocol-tunnel"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::~ShutdownThreshold()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::has_data() const
{
    return cdp.is_set
	|| packet_rate.is_set
	|| stp.is_set
	|| vtp.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(cdp.yfilter)
	|| ydk::is_set(packet_rate.yfilter)
	|| ydk::is_set(stp.yfilter)
	|| ydk::is_set(vtp.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shutdown-threshold";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cdp.is_set || is_set(cdp.yfilter)) leaf_name_data.push_back(cdp.get_name_leafdata());
    if (packet_rate.is_set || is_set(packet_rate.yfilter)) leaf_name_data.push_back(packet_rate.get_name_leafdata());
    if (stp.is_set || is_set(stp.yfilter)) leaf_name_data.push_back(stp.get_name_leafdata());
    if (vtp.is_set || is_set(vtp.yfilter)) leaf_name_data.push_back(vtp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "cdp")
    {
        cdp = value;
        cdp.value_namespace = name_space;
        cdp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "packet-rate")
    {
        packet_rate = value;
        packet_rate.value_namespace = name_space;
        packet_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stp")
    {
        stp = value;
        stp.value_namespace = name_space;
        stp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtp")
    {
        vtp = value;
        vtp.value_namespace = name_space;
        vtp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "cdp")
    {
        cdp.yfilter = yfilter;
    }
    if(value_path == "packet-rate")
    {
        packet_rate.yfilter = yfilter;
    }
    if(value_path == "stp")
    {
        stp.yfilter = yfilter;
    }
    if(value_path == "vtp")
    {
        vtp.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesL2ProtocolTunnel_::ShutdownThreshold::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "cdp" || name == "packet-rate" || name == "stp" || name == "vtp")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::CiscoIOSXEInterfacesLogging()
    :
    event(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event>())
{
    event->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_logging"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::~CiscoIOSXEInterfacesLogging()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::has_data() const
{
    return (event !=  nullptr && event->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::has_operation() const
{
    return is_set(yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-interfaces_logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::Event()
    :
    bundle_status{YType::empty, "bundle-status"},
    link_status{YType::empty, "link-status"},
    nfas_status{YType::empty, "nfas-status"},
    power_inline_status{YType::empty, "power-inline-status"},
    status{YType::empty, "status"},
    trunk_status{YType::empty, "trunk-status"}
    	,
    spanning_tree(nullptr) // presence node
	,subif_link_status(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "Cisco-IOS-XE-interfaces_logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::~Event()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::has_data() const
{
    return bundle_status.is_set
	|| link_status.is_set
	|| nfas_status.is_set
	|| power_inline_status.is_set
	|| status.is_set
	|| trunk_status.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subif_link_status !=  nullptr && subif_link_status->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| ydk::is_set(nfas_status.yfilter)
	|| ydk::is_set(power_inline_status.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(trunk_status.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subif_link_status !=  nullptr && subif_link_status->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (nfas_status.is_set || is_set(nfas_status.yfilter)) leaf_name_data.push_back(nfas_status.get_name_leafdata());
    if (power_inline_status.is_set || is_set(power_inline_status.yfilter)) leaf_name_data.push_back(power_inline_status.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (trunk_status.is_set || is_set(trunk_status.yfilter)) leaf_name_data.push_back(trunk_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subif-link-status")
    {
        if(subif_link_status == nullptr)
        {
            subif_link_status = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus>();
        }
        return subif_link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(subif_link_status != nullptr)
    {
        children["subif-link-status"] = subif_link_status;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nfas-status")
    {
        nfas_status = value;
        nfas_status.value_namespace = name_space;
        nfas_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status = value;
        power_inline_status.value_namespace = name_space;
        power_inline_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-status")
    {
        trunk_status = value;
        trunk_status.value_namespace = name_space;
        trunk_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
    if(value_path == "nfas-status")
    {
        nfas_status.yfilter = yfilter;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "trunk-status")
    {
        trunk_status.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "subif-link-status" || name == "bundle-status" || name == "link-status" || name == "nfas-status" || name == "power-inline-status" || name == "status" || name == "trunk-status")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::SpanningTree()
    :
    status{YType::empty, "status"}
{

    yang_name = "spanning-tree"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::~SpanningTree()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::has_data() const
{
    return status.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(status.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "spanning-tree";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SpanningTree::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::SubifLinkStatus()
    :
    ignore_bulk{YType::empty, "ignore-bulk"}
{

    yang_name = "subif-link-status"; yang_parent_name = "event"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::~SubifLinkStatus()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::has_data() const
{
    return ignore_bulk.is_set;
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ignore_bulk.yfilter);
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subif-link-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore_bulk.is_set || is_set(ignore_bulk.yfilter)) leaf_name_data.push_back(ignore_bulk.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk = value;
        ignore_bulk.value_namespace = name_space;
        ignore_bulk.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ignore-bulk")
    {
        ignore_bulk.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging::Event::SubifLinkStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ignore-bulk")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::CiscoIOSXEInterfacesLogging_()
    :
    event(std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event>())
{
    event->parent = this;

    yang_name = "Cisco-IOS-XE-interfaces_logging"; yang_parent_name = "Vlan"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::~CiscoIOSXEInterfacesLogging_()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::has_data() const
{
    return (event !=  nullptr && event->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::has_operation() const
{
    return is_set(yfilter)
	|| (event !=  nullptr && event->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-vlan:Cisco-IOS-XE-interfaces_logging";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "event")
    {
        if(event == nullptr)
        {
            event = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event>();
        }
        return event;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(event != nullptr)
    {
        children["event"] = event;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "event")
        return true;
    return false;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::Event()
    :
    bundle_status{YType::empty, "bundle-status"},
    link_status{YType::empty, "link-status"},
    nfas_status{YType::empty, "nfas-status"},
    power_inline_status{YType::empty, "power-inline-status"},
    status{YType::empty, "status"},
    trunk_status{YType::empty, "trunk-status"}
    	,
    spanning_tree(nullptr) // presence node
	,subif_link_status(nullptr) // presence node
{

    yang_name = "event"; yang_parent_name = "Cisco-IOS-XE-interfaces_logging"; is_top_level_class = false; has_list_ancestor = true;
}

Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::~Event()
{
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::has_data() const
{
    return bundle_status.is_set
	|| link_status.is_set
	|| nfas_status.is_set
	|| power_inline_status.is_set
	|| status.is_set
	|| trunk_status.is_set
	|| (spanning_tree !=  nullptr && spanning_tree->has_data())
	|| (subif_link_status !=  nullptr && subif_link_status->has_data());
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bundle_status.yfilter)
	|| ydk::is_set(link_status.yfilter)
	|| ydk::is_set(nfas_status.yfilter)
	|| ydk::is_set(power_inline_status.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(trunk_status.yfilter)
	|| (spanning_tree !=  nullptr && spanning_tree->has_operation())
	|| (subif_link_status !=  nullptr && subif_link_status->has_operation());
}

std::string Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_status.is_set || is_set(bundle_status.yfilter)) leaf_name_data.push_back(bundle_status.get_name_leafdata());
    if (link_status.is_set || is_set(link_status.yfilter)) leaf_name_data.push_back(link_status.get_name_leafdata());
    if (nfas_status.is_set || is_set(nfas_status.yfilter)) leaf_name_data.push_back(nfas_status.get_name_leafdata());
    if (power_inline_status.is_set || is_set(power_inline_status.yfilter)) leaf_name_data.push_back(power_inline_status.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (trunk_status.is_set || is_set(trunk_status.yfilter)) leaf_name_data.push_back(trunk_status.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "spanning-tree")
    {
        if(spanning_tree == nullptr)
        {
            spanning_tree = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SpanningTree>();
        }
        return spanning_tree;
    }

    if(child_yang_name == "subif-link-status")
    {
        if(subif_link_status == nullptr)
        {
            subif_link_status = std::make_shared<Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::SubifLinkStatus>();
        }
        return subif_link_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(spanning_tree != nullptr)
    {
        children["spanning-tree"] = spanning_tree;
    }

    if(subif_link_status != nullptr)
    {
        children["subif-link-status"] = subif_link_status;
    }

    return children;
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bundle-status")
    {
        bundle_status = value;
        bundle_status.value_namespace = name_space;
        bundle_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link-status")
    {
        link_status = value;
        link_status.value_namespace = name_space;
        link_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nfas-status")
    {
        nfas_status = value;
        nfas_status.value_namespace = name_space;
        nfas_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status = value;
        power_inline_status.value_namespace = name_space;
        power_inline_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "trunk-status")
    {
        trunk_status = value;
        trunk_status.value_namespace = name_space;
        trunk_status.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bundle-status")
    {
        bundle_status.yfilter = yfilter;
    }
    if(value_path == "link-status")
    {
        link_status.yfilter = yfilter;
    }
    if(value_path == "nfas-status")
    {
        nfas_status.yfilter = yfilter;
    }
    if(value_path == "power-inline-status")
    {
        power_inline_status.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "trunk-status")
    {
        trunk_status.yfilter = yfilter;
    }
}

bool Native::Interface::Vlan::CiscoIOSXEInterfacesLogging_::Event::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "spanning-tree" || name == "subif-link-status" || name == "bundle-status" || name == "link-status" || name == "nfas-status" || name == "power-inline-status" || name == "status" || name == "trunk-status")
        return true;
    return false;
}

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::Ipv4Ipv6::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Nbar::ProtocolDiscovery::Ipv4Ipv6::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::SparseMode::sparse_dense_mode {0, "sparse-dense-mode"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::SparseMode::sparse_mode {1, "sparse-mode"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Pim::SptThreshold::infinity {0, "infinity"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::ReachableVia::any {0, "any"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp::Verify::Unicast::Source::ReachableVia::rx {1, "rx"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::ReachableVia::any {0, "any"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIp_::Verify::Unicast::Source::ReachableVia::rx {1, "rx"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6::TrafficFilter::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::Direction::in {0, "in"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIpv6_::TrafficFilter::Direction::out {1, "out"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::MeshGroup::blocked {0, "blocked"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Network::point_to_point {0, "point-to-point"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Protocol::shutdown {0, "shutdown"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::Levels::level_1_2 {1, "level-1-2"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CircuitType::Levels::level_2_only {2, "level-2-only"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::CsnpInterval::CsnpIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloInterval::HelloIntervalList::Value_::minimal {0, "minimal"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::HelloMultiplier::HelloMultiplierList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Ipv6::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Metric::MetricList::Value_::maximum {0, "maximum"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Password::PasswordList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::Levels::level_1 {0, "level-1"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::Priority::PriorityList::Levels::level_2 {1, "level-2"};

const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::Implementor::cisco {0, "cisco"};
const Enum::YLeaf Native::Interface::Vlan::CiscoIOSXEInterfacesIsis::ThreeWayHandshake::Implementor::ietf {1, "ietf"};


}
}

