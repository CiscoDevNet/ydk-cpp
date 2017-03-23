
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ifmgr_cfg_4.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ifmgr_cfg {

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Ipcp()
    :
    neighbor_route_disable{YType::empty, "neighbor-route-disable"}
    	,
    dns(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns>())
	,peer_address(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress>())
{
    dns->parent = this;
    children["dns"] = dns;

    peer_address->parent = this;
    children["peer-address"] = peer_address;

    yang_name = "ipcp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-ipcp-cfg_ppp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::~Ipcp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::has_data() const
{
    return neighbor_route_disable.is_set
	|| (dns !=  nullptr && dns->has_data())
	|| (peer_address !=  nullptr && peer_address->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::has_operation() const
{
    return is_set(operation)
	|| is_set(neighbor_route_disable.operation)
	|| (dns !=  nullptr && dns->has_operation())
	|| (peer_address !=  nullptr && peer_address->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipcp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_route_disable.is_set || is_set(neighbor_route_disable.operation)) leaf_name_data.push_back(neighbor_route_disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dns")
    {
        if(dns != nullptr)
        {
            children["dns"] = dns;
        }
        else
        {
            dns = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns>();
            dns->parent = this;
            children["dns"] = dns;
        }
        return children.at("dns");
    }

    if(child_yang_name == "peer-address")
    {
        if(peer_address != nullptr)
        {
            children["peer-address"] = peer_address;
        }
        else
        {
            peer_address = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress>();
            peer_address->parent = this;
            children["peer-address"] = peer_address;
        }
        return children.at("peer-address");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::get_children()
{
    if(children.find("dns") == children.end())
    {
        if(dns != nullptr)
        {
            children["dns"] = dns;
        }
    }

    if(children.find("peer-address") == children.end())
    {
        if(peer_address != nullptr)
        {
            children["peer-address"] = peer_address;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "neighbor-route-disable")
    {
        neighbor_route_disable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::PeerAddress()
    :
    default_{YType::str, "default"}
{
    yang_name = "peer-address"; yang_parent_name = "ipcp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::~PeerAddress()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::has_data() const
{
    return default_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-address";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerAddress' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::PeerAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::Dns()
    :
    dns_addresses(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses>())
{
    dns_addresses->parent = this;
    children["dns-addresses"] = dns_addresses;

    yang_name = "dns"; yang_parent_name = "ipcp";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::~Dns()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::has_data() const
{
    return (dns_addresses !=  nullptr && dns_addresses->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::has_operation() const
{
    return is_set(operation)
	|| (dns_addresses !=  nullptr && dns_addresses->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dns' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dns-addresses")
    {
        if(dns_addresses != nullptr)
        {
            children["dns-addresses"] = dns_addresses;
        }
        else
        {
            dns_addresses = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses>();
            dns_addresses->parent = this;
            children["dns-addresses"] = dns_addresses;
        }
        return children.at("dns-addresses");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::get_children()
{
    if(children.find("dns-addresses") == children.end())
    {
        if(dns_addresses != nullptr)
        {
            children["dns-addresses"] = dns_addresses;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::DnsAddresses()
    :
    primary{YType::str, "primary"},
    secondary{YType::str, "secondary"}
{
    yang_name = "dns-addresses"; yang_parent_name = "dns";
}

InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::~DnsAddresses()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::has_data() const
{
    return primary.is_set
	|| secondary.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::has_operation() const
{
    return is_set(operation)
	|| is_set(primary.operation)
	|| is_set(secondary.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dns-addresses";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DnsAddresses' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (primary.is_set || is_set(primary.operation)) leaf_name_data.push_back(primary.get_name_leafdata());
    if (secondary.is_set || is_set(secondary.operation)) leaf_name_data.push_back(secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::CiscoIosXrPppMaIpcpCfg_Ppp::Ipcp::Dns::DnsAddresses::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "primary")
    {
        primary = value;
    }
    if(value_path == "secondary")
    {
        secondary = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::AaaTable()
    :
    radius(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius>())
{
    radius->parent = this;
    children["radius"] = radius;

    yang_name = "aaa-table"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::~AaaTable()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_data() const
{
    return (radius !=  nullptr && radius->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::has_operation() const
{
    return is_set(operation)
	|| (radius !=  nullptr && radius->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-aaacore-cfg:aaa-table";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AaaTable' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "radius")
    {
        if(radius != nullptr)
        {
            children["radius"] = radius;
        }
        else
        {
            radius = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius>();
            radius->parent = this;
            children["radius"] = radius;
        }
        return children.at("radius");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::AaaTable::get_children()
{
    if(children.find("radius") == children.end())
    {
        if(radius != nullptr)
        {
            children["radius"] = radius;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Radius()
    :
    attribute(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute>())
{
    attribute->parent = this;
    children["attribute"] = attribute;

    yang_name = "radius"; yang_parent_name = "aaa-table";
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::~Radius()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_data() const
{
    return (attribute !=  nullptr && attribute->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::has_operation() const
{
    return is_set(operation)
	|| (attribute !=  nullptr && attribute->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Radius' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attribute")
    {
        if(attribute != nullptr)
        {
            children["attribute"] = attribute;
        }
        else
        {
            attribute = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute>();
            attribute->parent = this;
            children["attribute"] = attribute;
        }
        return children.at("attribute");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::get_children()
{
    if(children.find("attribute") == children.end())
    {
        if(attribute != nullptr)
        {
            children["attribute"] = attribute;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::Attribute()
    :
    nas_port_type{YType::enumeration, "nas-port-type"}
{
    yang_name = "attribute"; yang_parent_name = "radius";
}

InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::~Attribute()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_data() const
{
    return nas_port_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::has_operation() const
{
    return is_set(operation)
	|| is_set(nas_port_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attribute' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_type.is_set || is_set(nas_port_type.operation)) leaf_name_data.push_back(nas_port_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::AaaTable::Radius::Attribute::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nas-port-type")
    {
        nas_port_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::Otu()
    :
    fec{YType::enumeration, "fec"},
    gcc{YType::empty, "gcc"},
    loopback{YType::enumeration, "loopback"},
    performance_monitoring{YType::enumeration, "performance-monitoring"},
    sd{YType::uint32, "sd"},
    secondary_admin_state{YType::enumeration, "secondary-admin-state"},
    sf{YType::uint32, "sf"}
    	,
    network_srlgs(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>())
	,otn_expected_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>())
	,otn_expected_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>())
	,otn_expected_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>())
	,otn_expected_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>())
	,otn_send_tti(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>())
	,otn_send_ttisapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>())
	,otn_send_ttitcmdapi(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>())
	,otn_send_ttitcmos(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>())
	,proactive_protection(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>())
{
    network_srlgs->parent = this;
    children["network-srlgs"] = network_srlgs;

    otn_expected_tti->parent = this;
    children["otn-expected-tti"] = otn_expected_tti;

    otn_expected_ttisapi->parent = this;
    children["otn-expected-ttisapi"] = otn_expected_ttisapi;

    otn_expected_ttitcmdapi->parent = this;
    children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;

    otn_expected_ttitcmos->parent = this;
    children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;

    otn_send_tti->parent = this;
    children["otn-send-tti"] = otn_send_tti;

    otn_send_ttisapi->parent = this;
    children["otn-send-ttisapi"] = otn_send_ttisapi;

    otn_send_ttitcmdapi->parent = this;
    children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;

    otn_send_ttitcmos->parent = this;
    children["otn-send-ttitcmos"] = otn_send_ttitcmos;

    proactive_protection->parent = this;
    children["proactive-protection"] = proactive_protection;

    yang_name = "otu"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::~Otu()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_data() const
{
    return fec.is_set
	|| gcc.is_set
	|| loopback.is_set
	|| performance_monitoring.is_set
	|| sd.is_set
	|| secondary_admin_state.is_set
	|| sf.is_set
	|| (network_srlgs !=  nullptr && network_srlgs->has_data())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_data())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_data())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_data())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_data())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_data())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_data())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_data())
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_data())
	|| (proactive_protection !=  nullptr && proactive_protection->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::has_operation() const
{
    return is_set(operation)
	|| is_set(fec.operation)
	|| is_set(gcc.operation)
	|| is_set(loopback.operation)
	|| is_set(performance_monitoring.operation)
	|| is_set(sd.operation)
	|| is_set(secondary_admin_state.operation)
	|| is_set(sf.operation)
	|| (network_srlgs !=  nullptr && network_srlgs->has_operation())
	|| (otn_expected_tti !=  nullptr && otn_expected_tti->has_operation())
	|| (otn_expected_ttisapi !=  nullptr && otn_expected_ttisapi->has_operation())
	|| (otn_expected_ttitcmdapi !=  nullptr && otn_expected_ttitcmdapi->has_operation())
	|| (otn_expected_ttitcmos !=  nullptr && otn_expected_ttitcmos->has_operation())
	|| (otn_send_tti !=  nullptr && otn_send_tti->has_operation())
	|| (otn_send_ttisapi !=  nullptr && otn_send_ttisapi->has_operation())
	|| (otn_send_ttitcmdapi !=  nullptr && otn_send_ttitcmdapi->has_operation())
	|| (otn_send_ttitcmos !=  nullptr && otn_send_ttitcmos->has_operation())
	|| (proactive_protection !=  nullptr && proactive_protection->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-controller-otu-cfg:otu";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Otu' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fec.is_set || is_set(fec.operation)) leaf_name_data.push_back(fec.get_name_leafdata());
    if (gcc.is_set || is_set(gcc.operation)) leaf_name_data.push_back(gcc.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (performance_monitoring.is_set || is_set(performance_monitoring.operation)) leaf_name_data.push_back(performance_monitoring.get_name_leafdata());
    if (sd.is_set || is_set(sd.operation)) leaf_name_data.push_back(sd.get_name_leafdata());
    if (secondary_admin_state.is_set || is_set(secondary_admin_state.operation)) leaf_name_data.push_back(secondary_admin_state.get_name_leafdata());
    if (sf.is_set || is_set(sf.operation)) leaf_name_data.push_back(sf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-srlgs")
    {
        if(network_srlgs != nullptr)
        {
            children["network-srlgs"] = network_srlgs;
        }
        else
        {
            network_srlgs = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs>();
            network_srlgs->parent = this;
            children["network-srlgs"] = network_srlgs;
        }
        return children.at("network-srlgs");
    }

    if(child_yang_name == "otn-expected-tti")
    {
        if(otn_expected_tti != nullptr)
        {
            children["otn-expected-tti"] = otn_expected_tti;
        }
        else
        {
            otn_expected_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti>();
            otn_expected_tti->parent = this;
            children["otn-expected-tti"] = otn_expected_tti;
        }
        return children.at("otn-expected-tti");
    }

    if(child_yang_name == "otn-expected-ttisapi")
    {
        if(otn_expected_ttisapi != nullptr)
        {
            children["otn-expected-ttisapi"] = otn_expected_ttisapi;
        }
        else
        {
            otn_expected_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi>();
            otn_expected_ttisapi->parent = this;
            children["otn-expected-ttisapi"] = otn_expected_ttisapi;
        }
        return children.at("otn-expected-ttisapi");
    }

    if(child_yang_name == "otn-expected-ttitcmdapi")
    {
        if(otn_expected_ttitcmdapi != nullptr)
        {
            children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;
        }
        else
        {
            otn_expected_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi>();
            otn_expected_ttitcmdapi->parent = this;
            children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;
        }
        return children.at("otn-expected-ttitcmdapi");
    }

    if(child_yang_name == "otn-expected-ttitcmos")
    {
        if(otn_expected_ttitcmos != nullptr)
        {
            children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;
        }
        else
        {
            otn_expected_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos>();
            otn_expected_ttitcmos->parent = this;
            children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;
        }
        return children.at("otn-expected-ttitcmos");
    }

    if(child_yang_name == "otn-send-tti")
    {
        if(otn_send_tti != nullptr)
        {
            children["otn-send-tti"] = otn_send_tti;
        }
        else
        {
            otn_send_tti = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti>();
            otn_send_tti->parent = this;
            children["otn-send-tti"] = otn_send_tti;
        }
        return children.at("otn-send-tti");
    }

    if(child_yang_name == "otn-send-ttisapi")
    {
        if(otn_send_ttisapi != nullptr)
        {
            children["otn-send-ttisapi"] = otn_send_ttisapi;
        }
        else
        {
            otn_send_ttisapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi>();
            otn_send_ttisapi->parent = this;
            children["otn-send-ttisapi"] = otn_send_ttisapi;
        }
        return children.at("otn-send-ttisapi");
    }

    if(child_yang_name == "otn-send-ttitcmdapi")
    {
        if(otn_send_ttitcmdapi != nullptr)
        {
            children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;
        }
        else
        {
            otn_send_ttitcmdapi = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi>();
            otn_send_ttitcmdapi->parent = this;
            children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;
        }
        return children.at("otn-send-ttitcmdapi");
    }

    if(child_yang_name == "otn-send-ttitcmos")
    {
        if(otn_send_ttitcmos != nullptr)
        {
            children["otn-send-ttitcmos"] = otn_send_ttitcmos;
        }
        else
        {
            otn_send_ttitcmos = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos>();
            otn_send_ttitcmos->parent = this;
            children["otn-send-ttitcmos"] = otn_send_ttitcmos;
        }
        return children.at("otn-send-ttitcmos");
    }

    if(child_yang_name == "proactive-protection")
    {
        if(proactive_protection != nullptr)
        {
            children["proactive-protection"] = proactive_protection;
        }
        else
        {
            proactive_protection = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection>();
            proactive_protection->parent = this;
            children["proactive-protection"] = proactive_protection;
        }
        return children.at("proactive-protection");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::get_children()
{
    if(children.find("network-srlgs") == children.end())
    {
        if(network_srlgs != nullptr)
        {
            children["network-srlgs"] = network_srlgs;
        }
    }

    if(children.find("otn-expected-tti") == children.end())
    {
        if(otn_expected_tti != nullptr)
        {
            children["otn-expected-tti"] = otn_expected_tti;
        }
    }

    if(children.find("otn-expected-ttisapi") == children.end())
    {
        if(otn_expected_ttisapi != nullptr)
        {
            children["otn-expected-ttisapi"] = otn_expected_ttisapi;
        }
    }

    if(children.find("otn-expected-ttitcmdapi") == children.end())
    {
        if(otn_expected_ttitcmdapi != nullptr)
        {
            children["otn-expected-ttitcmdapi"] = otn_expected_ttitcmdapi;
        }
    }

    if(children.find("otn-expected-ttitcmos") == children.end())
    {
        if(otn_expected_ttitcmos != nullptr)
        {
            children["otn-expected-ttitcmos"] = otn_expected_ttitcmos;
        }
    }

    if(children.find("otn-send-tti") == children.end())
    {
        if(otn_send_tti != nullptr)
        {
            children["otn-send-tti"] = otn_send_tti;
        }
    }

    if(children.find("otn-send-ttisapi") == children.end())
    {
        if(otn_send_ttisapi != nullptr)
        {
            children["otn-send-ttisapi"] = otn_send_ttisapi;
        }
    }

    if(children.find("otn-send-ttitcmdapi") == children.end())
    {
        if(otn_send_ttitcmdapi != nullptr)
        {
            children["otn-send-ttitcmdapi"] = otn_send_ttitcmdapi;
        }
    }

    if(children.find("otn-send-ttitcmos") == children.end())
    {
        if(otn_send_ttitcmos != nullptr)
        {
            children["otn-send-ttitcmos"] = otn_send_ttitcmos;
        }
    }

    if(children.find("proactive-protection") == children.end())
    {
        if(proactive_protection != nullptr)
        {
            children["proactive-protection"] = proactive_protection;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fec")
    {
        fec = value;
    }
    if(value_path == "gcc")
    {
        gcc = value;
    }
    if(value_path == "loopback")
    {
        loopback = value;
    }
    if(value_path == "performance-monitoring")
    {
        performance_monitoring = value;
    }
    if(value_path == "sd")
    {
        sd = value;
    }
    if(value_path == "secondary-admin-state")
    {
        secondary_admin_state = value;
    }
    if(value_path == "sf")
    {
        sf = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::OtnSendTtitcmos()
    :
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-send-ttitcmos"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::~OtnSendTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_data() const
{
    return osascii_string.is_set
	|| oshex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::has_operation() const
{
    return is_set(operation)
	|| is_set(osascii_string.operation)
	|| is_set(oshex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmos";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnSendTtitcmos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (osascii_string.is_set || is_set(osascii_string.operation)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.operation)) leaf_name_data.push_back(oshex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "osascii-string")
    {
        osascii_string = value;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::OtnSendTtitcmdapi()
    :
    dapi_ascii_string{YType::str, "dapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-send-ttitcmdapi"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::~OtnSendTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_data() const
{
    return dapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::has_operation() const
{
    return is_set(operation)
	|| is_set(dapi_ascii_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttitcmdapi";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnSendTtitcmdapi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.operation)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtitcmdapi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::OtnExpectedTtisapi()
    :
    sapi_ascii_string{YType::str, "sapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-expected-ttisapi"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::~OtnExpectedTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_data() const
{
    return sapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::has_operation() const
{
    return is_set(operation)
	|| is_set(sapi_ascii_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttisapi";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnExpectedTtisapi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.operation)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtisapi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::ProactiveProtection()
    :
    status{YType::empty, "status"}
    	,
    revert_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>())
	,revert_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>())
	,trigger_threshold(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>())
	,trigger_window(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>())
{
    revert_threshold->parent = this;
    children["revert-threshold"] = revert_threshold;

    revert_window->parent = this;
    children["revert-window"] = revert_window;

    trigger_threshold->parent = this;
    children["trigger-threshold"] = trigger_threshold;

    trigger_window->parent = this;
    children["trigger-window"] = trigger_window;

    yang_name = "proactive-protection"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::~ProactiveProtection()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_data() const
{
    return status.is_set
	|| (revert_threshold !=  nullptr && revert_threshold->has_data())
	|| (revert_window !=  nullptr && revert_window->has_data())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_data())
	|| (trigger_window !=  nullptr && trigger_window->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::has_operation() const
{
    return is_set(operation)
	|| is_set(status.operation)
	|| (revert_threshold !=  nullptr && revert_threshold->has_operation())
	|| (revert_window !=  nullptr && revert_window->has_operation())
	|| (trigger_threshold !=  nullptr && trigger_threshold->has_operation())
	|| (trigger_window !=  nullptr && trigger_window->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "proactive-protection";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProactiveProtection' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "revert-threshold")
    {
        if(revert_threshold != nullptr)
        {
            children["revert-threshold"] = revert_threshold;
        }
        else
        {
            revert_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold>();
            revert_threshold->parent = this;
            children["revert-threshold"] = revert_threshold;
        }
        return children.at("revert-threshold");
    }

    if(child_yang_name == "revert-window")
    {
        if(revert_window != nullptr)
        {
            children["revert-window"] = revert_window;
        }
        else
        {
            revert_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow>();
            revert_window->parent = this;
            children["revert-window"] = revert_window;
        }
        return children.at("revert-window");
    }

    if(child_yang_name == "trigger-threshold")
    {
        if(trigger_threshold != nullptr)
        {
            children["trigger-threshold"] = trigger_threshold;
        }
        else
        {
            trigger_threshold = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold>();
            trigger_threshold->parent = this;
            children["trigger-threshold"] = trigger_threshold;
        }
        return children.at("trigger-threshold");
    }

    if(child_yang_name == "trigger-window")
    {
        if(trigger_window != nullptr)
        {
            children["trigger-window"] = trigger_window;
        }
        else
        {
            trigger_window = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow>();
            trigger_window->parent = this;
            children["trigger-window"] = trigger_window;
        }
        return children.at("trigger-window");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::get_children()
{
    if(children.find("revert-threshold") == children.end())
    {
        if(revert_threshold != nullptr)
        {
            children["revert-threshold"] = revert_threshold;
        }
    }

    if(children.find("revert-window") == children.end())
    {
        if(revert_window != nullptr)
        {
            children["revert-window"] = revert_window;
        }
    }

    if(children.find("trigger-threshold") == children.end())
    {
        if(trigger_threshold != nullptr)
        {
            children["trigger-threshold"] = trigger_threshold;
        }
    }

    if(children.find("trigger-window") == children.end())
    {
        if(trigger_window != nullptr)
        {
            children["trigger-window"] = trigger_window;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "status")
    {
        status = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::TriggerThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    enable{YType::empty, "enable"},
    power{YType::uint32, "power"}
{
    yang_name = "trigger-threshold"; yang_parent_name = "proactive-protection";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::~TriggerThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_data() const
{
    return coefficient.is_set
	|| enable.is_set
	|| power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(coefficient.operation)
	|| is_set(enable.operation)
	|| is_set(power.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.operation)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (power.is_set || is_set(power.operation)) leaf_name_data.push_back(power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "power")
    {
        power = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::RevertWindow()
    :
    enable{YType::empty, "enable"},
    value_{YType::uint32, "value"}
{
    yang_name = "revert-window"; yang_parent_name = "proactive-protection";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::~RevertWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_data() const
{
    return enable.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(value_.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-window";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertWindow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::TriggerWindow()
    :
    enable{YType::empty, "enable"},
    value_{YType::uint32, "value"}
{
    yang_name = "trigger-window"; yang_parent_name = "proactive-protection";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::~TriggerWindow()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_data() const
{
    return enable.is_set
	|| value_.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(value_.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-window";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerWindow' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::TriggerWindow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::RevertThreshold()
    :
    coefficient{YType::uint32, "coefficient"},
    enable{YType::empty, "enable"},
    power{YType::uint32, "power"}
{
    yang_name = "revert-threshold"; yang_parent_name = "proactive-protection";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::~RevertThreshold()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_data() const
{
    return coefficient.is_set
	|| enable.is_set
	|| power.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(coefficient.operation)
	|| is_set(enable.operation)
	|| is_set(power.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "revert-threshold";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RevertThreshold' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coefficient.is_set || is_set(coefficient.operation)) leaf_name_data.push_back(coefficient.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (power.is_set || is_set(power.operation)) leaf_name_data.push_back(power.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::ProactiveProtection::RevertThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "coefficient")
    {
        coefficient = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "power")
    {
        power = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlgs()
{
    yang_name = "network-srlgs"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::~NetworkSrlgs()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_data() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::has_operation() const
{
    for (std::size_t index=0; index<network_srlg.size(); index++)
    {
        if(network_srlg[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlgs";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlgs' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-srlg")
    {
        for(auto const & c : network_srlg)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg>();
        c->parent = this;
        network_srlg.push_back(std::move(c));
        children[segment_path] = network_srlg.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::get_children()
{
    for (auto const & c : network_srlg)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::NetworkSrlg()
    :
    set_id{YType::uint32, "set-id"},
    srlg1{YType::uint32, "srlg1"},
    srlg2{YType::uint32, "srlg2"},
    srlg3{YType::uint32, "srlg3"},
    srlg4{YType::uint32, "srlg4"},
    srlg5{YType::uint32, "srlg5"},
    srlg6{YType::uint32, "srlg6"}
{
    yang_name = "network-srlg"; yang_parent_name = "network-srlgs";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::~NetworkSrlg()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_data() const
{
    return set_id.is_set
	|| srlg1.is_set
	|| srlg2.is_set
	|| srlg3.is_set
	|| srlg4.is_set
	|| srlg5.is_set
	|| srlg6.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::has_operation() const
{
    return is_set(operation)
	|| is_set(set_id.operation)
	|| is_set(srlg1.operation)
	|| is_set(srlg2.operation)
	|| is_set(srlg3.operation)
	|| is_set(srlg4.operation)
	|| is_set(srlg5.operation)
	|| is_set(srlg6.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-srlg" <<"[set-id='" <<set_id <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NetworkSrlg' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (set_id.is_set || is_set(set_id.operation)) leaf_name_data.push_back(set_id.get_name_leafdata());
    if (srlg1.is_set || is_set(srlg1.operation)) leaf_name_data.push_back(srlg1.get_name_leafdata());
    if (srlg2.is_set || is_set(srlg2.operation)) leaf_name_data.push_back(srlg2.get_name_leafdata());
    if (srlg3.is_set || is_set(srlg3.operation)) leaf_name_data.push_back(srlg3.get_name_leafdata());
    if (srlg4.is_set || is_set(srlg4.operation)) leaf_name_data.push_back(srlg4.get_name_leafdata());
    if (srlg5.is_set || is_set(srlg5.operation)) leaf_name_data.push_back(srlg5.get_name_leafdata());
    if (srlg6.is_set || is_set(srlg6.operation)) leaf_name_data.push_back(srlg6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::NetworkSrlgs::NetworkSrlg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "set-id")
    {
        set_id = value;
    }
    if(value_path == "srlg1")
    {
        srlg1 = value;
    }
    if(value_path == "srlg2")
    {
        srlg2 = value;
    }
    if(value_path == "srlg3")
    {
        srlg3 = value;
    }
    if(value_path == "srlg4")
    {
        srlg4 = value;
    }
    if(value_path == "srlg5")
    {
        srlg5 = value;
    }
    if(value_path == "srlg6")
    {
        srlg6 = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::OtnSendTti()
    :
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-send-tti"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::~OtnSendTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_data() const
{
    return full_ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::has_operation() const
{
    return is_set(operation)
	|| is_set(full_ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-tti";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnSendTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_ascii_string.is_set || is_set(full_ascii_string.operation)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::OtnExpectedTtitcmdapi()
    :
    dapi_ascii_string{YType::str, "dapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-expected-ttitcmdapi"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::~OtnExpectedTtitcmdapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_data() const
{
    return dapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::has_operation() const
{
    return is_set(operation)
	|| is_set(dapi_ascii_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmdapi";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnExpectedTtitcmdapi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dapi_ascii_string.is_set || is_set(dapi_ascii_string.operation)) leaf_name_data.push_back(dapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmdapi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dapi-ascii-string")
    {
        dapi_ascii_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::OtnSendTtisapi()
    :
    sapi_ascii_string{YType::str, "sapi-ascii-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-send-ttisapi"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::~OtnSendTtisapi()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_data() const
{
    return sapi_ascii_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::has_operation() const
{
    return is_set(operation)
	|| is_set(sapi_ascii_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-send-ttisapi";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnSendTtisapi' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sapi_ascii_string.is_set || is_set(sapi_ascii_string.operation)) leaf_name_data.push_back(sapi_ascii_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnSendTtisapi::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "sapi-ascii-string")
    {
        sapi_ascii_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::OtnExpectedTtitcmos()
    :
    osascii_string{YType::str, "osascii-string"},
    oshex_string{YType::str, "oshex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-expected-ttitcmos"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::~OtnExpectedTtitcmos()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_data() const
{
    return osascii_string.is_set
	|| oshex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::has_operation() const
{
    return is_set(operation)
	|| is_set(osascii_string.operation)
	|| is_set(oshex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-ttitcmos";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnExpectedTtitcmos' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (osascii_string.is_set || is_set(osascii_string.operation)) leaf_name_data.push_back(osascii_string.get_name_leafdata());
    if (oshex_string.is_set || is_set(oshex_string.operation)) leaf_name_data.push_back(oshex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTtitcmos::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "osascii-string")
    {
        osascii_string = value;
    }
    if(value_path == "oshex-string")
    {
        oshex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::OtnExpectedTti()
    :
    full_ascii_string{YType::str, "full-ascii-string"},
    hex_string{YType::str, "hex-string"},
    string_type{YType::enumeration, "string-type"}
{
    yang_name = "otn-expected-tti"; yang_parent_name = "otu";
}

InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::~OtnExpectedTti()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_data() const
{
    return full_ascii_string.is_set
	|| hex_string.is_set
	|| string_type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::has_operation() const
{
    return is_set(operation)
	|| is_set(full_ascii_string.operation)
	|| is_set(hex_string.operation)
	|| is_set(string_type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "otn-expected-tti";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OtnExpectedTti' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (full_ascii_string.is_set || is_set(full_ascii_string.operation)) leaf_name_data.push_back(full_ascii_string.get_name_leafdata());
    if (hex_string.is_set || is_set(hex_string.operation)) leaf_name_data.push_back(hex_string.get_name_leafdata());
    if (string_type.is_set || is_set(string_type.operation)) leaf_name_data.push_back(string_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Otu::OtnExpectedTti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "full-ascii-string")
    {
        full_ascii_string = value;
    }
    if(value_path == "hex-string")
    {
        hex_string = value;
    }
    if(value_path == "string-type")
    {
        string_type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::EthernetControl()
    :
    small_frame_padding{YType::empty, "small-frame-padding"},
    transport_mode{YType::enumeration, "transport-mode"}
    	,
    transceiver(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver>())
{
    transceiver->parent = this;
    children["transceiver"] = transceiver;

    yang_name = "ethernet-control"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::~EthernetControl()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_data() const
{
    return small_frame_padding.is_set
	|| transport_mode.is_set
	|| (transceiver !=  nullptr && transceiver->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::has_operation() const
{
    return is_set(operation)
	|| is_set(small_frame_padding.operation)
	|| is_set(transport_mode.operation)
	|| (transceiver !=  nullptr && transceiver->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-asr9k-lc-ethctrl-cfg:ethernet-control";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EthernetControl' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (small_frame_padding.is_set || is_set(small_frame_padding.operation)) leaf_name_data.push_back(small_frame_padding.get_name_leafdata());
    if (transport_mode.is_set || is_set(transport_mode.operation)) leaf_name_data.push_back(transport_mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "transceiver")
    {
        if(transceiver != nullptr)
        {
            children["transceiver"] = transceiver;
        }
        else
        {
            transceiver = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver>();
            transceiver->parent = this;
            children["transceiver"] = transceiver;
        }
        return children.at("transceiver");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetControl::get_children()
{
    if(children.find("transceiver") == children.end())
    {
        if(transceiver != nullptr)
        {
            children["transceiver"] = transceiver;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "small-frame-padding")
    {
        small_frame_padding = value;
    }
    if(value_path == "transport-mode")
    {
        transport_mode = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Transceiver()
    :
    permit(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit>())
{
    permit->parent = this;
    children["permit"] = permit;

    yang_name = "transceiver"; yang_parent_name = "ethernet-control";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::~Transceiver()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::has_data() const
{
    return (permit !=  nullptr && permit->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::has_operation() const
{
    return is_set(operation)
	|| (permit !=  nullptr && permit->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transceiver";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transceiver' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "permit")
    {
        if(permit != nullptr)
        {
            children["permit"] = permit;
        }
        else
        {
            permit = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit>();
            permit->parent = this;
            children["permit"] = permit;
        }
        return children.at("permit");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::get_children()
{
    if(children.find("permit") == children.end())
    {
        if(permit != nullptr)
        {
            children["permit"] = permit;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::Permit()
    :
    pid{YType::enumeration, "pid"},
    type{YType::enumeration, "type"}
{
    yang_name = "permit"; yang_parent_name = "transceiver";
}

InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::~Permit()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_data() const
{
    return pid.is_set
	|| type.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::has_operation() const
{
    return is_set(operation)
	|| is_set(pid.operation)
	|| is_set(type.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "permit";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Permit' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pid.is_set || is_set(pid.operation)) leaf_name_data.push_back(pid.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EthernetControl::Transceiver::Permit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pid")
    {
        pid = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::Cdp()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "cdp"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Cdp::~Cdp()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_data() const
{
    return enable.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Cdp::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Cdp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-cdp-cfg:cdp";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Cdp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cdp' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Cdp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Cdp::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Cdp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Ipv6PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>())
	,outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>())
{
    inbound->parent = this;
    children["inbound"] = inbound;

    outbound->parent = this;
    children["outbound"] = outbound;

    yang_name = "ipv6-packet-filter"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::~Ipv6PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv6-packet-filter";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6PacketFilter' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inbound")
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound;
        }
        else
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound>();
            inbound->parent = this;
            children["inbound"] = inbound;
        }
        return children.at("inbound");
    }

    if(child_yang_name == "outbound")
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound;
        }
        else
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound>();
            outbound->parent = this;
            children["outbound"] = outbound;
        }
        return children.at("outbound");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::get_children()
{
    if(children.find("inbound") == children.end())
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound;
        }
    }

    if(children.find("outbound") == children.end())
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::Inbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    common_acl_name{YType::str, "common-acl-name"},
    compression_level{YType::uint32, "compression-level"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv6-packet-filter";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| compression_level.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(acl_name_array.operation)
	|| is_set(common_acl_name.operation)
	|| is_set(compression_level.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(is_common_array.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inbound' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.operation)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::Outbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    compression_level{YType::uint32, "compression-level"},
    do_not_use{YType::str, "do-not-use"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv6-packet-filter";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return compression_level.is_set
	|| do_not_use.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(acl_name_array.operation)
	|| is_set(compression_level.operation)
	|| is_set(do_not_use.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(is_common_array.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Outbound' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compression_level.is_set || is_set(compression_level.operation)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (do_not_use.is_set || is_set(do_not_use.operation)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv6PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
    }
    if(value_path == "do-not-use")
    {
        do_not_use = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::EsPacketFilter()
    :
    inbound{YType::str, "inbound"},
    outbound{YType::str, "outbound"}
{
    yang_name = "es-packet-filter"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::~EsPacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_data() const
{
    return inbound.is_set
	|| outbound.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(inbound.operation)
	|| is_set(outbound.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:es-packet-filter";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'EsPacketFilter' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inbound.is_set || is_set(inbound.operation)) leaf_name_data.push_back(inbound.get_name_leafdata());
    if (outbound.is_set || is_set(outbound.operation)) leaf_name_data.push_back(outbound.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::EsPacketFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inbound")
    {
        inbound = value;
    }
    if(value_path == "outbound")
    {
        outbound = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Ipv4PacketFilter()
    :
    inbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>())
	,outbound(std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>())
{
    inbound->parent = this;
    children["inbound"] = inbound;

    outbound->parent = this;
    children["outbound"] = outbound;

    yang_name = "ipv4-packet-filter"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::~Ipv4PacketFilter()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_data() const
{
    return (inbound !=  nullptr && inbound->has_data())
	|| (outbound !=  nullptr && outbound->has_data());
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::has_operation() const
{
    return is_set(operation)
	|| (inbound !=  nullptr && inbound->has_operation())
	|| (outbound !=  nullptr && outbound->has_operation());
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ip-pfilter-cfg:ipv4-packet-filter";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4PacketFilter' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "inbound")
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound;
        }
        else
        {
            inbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound>();
            inbound->parent = this;
            children["inbound"] = inbound;
        }
        return children.at("inbound");
    }

    if(child_yang_name == "outbound")
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound;
        }
        else
        {
            outbound = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound>();
            outbound->parent = this;
            children["outbound"] = outbound;
        }
        return children.at("outbound");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::get_children()
{
    if(children.find("inbound") == children.end())
    {
        if(inbound != nullptr)
        {
            children["inbound"] = inbound;
        }
    }

    if(children.find("outbound") == children.end())
    {
        if(outbound != nullptr)
        {
            children["outbound"] = outbound;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::Outbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    compression_level{YType::uint32, "compression-level"},
    do_not_use{YType::str, "do-not-use"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{
    yang_name = "outbound"; yang_parent_name = "ipv4-packet-filter";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::~Outbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return compression_level.is_set
	|| do_not_use.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(acl_name_array.operation)
	|| is_set(compression_level.operation)
	|| is_set(do_not_use.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(is_common_array.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "outbound";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Outbound' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compression_level.is_set || is_set(compression_level.operation)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (do_not_use.is_set || is_set(do_not_use.operation)) leaf_name_data.push_back(do_not_use.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Outbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
    }
    if(value_path == "do-not-use")
    {
        do_not_use = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::Inbound()
    :
    acl_name_array{YType::str, "acl-name-array"},
    common_acl_name{YType::str, "common-acl-name"},
    compression_level{YType::uint32, "compression-level"},
    hardware_count{YType::empty, "hardware-count"},
    interface_statistics{YType::empty, "interface-statistics"},
    is_common_array{YType::boolean, "is-common-array"},
    name{YType::str, "name"}
{
    yang_name = "inbound"; yang_parent_name = "ipv4-packet-filter";
}

InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::~Inbound()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_data() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return common_acl_name.is_set
	|| compression_level.is_set
	|| hardware_count.is_set
	|| interface_statistics.is_set
	|| name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::has_operation() const
{
    for (auto const & leaf : acl_name_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : is_common_array.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(acl_name_array.operation)
	|| is_set(common_acl_name.operation)
	|| is_set(compression_level.operation)
	|| is_set(hardware_count.operation)
	|| is_set(interface_statistics.operation)
	|| is_set(is_common_array.operation)
	|| is_set(name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inbound";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Inbound' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (common_acl_name.is_set || is_set(common_acl_name.operation)) leaf_name_data.push_back(common_acl_name.get_name_leafdata());
    if (compression_level.is_set || is_set(compression_level.operation)) leaf_name_data.push_back(compression_level.get_name_leafdata());
    if (hardware_count.is_set || is_set(hardware_count.operation)) leaf_name_data.push_back(hardware_count.get_name_leafdata());
    if (interface_statistics.is_set || is_set(interface_statistics.operation)) leaf_name_data.push_back(interface_statistics.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());

    auto acl_name_array_name_datas = acl_name_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), acl_name_array_name_datas.begin(), acl_name_array_name_datas.end());
    auto is_common_array_name_datas = is_common_array.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), is_common_array_name_datas.begin(), is_common_array_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::Ipv4PacketFilter::Inbound::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-name-array")
    {
        acl_name_array.append(value);
    }
    if(value_path == "common-acl-name")
    {
        common_acl_name = value;
    }
    if(value_path == "compression-level")
    {
        compression_level = value;
    }
    if(value_path == "hardware-count")
    {
        hardware_count = value;
    }
    if(value_path == "interface-statistics")
    {
        interface_statistics = value;
    }
    if(value_path == "is-common-array")
    {
        is_common_array.append(value);
    }
    if(value_path == "name")
    {
        name = value;
    }
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicies()
{
    yang_name = "service-policies"; yang_parent_name = "interface-configuration";
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::~ServicePolicies()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_data() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_data())
            return true;
    }
    return false;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::has_operation() const
{
    for (std::size_t index=0; index<service_policy.size(); index++)
    {
        if(service_policy[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:service-policies";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicies' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "service-policy")
    {
        for(auto const & c : service_policy)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy>();
        c->parent = this;
        service_policy.push_back(std::move(c));
        children[segment_path] = service_policy.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::get_children()
{
    for (auto const & c : service_policy)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::set_value(const std::string & value_path, std::string value)
{
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::ServicePolicy()
    :
    service_policy_name{YType::str, "service-policy-name"}
{
    yang_name = "service-policy"; yang_parent_name = "service-policies";
}

InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::~ServicePolicy()
{
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_data() const
{
    return service_policy_name.is_set;
}

bool InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(service_policy_name.operation);
}

std::string InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy" <<"[service-policy-name='" <<service_policy_name <<"']";

    return path_buffer.str();

}

EntityPath InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XR_ifmgr_cfg cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_policy_name.is_set || is_set(service_policy_name.operation)) leaf_name_data.push_back(service_policy_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::get_children()
{
    return children;
}

void InterfaceConfigurations::InterfaceConfiguration::ServicePolicies::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "service-policy-name")
    {
        service_policy_name = value;
    }
}


}
}

