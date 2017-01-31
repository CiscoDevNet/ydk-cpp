
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_policymgr_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_policymgr_cfg {

PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::DestinationAddressIpv4()
    :
    	address{YType::str, "address"},
	 netmask{YType::str, "netmask"}
{
    yang_name = "destination-address-ipv4"; yang_parent_name = "match";
}

PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::~DestinationAddressIpv4()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address-ipv4" <<"[address='" <<address.get() <<"']" <<"[netmask='" <<netmask.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
}

PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::DestinationAddressIpv6()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "destination-address-ipv6"; yang_parent_name = "match";
}

PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::~DestinationAddressIpv6()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address-ipv6" <<"[address='" <<address.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::SourceAddressIpv4()
    :
    	address{YType::str, "address"},
	 netmask{YType::str, "netmask"}
{
    yang_name = "source-address-ipv4"; yang_parent_name = "match";
}

PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::~SourceAddressIpv4()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-ipv4" <<"[address='" <<address.get() <<"']" <<"[netmask='" <<netmask.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
}

PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::SourceAddressIpv6()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "source-address-ipv6"; yang_parent_name = "match";
}

PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::~SourceAddressIpv6()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-ipv6" <<"[address='" <<address.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

PolicyManager::ClassMaps::ClassMap::Match::DomainName::DomainName()
    :
    	format{YType::str, "format"},
	 name{YType::str, "name"}
{
    yang_name = "domain-name"; yang_parent_name = "match";
}

PolicyManager::ClassMaps::ClassMap::Match::DomainName::~DomainName()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainName::has_data() const
{
    return format.is_set
	|| name.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainName::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(name.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name" <<"[format='" <<format.get() <<"']" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::DomainName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::DomainName::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DomainName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::DomainNameRegex()
    :
    	format{YType::str, "format"},
	 regex{YType::str, "regex"}
{
    yang_name = "domain-name-regex"; yang_parent_name = "match";
}

PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::~DomainNameRegex()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::has_data() const
{
    return format.is_set
	|| regex.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(regex.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name-regex" <<"[format='" <<format.get() <<"']" <<"[regex='" <<regex.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (regex.is_set || is_set(regex.operation)) leaf_name_data.push_back(regex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "regex")
    {
        regex = value;
    }
}

PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::FlowCache()
    :
    	idle_timeout{YType::str, "idle-timeout"}
{
    yang_name = "flow-cache"; yang_parent_name = "flow";
}

PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::~FlowCache()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::has_data() const
{
    return idle_timeout.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::has_operation() const
{
    return is_set(operation)
	|| is_set(idle_timeout.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-cache";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (idle_timeout.is_set || is_set(idle_timeout.operation)) leaf_name_data.push_back(idle_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "idle-timeout")
    {
        idle_timeout = value;
    }
}

PolicyManager::ClassMaps::ClassMap::Match::Flow::Flow()
    :
    	flow_key{YType::str, "flow-key"}
    	,
    flow_cache(std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache>())
{
    flow_cache->parent = this;
    children["flow-cache"] = flow_cache.get();

    yang_name = "flow"; yang_parent_name = "match";
}

PolicyManager::ClassMaps::ClassMap::Match::Flow::~Flow()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::has_data() const
{
    for (auto const & leaf : flow_key.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return (flow_cache !=  nullptr && flow_cache->has_data());
}

bool PolicyManager::ClassMaps::ClassMap::Match::Flow::has_operation() const
{
    for (auto const & leaf : flow_key.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(flow_key.operation)
	|| (flow_cache !=  nullptr && flow_cache->has_operation());
}

std::string PolicyManager::ClassMaps::ClassMap::Match::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto flow_key_name_datas = flow_key.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flow_key_name_datas.begin(), flow_key_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-cache")
    {
        if(flow_cache != nullptr)
        {
            children["flow-cache"] = flow_cache.get();
        }
        else
        {
            flow_cache = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::Flow::FlowCache>();
            flow_cache->parent = this;
            children["flow-cache"] = flow_cache.get();
        }
        return children.at("flow-cache");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::Flow::get_children()
{
    if(children.find("flow-cache") == children.end())
    {
        if(flow_cache != nullptr)
        {
            children["flow-cache"] = flow_cache.get();
        }
    }

    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-key")
    {
        flow_key.append(value);
    }
}

PolicyManager::ClassMaps::ClassMap::Match::Match()
    :
    	atm_clp{YType::uint8, "atm-clp"},
	 atm_oam{YType::empty, "atm-oam"},
	 authen_status{YType::str, "authen-status"},
	 cac_admit{YType::empty, "cac-admit"},
	 cac_unadmit{YType::empty, "cac-unadmit"},
	 circuit_id{YType::str, "circuit-id"},
	 circuit_id_regex{YType::str, "circuit-id-regex"},
	 cos{YType::uint8, "cos"},
	 dei{YType::uint8, "dei"},
	 dei_inner{YType::uint8, "dei-inner"},
	 destination_mac{YType::str, "destination-mac"},
	 destination_port{YType::str, "destination-port"},
	 dhcp_client_id{YType::str, "dhcp-client-id"},
	 dhcp_client_id_regex{YType::str, "dhcp-client-id-regex"},
	 discard_class{YType::uint8, "discard-class"},
	 dscp{YType::str, "dscp"},
	 ethernet_services_acl{YType::str, "ethernet-services-acl"},
	 ethertype{YType::str, "ethertype"},
	 flow_tag{YType::str, "flow-tag"},
	 fr_de{YType::uint8, "fr-de"},
	 fragment_type{YType::str, "fragment-type"},
	 frame_relay_dlci{YType::str, "frame-relay-dlci"},
	 icmpv4_code{YType::str, "icmpv4-code"},
	 icmpv4_type{YType::str, "icmpv4-type"},
	 icmpv6_code{YType::str, "icmpv6-code"},
	 icmpv6_type{YType::str, "icmpv6-type"},
	 inner_cos{YType::uint8, "inner-cos"},
	 inner_vlan{YType::str, "inner-vlan"},
	 ipv4_acl{YType::str, "ipv4-acl"},
	 ipv4_dscp{YType::str, "ipv4-dscp"},
	 ipv4_packet_length{YType::str, "ipv4-packet-length"},
	 ipv4_precedence{YType::str, "ipv4-precedence"},
	 ipv6_acl{YType::str, "ipv6-acl"},
	 ipv6_dscp{YType::str, "ipv6-dscp"},
	 ipv6_packet_length{YType::str, "ipv6-packet-length"},
	 ipv6_precedence{YType::str, "ipv6-precedence"},
	 mpls_disposition_ipv4_access_list{YType::str, "mpls-disposition-ipv4-access-list"},
	 mpls_disposition_ipv6_access_list{YType::str, "mpls-disposition-ipv6-access-list"},
	 mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
	 mpls_experimental_topmost{YType::uint8, "mpls-experimental-topmost"},
	 packet_length{YType::str, "packet-length"},
	 precedence{YType::str, "precedence"},
	 protocol{YType::str, "protocol"},
	 qos_group{YType::str, "qos-group"},
	 remote_id{YType::str, "remote-id"},
	 remote_id_regex{YType::str, "remote-id-regex"},
	 service_name{YType::str, "service-name"},
	 service_name_regex{YType::str, "service-name-regex"},
	 source_mac{YType::str, "source-mac"},
	 source_port{YType::str, "source-port"},
	 tcp_flag{YType::uint16, "tcp-flag"},
	 timer{YType::str, "timer"},
	 timer_regex{YType::str, "timer-regex"},
	 traffic_class{YType::str, "traffic-class"},
	 user_name{YType::str, "user-name"},
	 user_name_regex{YType::str, "user-name-regex"},
	 vlan{YType::str, "vlan"},
	 vpls_broadcast{YType::empty, "vpls-broadcast"},
	 vpls_control{YType::empty, "vpls-control"},
	 vpls_known{YType::empty, "vpls-known"},
	 vpls_multicast{YType::empty, "vpls-multicast"},
	 vpls_unknown{YType::empty, "vpls-unknown"}
    	,
    flow(std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::Flow>())
{
    flow->parent = this;
    children["flow"] = flow.get();

    yang_name = "match"; yang_parent_name = "class-map";
}

PolicyManager::ClassMaps::ClassMap::Match::~Match()
{
}

bool PolicyManager::ClassMaps::ClassMap::Match::has_data() const
{
    for (std::size_t index=0; index<destination_address_ipv4.size(); index++)
    {
        if(destination_address_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination_address_ipv6.size(); index++)
    {
        if(destination_address_ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain_name_regex.size(); index++)
    {
        if(domain_name_regex[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv4.size(); index++)
    {
        if(source_address_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv6.size(); index++)
    {
        if(source_address_ipv6[index]->has_data())
            return true;
    }
    for (auto const & leaf : circuit_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : circuit_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dhcp_client_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dhcp_client_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ethertype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fragment_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : frame_relay_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv4_code.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv4_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv6_code.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv6_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inner_cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inner_vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_experimental_imposition.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_experimental_topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_name_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : source_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : timer.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : timer_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : traffic_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : user_name_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return atm_clp.is_set
	|| atm_oam.is_set
	|| authen_status.is_set
	|| cac_admit.is_set
	|| cac_unadmit.is_set
	|| dei.is_set
	|| dei_inner.is_set
	|| destination_mac.is_set
	|| ethernet_services_acl.is_set
	|| fr_de.is_set
	|| ipv4_acl.is_set
	|| ipv6_acl.is_set
	|| mpls_disposition_ipv4_access_list.is_set
	|| mpls_disposition_ipv6_access_list.is_set
	|| source_mac.is_set
	|| tcp_flag.is_set
	|| vpls_broadcast.is_set
	|| vpls_control.is_set
	|| vpls_known.is_set
	|| vpls_multicast.is_set
	|| vpls_unknown.is_set
	|| (flow !=  nullptr && flow->has_data());
}

bool PolicyManager::ClassMaps::ClassMap::Match::has_operation() const
{
    for (std::size_t index=0; index<destination_address_ipv4.size(); index++)
    {
        if(destination_address_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination_address_ipv6.size(); index++)
    {
        if(destination_address_ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain_name_regex.size(); index++)
    {
        if(domain_name_regex[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv4.size(); index++)
    {
        if(source_address_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv6.size(); index++)
    {
        if(source_address_ipv6[index]->has_operation())
            return true;
    }
    for (auto const & leaf : circuit_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : circuit_id_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : destination_port.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dhcp_client_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dhcp_client_id_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ethertype.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : fragment_type.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : frame_relay_dlci.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : icmpv4_code.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : icmpv4_type.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : icmpv6_code.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : icmpv6_type.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : inner_cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : inner_vlan.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv4_dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv4_packet_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv4_precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv6_dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv6_packet_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv6_precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mpls_experimental_imposition.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mpls_experimental_topmost.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_id_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : service_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : service_name_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : source_port.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : timer.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : timer_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : traffic_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : user_name_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(atm_clp.operation)
	|| is_set(atm_oam.operation)
	|| is_set(authen_status.operation)
	|| is_set(cac_admit.operation)
	|| is_set(cac_unadmit.operation)
	|| is_set(circuit_id.operation)
	|| is_set(circuit_id_regex.operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(dei_inner.operation)
	|| is_set(destination_mac.operation)
	|| is_set(destination_port.operation)
	|| is_set(dhcp_client_id.operation)
	|| is_set(dhcp_client_id_regex.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(ethernet_services_acl.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fr_de.operation)
	|| is_set(fragment_type.operation)
	|| is_set(frame_relay_dlci.operation)
	|| is_set(icmpv4_code.operation)
	|| is_set(icmpv4_type.operation)
	|| is_set(icmpv6_code.operation)
	|| is_set(icmpv6_type.operation)
	|| is_set(inner_cos.operation)
	|| is_set(inner_vlan.operation)
	|| is_set(ipv4_acl.operation)
	|| is_set(ipv4_dscp.operation)
	|| is_set(ipv4_packet_length.operation)
	|| is_set(ipv4_precedence.operation)
	|| is_set(ipv6_acl.operation)
	|| is_set(ipv6_dscp.operation)
	|| is_set(ipv6_packet_length.operation)
	|| is_set(ipv6_precedence.operation)
	|| is_set(mpls_disposition_ipv4_access_list.operation)
	|| is_set(mpls_disposition_ipv6_access_list.operation)
	|| is_set(mpls_experimental_imposition.operation)
	|| is_set(mpls_experimental_topmost.operation)
	|| is_set(packet_length.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(qos_group.operation)
	|| is_set(remote_id.operation)
	|| is_set(remote_id_regex.operation)
	|| is_set(service_name.operation)
	|| is_set(service_name_regex.operation)
	|| is_set(source_mac.operation)
	|| is_set(source_port.operation)
	|| is_set(tcp_flag.operation)
	|| is_set(timer.operation)
	|| is_set(timer_regex.operation)
	|| is_set(traffic_class.operation)
	|| is_set(user_name.operation)
	|| is_set(user_name_regex.operation)
	|| is_set(vlan.operation)
	|| is_set(vpls_broadcast.operation)
	|| is_set(vpls_control.operation)
	|| is_set(vpls_known.operation)
	|| is_set(vpls_multicast.operation)
	|| is_set(vpls_unknown.operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string PolicyManager::ClassMaps::ClassMap::Match::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::Match::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_clp.is_set || is_set(atm_clp.operation)) leaf_name_data.push_back(atm_clp.get_name_leafdata());
    if (atm_oam.is_set || is_set(atm_oam.operation)) leaf_name_data.push_back(atm_oam.get_name_leafdata());
    if (authen_status.is_set || is_set(authen_status.operation)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (cac_admit.is_set || is_set(cac_admit.operation)) leaf_name_data.push_back(cac_admit.get_name_leafdata());
    if (cac_unadmit.is_set || is_set(cac_unadmit.operation)) leaf_name_data.push_back(cac_unadmit.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_inner.is_set || is_set(dei_inner.operation)) leaf_name_data.push_back(dei_inner.get_name_leafdata());
    if (destination_mac.is_set || is_set(destination_mac.operation)) leaf_name_data.push_back(destination_mac.get_name_leafdata());
    if (ethernet_services_acl.is_set || is_set(ethernet_services_acl.operation)) leaf_name_data.push_back(ethernet_services_acl.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (ipv4_acl.is_set || is_set(ipv4_acl.operation)) leaf_name_data.push_back(ipv4_acl.get_name_leafdata());
    if (ipv6_acl.is_set || is_set(ipv6_acl.operation)) leaf_name_data.push_back(ipv6_acl.get_name_leafdata());
    if (mpls_disposition_ipv4_access_list.is_set || is_set(mpls_disposition_ipv4_access_list.operation)) leaf_name_data.push_back(mpls_disposition_ipv4_access_list.get_name_leafdata());
    if (mpls_disposition_ipv6_access_list.is_set || is_set(mpls_disposition_ipv6_access_list.operation)) leaf_name_data.push_back(mpls_disposition_ipv6_access_list.get_name_leafdata());
    if (source_mac.is_set || is_set(source_mac.operation)) leaf_name_data.push_back(source_mac.get_name_leafdata());
    if (tcp_flag.is_set || is_set(tcp_flag.operation)) leaf_name_data.push_back(tcp_flag.get_name_leafdata());
    if (vpls_broadcast.is_set || is_set(vpls_broadcast.operation)) leaf_name_data.push_back(vpls_broadcast.get_name_leafdata());
    if (vpls_control.is_set || is_set(vpls_control.operation)) leaf_name_data.push_back(vpls_control.get_name_leafdata());
    if (vpls_known.is_set || is_set(vpls_known.operation)) leaf_name_data.push_back(vpls_known.get_name_leafdata());
    if (vpls_multicast.is_set || is_set(vpls_multicast.operation)) leaf_name_data.push_back(vpls_multicast.get_name_leafdata());
    if (vpls_unknown.is_set || is_set(vpls_unknown.operation)) leaf_name_data.push_back(vpls_unknown.get_name_leafdata());

    auto circuit_id_name_datas = circuit_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), circuit_id_name_datas.begin(), circuit_id_name_datas.end());
    auto circuit_id_regex_name_datas = circuit_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), circuit_id_regex_name_datas.begin(), circuit_id_regex_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto destination_port_name_datas = destination_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_port_name_datas.begin(), destination_port_name_datas.end());
    auto dhcp_client_id_name_datas = dhcp_client_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dhcp_client_id_name_datas.begin(), dhcp_client_id_name_datas.end());
    auto dhcp_client_id_regex_name_datas = dhcp_client_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dhcp_client_id_regex_name_datas.begin(), dhcp_client_id_regex_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto ethertype_name_datas = ethertype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethertype_name_datas.begin(), ethertype_name_datas.end());
    auto flow_tag_name_datas = flow_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flow_tag_name_datas.begin(), flow_tag_name_datas.end());
    auto fragment_type_name_datas = fragment_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fragment_type_name_datas.begin(), fragment_type_name_datas.end());
    auto frame_relay_dlci_name_datas = frame_relay_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), frame_relay_dlci_name_datas.begin(), frame_relay_dlci_name_datas.end());
    auto icmpv4_code_name_datas = icmpv4_code.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv4_code_name_datas.begin(), icmpv4_code_name_datas.end());
    auto icmpv4_type_name_datas = icmpv4_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv4_type_name_datas.begin(), icmpv4_type_name_datas.end());
    auto icmpv6_code_name_datas = icmpv6_code.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv6_code_name_datas.begin(), icmpv6_code_name_datas.end());
    auto icmpv6_type_name_datas = icmpv6_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv6_type_name_datas.begin(), icmpv6_type_name_datas.end());
    auto inner_cos_name_datas = inner_cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_cos_name_datas.begin(), inner_cos_name_datas.end());
    auto inner_vlan_name_datas = inner_vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_vlan_name_datas.begin(), inner_vlan_name_datas.end());
    auto ipv4_dscp_name_datas = ipv4_dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_dscp_name_datas.begin(), ipv4_dscp_name_datas.end());
    auto ipv4_packet_length_name_datas = ipv4_packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_packet_length_name_datas.begin(), ipv4_packet_length_name_datas.end());
    auto ipv4_precedence_name_datas = ipv4_precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_precedence_name_datas.begin(), ipv4_precedence_name_datas.end());
    auto ipv6_dscp_name_datas = ipv6_dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_dscp_name_datas.begin(), ipv6_dscp_name_datas.end());
    auto ipv6_packet_length_name_datas = ipv6_packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_packet_length_name_datas.begin(), ipv6_packet_length_name_datas.end());
    auto ipv6_precedence_name_datas = ipv6_precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_precedence_name_datas.begin(), ipv6_precedence_name_datas.end());
    auto mpls_experimental_imposition_name_datas = mpls_experimental_imposition.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_experimental_imposition_name_datas.begin(), mpls_experimental_imposition_name_datas.end());
    auto mpls_experimental_topmost_name_datas = mpls_experimental_topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_experimental_topmost_name_datas.begin(), mpls_experimental_topmost_name_datas.end());
    auto packet_length_name_datas = packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_length_name_datas.begin(), packet_length_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    auto remote_id_name_datas = remote_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_id_name_datas.begin(), remote_id_name_datas.end());
    auto remote_id_regex_name_datas = remote_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_id_regex_name_datas.begin(), remote_id_regex_name_datas.end());
    auto service_name_name_datas = service_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_name_name_datas.begin(), service_name_name_datas.end());
    auto service_name_regex_name_datas = service_name_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_name_regex_name_datas.begin(), service_name_regex_name_datas.end());
    auto source_port_name_datas = source_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_port_name_datas.begin(), source_port_name_datas.end());
    auto timer_name_datas = timer.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timer_name_datas.begin(), timer_name_datas.end());
    auto timer_regex_name_datas = timer_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timer_regex_name_datas.begin(), timer_regex_name_datas.end());
    auto traffic_class_name_datas = traffic_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), traffic_class_name_datas.begin(), traffic_class_name_datas.end());
    auto user_name_name_datas = user_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_name_datas.begin(), user_name_name_datas.end());
    auto user_name_regex_name_datas = user_name_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_regex_name_datas.begin(), user_name_regex_name_datas.end());
    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::Match::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-address-ipv4")
    {
        for(auto const & c : destination_address_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv4>();
        c->parent = this;
        destination_address_ipv4.push_back(std::move(c));
        children[segment_path] = destination_address_ipv4.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-address-ipv6")
    {
        for(auto const & c : destination_address_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::DestinationAddressIpv6>();
        c->parent = this;
        destination_address_ipv6.push_back(std::move(c));
        children[segment_path] = destination_address_ipv6.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-name")
    {
        for(auto const & c : domain_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::DomainName>();
        c->parent = this;
        domain_name.push_back(std::move(c));
        children[segment_path] = domain_name.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-name-regex")
    {
        for(auto const & c : domain_name_regex)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::DomainNameRegex>();
        c->parent = this;
        domain_name_regex.push_back(std::move(c));
        children[segment_path] = domain_name_regex.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "flow")
    {
        if(flow != nullptr)
        {
            children["flow"] = flow.get();
        }
        else
        {
            flow = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::Flow>();
            flow->parent = this;
            children["flow"] = flow.get();
        }
        return children.at("flow");
    }

    if(child_yang_name == "source-address-ipv4")
    {
        for(auto const & c : source_address_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv4>();
        c->parent = this;
        source_address_ipv4.push_back(std::move(c));
        children[segment_path] = source_address_ipv4.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "source-address-ipv6")
    {
        for(auto const & c : source_address_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match::SourceAddressIpv6>();
        c->parent = this;
        source_address_ipv6.push_back(std::move(c));
        children[segment_path] = source_address_ipv6.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::Match::get_children()
{
    for (auto const & c : destination_address_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : destination_address_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : domain_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : domain_name_regex)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("flow") == children.end())
    {
        if(flow != nullptr)
        {
            children["flow"] = flow.get();
        }
    }

    for (auto const & c : source_address_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : source_address_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PolicyManager::ClassMaps::ClassMap::Match::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "atm-clp")
    {
        atm_clp = value;
    }
    if(value_path == "atm-oam")
    {
        atm_oam = value;
    }
    if(value_path == "authen-status")
    {
        authen_status = value;
    }
    if(value_path == "cac-admit")
    {
        cac_admit = value;
    }
    if(value_path == "cac-unadmit")
    {
        cac_unadmit = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.append(value);
    }
    if(value_path == "circuit-id-regex")
    {
        circuit_id_regex.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "dei-inner")
    {
        dei_inner = value;
    }
    if(value_path == "destination-mac")
    {
        destination_mac = value;
    }
    if(value_path == "destination-port")
    {
        destination_port.append(value);
    }
    if(value_path == "dhcp-client-id")
    {
        dhcp_client_id.append(value);
    }
    if(value_path == "dhcp-client-id-regex")
    {
        dhcp_client_id_regex.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "ethernet-services-acl")
    {
        ethernet_services_acl = value;
    }
    if(value_path == "ethertype")
    {
        ethertype.append(value);
    }
    if(value_path == "flow-tag")
    {
        flow_tag.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
    if(value_path == "fragment-type")
    {
        fragment_type.append(value);
    }
    if(value_path == "frame-relay-dlci")
    {
        frame_relay_dlci.append(value);
    }
    if(value_path == "icmpv4-code")
    {
        icmpv4_code.append(value);
    }
    if(value_path == "icmpv4-type")
    {
        icmpv4_type.append(value);
    }
    if(value_path == "icmpv6-code")
    {
        icmpv6_code.append(value);
    }
    if(value_path == "icmpv6-type")
    {
        icmpv6_type.append(value);
    }
    if(value_path == "inner-cos")
    {
        inner_cos.append(value);
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.append(value);
    }
    if(value_path == "ipv4-acl")
    {
        ipv4_acl = value;
    }
    if(value_path == "ipv4-dscp")
    {
        ipv4_dscp.append(value);
    }
    if(value_path == "ipv4-packet-length")
    {
        ipv4_packet_length.append(value);
    }
    if(value_path == "ipv4-precedence")
    {
        ipv4_precedence.append(value);
    }
    if(value_path == "ipv6-acl")
    {
        ipv6_acl = value;
    }
    if(value_path == "ipv6-dscp")
    {
        ipv6_dscp.append(value);
    }
    if(value_path == "ipv6-packet-length")
    {
        ipv6_packet_length.append(value);
    }
    if(value_path == "ipv6-precedence")
    {
        ipv6_precedence.append(value);
    }
    if(value_path == "mpls-disposition-ipv4-access-list")
    {
        mpls_disposition_ipv4_access_list = value;
    }
    if(value_path == "mpls-disposition-ipv6-access-list")
    {
        mpls_disposition_ipv6_access_list = value;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.append(value);
    }
    if(value_path == "mpls-experimental-topmost")
    {
        mpls_experimental_topmost.append(value);
    }
    if(value_path == "packet-length")
    {
        packet_length.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "remote-id")
    {
        remote_id.append(value);
    }
    if(value_path == "remote-id-regex")
    {
        remote_id_regex.append(value);
    }
    if(value_path == "service-name")
    {
        service_name.append(value);
    }
    if(value_path == "service-name-regex")
    {
        service_name_regex.append(value);
    }
    if(value_path == "source-mac")
    {
        source_mac = value;
    }
    if(value_path == "source-port")
    {
        source_port.append(value);
    }
    if(value_path == "tcp-flag")
    {
        tcp_flag = value;
    }
    if(value_path == "timer")
    {
        timer.append(value);
    }
    if(value_path == "timer-regex")
    {
        timer_regex.append(value);
    }
    if(value_path == "traffic-class")
    {
        traffic_class.append(value);
    }
    if(value_path == "user-name")
    {
        user_name.append(value);
    }
    if(value_path == "user-name-regex")
    {
        user_name_regex.append(value);
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
    if(value_path == "vpls-broadcast")
    {
        vpls_broadcast = value;
    }
    if(value_path == "vpls-control")
    {
        vpls_control = value;
    }
    if(value_path == "vpls-known")
    {
        vpls_known = value;
    }
    if(value_path == "vpls-multicast")
    {
        vpls_multicast = value;
    }
    if(value_path == "vpls-unknown")
    {
        vpls_unknown = value;
    }
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::DestinationAddressIpv4()
    :
    	address{YType::str, "address"},
	 netmask{YType::str, "netmask"}
{
    yang_name = "destination-address-ipv4"; yang_parent_name = "match-not";
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::~DestinationAddressIpv4()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address-ipv4" <<"[address='" <<address.get() <<"']" <<"[netmask='" <<netmask.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::DestinationAddressIpv6()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "destination-address-ipv6"; yang_parent_name = "match-not";
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::~DestinationAddressIpv6()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-address-ipv6" <<"[address='" <<address.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::SourceAddressIpv4()
    :
    	address{YType::str, "address"},
	 netmask{YType::str, "netmask"}
{
    yang_name = "source-address-ipv4"; yang_parent_name = "match-not";
}

PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::~SourceAddressIpv4()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::has_data() const
{
    return address.is_set
	|| netmask.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(netmask.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-ipv4" <<"[address='" <<address.get() <<"']" <<"[netmask='" <<netmask.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (netmask.is_set || is_set(netmask.operation)) leaf_name_data.push_back(netmask.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "netmask")
    {
        netmask = value;
    }
}

PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::SourceAddressIpv6()
    :
    	address{YType::str, "address"},
	 prefix_length{YType::uint8, "prefix-length"}
{
    yang_name = "source-address-ipv6"; yang_parent_name = "match-not";
}

PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::~SourceAddressIpv6()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::has_data() const
{
    return address.is_set
	|| prefix_length.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(prefix_length.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-address-ipv6" <<"[address='" <<address.get() <<"']" <<"[prefix-length='" <<prefix_length.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.operation)) leaf_name_data.push_back(prefix_length.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
    }
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::DomainName()
    :
    	format{YType::str, "format"},
	 name{YType::str, "name"}
{
    yang_name = "domain-name"; yang_parent_name = "match-not";
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::~DomainName()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::has_data() const
{
    return format.is_set
	|| name.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(name.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name" <<"[format='" <<format.get() <<"']" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::DomainNameRegex()
    :
    	format{YType::str, "format"},
	 regex{YType::str, "regex"}
{
    yang_name = "domain-name-regex"; yang_parent_name = "match-not";
}

PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::~DomainNameRegex()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::has_data() const
{
    return format.is_set
	|| regex.is_set;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::has_operation() const
{
    return is_set(operation)
	|| is_set(format.operation)
	|| is_set(regex.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain-name-regex" <<"[format='" <<format.get() <<"']" <<"[regex='" <<regex.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (regex.is_set || is_set(regex.operation)) leaf_name_data.push_back(regex.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "regex")
    {
        regex = value;
    }
}

PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::Flow()
    :
    	flow_tag{YType::uint16, "flow-tag"}
{
    yang_name = "flow"; yang_parent_name = "match-not";
}

PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::~Flow()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::has_data() const
{
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::has_operation() const
{
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(flow_tag.operation);
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto flow_tag_name_datas = flow_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flow_tag_name_datas.begin(), flow_tag_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::get_children()
{
    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-tag")
    {
        flow_tag.append(value);
    }
}

PolicyManager::ClassMaps::ClassMap::MatchNot::MatchNot()
    :
    	authen_status{YType::str, "authen-status"},
	 circuit_id{YType::str, "circuit-id"},
	 circuit_id_regex{YType::str, "circuit-id-regex"},
	 cos{YType::uint8, "cos"},
	 dei{YType::uint8, "dei"},
	 dei_inner{YType::uint8, "dei-inner"},
	 destination_mac{YType::str, "destination-mac"},
	 destination_port{YType::str, "destination-port"},
	 dhcp_client_id{YType::str, "dhcp-client-id"},
	 dhcp_client_id_regex{YType::str, "dhcp-client-id-regex"},
	 discard_class{YType::uint8, "discard-class"},
	 dscp{YType::str, "dscp"},
	 ethernet_services_acl{YType::str, "ethernet-services-acl"},
	 ethertype{YType::str, "ethertype"},
	 flow_tag{YType::str, "flow-tag"},
	 fr_de{YType::uint8, "fr-de"},
	 fragment_type{YType::str, "fragment-type"},
	 frame_relay_dlci{YType::str, "frame-relay-dlci"},
	 icmpv4_code{YType::str, "icmpv4-code"},
	 icmpv4_type{YType::str, "icmpv4-type"},
	 icmpv6_code{YType::str, "icmpv6-code"},
	 icmpv6_type{YType::str, "icmpv6-type"},
	 inner_cos{YType::uint8, "inner-cos"},
	 inner_vlan{YType::str, "inner-vlan"},
	 ipv4_acl{YType::str, "ipv4-acl"},
	 ipv4_dscp{YType::str, "ipv4-dscp"},
	 ipv4_packet_length{YType::str, "ipv4-packet-length"},
	 ipv4_precedence{YType::str, "ipv4-precedence"},
	 ipv6_acl{YType::str, "ipv6-acl"},
	 ipv6_dscp{YType::str, "ipv6-dscp"},
	 ipv6_packet_length{YType::str, "ipv6-packet-length"},
	 ipv6_precedence{YType::str, "ipv6-precedence"},
	 mpls_disposition_ipv4_access_list{YType::str, "mpls-disposition-ipv4-access-list"},
	 mpls_disposition_ipv6_access_list{YType::str, "mpls-disposition-ipv6-access-list"},
	 mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
	 mpls_experimental_topmost{YType::uint8, "mpls-experimental-topmost"},
	 packet_length{YType::str, "packet-length"},
	 precedence{YType::str, "precedence"},
	 protocol{YType::str, "protocol"},
	 qos_group{YType::str, "qos-group"},
	 remote_id{YType::str, "remote-id"},
	 remote_id_regex{YType::str, "remote-id-regex"},
	 service_name{YType::str, "service-name"},
	 service_name_regex{YType::str, "service-name-regex"},
	 source_mac{YType::str, "source-mac"},
	 source_port{YType::str, "source-port"},
	 tcp_flag{YType::uint16, "tcp-flag"},
	 timer{YType::str, "timer"},
	 timer_regex{YType::str, "timer-regex"},
	 traffic_class{YType::str, "traffic-class"},
	 user_name{YType::str, "user-name"},
	 user_name_regex{YType::str, "user-name-regex"},
	 vlan{YType::str, "vlan"},
	 vpls_broadcast{YType::empty, "vpls-broadcast"},
	 vpls_control{YType::empty, "vpls-control"},
	 vpls_known{YType::empty, "vpls-known"},
	 vpls_multicast{YType::empty, "vpls-multicast"},
	 vpls_unknown{YType::empty, "vpls-unknown"}
    	,
    flow(std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot::Flow>())
{
    flow->parent = this;
    children["flow"] = flow.get();

    yang_name = "match-not"; yang_parent_name = "class-map";
}

PolicyManager::ClassMaps::ClassMap::MatchNot::~MatchNot()
{
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::has_data() const
{
    for (std::size_t index=0; index<destination_address_ipv4.size(); index++)
    {
        if(destination_address_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<destination_address_ipv6.size(); index++)
    {
        if(destination_address_ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<domain_name_regex.size(); index++)
    {
        if(domain_name_regex[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv4.size(); index++)
    {
        if(source_address_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv6.size(); index++)
    {
        if(source_address_ipv6[index]->has_data())
            return true;
    }
    for (auto const & leaf : circuit_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : circuit_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : destination_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dhcp_client_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dhcp_client_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ethertype.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : fragment_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : frame_relay_dlci.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv4_code.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv4_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv6_code.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : icmpv6_type.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inner_cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : inner_vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv4_precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : ipv6_precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_experimental_imposition.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_experimental_topmost.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : packet_length.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_id.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : remote_id_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : service_name_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : source_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : timer.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : timer_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : traffic_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : user_name_regex.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return authen_status.is_set
	|| dei.is_set
	|| dei_inner.is_set
	|| destination_mac.is_set
	|| ethernet_services_acl.is_set
	|| fr_de.is_set
	|| ipv4_acl.is_set
	|| ipv6_acl.is_set
	|| mpls_disposition_ipv4_access_list.is_set
	|| mpls_disposition_ipv6_access_list.is_set
	|| source_mac.is_set
	|| tcp_flag.is_set
	|| vpls_broadcast.is_set
	|| vpls_control.is_set
	|| vpls_known.is_set
	|| vpls_multicast.is_set
	|| vpls_unknown.is_set
	|| (flow !=  nullptr && flow->has_data());
}

bool PolicyManager::ClassMaps::ClassMap::MatchNot::has_operation() const
{
    for (std::size_t index=0; index<destination_address_ipv4.size(); index++)
    {
        if(destination_address_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<destination_address_ipv6.size(); index++)
    {
        if(destination_address_ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain_name.size(); index++)
    {
        if(domain_name[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<domain_name_regex.size(); index++)
    {
        if(domain_name_regex[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv4.size(); index++)
    {
        if(source_address_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<source_address_ipv6.size(); index++)
    {
        if(source_address_ipv6[index]->has_operation())
            return true;
    }
    for (auto const & leaf : circuit_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : circuit_id_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : destination_port.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dhcp_client_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dhcp_client_id_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ethertype.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : flow_tag.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : fragment_type.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : frame_relay_dlci.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : icmpv4_code.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : icmpv4_type.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : icmpv6_code.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : icmpv6_type.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : inner_cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : inner_vlan.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv4_dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv4_packet_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv4_precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv6_dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv6_packet_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : ipv6_precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mpls_experimental_imposition.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mpls_experimental_topmost.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : packet_length.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : protocol.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : qos_group.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_id.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : remote_id_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : service_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : service_name_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : source_port.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : timer.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : timer_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : traffic_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : user_name.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : user_name_regex.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : vlan.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(authen_status.operation)
	|| is_set(circuit_id.operation)
	|| is_set(circuit_id_regex.operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(dei_inner.operation)
	|| is_set(destination_mac.operation)
	|| is_set(destination_port.operation)
	|| is_set(dhcp_client_id.operation)
	|| is_set(dhcp_client_id_regex.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(ethernet_services_acl.operation)
	|| is_set(ethertype.operation)
	|| is_set(flow_tag.operation)
	|| is_set(fr_de.operation)
	|| is_set(fragment_type.operation)
	|| is_set(frame_relay_dlci.operation)
	|| is_set(icmpv4_code.operation)
	|| is_set(icmpv4_type.operation)
	|| is_set(icmpv6_code.operation)
	|| is_set(icmpv6_type.operation)
	|| is_set(inner_cos.operation)
	|| is_set(inner_vlan.operation)
	|| is_set(ipv4_acl.operation)
	|| is_set(ipv4_dscp.operation)
	|| is_set(ipv4_packet_length.operation)
	|| is_set(ipv4_precedence.operation)
	|| is_set(ipv6_acl.operation)
	|| is_set(ipv6_dscp.operation)
	|| is_set(ipv6_packet_length.operation)
	|| is_set(ipv6_precedence.operation)
	|| is_set(mpls_disposition_ipv4_access_list.operation)
	|| is_set(mpls_disposition_ipv6_access_list.operation)
	|| is_set(mpls_experimental_imposition.operation)
	|| is_set(mpls_experimental_topmost.operation)
	|| is_set(packet_length.operation)
	|| is_set(precedence.operation)
	|| is_set(protocol.operation)
	|| is_set(qos_group.operation)
	|| is_set(remote_id.operation)
	|| is_set(remote_id_regex.operation)
	|| is_set(service_name.operation)
	|| is_set(service_name_regex.operation)
	|| is_set(source_mac.operation)
	|| is_set(source_port.operation)
	|| is_set(tcp_flag.operation)
	|| is_set(timer.operation)
	|| is_set(timer_regex.operation)
	|| is_set(traffic_class.operation)
	|| is_set(user_name.operation)
	|| is_set(user_name_regex.operation)
	|| is_set(vlan.operation)
	|| is_set(vpls_broadcast.operation)
	|| is_set(vpls_control.operation)
	|| is_set(vpls_known.operation)
	|| is_set(vpls_multicast.operation)
	|| is_set(vpls_unknown.operation)
	|| (flow !=  nullptr && flow->has_operation());
}

std::string PolicyManager::ClassMaps::ClassMap::MatchNot::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "match-not";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::MatchNot::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authen_status.is_set || is_set(authen_status.operation)) leaf_name_data.push_back(authen_status.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_inner.is_set || is_set(dei_inner.operation)) leaf_name_data.push_back(dei_inner.get_name_leafdata());
    if (destination_mac.is_set || is_set(destination_mac.operation)) leaf_name_data.push_back(destination_mac.get_name_leafdata());
    if (ethernet_services_acl.is_set || is_set(ethernet_services_acl.operation)) leaf_name_data.push_back(ethernet_services_acl.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (ipv4_acl.is_set || is_set(ipv4_acl.operation)) leaf_name_data.push_back(ipv4_acl.get_name_leafdata());
    if (ipv6_acl.is_set || is_set(ipv6_acl.operation)) leaf_name_data.push_back(ipv6_acl.get_name_leafdata());
    if (mpls_disposition_ipv4_access_list.is_set || is_set(mpls_disposition_ipv4_access_list.operation)) leaf_name_data.push_back(mpls_disposition_ipv4_access_list.get_name_leafdata());
    if (mpls_disposition_ipv6_access_list.is_set || is_set(mpls_disposition_ipv6_access_list.operation)) leaf_name_data.push_back(mpls_disposition_ipv6_access_list.get_name_leafdata());
    if (source_mac.is_set || is_set(source_mac.operation)) leaf_name_data.push_back(source_mac.get_name_leafdata());
    if (tcp_flag.is_set || is_set(tcp_flag.operation)) leaf_name_data.push_back(tcp_flag.get_name_leafdata());
    if (vpls_broadcast.is_set || is_set(vpls_broadcast.operation)) leaf_name_data.push_back(vpls_broadcast.get_name_leafdata());
    if (vpls_control.is_set || is_set(vpls_control.operation)) leaf_name_data.push_back(vpls_control.get_name_leafdata());
    if (vpls_known.is_set || is_set(vpls_known.operation)) leaf_name_data.push_back(vpls_known.get_name_leafdata());
    if (vpls_multicast.is_set || is_set(vpls_multicast.operation)) leaf_name_data.push_back(vpls_multicast.get_name_leafdata());
    if (vpls_unknown.is_set || is_set(vpls_unknown.operation)) leaf_name_data.push_back(vpls_unknown.get_name_leafdata());

    auto circuit_id_name_datas = circuit_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), circuit_id_name_datas.begin(), circuit_id_name_datas.end());
    auto circuit_id_regex_name_datas = circuit_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), circuit_id_regex_name_datas.begin(), circuit_id_regex_name_datas.end());
    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto destination_port_name_datas = destination_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), destination_port_name_datas.begin(), destination_port_name_datas.end());
    auto dhcp_client_id_name_datas = dhcp_client_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dhcp_client_id_name_datas.begin(), dhcp_client_id_name_datas.end());
    auto dhcp_client_id_regex_name_datas = dhcp_client_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dhcp_client_id_regex_name_datas.begin(), dhcp_client_id_regex_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto ethertype_name_datas = ethertype.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ethertype_name_datas.begin(), ethertype_name_datas.end());
    auto flow_tag_name_datas = flow_tag.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), flow_tag_name_datas.begin(), flow_tag_name_datas.end());
    auto fragment_type_name_datas = fragment_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), fragment_type_name_datas.begin(), fragment_type_name_datas.end());
    auto frame_relay_dlci_name_datas = frame_relay_dlci.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), frame_relay_dlci_name_datas.begin(), frame_relay_dlci_name_datas.end());
    auto icmpv4_code_name_datas = icmpv4_code.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv4_code_name_datas.begin(), icmpv4_code_name_datas.end());
    auto icmpv4_type_name_datas = icmpv4_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv4_type_name_datas.begin(), icmpv4_type_name_datas.end());
    auto icmpv6_code_name_datas = icmpv6_code.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv6_code_name_datas.begin(), icmpv6_code_name_datas.end());
    auto icmpv6_type_name_datas = icmpv6_type.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), icmpv6_type_name_datas.begin(), icmpv6_type_name_datas.end());
    auto inner_cos_name_datas = inner_cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_cos_name_datas.begin(), inner_cos_name_datas.end());
    auto inner_vlan_name_datas = inner_vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), inner_vlan_name_datas.begin(), inner_vlan_name_datas.end());
    auto ipv4_dscp_name_datas = ipv4_dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_dscp_name_datas.begin(), ipv4_dscp_name_datas.end());
    auto ipv4_packet_length_name_datas = ipv4_packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_packet_length_name_datas.begin(), ipv4_packet_length_name_datas.end());
    auto ipv4_precedence_name_datas = ipv4_precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv4_precedence_name_datas.begin(), ipv4_precedence_name_datas.end());
    auto ipv6_dscp_name_datas = ipv6_dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_dscp_name_datas.begin(), ipv6_dscp_name_datas.end());
    auto ipv6_packet_length_name_datas = ipv6_packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_packet_length_name_datas.begin(), ipv6_packet_length_name_datas.end());
    auto ipv6_precedence_name_datas = ipv6_precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), ipv6_precedence_name_datas.begin(), ipv6_precedence_name_datas.end());
    auto mpls_experimental_imposition_name_datas = mpls_experimental_imposition.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_experimental_imposition_name_datas.begin(), mpls_experimental_imposition_name_datas.end());
    auto mpls_experimental_topmost_name_datas = mpls_experimental_topmost.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_experimental_topmost_name_datas.begin(), mpls_experimental_topmost_name_datas.end());
    auto packet_length_name_datas = packet_length.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), packet_length_name_datas.begin(), packet_length_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());
    auto protocol_name_datas = protocol.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), protocol_name_datas.begin(), protocol_name_datas.end());
    auto qos_group_name_datas = qos_group.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), qos_group_name_datas.begin(), qos_group_name_datas.end());
    auto remote_id_name_datas = remote_id.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_id_name_datas.begin(), remote_id_name_datas.end());
    auto remote_id_regex_name_datas = remote_id_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), remote_id_regex_name_datas.begin(), remote_id_regex_name_datas.end());
    auto service_name_name_datas = service_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_name_name_datas.begin(), service_name_name_datas.end());
    auto service_name_regex_name_datas = service_name_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), service_name_regex_name_datas.begin(), service_name_regex_name_datas.end());
    auto source_port_name_datas = source_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), source_port_name_datas.begin(), source_port_name_datas.end());
    auto timer_name_datas = timer.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timer_name_datas.begin(), timer_name_datas.end());
    auto timer_regex_name_datas = timer_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), timer_regex_name_datas.begin(), timer_regex_name_datas.end());
    auto traffic_class_name_datas = traffic_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), traffic_class_name_datas.begin(), traffic_class_name_datas.end());
    auto user_name_name_datas = user_name.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_name_datas.begin(), user_name_name_datas.end());
    auto user_name_regex_name_datas = user_name_regex.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), user_name_regex_name_datas.begin(), user_name_regex_name_datas.end());
    auto vlan_name_datas = vlan.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), vlan_name_datas.begin(), vlan_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::MatchNot::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-address-ipv4")
    {
        for(auto const & c : destination_address_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv4>();
        c->parent = this;
        destination_address_ipv4.push_back(std::move(c));
        children[segment_path] = destination_address_ipv4.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-address-ipv6")
    {
        for(auto const & c : destination_address_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot::DestinationAddressIpv6>();
        c->parent = this;
        destination_address_ipv6.push_back(std::move(c));
        children[segment_path] = destination_address_ipv6.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-name")
    {
        for(auto const & c : domain_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot::DomainName>();
        c->parent = this;
        domain_name.push_back(std::move(c));
        children[segment_path] = domain_name.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "domain-name-regex")
    {
        for(auto const & c : domain_name_regex)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot::DomainNameRegex>();
        c->parent = this;
        domain_name_regex.push_back(std::move(c));
        children[segment_path] = domain_name_regex.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "flow")
    {
        if(flow != nullptr)
        {
            children["flow"] = flow.get();
        }
        else
        {
            flow = std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot::Flow>();
            flow->parent = this;
            children["flow"] = flow.get();
        }
        return children.at("flow");
    }

    if(child_yang_name == "source-address-ipv4")
    {
        for(auto const & c : source_address_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv4>();
        c->parent = this;
        source_address_ipv4.push_back(std::move(c));
        children[segment_path] = source_address_ipv4.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "source-address-ipv6")
    {
        for(auto const & c : source_address_ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot::SourceAddressIpv6>();
        c->parent = this;
        source_address_ipv6.push_back(std::move(c));
        children[segment_path] = source_address_ipv6.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::MatchNot::get_children()
{
    for (auto const & c : destination_address_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : destination_address_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : domain_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : domain_name_regex)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("flow") == children.end())
    {
        if(flow != nullptr)
        {
            children["flow"] = flow.get();
        }
    }

    for (auto const & c : source_address_ipv4)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : source_address_ipv6)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PolicyManager::ClassMaps::ClassMap::MatchNot::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authen-status")
    {
        authen_status = value;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.append(value);
    }
    if(value_path == "circuit-id-regex")
    {
        circuit_id_regex.append(value);
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "dei-inner")
    {
        dei_inner = value;
    }
    if(value_path == "destination-mac")
    {
        destination_mac = value;
    }
    if(value_path == "destination-port")
    {
        destination_port.append(value);
    }
    if(value_path == "dhcp-client-id")
    {
        dhcp_client_id.append(value);
    }
    if(value_path == "dhcp-client-id-regex")
    {
        dhcp_client_id_regex.append(value);
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "ethernet-services-acl")
    {
        ethernet_services_acl = value;
    }
    if(value_path == "ethertype")
    {
        ethertype.append(value);
    }
    if(value_path == "flow-tag")
    {
        flow_tag.append(value);
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
    if(value_path == "fragment-type")
    {
        fragment_type.append(value);
    }
    if(value_path == "frame-relay-dlci")
    {
        frame_relay_dlci.append(value);
    }
    if(value_path == "icmpv4-code")
    {
        icmpv4_code.append(value);
    }
    if(value_path == "icmpv4-type")
    {
        icmpv4_type.append(value);
    }
    if(value_path == "icmpv6-code")
    {
        icmpv6_code.append(value);
    }
    if(value_path == "icmpv6-type")
    {
        icmpv6_type.append(value);
    }
    if(value_path == "inner-cos")
    {
        inner_cos.append(value);
    }
    if(value_path == "inner-vlan")
    {
        inner_vlan.append(value);
    }
    if(value_path == "ipv4-acl")
    {
        ipv4_acl = value;
    }
    if(value_path == "ipv4-dscp")
    {
        ipv4_dscp.append(value);
    }
    if(value_path == "ipv4-packet-length")
    {
        ipv4_packet_length.append(value);
    }
    if(value_path == "ipv4-precedence")
    {
        ipv4_precedence.append(value);
    }
    if(value_path == "ipv6-acl")
    {
        ipv6_acl = value;
    }
    if(value_path == "ipv6-dscp")
    {
        ipv6_dscp.append(value);
    }
    if(value_path == "ipv6-packet-length")
    {
        ipv6_packet_length.append(value);
    }
    if(value_path == "ipv6-precedence")
    {
        ipv6_precedence.append(value);
    }
    if(value_path == "mpls-disposition-ipv4-access-list")
    {
        mpls_disposition_ipv4_access_list = value;
    }
    if(value_path == "mpls-disposition-ipv6-access-list")
    {
        mpls_disposition_ipv6_access_list = value;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition.append(value);
    }
    if(value_path == "mpls-experimental-topmost")
    {
        mpls_experimental_topmost.append(value);
    }
    if(value_path == "packet-length")
    {
        packet_length.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
    if(value_path == "protocol")
    {
        protocol.append(value);
    }
    if(value_path == "qos-group")
    {
        qos_group.append(value);
    }
    if(value_path == "remote-id")
    {
        remote_id.append(value);
    }
    if(value_path == "remote-id-regex")
    {
        remote_id_regex.append(value);
    }
    if(value_path == "service-name")
    {
        service_name.append(value);
    }
    if(value_path == "service-name-regex")
    {
        service_name_regex.append(value);
    }
    if(value_path == "source-mac")
    {
        source_mac = value;
    }
    if(value_path == "source-port")
    {
        source_port.append(value);
    }
    if(value_path == "tcp-flag")
    {
        tcp_flag = value;
    }
    if(value_path == "timer")
    {
        timer.append(value);
    }
    if(value_path == "timer-regex")
    {
        timer_regex.append(value);
    }
    if(value_path == "traffic-class")
    {
        traffic_class.append(value);
    }
    if(value_path == "user-name")
    {
        user_name.append(value);
    }
    if(value_path == "user-name-regex")
    {
        user_name_regex.append(value);
    }
    if(value_path == "vlan")
    {
        vlan.append(value);
    }
    if(value_path == "vpls-broadcast")
    {
        vpls_broadcast = value;
    }
    if(value_path == "vpls-control")
    {
        vpls_control = value;
    }
    if(value_path == "vpls-known")
    {
        vpls_known = value;
    }
    if(value_path == "vpls-multicast")
    {
        vpls_multicast = value;
    }
    if(value_path == "vpls-unknown")
    {
        vpls_unknown = value;
    }
}

PolicyManager::ClassMaps::ClassMap::ClassMap()
    :
    	name{YType::str, "name"},
	 type{YType::enumeration, "type"},
	 class_map_mode_match_all{YType::empty, "class-map-mode-match-all"},
	 class_map_mode_match_any{YType::empty, "class-map-mode-match-any"},
	 description{YType::str, "description"}
    	,
    match(std::make_unique<PolicyManager::ClassMaps::ClassMap::Match>())
	,match_not(std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot>())
{
    match->parent = this;
    children["match"] = match.get();

    match_not->parent = this;
    children["match-not"] = match_not.get();

    yang_name = "class-map"; yang_parent_name = "class-maps";
}

PolicyManager::ClassMaps::ClassMap::~ClassMap()
{
}

bool PolicyManager::ClassMaps::ClassMap::has_data() const
{
    return name.is_set
	|| type.is_set
	|| class_map_mode_match_all.is_set
	|| class_map_mode_match_any.is_set
	|| description.is_set
	|| (match !=  nullptr && match->has_data())
	|| (match_not !=  nullptr && match_not->has_data());
}

bool PolicyManager::ClassMaps::ClassMap::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(type.operation)
	|| is_set(class_map_mode_match_all.operation)
	|| is_set(class_map_mode_match_any.operation)
	|| is_set(description.operation)
	|| (match !=  nullptr && match->has_operation())
	|| (match_not !=  nullptr && match_not->has_operation());
}

std::string PolicyManager::ClassMaps::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[name='" <<name.get() <<"']" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::ClassMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager/class-maps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (class_map_mode_match_all.is_set || is_set(class_map_mode_match_all.operation)) leaf_name_data.push_back(class_map_mode_match_all.get_name_leafdata());
    if (class_map_mode_match_any.is_set || is_set(class_map_mode_match_any.operation)) leaf_name_data.push_back(class_map_mode_match_any.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "match")
    {
        if(match != nullptr)
        {
            children["match"] = match.get();
        }
        else
        {
            match = std::make_unique<PolicyManager::ClassMaps::ClassMap::Match>();
            match->parent = this;
            children["match"] = match.get();
        }
        return children.at("match");
    }

    if(child_yang_name == "match-not")
    {
        if(match_not != nullptr)
        {
            children["match-not"] = match_not.get();
        }
        else
        {
            match_not = std::make_unique<PolicyManager::ClassMaps::ClassMap::MatchNot>();
            match_not->parent = this;
            children["match-not"] = match_not.get();
        }
        return children.at("match-not");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::ClassMaps::ClassMap::get_children()
{
    if(children.find("match") == children.end())
    {
        if(match != nullptr)
        {
            children["match"] = match.get();
        }
    }

    if(children.find("match-not") == children.end())
    {
        if(match_not != nullptr)
        {
            children["match-not"] = match_not.get();
        }
    }

    return children;
}

void PolicyManager::ClassMaps::ClassMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "class-map-mode-match-all")
    {
        class_map_mode_match_all = value;
    }
    if(value_path == "class-map-mode-match-any")
    {
        class_map_mode_match_any = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

PolicyManager::ClassMaps::ClassMaps()
{
    yang_name = "class-maps"; yang_parent_name = "policy-manager";
}

PolicyManager::ClassMaps::~ClassMaps()
{
}

bool PolicyManager::ClassMaps::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::ClassMaps::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::ClassMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-maps";

    return path_buffer.str();

}

EntityPath PolicyManager::ClassMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::ClassMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::ClassMaps::ClassMap>();
        c->parent = this;
        class_map.push_back(std::move(c));
        children[segment_path] = class_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::ClassMaps::get_children()
{
    for (auto const & c : class_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PolicyManager::ClassMaps::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::ActivateDynamicTemplate()
    :
    	aaa_list{YType::str, "aaa-list"},
	 name{YType::str, "name"}
{
    yang_name = "activate-dynamic-template"; yang_parent_name = "action-rule";
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::~ActivateDynamicTemplate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::has_data() const
{
    return aaa_list.is_set
	|| name.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list.operation)
	|| is_set(name.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activate-dynamic-template";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list.is_set || is_set(aaa_list.operation)) leaf_name_data.push_back(aaa_list.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list")
    {
        aaa_list = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::Authenticate()
    :
    	aaa_list{YType::str, "aaa-list"}
{
    yang_name = "authenticate"; yang_parent_name = "action-rule";
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::~Authenticate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::has_data() const
{
    return aaa_list.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authenticate";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list.is_set || is_set(aaa_list.operation)) leaf_name_data.push_back(aaa_list.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list")
    {
        aaa_list = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::Authorize()
    :
    	aaa_list{YType::str, "aaa-list"},
	 format{YType::str, "format"},
	 identifier{YType::enumeration, "identifier"},
	 password{YType::str, "password"}
{
    yang_name = "authorize"; yang_parent_name = "action-rule";
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::~Authorize()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::has_data() const
{
    return aaa_list.is_set
	|| format.is_set
	|| identifier.is_set
	|| password.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list.operation)
	|| is_set(format.operation)
	|| is_set(identifier.operation)
	|| is_set(password.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorize";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list.is_set || is_set(aaa_list.operation)) leaf_name_data.push_back(aaa_list.get_name_leafdata());
    if (format.is_set || is_set(format.operation)) leaf_name_data.push_back(format.get_name_leafdata());
    if (identifier.is_set || is_set(identifier.operation)) leaf_name_data.push_back(identifier.get_name_leafdata());
    if (password.is_set || is_set(password.operation)) leaf_name_data.push_back(password.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list")
    {
        aaa_list = value;
    }
    if(value_path == "format")
    {
        format = value;
    }
    if(value_path == "identifier")
    {
        identifier = value;
    }
    if(value_path == "password")
    {
        password = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::DeactivateDynamicTemplate()
    :
    	aaa_list{YType::str, "aaa-list"},
	 name{YType::str, "name"}
{
    yang_name = "deactivate-dynamic-template"; yang_parent_name = "action-rule";
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::~DeactivateDynamicTemplate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::has_data() const
{
    return aaa_list.is_set
	|| name.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_list.operation)
	|| is_set(name.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "deactivate-dynamic-template";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_list.is_set || is_set(aaa_list.operation)) leaf_name_data.push_back(aaa_list.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-list")
    {
        aaa_list = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::SetTimer()
    :
    	timer_name{YType::str, "timer-name"},
	 timer_value{YType::uint32, "timer-value"}
{
    yang_name = "set-timer"; yang_parent_name = "action-rule";
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::~SetTimer()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::has_data() const
{
    return timer_name.is_set
	|| timer_value.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(timer_name.operation)
	|| is_set(timer_value.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set-timer";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());
    if (timer_value.is_set || is_set(timer_value.operation)) leaf_name_data.push_back(timer_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
    if(value_path == "timer-value")
    {
        timer_value = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::StopTimer()
    :
    	timer_name{YType::str, "timer-name"}
{
    yang_name = "stop-timer"; yang_parent_name = "action-rule";
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::~StopTimer()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::has_data() const
{
    return timer_name.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::has_operation() const
{
    return is_set(operation)
	|| is_set(timer_name.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-timer";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timer_name.is_set || is_set(timer_name.operation)) leaf_name_data.push_back(timer_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timer-name")
    {
        timer_name = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActionRule()
    :
    	action_sequence_number{YType::uint16, "action-sequence-number"},
	 disconnect{YType::empty, "disconnect"},
	 monitor{YType::empty, "monitor"}
    	,
    activate_dynamic_template(nullptr) // presence node
	,authenticate(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate>())
	,authorize(nullptr) // presence node
	,deactivate_dynamic_template(nullptr) // presence node
	,set_timer(nullptr) // presence node
	,stop_timer(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer>())
{
    authenticate->parent = this;
    children["authenticate"] = authenticate.get();

    stop_timer->parent = this;
    children["stop-timer"] = stop_timer.get();

    yang_name = "action-rule"; yang_parent_name = "class";
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::~ActionRule()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::has_data() const
{
    return action_sequence_number.is_set
	|| disconnect.is_set
	|| monitor.is_set
	|| (activate_dynamic_template !=  nullptr && activate_dynamic_template->has_data())
	|| (authenticate !=  nullptr && authenticate->has_data())
	|| (authorize !=  nullptr && authorize->has_data())
	|| (deactivate_dynamic_template !=  nullptr && deactivate_dynamic_template->has_data())
	|| (set_timer !=  nullptr && set_timer->has_data())
	|| (stop_timer !=  nullptr && stop_timer->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::has_operation() const
{
    return is_set(operation)
	|| is_set(action_sequence_number.operation)
	|| is_set(disconnect.operation)
	|| is_set(monitor.operation)
	|| (activate_dynamic_template !=  nullptr && activate_dynamic_template->has_operation())
	|| (authenticate !=  nullptr && authenticate->has_operation())
	|| (authorize !=  nullptr && authorize->has_operation())
	|| (deactivate_dynamic_template !=  nullptr && deactivate_dynamic_template->has_operation())
	|| (set_timer !=  nullptr && set_timer->has_operation())
	|| (stop_timer !=  nullptr && stop_timer->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-rule" <<"[action-sequence-number='" <<action_sequence_number.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (action_sequence_number.is_set || is_set(action_sequence_number.operation)) leaf_name_data.push_back(action_sequence_number.get_name_leafdata());
    if (disconnect.is_set || is_set(disconnect.operation)) leaf_name_data.push_back(disconnect.get_name_leafdata());
    if (monitor.is_set || is_set(monitor.operation)) leaf_name_data.push_back(monitor.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "activate-dynamic-template")
    {
        if(activate_dynamic_template != nullptr)
        {
            children["activate-dynamic-template"] = activate_dynamic_template.get();
        }
        else
        {
            activate_dynamic_template = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::ActivateDynamicTemplate>();
            activate_dynamic_template->parent = this;
            children["activate-dynamic-template"] = activate_dynamic_template.get();
        }
        return children.at("activate-dynamic-template");
    }

    if(child_yang_name == "authenticate")
    {
        if(authenticate != nullptr)
        {
            children["authenticate"] = authenticate.get();
        }
        else
        {
            authenticate = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authenticate>();
            authenticate->parent = this;
            children["authenticate"] = authenticate.get();
        }
        return children.at("authenticate");
    }

    if(child_yang_name == "authorize")
    {
        if(authorize != nullptr)
        {
            children["authorize"] = authorize.get();
        }
        else
        {
            authorize = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::Authorize>();
            authorize->parent = this;
            children["authorize"] = authorize.get();
        }
        return children.at("authorize");
    }

    if(child_yang_name == "deactivate-dynamic-template")
    {
        if(deactivate_dynamic_template != nullptr)
        {
            children["deactivate-dynamic-template"] = deactivate_dynamic_template.get();
        }
        else
        {
            deactivate_dynamic_template = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::DeactivateDynamicTemplate>();
            deactivate_dynamic_template->parent = this;
            children["deactivate-dynamic-template"] = deactivate_dynamic_template.get();
        }
        return children.at("deactivate-dynamic-template");
    }

    if(child_yang_name == "set-timer")
    {
        if(set_timer != nullptr)
        {
            children["set-timer"] = set_timer.get();
        }
        else
        {
            set_timer = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::SetTimer>();
            set_timer->parent = this;
            children["set-timer"] = set_timer.get();
        }
        return children.at("set-timer");
    }

    if(child_yang_name == "stop-timer")
    {
        if(stop_timer != nullptr)
        {
            children["stop-timer"] = stop_timer.get();
        }
        else
        {
            stop_timer = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::StopTimer>();
            stop_timer->parent = this;
            children["stop-timer"] = stop_timer.get();
        }
        return children.at("stop-timer");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::get_children()
{
    if(children.find("activate-dynamic-template") == children.end())
    {
        if(activate_dynamic_template != nullptr)
        {
            children["activate-dynamic-template"] = activate_dynamic_template.get();
        }
    }

    if(children.find("authenticate") == children.end())
    {
        if(authenticate != nullptr)
        {
            children["authenticate"] = authenticate.get();
        }
    }

    if(children.find("authorize") == children.end())
    {
        if(authorize != nullptr)
        {
            children["authorize"] = authorize.get();
        }
    }

    if(children.find("deactivate-dynamic-template") == children.end())
    {
        if(deactivate_dynamic_template != nullptr)
        {
            children["deactivate-dynamic-template"] = deactivate_dynamic_template.get();
        }
    }

    if(children.find("set-timer") == children.end())
    {
        if(set_timer != nullptr)
        {
            children["set-timer"] = set_timer.get();
        }
    }

    if(children.find("stop-timer") == children.end())
    {
        if(stop_timer != nullptr)
        {
            children["stop-timer"] = stop_timer.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "action-sequence-number")
    {
        action_sequence_number = value;
    }
    if(value_path == "disconnect")
    {
        disconnect = value;
    }
    if(value_path == "monitor")
    {
        monitor = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::Class_()
    :
    	class_name{YType::str, "class-name"},
	 class_type{YType::enumeration, "class-type"},
	 class_execution_strategy{YType::enumeration, "class-execution-strategy"}
{
    yang_name = "class"; yang_parent_name = "event";
}

PolicyManager::PolicyMaps::PolicyMap::Event::Class_::~Class_()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::has_data() const
{
    for (std::size_t index=0; index<action_rule.size(); index++)
    {
        if(action_rule[index]->has_data())
            return true;
    }
    return class_name.is_set
	|| class_type.is_set
	|| class_execution_strategy.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::Class_::has_operation() const
{
    for (std::size_t index=0; index<action_rule.size(); index++)
    {
        if(action_rule[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(class_type.operation)
	|| is_set(class_execution_strategy.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::Class_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class" <<"[class-name='" <<class_name.get() <<"']" <<"[class-type='" <<class_type.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::Class_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (class_execution_strategy.is_set || is_set(class_execution_strategy.operation)) leaf_name_data.push_back(class_execution_strategy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::Class_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action-rule")
    {
        for(auto const & c : action_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_::ActionRule>();
        c->parent = this;
        action_rule.push_back(std::move(c));
        children[segment_path] = action_rule.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::Class_::get_children()
{
    for (auto const & c : action_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::Class_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "class-execution-strategy")
    {
        class_execution_strategy = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::Event::Event()
    :
    	event_type{YType::enumeration, "event-type"},
	 event_mode_match_all{YType::empty, "event-mode-match-all"},
	 event_mode_match_first{YType::empty, "event-mode-match-first"}
{
    yang_name = "event"; yang_parent_name = "policy-map";
}

PolicyManager::PolicyMaps::PolicyMap::Event::~Event()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::has_data() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_data())
            return true;
    }
    return event_type.is_set
	|| event_mode_match_all.is_set
	|| event_mode_match_first.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::Event::has_operation() const
{
    for (std::size_t index=0; index<class_.size(); index++)
    {
        if(class_[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(event_type.operation)
	|| is_set(event_mode_match_all.operation)
	|| is_set(event_mode_match_first.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::Event::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "event" <<"[event-type='" <<event_type.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::Event::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (event_type.is_set || is_set(event_type.operation)) leaf_name_data.push_back(event_type.get_name_leafdata());
    if (event_mode_match_all.is_set || is_set(event_mode_match_all.operation)) leaf_name_data.push_back(event_mode_match_all.get_name_leafdata());
    if (event_mode_match_first.is_set || is_set(event_mode_match_first.operation)) leaf_name_data.push_back(event_mode_match_first.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::Event::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class")
    {
        for(auto const & c : class_)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event::Class_>();
        c->parent = this;
        class_.push_back(std::move(c));
        children[segment_path] = class_.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::Event::get_children()
{
    for (auto const & c : class_)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::Event::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "event-type")
    {
        event_type = value;
    }
    if(value_path == "event-mode-match-all")
    {
        event_mode_match_all = value;
    }
    if(value_path == "event-mode-match-first")
    {
        event_mode_match_first = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::Rate()
    :
    	unit{YType::str, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "rate"; yang_parent_name = "shape";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::~Rate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::Burst()
    :
    	units{YType::str, "units"},
	 value_{YType::uint32, "value"}
{
    yang_name = "burst"; yang_parent_name = "shape";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::~Burst()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "burst";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst::set_value(const std::string & value_path, std::string value)
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

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Shape()
    :
    burst(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst>())
	,rate(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate>())
{
    burst->parent = this;
    children["burst"] = burst.get();

    rate->parent = this;
    children["rate"] = rate.get();

    yang_name = "shape"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::~Shape()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::has_data() const
{
    return (burst !=  nullptr && burst->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::has_operation() const
{
    return is_set(operation)
	|| (burst !=  nullptr && burst->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shape";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "burst")
    {
        if(burst != nullptr)
        {
            children["burst"] = burst.get();
        }
        else
        {
            burst = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Burst>();
            burst->parent = this;
            children["burst"] = burst.get();
        }
        return children.at("burst");
    }

    if(child_yang_name == "rate")
    {
        if(rate != nullptr)
        {
            children["rate"] = rate.get();
        }
        else
        {
            rate = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::Rate>();
            rate->parent = this;
            children["rate"] = rate.get();
        }
        return children.at("rate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::get_children()
{
    if(children.find("burst") == children.end())
    {
        if(burst != nullptr)
        {
            children["burst"] = burst.get();
        }
    }

    if(children.find("rate") == children.end())
    {
        if(rate != nullptr)
        {
            children["rate"] = rate.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::MinBandwidth()
    :
    	unit{YType::str, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "min-bandwidth"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::~MinBandwidth()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "min-bandwidth";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::BandwidthRemaining()
    :
    	unit{YType::str, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "bandwidth-remaining"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::~BandwidthRemaining()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bandwidth-remaining";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::QueueLimit()
    :
    	unit{YType::str, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "queue-limit"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::~QueueLimit()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-limit";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::PfcBufferSize()
    :
    	unit{YType::str, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pfc-buffer-size"; yang_parent_name = "pfc";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::~PfcBufferSize()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc-buffer-size";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::PfcPauseThreshold()
    :
    	unit{YType::str, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pfc-pause-threshold"; yang_parent_name = "pfc";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::~PfcPauseThreshold()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc-pause-threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::PfcResumeThreshold()
    :
    	unit{YType::str, "unit"},
	 value_{YType::uint32, "value"}
{
    yang_name = "pfc-resume-threshold"; yang_parent_name = "pfc";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::~PfcResumeThreshold()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::has_data() const
{
    return unit.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::has_operation() const
{
    return is_set(operation)
	|| is_set(unit.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc-resume-threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unit.is_set || is_set(unit.operation)) leaf_name_data.push_back(unit.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "unit")
    {
        unit = value;
    }
    if(value_path == "value")
    {
        value_ = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::Pfc()
    :
    	pfc_pause_set{YType::empty, "pfc-pause-set"}
    	,
    pfc_buffer_size(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize>())
	,pfc_pause_threshold(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold>())
	,pfc_resume_threshold(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold>())
{
    pfc_buffer_size->parent = this;
    children["pfc-buffer-size"] = pfc_buffer_size.get();

    pfc_pause_threshold->parent = this;
    children["pfc-pause-threshold"] = pfc_pause_threshold.get();

    pfc_resume_threshold->parent = this;
    children["pfc-resume-threshold"] = pfc_resume_threshold.get();

    yang_name = "pfc"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::~Pfc()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::has_data() const
{
    return pfc_pause_set.is_set
	|| (pfc_buffer_size !=  nullptr && pfc_buffer_size->has_data())
	|| (pfc_pause_threshold !=  nullptr && pfc_pause_threshold->has_data())
	|| (pfc_resume_threshold !=  nullptr && pfc_resume_threshold->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::has_operation() const
{
    return is_set(operation)
	|| is_set(pfc_pause_set.operation)
	|| (pfc_buffer_size !=  nullptr && pfc_buffer_size->has_operation())
	|| (pfc_pause_threshold !=  nullptr && pfc_pause_threshold->has_operation())
	|| (pfc_resume_threshold !=  nullptr && pfc_resume_threshold->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pfc";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pfc_pause_set.is_set || is_set(pfc_pause_set.operation)) leaf_name_data.push_back(pfc_pause_set.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "pfc-buffer-size")
    {
        if(pfc_buffer_size != nullptr)
        {
            children["pfc-buffer-size"] = pfc_buffer_size.get();
        }
        else
        {
            pfc_buffer_size = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcBufferSize>();
            pfc_buffer_size->parent = this;
            children["pfc-buffer-size"] = pfc_buffer_size.get();
        }
        return children.at("pfc-buffer-size");
    }

    if(child_yang_name == "pfc-pause-threshold")
    {
        if(pfc_pause_threshold != nullptr)
        {
            children["pfc-pause-threshold"] = pfc_pause_threshold.get();
        }
        else
        {
            pfc_pause_threshold = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcPauseThreshold>();
            pfc_pause_threshold->parent = this;
            children["pfc-pause-threshold"] = pfc_pause_threshold.get();
        }
        return children.at("pfc-pause-threshold");
    }

    if(child_yang_name == "pfc-resume-threshold")
    {
        if(pfc_resume_threshold != nullptr)
        {
            children["pfc-resume-threshold"] = pfc_resume_threshold.get();
        }
        else
        {
            pfc_resume_threshold = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::PfcResumeThreshold>();
            pfc_resume_threshold->parent = this;
            children["pfc-resume-threshold"] = pfc_resume_threshold.get();
        }
        return children.at("pfc-resume-threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::get_children()
{
    if(children.find("pfc-buffer-size") == children.end())
    {
        if(pfc_buffer_size != nullptr)
        {
            children["pfc-buffer-size"] = pfc_buffer_size.get();
        }
    }

    if(children.find("pfc-pause-threshold") == children.end())
    {
        if(pfc_pause_threshold != nullptr)
        {
            children["pfc-pause-threshold"] = pfc_pause_threshold.get();
        }
    }

    if(children.find("pfc-resume-threshold") == children.end())
    {
        if(pfc_resume_threshold != nullptr)
        {
            children["pfc-resume-threshold"] = pfc_resume_threshold.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pfc-pause-set")
    {
        pfc_pause_set = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::RandomDetect()
    :
    	threshold_max_units{YType::str, "threshold-max-units"},
	 threshold_max_value{YType::uint32, "threshold-max-value"},
	 threshold_min_units{YType::str, "threshold-min-units"},
	 threshold_min_value{YType::uint32, "threshold-min-value"},
	 cos{YType::str, "cos"},
	 dei{YType::uint8, "dei"},
	 discard_class{YType::uint8, "discard-class"},
	 dscp{YType::str, "dscp"},
	 ecn{YType::empty, "ecn"},
	 mpls_exp{YType::uint8, "mpls-exp"},
	 precedence{YType::str, "precedence"}
{
    yang_name = "random-detect"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::~RandomDetect()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::has_data() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : mpls_exp.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return threshold_max_units.is_set
	|| threshold_max_value.is_set
	|| threshold_min_units.is_set
	|| threshold_min_value.is_set
	|| dei.is_set
	|| ecn.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::has_operation() const
{
    for (auto const & leaf : cos.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : discard_class.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : dscp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : mpls_exp.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : precedence.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(threshold_max_units.operation)
	|| is_set(threshold_max_value.operation)
	|| is_set(threshold_min_units.operation)
	|| is_set(threshold_min_value.operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(ecn.operation)
	|| is_set(mpls_exp.operation)
	|| is_set(precedence.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "random-detect" <<"[threshold-max-units='" <<threshold_max_units.get() <<"']" <<"[threshold-max-value='" <<threshold_max_value.get() <<"']" <<"[threshold-min-units='" <<threshold_min_units.get() <<"']" <<"[threshold-min-value='" <<threshold_min_value.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold_max_units.is_set || is_set(threshold_max_units.operation)) leaf_name_data.push_back(threshold_max_units.get_name_leafdata());
    if (threshold_max_value.is_set || is_set(threshold_max_value.operation)) leaf_name_data.push_back(threshold_max_value.get_name_leafdata());
    if (threshold_min_units.is_set || is_set(threshold_min_units.operation)) leaf_name_data.push_back(threshold_min_units.get_name_leafdata());
    if (threshold_min_value.is_set || is_set(threshold_min_value.operation)) leaf_name_data.push_back(threshold_min_value.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (ecn.is_set || is_set(ecn.operation)) leaf_name_data.push_back(ecn.get_name_leafdata());

    auto cos_name_datas = cos.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), cos_name_datas.begin(), cos_name_datas.end());
    auto discard_class_name_datas = discard_class.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), discard_class_name_datas.begin(), discard_class_name_datas.end());
    auto dscp_name_datas = dscp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), dscp_name_datas.begin(), dscp_name_datas.end());
    auto mpls_exp_name_datas = mpls_exp.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), mpls_exp_name_datas.begin(), mpls_exp_name_datas.end());
    auto precedence_name_datas = precedence.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), precedence_name_datas.begin(), precedence_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "threshold-max-units")
    {
        threshold_max_units = value;
    }
    if(value_path == "threshold-max-value")
    {
        threshold_max_value = value;
    }
    if(value_path == "threshold-min-units")
    {
        threshold_min_units = value;
    }
    if(value_path == "threshold-min-value")
    {
        threshold_min_value = value;
    }
    if(value_path == "cos")
    {
        cos.append(value);
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "discard-class")
    {
        discard_class.append(value);
    }
    if(value_path == "dscp")
    {
        dscp.append(value);
    }
    if(value_path == "ecn")
    {
        ecn = value;
    }
    if(value_path == "mpls-exp")
    {
        mpls_exp.append(value);
    }
    if(value_path == "precedence")
    {
        precedence.append(value);
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::Set()
    :
    	cos{YType::uint8, "cos"},
	 dei{YType::uint8, "dei"},
	 dei_imposition{YType::uint8, "dei-imposition"},
	 destination_address{YType::str, "destination-address"},
	 df{YType::uint8, "df"},
	 discard_class{YType::uint8, "discard-class"},
	 dscp{YType::str, "dscp"},
	 forward_class{YType::uint8, "forward-class"},
	 fr_de{YType::uint8, "fr-de"},
	 inner_cos{YType::uint8, "inner-cos"},
	 mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
	 mpls_experimental_top_most{YType::uint8, "mpls-experimental-top-most"},
	 precedence{YType::str, "precedence"},
	 precedence_tunnel{YType::str, "precedence-tunnel"},
	 qos_group{YType::uint16, "qos-group"},
	 source_address{YType::str, "source-address"},
	 srp_priority{YType::uint8, "srp-priority"},
	 traffic_class{YType::uint8, "traffic-class"}
{
    yang_name = "set"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::~Set()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::has_data() const
{
    return cos.is_set
	|| dei.is_set
	|| dei_imposition.is_set
	|| destination_address.is_set
	|| df.is_set
	|| discard_class.is_set
	|| dscp.is_set
	|| forward_class.is_set
	|| fr_de.is_set
	|| inner_cos.is_set
	|| mpls_experimental_imposition.is_set
	|| mpls_experimental_top_most.is_set
	|| precedence.is_set
	|| precedence_tunnel.is_set
	|| qos_group.is_set
	|| source_address.is_set
	|| srp_priority.is_set
	|| traffic_class.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(dei_imposition.operation)
	|| is_set(destination_address.operation)
	|| is_set(df.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(forward_class.operation)
	|| is_set(fr_de.operation)
	|| is_set(inner_cos.operation)
	|| is_set(mpls_experimental_imposition.operation)
	|| is_set(mpls_experimental_top_most.operation)
	|| is_set(precedence.operation)
	|| is_set(precedence_tunnel.operation)
	|| is_set(qos_group.operation)
	|| is_set(source_address.operation)
	|| is_set(srp_priority.operation)
	|| is_set(traffic_class.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_imposition.is_set || is_set(dei_imposition.operation)) leaf_name_data.push_back(dei_imposition.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (df.is_set || is_set(df.operation)) leaf_name_data.push_back(df.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.operation)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.operation)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (mpls_experimental_imposition.is_set || is_set(mpls_experimental_imposition.operation)) leaf_name_data.push_back(mpls_experimental_imposition.get_name_leafdata());
    if (mpls_experimental_top_most.is_set || is_set(mpls_experimental_top_most.operation)) leaf_name_data.push_back(mpls_experimental_top_most.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_tunnel.is_set || is_set(precedence_tunnel.operation)) leaf_name_data.push_back(precedence_tunnel.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (srp_priority.is_set || is_set(srp_priority.operation)) leaf_name_data.push_back(srp_priority.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "df")
    {
        df = value;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition = value;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "srp-priority")
    {
        srp_priority = value;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::Rate()
    :
    	units{YType::str, "units"},
	 value_{YType::uint32, "value"}
{
    yang_name = "rate"; yang_parent_name = "police";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::~Rate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::PeakRate()
    :
    	units{YType::str, "units"},
	 value_{YType::uint32, "value"}
{
    yang_name = "peak-rate"; yang_parent_name = "police";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::~PeakRate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::Burst()
    :
    	units{YType::str, "units"},
	 value_{YType::uint32, "value"}
{
    yang_name = "burst"; yang_parent_name = "police";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::~Burst()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "burst";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst::set_value(const std::string & value_path, std::string value)
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

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::PeakBurst()
    :
    	units{YType::str, "units"},
	 value_{YType::uint32, "value"}
{
    yang_name = "peak-burst"; yang_parent_name = "police";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::~PeakBurst()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peak-burst";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst::set_value(const std::string & value_path, std::string value)
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

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::Set()
    :
    	cos{YType::uint8, "cos"},
	 dei{YType::uint8, "dei"},
	 dei_imposition{YType::uint8, "dei-imposition"},
	 destination_address{YType::str, "destination-address"},
	 df{YType::uint8, "df"},
	 discard_class{YType::uint8, "discard-class"},
	 dscp{YType::str, "dscp"},
	 forward_class{YType::uint8, "forward-class"},
	 fr_de{YType::uint8, "fr-de"},
	 inner_cos{YType::uint8, "inner-cos"},
	 mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
	 mpls_experimental_top_most{YType::uint8, "mpls-experimental-top-most"},
	 precedence{YType::str, "precedence"},
	 precedence_tunnel{YType::str, "precedence-tunnel"},
	 qos_group{YType::uint16, "qos-group"},
	 source_address{YType::str, "source-address"},
	 srp_priority{YType::uint8, "srp-priority"},
	 traffic_class{YType::uint8, "traffic-class"}
{
    yang_name = "set"; yang_parent_name = "conform-action";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::~Set()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::has_data() const
{
    return cos.is_set
	|| dei.is_set
	|| dei_imposition.is_set
	|| destination_address.is_set
	|| df.is_set
	|| discard_class.is_set
	|| dscp.is_set
	|| forward_class.is_set
	|| fr_de.is_set
	|| inner_cos.is_set
	|| mpls_experimental_imposition.is_set
	|| mpls_experimental_top_most.is_set
	|| precedence.is_set
	|| precedence_tunnel.is_set
	|| qos_group.is_set
	|| source_address.is_set
	|| srp_priority.is_set
	|| traffic_class.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(dei_imposition.operation)
	|| is_set(destination_address.operation)
	|| is_set(df.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(forward_class.operation)
	|| is_set(fr_de.operation)
	|| is_set(inner_cos.operation)
	|| is_set(mpls_experimental_imposition.operation)
	|| is_set(mpls_experimental_top_most.operation)
	|| is_set(precedence.operation)
	|| is_set(precedence_tunnel.operation)
	|| is_set(qos_group.operation)
	|| is_set(source_address.operation)
	|| is_set(srp_priority.operation)
	|| is_set(traffic_class.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_imposition.is_set || is_set(dei_imposition.operation)) leaf_name_data.push_back(dei_imposition.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (df.is_set || is_set(df.operation)) leaf_name_data.push_back(df.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.operation)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.operation)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (mpls_experimental_imposition.is_set || is_set(mpls_experimental_imposition.operation)) leaf_name_data.push_back(mpls_experimental_imposition.get_name_leafdata());
    if (mpls_experimental_top_most.is_set || is_set(mpls_experimental_top_most.operation)) leaf_name_data.push_back(mpls_experimental_top_most.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_tunnel.is_set || is_set(precedence_tunnel.operation)) leaf_name_data.push_back(precedence_tunnel.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (srp_priority.is_set || is_set(srp_priority.operation)) leaf_name_data.push_back(srp_priority.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "df")
    {
        df = value;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition = value;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "srp-priority")
    {
        srp_priority = value;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::ConformAction()
    :
    	drop{YType::empty, "drop"},
	 transmit{YType::empty, "Transmit"}
    	,
    set(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set>())
{
    set->parent = this;
    children["set"] = set.get();

    yang_name = "conform-action"; yang_parent_name = "police";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::~ConformAction()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::has_data() const
{
    return drop.is_set
	|| transmit.is_set
	|| (set !=  nullptr && set->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(transmit.operation)
	|| (set !=  nullptr && set->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "conform-action";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "set")
    {
        if(set != nullptr)
        {
            children["set"] = set.get();
        }
        else
        {
            set = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::Set>();
            set->parent = this;
            children["set"] = set.get();
        }
        return children.at("set");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::get_children()
{
    if(children.find("set") == children.end())
    {
        if(set != nullptr)
        {
            children["set"] = set.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "Transmit")
    {
        transmit = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::Set()
    :
    	cos{YType::uint8, "cos"},
	 dei{YType::uint8, "dei"},
	 dei_imposition{YType::uint8, "dei-imposition"},
	 destination_address{YType::str, "destination-address"},
	 df{YType::uint8, "df"},
	 discard_class{YType::uint8, "discard-class"},
	 dscp{YType::str, "dscp"},
	 forward_class{YType::uint8, "forward-class"},
	 fr_de{YType::uint8, "fr-de"},
	 inner_cos{YType::uint8, "inner-cos"},
	 mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
	 mpls_experimental_top_most{YType::uint8, "mpls-experimental-top-most"},
	 precedence{YType::str, "precedence"},
	 precedence_tunnel{YType::str, "precedence-tunnel"},
	 qos_group{YType::uint16, "qos-group"},
	 source_address{YType::str, "source-address"},
	 srp_priority{YType::uint8, "srp-priority"},
	 traffic_class{YType::uint8, "traffic-class"}
{
    yang_name = "set"; yang_parent_name = "exceed-action";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::~Set()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::has_data() const
{
    return cos.is_set
	|| dei.is_set
	|| dei_imposition.is_set
	|| destination_address.is_set
	|| df.is_set
	|| discard_class.is_set
	|| dscp.is_set
	|| forward_class.is_set
	|| fr_de.is_set
	|| inner_cos.is_set
	|| mpls_experimental_imposition.is_set
	|| mpls_experimental_top_most.is_set
	|| precedence.is_set
	|| precedence_tunnel.is_set
	|| qos_group.is_set
	|| source_address.is_set
	|| srp_priority.is_set
	|| traffic_class.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(dei_imposition.operation)
	|| is_set(destination_address.operation)
	|| is_set(df.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(forward_class.operation)
	|| is_set(fr_de.operation)
	|| is_set(inner_cos.operation)
	|| is_set(mpls_experimental_imposition.operation)
	|| is_set(mpls_experimental_top_most.operation)
	|| is_set(precedence.operation)
	|| is_set(precedence_tunnel.operation)
	|| is_set(qos_group.operation)
	|| is_set(source_address.operation)
	|| is_set(srp_priority.operation)
	|| is_set(traffic_class.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_imposition.is_set || is_set(dei_imposition.operation)) leaf_name_data.push_back(dei_imposition.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (df.is_set || is_set(df.operation)) leaf_name_data.push_back(df.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.operation)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.operation)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (mpls_experimental_imposition.is_set || is_set(mpls_experimental_imposition.operation)) leaf_name_data.push_back(mpls_experimental_imposition.get_name_leafdata());
    if (mpls_experimental_top_most.is_set || is_set(mpls_experimental_top_most.operation)) leaf_name_data.push_back(mpls_experimental_top_most.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_tunnel.is_set || is_set(precedence_tunnel.operation)) leaf_name_data.push_back(precedence_tunnel.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (srp_priority.is_set || is_set(srp_priority.operation)) leaf_name_data.push_back(srp_priority.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "df")
    {
        df = value;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition = value;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "srp-priority")
    {
        srp_priority = value;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::ExceedAction()
    :
    	drop{YType::empty, "drop"},
	 transmit{YType::empty, "Transmit"}
    	,
    set(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set>())
{
    set->parent = this;
    children["set"] = set.get();

    yang_name = "exceed-action"; yang_parent_name = "police";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::~ExceedAction()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::has_data() const
{
    return drop.is_set
	|| transmit.is_set
	|| (set !=  nullptr && set->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(transmit.operation)
	|| (set !=  nullptr && set->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exceed-action";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "set")
    {
        if(set != nullptr)
        {
            children["set"] = set.get();
        }
        else
        {
            set = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::Set>();
            set->parent = this;
            children["set"] = set.get();
        }
        return children.at("set");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::get_children()
{
    if(children.find("set") == children.end())
    {
        if(set != nullptr)
        {
            children["set"] = set.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "Transmit")
    {
        transmit = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::Set()
    :
    	cos{YType::uint8, "cos"},
	 dei{YType::uint8, "dei"},
	 dei_imposition{YType::uint8, "dei-imposition"},
	 destination_address{YType::str, "destination-address"},
	 df{YType::uint8, "df"},
	 discard_class{YType::uint8, "discard-class"},
	 dscp{YType::str, "dscp"},
	 forward_class{YType::uint8, "forward-class"},
	 fr_de{YType::uint8, "fr-de"},
	 inner_cos{YType::uint8, "inner-cos"},
	 mpls_experimental_imposition{YType::uint8, "mpls-experimental-imposition"},
	 mpls_experimental_top_most{YType::uint8, "mpls-experimental-top-most"},
	 precedence{YType::str, "precedence"},
	 precedence_tunnel{YType::str, "precedence-tunnel"},
	 qos_group{YType::uint16, "qos-group"},
	 source_address{YType::str, "source-address"},
	 srp_priority{YType::uint8, "srp-priority"},
	 traffic_class{YType::uint8, "traffic-class"}
{
    yang_name = "set"; yang_parent_name = "violate-action";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::~Set()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::has_data() const
{
    return cos.is_set
	|| dei.is_set
	|| dei_imposition.is_set
	|| destination_address.is_set
	|| df.is_set
	|| discard_class.is_set
	|| dscp.is_set
	|| forward_class.is_set
	|| fr_de.is_set
	|| inner_cos.is_set
	|| mpls_experimental_imposition.is_set
	|| mpls_experimental_top_most.is_set
	|| precedence.is_set
	|| precedence_tunnel.is_set
	|| qos_group.is_set
	|| source_address.is_set
	|| srp_priority.is_set
	|| traffic_class.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::has_operation() const
{
    return is_set(operation)
	|| is_set(cos.operation)
	|| is_set(dei.operation)
	|| is_set(dei_imposition.operation)
	|| is_set(destination_address.operation)
	|| is_set(df.operation)
	|| is_set(discard_class.operation)
	|| is_set(dscp.operation)
	|| is_set(forward_class.operation)
	|| is_set(fr_de.operation)
	|| is_set(inner_cos.operation)
	|| is_set(mpls_experimental_imposition.operation)
	|| is_set(mpls_experimental_top_most.operation)
	|| is_set(precedence.operation)
	|| is_set(precedence_tunnel.operation)
	|| is_set(qos_group.operation)
	|| is_set(source_address.operation)
	|| is_set(srp_priority.operation)
	|| is_set(traffic_class.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cos.is_set || is_set(cos.operation)) leaf_name_data.push_back(cos.get_name_leafdata());
    if (dei.is_set || is_set(dei.operation)) leaf_name_data.push_back(dei.get_name_leafdata());
    if (dei_imposition.is_set || is_set(dei_imposition.operation)) leaf_name_data.push_back(dei_imposition.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (df.is_set || is_set(df.operation)) leaf_name_data.push_back(df.get_name_leafdata());
    if (discard_class.is_set || is_set(discard_class.operation)) leaf_name_data.push_back(discard_class.get_name_leafdata());
    if (dscp.is_set || is_set(dscp.operation)) leaf_name_data.push_back(dscp.get_name_leafdata());
    if (forward_class.is_set || is_set(forward_class.operation)) leaf_name_data.push_back(forward_class.get_name_leafdata());
    if (fr_de.is_set || is_set(fr_de.operation)) leaf_name_data.push_back(fr_de.get_name_leafdata());
    if (inner_cos.is_set || is_set(inner_cos.operation)) leaf_name_data.push_back(inner_cos.get_name_leafdata());
    if (mpls_experimental_imposition.is_set || is_set(mpls_experimental_imposition.operation)) leaf_name_data.push_back(mpls_experimental_imposition.get_name_leafdata());
    if (mpls_experimental_top_most.is_set || is_set(mpls_experimental_top_most.operation)) leaf_name_data.push_back(mpls_experimental_top_most.get_name_leafdata());
    if (precedence.is_set || is_set(precedence.operation)) leaf_name_data.push_back(precedence.get_name_leafdata());
    if (precedence_tunnel.is_set || is_set(precedence_tunnel.operation)) leaf_name_data.push_back(precedence_tunnel.get_name_leafdata());
    if (qos_group.is_set || is_set(qos_group.operation)) leaf_name_data.push_back(qos_group.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (srp_priority.is_set || is_set(srp_priority.operation)) leaf_name_data.push_back(srp_priority.get_name_leafdata());
    if (traffic_class.is_set || is_set(traffic_class.operation)) leaf_name_data.push_back(traffic_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cos")
    {
        cos = value;
    }
    if(value_path == "dei")
    {
        dei = value;
    }
    if(value_path == "dei-imposition")
    {
        dei_imposition = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "df")
    {
        df = value;
    }
    if(value_path == "discard-class")
    {
        discard_class = value;
    }
    if(value_path == "dscp")
    {
        dscp = value;
    }
    if(value_path == "forward-class")
    {
        forward_class = value;
    }
    if(value_path == "fr-de")
    {
        fr_de = value;
    }
    if(value_path == "inner-cos")
    {
        inner_cos = value;
    }
    if(value_path == "mpls-experimental-imposition")
    {
        mpls_experimental_imposition = value;
    }
    if(value_path == "mpls-experimental-top-most")
    {
        mpls_experimental_top_most = value;
    }
    if(value_path == "precedence")
    {
        precedence = value;
    }
    if(value_path == "precedence-tunnel")
    {
        precedence_tunnel = value;
    }
    if(value_path == "qos-group")
    {
        qos_group = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "srp-priority")
    {
        srp_priority = value;
    }
    if(value_path == "traffic-class")
    {
        traffic_class = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::ViolateAction()
    :
    	drop{YType::empty, "drop"},
	 transmit{YType::empty, "Transmit"}
    	,
    set(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set>())
{
    set->parent = this;
    children["set"] = set.get();

    yang_name = "violate-action"; yang_parent_name = "police";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::~ViolateAction()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::has_data() const
{
    return drop.is_set
	|| transmit.is_set
	|| (set !=  nullptr && set->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::has_operation() const
{
    return is_set(operation)
	|| is_set(drop.operation)
	|| is_set(transmit.operation)
	|| (set !=  nullptr && set->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "violate-action";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop.is_set || is_set(drop.operation)) leaf_name_data.push_back(drop.get_name_leafdata());
    if (transmit.is_set || is_set(transmit.operation)) leaf_name_data.push_back(transmit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "set")
    {
        if(set != nullptr)
        {
            children["set"] = set.get();
        }
        else
        {
            set = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::Set>();
            set->parent = this;
            children["set"] = set.get();
        }
        return children.at("set");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::get_children()
{
    if(children.find("set") == children.end())
    {
        if(set != nullptr)
        {
            children["set"] = set.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop")
    {
        drop = value;
    }
    if(value_path == "Transmit")
    {
        transmit = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Police()
    :
    burst(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst>())
	,conform_action(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction>())
	,exceed_action(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction>())
	,peak_burst(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst>())
	,peak_rate(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate>())
	,rate(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate>())
	,violate_action(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction>())
{
    burst->parent = this;
    children["burst"] = burst.get();

    conform_action->parent = this;
    children["conform-action"] = conform_action.get();

    exceed_action->parent = this;
    children["exceed-action"] = exceed_action.get();

    peak_burst->parent = this;
    children["peak-burst"] = peak_burst.get();

    peak_rate->parent = this;
    children["peak-rate"] = peak_rate.get();

    rate->parent = this;
    children["rate"] = rate.get();

    violate_action->parent = this;
    children["violate-action"] = violate_action.get();

    yang_name = "police"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::~Police()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::has_data() const
{
    return (burst !=  nullptr && burst->has_data())
	|| (conform_action !=  nullptr && conform_action->has_data())
	|| (exceed_action !=  nullptr && exceed_action->has_data())
	|| (peak_burst !=  nullptr && peak_burst->has_data())
	|| (peak_rate !=  nullptr && peak_rate->has_data())
	|| (rate !=  nullptr && rate->has_data())
	|| (violate_action !=  nullptr && violate_action->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::has_operation() const
{
    return is_set(operation)
	|| (burst !=  nullptr && burst->has_operation())
	|| (conform_action !=  nullptr && conform_action->has_operation())
	|| (exceed_action !=  nullptr && exceed_action->has_operation())
	|| (peak_burst !=  nullptr && peak_burst->has_operation())
	|| (peak_rate !=  nullptr && peak_rate->has_operation())
	|| (rate !=  nullptr && rate->has_operation())
	|| (violate_action !=  nullptr && violate_action->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "police";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "burst")
    {
        if(burst != nullptr)
        {
            children["burst"] = burst.get();
        }
        else
        {
            burst = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Burst>();
            burst->parent = this;
            children["burst"] = burst.get();
        }
        return children.at("burst");
    }

    if(child_yang_name == "conform-action")
    {
        if(conform_action != nullptr)
        {
            children["conform-action"] = conform_action.get();
        }
        else
        {
            conform_action = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ConformAction>();
            conform_action->parent = this;
            children["conform-action"] = conform_action.get();
        }
        return children.at("conform-action");
    }

    if(child_yang_name == "exceed-action")
    {
        if(exceed_action != nullptr)
        {
            children["exceed-action"] = exceed_action.get();
        }
        else
        {
            exceed_action = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ExceedAction>();
            exceed_action->parent = this;
            children["exceed-action"] = exceed_action.get();
        }
        return children.at("exceed-action");
    }

    if(child_yang_name == "peak-burst")
    {
        if(peak_burst != nullptr)
        {
            children["peak-burst"] = peak_burst.get();
        }
        else
        {
            peak_burst = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakBurst>();
            peak_burst->parent = this;
            children["peak-burst"] = peak_burst.get();
        }
        return children.at("peak-burst");
    }

    if(child_yang_name == "peak-rate")
    {
        if(peak_rate != nullptr)
        {
            children["peak-rate"] = peak_rate.get();
        }
        else
        {
            peak_rate = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::PeakRate>();
            peak_rate->parent = this;
            children["peak-rate"] = peak_rate.get();
        }
        return children.at("peak-rate");
    }

    if(child_yang_name == "rate")
    {
        if(rate != nullptr)
        {
            children["rate"] = rate.get();
        }
        else
        {
            rate = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::Rate>();
            rate->parent = this;
            children["rate"] = rate.get();
        }
        return children.at("rate");
    }

    if(child_yang_name == "violate-action")
    {
        if(violate_action != nullptr)
        {
            children["violate-action"] = violate_action.get();
        }
        else
        {
            violate_action = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::ViolateAction>();
            violate_action->parent = this;
            children["violate-action"] = violate_action.get();
        }
        return children.at("violate-action");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::get_children()
{
    if(children.find("burst") == children.end())
    {
        if(burst != nullptr)
        {
            children["burst"] = burst.get();
        }
    }

    if(children.find("conform-action") == children.end())
    {
        if(conform_action != nullptr)
        {
            children["conform-action"] = conform_action.get();
        }
    }

    if(children.find("exceed-action") == children.end())
    {
        if(exceed_action != nullptr)
        {
            children["exceed-action"] = exceed_action.get();
        }
    }

    if(children.find("peak-burst") == children.end())
    {
        if(peak_burst != nullptr)
        {
            children["peak-burst"] = peak_burst.get();
        }
    }

    if(children.find("peak-rate") == children.end())
    {
        if(peak_rate != nullptr)
        {
            children["peak-rate"] = peak_rate.get();
        }
    }

    if(children.find("rate") == children.end())
    {
        if(rate != nullptr)
        {
            children["rate"] = rate.get();
        }
    }

    if(children.find("violate-action") == children.end())
    {
        if(violate_action != nullptr)
        {
            children["violate-action"] = violate_action.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::ServicePolicy()
    :
    	policy_name{YType::str, "policy-name"},
	 type{YType::str, "type"}
{
    yang_name = "service-policy"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::~ServicePolicy()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::has_data() const
{
    return policy_name.is_set
	|| type.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_name.operation)
	|| is_set(type.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_name.is_set || is_set(policy_name.operation)) leaf_name_data.push_back(policy_name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-name")
    {
        policy_name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::Rate()
    :
    	units{YType::str, "units"},
	 value_{YType::uint32, "value"}
{
    yang_name = "rate"; yang_parent_name = "cac-local";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::~Rate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::FlowRate()
    :
    	units{YType::str, "units"},
	 value_{YType::uint32, "value"}
{
    yang_name = "flow-rate"; yang_parent_name = "cac-local";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::~FlowRate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::has_data() const
{
    return units.is_set
	|| value_.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::has_operation() const
{
    return is_set(operation)
	|| is_set(units.operation)
	|| is_set(value_.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-rate";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (units.is_set || is_set(units.operation)) leaf_name_data.push_back(units.get_name_leafdata());
    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate::set_value(const std::string & value_path, std::string value)
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

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::CacLocal()
    :
    	flow_idle_timeout{YType::str, "flow-idle-timeout"}
    	,
    flow_rate(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate>())
	,rate(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate>())
{
    flow_rate->parent = this;
    children["flow-rate"] = flow_rate.get();

    rate->parent = this;
    children["rate"] = rate.get();

    yang_name = "cac-local"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::~CacLocal()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::has_data() const
{
    return flow_idle_timeout.is_set
	|| (flow_rate !=  nullptr && flow_rate->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::has_operation() const
{
    return is_set(operation)
	|| is_set(flow_idle_timeout.operation)
	|| (flow_rate !=  nullptr && flow_rate->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cac-local";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (flow_idle_timeout.is_set || is_set(flow_idle_timeout.operation)) leaf_name_data.push_back(flow_idle_timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "flow-rate")
    {
        if(flow_rate != nullptr)
        {
            children["flow-rate"] = flow_rate.get();
        }
        else
        {
            flow_rate = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::FlowRate>();
            flow_rate->parent = this;
            children["flow-rate"] = flow_rate.get();
        }
        return children.at("flow-rate");
    }

    if(child_yang_name == "rate")
    {
        if(rate != nullptr)
        {
            children["rate"] = rate.get();
        }
        else
        {
            rate = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::Rate>();
            rate->parent = this;
            children["rate"] = rate.get();
        }
        return children.at("rate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::get_children()
{
    if(children.find("flow-rate") == children.end())
    {
        if(flow_rate != nullptr)
        {
            children["flow-rate"] = flow_rate.get();
        }
    }

    if(children.find("rate") == children.end())
    {
        if(rate != nullptr)
        {
            children["rate"] = rate.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "flow-idle-timeout")
    {
        flow_idle_timeout = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::FlowParams()
    :
    	history{YType::uint32, "history"},
	 interval_duration{YType::uint32, "interval-duration"},
	 max_flow{YType::uint16, "max-flow"},
	 timeout{YType::uint32, "timeout"}
{
    yang_name = "flow-params"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::~FlowParams()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::has_data() const
{
    return history.is_set
	|| interval_duration.is_set
	|| max_flow.is_set
	|| timeout.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::has_operation() const
{
    return is_set(operation)
	|| is_set(history.operation)
	|| is_set(interval_duration.operation)
	|| is_set(max_flow.operation)
	|| is_set(timeout.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flow-params";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (history.is_set || is_set(history.operation)) leaf_name_data.push_back(history.get_name_leafdata());
    if (interval_duration.is_set || is_set(interval_duration.operation)) leaf_name_data.push_back(interval_duration.get_name_leafdata());
    if (max_flow.is_set || is_set(max_flow.operation)) leaf_name_data.push_back(max_flow.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "history")
    {
        history = value;
    }
    if(value_path == "interval-duration")
    {
        interval_duration = value;
    }
    if(value_path == "max-flow")
    {
        max_flow = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::Rate()
    :
    	layer3{YType::uint32, "layer3"},
	 media{YType::uint32, "media"},
	 packet{YType::uint32, "packet"}
{
    yang_name = "rate"; yang_parent_name = "metrics-ipcbr";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::~Rate()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::has_data() const
{
    return layer3.is_set
	|| media.is_set
	|| packet.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::has_operation() const
{
    return is_set(operation)
	|| is_set(layer3.operation)
	|| is_set(media.operation)
	|| is_set(packet.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rate";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (layer3.is_set || is_set(layer3.operation)) leaf_name_data.push_back(layer3.get_name_leafdata());
    if (media.is_set || is_set(media.operation)) leaf_name_data.push_back(media.get_name_leafdata());
    if (packet.is_set || is_set(packet.operation)) leaf_name_data.push_back(packet.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "layer3")
    {
        layer3 = value;
    }
    if(value_path == "media")
    {
        media = value;
    }
    if(value_path == "packet")
    {
        packet = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::MediaPacket()
    :
    	count_in_layer3{YType::uint8, "count-in-layer3"},
	 size{YType::uint16, "size"}
{
    yang_name = "media-packet"; yang_parent_name = "metrics-ipcbr";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::~MediaPacket()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::has_data() const
{
    return count_in_layer3.is_set
	|| size.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(count_in_layer3.operation)
	|| is_set(size.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "media-packet";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (count_in_layer3.is_set || is_set(count_in_layer3.operation)) leaf_name_data.push_back(count_in_layer3.get_name_leafdata());
    if (size.is_set || is_set(size.operation)) leaf_name_data.push_back(size.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count-in-layer3")
    {
        count_in_layer3 = value;
    }
    if(value_path == "size")
    {
        size = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MetricsIpcbr()
    :
    media_packet(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket>())
	,rate(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate>())
{
    media_packet->parent = this;
    children["media-packet"] = media_packet.get();

    rate->parent = this;
    children["rate"] = rate.get();

    yang_name = "metrics-ipcbr"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::~MetricsIpcbr()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::has_data() const
{
    return (media_packet !=  nullptr && media_packet->has_data())
	|| (rate !=  nullptr && rate->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::has_operation() const
{
    return is_set(operation)
	|| (media_packet !=  nullptr && media_packet->has_operation())
	|| (rate !=  nullptr && rate->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "metrics-ipcbr";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "media-packet")
    {
        if(media_packet != nullptr)
        {
            children["media-packet"] = media_packet.get();
        }
        else
        {
            media_packet = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::MediaPacket>();
            media_packet->parent = this;
            children["media-packet"] = media_packet.get();
        }
        return children.at("media-packet");
    }

    if(child_yang_name == "rate")
    {
        if(rate != nullptr)
        {
            children["rate"] = rate.get();
        }
        else
        {
            rate = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::Rate>();
            rate->parent = this;
            children["rate"] = rate.get();
        }
        return children.at("rate");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::get_children()
{
    if(children.find("media-packet") == children.end())
    {
        if(media_packet != nullptr)
        {
            children["media-packet"] = media_packet.get();
        }
    }

    if(children.find("rate") == children.end())
    {
        if(rate != nullptr)
        {
            children["rate"] = rate.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::Action()
    :
    	snmp{YType::empty, "snmp"},
	 syslog{YType::empty, "syslog"}
{
    yang_name = "action"; yang_parent_name = "react";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::~Action()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::has_data() const
{
    return snmp.is_set
	|| syslog.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::has_operation() const
{
    return is_set(operation)
	|| is_set(snmp.operation)
	|| is_set(syslog.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (snmp.is_set || is_set(snmp.operation)) leaf_name_data.push_back(snmp.get_name_leafdata());
    if (syslog.is_set || is_set(syslog.operation)) leaf_name_data.push_back(syslog.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "snmp")
    {
        snmp = value;
    }
    if(value_path == "syslog")
    {
        syslog = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::Type()
    :
    	discrete{YType::empty, "discrete"},
	 group_count{YType::uint16, "group-count"},
	 group_percent{YType::uint16, "group-percent"}
{
    yang_name = "type"; yang_parent_name = "alarm";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::~Type()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::has_data() const
{
    return discrete.is_set
	|| group_count.is_set
	|| group_percent.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::has_operation() const
{
    return is_set(operation)
	|| is_set(discrete.operation)
	|| is_set(group_count.operation)
	|| is_set(group_percent.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "type";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (discrete.is_set || is_set(discrete.operation)) leaf_name_data.push_back(discrete.get_name_leafdata());
    if (group_count.is_set || is_set(group_count.operation)) leaf_name_data.push_back(group_count.get_name_leafdata());
    if (group_percent.is_set || is_set(group_percent.operation)) leaf_name_data.push_back(group_percent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "discrete")
    {
        discrete = value;
    }
    if(value_path == "group-count")
    {
        group_count = value;
    }
    if(value_path == "group-percent")
    {
        group_percent = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Alarm()
    :
    	severity{YType::str, "severity"}
    	,
    type(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type>())
{
    type->parent = this;
    children["type"] = type.get();

    yang_name = "alarm"; yang_parent_name = "react";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::~Alarm()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::has_data() const
{
    return severity.is_set
	|| (type !=  nullptr && type->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::has_operation() const
{
    return is_set(operation)
	|| is_set(severity.operation)
	|| (type !=  nullptr && type->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "alarm";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "type")
    {
        if(type != nullptr)
        {
            children["type"] = type.get();
        }
        else
        {
            type = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::Type>();
            type->parent = this;
            children["type"] = type.get();
        }
        return children.at("type");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::get_children()
{
    if(children.find("type") == children.end())
    {
        if(type != nullptr)
        {
            children["type"] = type.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::TriggerValue()
    :
    	greater_than{YType::str, "greater-than"},
	 greater_than_equal{YType::str, "greater-than-equal"},
	 less_than{YType::str, "less-than"},
	 less_than_equal{YType::str, "less-than-equal"},
	 range{YType::str, "range"}
{
    yang_name = "trigger-value"; yang_parent_name = "threshold";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::~TriggerValue()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::has_data() const
{
    return greater_than.is_set
	|| greater_than_equal.is_set
	|| less_than.is_set
	|| less_than_equal.is_set
	|| range.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::has_operation() const
{
    return is_set(operation)
	|| is_set(greater_than.operation)
	|| is_set(greater_than_equal.operation)
	|| is_set(less_than.operation)
	|| is_set(less_than_equal.operation)
	|| is_set(range.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-value";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (greater_than.is_set || is_set(greater_than.operation)) leaf_name_data.push_back(greater_than.get_name_leafdata());
    if (greater_than_equal.is_set || is_set(greater_than_equal.operation)) leaf_name_data.push_back(greater_than_equal.get_name_leafdata());
    if (less_than.is_set || is_set(less_than.operation)) leaf_name_data.push_back(less_than.get_name_leafdata());
    if (less_than_equal.is_set || is_set(less_than_equal.operation)) leaf_name_data.push_back(less_than_equal.get_name_leafdata());
    if (range.is_set || is_set(range.operation)) leaf_name_data.push_back(range.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "greater-than")
    {
        greater_than = value;
    }
    if(value_path == "greater-than-equal")
    {
        greater_than_equal = value;
    }
    if(value_path == "less-than")
    {
        less_than = value;
    }
    if(value_path == "less-than-equal")
    {
        less_than_equal = value;
    }
    if(value_path == "range")
    {
        range = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::TriggerType()
    :
    	average{YType::uint32, "average"},
	 immediate{YType::empty, "immediate"}
{
    yang_name = "trigger-type"; yang_parent_name = "threshold";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::~TriggerType()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::has_data() const
{
    return average.is_set
	|| immediate.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::has_operation() const
{
    return is_set(operation)
	|| is_set(average.operation)
	|| is_set(immediate.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-type";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (average.is_set || is_set(average.operation)) leaf_name_data.push_back(average.get_name_leafdata());
    if (immediate.is_set || is_set(immediate.operation)) leaf_name_data.push_back(immediate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "average")
    {
        average = value;
    }
    if(value_path == "immediate")
    {
        immediate = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::Threshold()
    :
    trigger_type(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType>())
	,trigger_value(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue>())
{
    trigger_type->parent = this;
    children["trigger-type"] = trigger_type.get();

    trigger_value->parent = this;
    children["trigger-value"] = trigger_value.get();

    yang_name = "threshold"; yang_parent_name = "react";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::~Threshold()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::has_data() const
{
    return (trigger_type !=  nullptr && trigger_type->has_data())
	|| (trigger_value !=  nullptr && trigger_value->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::has_operation() const
{
    return is_set(operation)
	|| (trigger_type !=  nullptr && trigger_type->has_operation())
	|| (trigger_value !=  nullptr && trigger_value->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "threshold";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "trigger-type")
    {
        if(trigger_type != nullptr)
        {
            children["trigger-type"] = trigger_type.get();
        }
        else
        {
            trigger_type = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerType>();
            trigger_type->parent = this;
            children["trigger-type"] = trigger_type.get();
        }
        return children.at("trigger-type");
    }

    if(child_yang_name == "trigger-value")
    {
        if(trigger_value != nullptr)
        {
            children["trigger-value"] = trigger_value.get();
        }
        else
        {
            trigger_value = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::TriggerValue>();
            trigger_value->parent = this;
            children["trigger-value"] = trigger_value.get();
        }
        return children.at("trigger-value");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::get_children()
{
    if(children.find("trigger-type") == children.end())
    {
        if(trigger_type != nullptr)
        {
            children["trigger-type"] = trigger_type.get();
        }
    }

    if(children.find("trigger-value") == children.end())
    {
        if(trigger_value != nullptr)
        {
            children["trigger-value"] = trigger_value.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::React()
    :
    	criterion_delay_factor{YType::empty, "criterion-delay-factor"},
	 criterion_flow_count{YType::empty, "criterion-flow-count"},
	 criterion_media_stop{YType::empty, "criterion-media-stop"},
	 criterion_mrv{YType::empty, "criterion-mrv"},
	 criterion_packet_rate{YType::empty, "criterion-packet-rate"},
	 descrition{YType::str, "descrition"}
    	,
    action(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action>())
	,alarm(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm>())
	,threshold(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold>())
{
    action->parent = this;
    children["action"] = action.get();

    alarm->parent = this;
    children["alarm"] = alarm.get();

    threshold->parent = this;
    children["threshold"] = threshold.get();

    yang_name = "react"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::~React()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::has_data() const
{
    return criterion_delay_factor.is_set
	|| criterion_flow_count.is_set
	|| criterion_media_stop.is_set
	|| criterion_mrv.is_set
	|| criterion_packet_rate.is_set
	|| descrition.is_set
	|| (action !=  nullptr && action->has_data())
	|| (alarm !=  nullptr && alarm->has_data())
	|| (threshold !=  nullptr && threshold->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::has_operation() const
{
    return is_set(operation)
	|| is_set(criterion_delay_factor.operation)
	|| is_set(criterion_flow_count.operation)
	|| is_set(criterion_media_stop.operation)
	|| is_set(criterion_mrv.operation)
	|| is_set(criterion_packet_rate.operation)
	|| is_set(descrition.operation)
	|| (action !=  nullptr && action->has_operation())
	|| (alarm !=  nullptr && alarm->has_operation())
	|| (threshold !=  nullptr && threshold->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "react";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (criterion_delay_factor.is_set || is_set(criterion_delay_factor.operation)) leaf_name_data.push_back(criterion_delay_factor.get_name_leafdata());
    if (criterion_flow_count.is_set || is_set(criterion_flow_count.operation)) leaf_name_data.push_back(criterion_flow_count.get_name_leafdata());
    if (criterion_media_stop.is_set || is_set(criterion_media_stop.operation)) leaf_name_data.push_back(criterion_media_stop.get_name_leafdata());
    if (criterion_mrv.is_set || is_set(criterion_mrv.operation)) leaf_name_data.push_back(criterion_mrv.get_name_leafdata());
    if (criterion_packet_rate.is_set || is_set(criterion_packet_rate.operation)) leaf_name_data.push_back(criterion_packet_rate.get_name_leafdata());
    if (descrition.is_set || is_set(descrition.operation)) leaf_name_data.push_back(descrition.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "action")
    {
        if(action != nullptr)
        {
            children["action"] = action.get();
        }
        else
        {
            action = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Action>();
            action->parent = this;
            children["action"] = action.get();
        }
        return children.at("action");
    }

    if(child_yang_name == "alarm")
    {
        if(alarm != nullptr)
        {
            children["alarm"] = alarm.get();
        }
        else
        {
            alarm = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Alarm>();
            alarm->parent = this;
            children["alarm"] = alarm.get();
        }
        return children.at("alarm");
    }

    if(child_yang_name == "threshold")
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
        else
        {
            threshold = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::Threshold>();
            threshold->parent = this;
            children["threshold"] = threshold.get();
        }
        return children.at("threshold");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::get_children()
{
    if(children.find("action") == children.end())
    {
        if(action != nullptr)
        {
            children["action"] = action.get();
        }
    }

    if(children.find("alarm") == children.end())
    {
        if(alarm != nullptr)
        {
            children["alarm"] = alarm.get();
        }
    }

    if(children.find("threshold") == children.end())
    {
        if(threshold != nullptr)
        {
            children["threshold"] = threshold.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "criterion-delay-factor")
    {
        criterion_delay_factor = value;
    }
    if(value_path == "criterion-flow-count")
    {
        criterion_flow_count = value;
    }
    if(value_path == "criterion-media-stop")
    {
        criterion_media_stop = value;
    }
    if(value_path == "criterion-mrv")
    {
        criterion_mrv = value;
    }
    if(value_path == "criterion-packet-rate")
    {
        criterion_packet_rate = value;
    }
    if(value_path == "descrition")
    {
        descrition = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::NextHop()
    :
    	ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"},
	 vrf{YType::str, "vrf"}
{
    yang_name = "next-hop"; yang_parent_name = "pbr-forward";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::~NextHop()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::has_data() const
{
    return ipv4_address.is_set
	|| ipv6_address.is_set
	|| vrf.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(vrf.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::PbrForward()
    :
    	default_{YType::empty, "default"}
    	,
    next_hop(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop>())
{
    next_hop->parent = this;
    children["next-hop"] = next_hop.get();

    yang_name = "pbr-forward"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::~PbrForward()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::has_data() const
{
    return default_.is_set
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation)
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pbr-forward";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop.get();
        }
        else
        {
            next_hop = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::NextHop>();
            next_hop->parent = this;
            children["next-hop"] = next_hop.get();
        }
        return children.at("next-hop");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::get_children()
{
    if(children.find("next-hop") == children.end())
    {
        if(next_hop != nullptr)
        {
            children["next-hop"] = next_hop.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::ServiceFunctionPath()
    :
    	index_{YType::uint8, "index"},
	 metadata{YType::str, "metadata"},
	 path_id{YType::uint32, "path-id"}
{
    yang_name = "service-function-path"; yang_parent_name = "policy-map-rule";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::~ServiceFunctionPath()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::has_data() const
{
    return index_.is_set
	|| metadata.is_set
	|| path_id.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(metadata.operation)
	|| is_set(path_id.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-function-path";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (metadata.is_set || is_set(metadata.operation)) leaf_name_data.push_back(metadata.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.operation)) leaf_name_data.push_back(path_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::get_children()
{
    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "metadata")
    {
        metadata = value;
    }
    if(value_path == "path-id")
    {
        path_id = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PolicyMapRule()
    :
    	class_name{YType::str, "class-name"},
	 class_type{YType::enumeration, "class-type"},
	 decap_gre{YType::empty, "decap-gre"},
	 default_red{YType::empty, "default-red"},
	 ecn_red{YType::empty, "ecn-red"},
	 fragment{YType::str, "fragment"},
	 http_redirect{YType::str, "http-redirect"},
	 pbr_drop{YType::empty, "pbr-drop"},
	 pbr_transmit{YType::empty, "pbr-transmit"},
	 priority_level{YType::uint8, "priority-level"},
	 service_fragment{YType::str, "service-fragment"}
    	,
    bandwidth_remaining(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining>())
	,cac_local(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal>())
	,flow_params(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams>())
	,metrics_ipcbr(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr>())
	,min_bandwidth(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth>())
	,pbr_forward(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward>())
	,pfc(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc>())
	,police(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police>())
	,queue_limit(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit>())
	,react(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React>())
	,service_function_path(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath>())
	,service_policy(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy>())
	,set(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set>())
	,shape(std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape>())
{
    bandwidth_remaining->parent = this;
    children["bandwidth-remaining"] = bandwidth_remaining.get();

    cac_local->parent = this;
    children["cac-local"] = cac_local.get();

    flow_params->parent = this;
    children["flow-params"] = flow_params.get();

    metrics_ipcbr->parent = this;
    children["metrics-ipcbr"] = metrics_ipcbr.get();

    min_bandwidth->parent = this;
    children["min-bandwidth"] = min_bandwidth.get();

    pbr_forward->parent = this;
    children["pbr-forward"] = pbr_forward.get();

    pfc->parent = this;
    children["pfc"] = pfc.get();

    police->parent = this;
    children["police"] = police.get();

    queue_limit->parent = this;
    children["queue-limit"] = queue_limit.get();

    react->parent = this;
    children["react"] = react.get();

    service_function_path->parent = this;
    children["service-function-path"] = service_function_path.get();

    service_policy->parent = this;
    children["service-policy"] = service_policy.get();

    set->parent = this;
    children["set"] = set.get();

    shape->parent = this;
    children["shape"] = shape.get();

    yang_name = "policy-map-rule"; yang_parent_name = "policy-map";
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::~PolicyMapRule()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::has_data() const
{
    for (std::size_t index=0; index<random_detect.size(); index++)
    {
        if(random_detect[index]->has_data())
            return true;
    }
    return class_name.is_set
	|| class_type.is_set
	|| decap_gre.is_set
	|| default_red.is_set
	|| ecn_red.is_set
	|| fragment.is_set
	|| http_redirect.is_set
	|| pbr_drop.is_set
	|| pbr_transmit.is_set
	|| priority_level.is_set
	|| service_fragment.is_set
	|| (bandwidth_remaining !=  nullptr && bandwidth_remaining->has_data())
	|| (cac_local !=  nullptr && cac_local->has_data())
	|| (flow_params !=  nullptr && flow_params->has_data())
	|| (metrics_ipcbr !=  nullptr && metrics_ipcbr->has_data())
	|| (min_bandwidth !=  nullptr && min_bandwidth->has_data())
	|| (pbr_forward !=  nullptr && pbr_forward->has_data())
	|| (pfc !=  nullptr && pfc->has_data())
	|| (police !=  nullptr && police->has_data())
	|| (queue_limit !=  nullptr && queue_limit->has_data())
	|| (react !=  nullptr && react->has_data())
	|| (service_function_path !=  nullptr && service_function_path->has_data())
	|| (service_policy !=  nullptr && service_policy->has_data())
	|| (set !=  nullptr && set->has_data())
	|| (shape !=  nullptr && shape->has_data());
}

bool PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::has_operation() const
{
    for (std::size_t index=0; index<random_detect.size(); index++)
    {
        if(random_detect[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(class_name.operation)
	|| is_set(class_type.operation)
	|| is_set(decap_gre.operation)
	|| is_set(default_red.operation)
	|| is_set(ecn_red.operation)
	|| is_set(fragment.operation)
	|| is_set(http_redirect.operation)
	|| is_set(pbr_drop.operation)
	|| is_set(pbr_transmit.operation)
	|| is_set(priority_level.operation)
	|| is_set(service_fragment.operation)
	|| (bandwidth_remaining !=  nullptr && bandwidth_remaining->has_operation())
	|| (cac_local !=  nullptr && cac_local->has_operation())
	|| (flow_params !=  nullptr && flow_params->has_operation())
	|| (metrics_ipcbr !=  nullptr && metrics_ipcbr->has_operation())
	|| (min_bandwidth !=  nullptr && min_bandwidth->has_operation())
	|| (pbr_forward !=  nullptr && pbr_forward->has_operation())
	|| (pfc !=  nullptr && pfc->has_operation())
	|| (police !=  nullptr && police->has_operation())
	|| (queue_limit !=  nullptr && queue_limit->has_operation())
	|| (react !=  nullptr && react->has_operation())
	|| (service_function_path !=  nullptr && service_function_path->has_operation())
	|| (service_policy !=  nullptr && service_policy->has_operation())
	|| (set !=  nullptr && set->has_operation())
	|| (shape !=  nullptr && shape->has_operation());
}

std::string PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map-rule" <<"[class-name='" <<class_name.get() <<"']" <<"[class-type='" <<class_type.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (class_name.is_set || is_set(class_name.operation)) leaf_name_data.push_back(class_name.get_name_leafdata());
    if (class_type.is_set || is_set(class_type.operation)) leaf_name_data.push_back(class_type.get_name_leafdata());
    if (decap_gre.is_set || is_set(decap_gre.operation)) leaf_name_data.push_back(decap_gre.get_name_leafdata());
    if (default_red.is_set || is_set(default_red.operation)) leaf_name_data.push_back(default_red.get_name_leafdata());
    if (ecn_red.is_set || is_set(ecn_red.operation)) leaf_name_data.push_back(ecn_red.get_name_leafdata());
    if (fragment.is_set || is_set(fragment.operation)) leaf_name_data.push_back(fragment.get_name_leafdata());
    if (http_redirect.is_set || is_set(http_redirect.operation)) leaf_name_data.push_back(http_redirect.get_name_leafdata());
    if (pbr_drop.is_set || is_set(pbr_drop.operation)) leaf_name_data.push_back(pbr_drop.get_name_leafdata());
    if (pbr_transmit.is_set || is_set(pbr_transmit.operation)) leaf_name_data.push_back(pbr_transmit.get_name_leafdata());
    if (priority_level.is_set || is_set(priority_level.operation)) leaf_name_data.push_back(priority_level.get_name_leafdata());
    if (service_fragment.is_set || is_set(service_fragment.operation)) leaf_name_data.push_back(service_fragment.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bandwidth-remaining")
    {
        if(bandwidth_remaining != nullptr)
        {
            children["bandwidth-remaining"] = bandwidth_remaining.get();
        }
        else
        {
            bandwidth_remaining = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::BandwidthRemaining>();
            bandwidth_remaining->parent = this;
            children["bandwidth-remaining"] = bandwidth_remaining.get();
        }
        return children.at("bandwidth-remaining");
    }

    if(child_yang_name == "cac-local")
    {
        if(cac_local != nullptr)
        {
            children["cac-local"] = cac_local.get();
        }
        else
        {
            cac_local = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::CacLocal>();
            cac_local->parent = this;
            children["cac-local"] = cac_local.get();
        }
        return children.at("cac-local");
    }

    if(child_yang_name == "flow-params")
    {
        if(flow_params != nullptr)
        {
            children["flow-params"] = flow_params.get();
        }
        else
        {
            flow_params = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::FlowParams>();
            flow_params->parent = this;
            children["flow-params"] = flow_params.get();
        }
        return children.at("flow-params");
    }

    if(child_yang_name == "metrics-ipcbr")
    {
        if(metrics_ipcbr != nullptr)
        {
            children["metrics-ipcbr"] = metrics_ipcbr.get();
        }
        else
        {
            metrics_ipcbr = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MetricsIpcbr>();
            metrics_ipcbr->parent = this;
            children["metrics-ipcbr"] = metrics_ipcbr.get();
        }
        return children.at("metrics-ipcbr");
    }

    if(child_yang_name == "min-bandwidth")
    {
        if(min_bandwidth != nullptr)
        {
            children["min-bandwidth"] = min_bandwidth.get();
        }
        else
        {
            min_bandwidth = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::MinBandwidth>();
            min_bandwidth->parent = this;
            children["min-bandwidth"] = min_bandwidth.get();
        }
        return children.at("min-bandwidth");
    }

    if(child_yang_name == "pbr-forward")
    {
        if(pbr_forward != nullptr)
        {
            children["pbr-forward"] = pbr_forward.get();
        }
        else
        {
            pbr_forward = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::PbrForward>();
            pbr_forward->parent = this;
            children["pbr-forward"] = pbr_forward.get();
        }
        return children.at("pbr-forward");
    }

    if(child_yang_name == "pfc")
    {
        if(pfc != nullptr)
        {
            children["pfc"] = pfc.get();
        }
        else
        {
            pfc = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Pfc>();
            pfc->parent = this;
            children["pfc"] = pfc.get();
        }
        return children.at("pfc");
    }

    if(child_yang_name == "police")
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
        else
        {
            police = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Police>();
            police->parent = this;
            children["police"] = police.get();
        }
        return children.at("police");
    }

    if(child_yang_name == "queue-limit")
    {
        if(queue_limit != nullptr)
        {
            children["queue-limit"] = queue_limit.get();
        }
        else
        {
            queue_limit = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::QueueLimit>();
            queue_limit->parent = this;
            children["queue-limit"] = queue_limit.get();
        }
        return children.at("queue-limit");
    }

    if(child_yang_name == "random-detect")
    {
        for(auto const & c : random_detect)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::RandomDetect>();
        c->parent = this;
        random_detect.push_back(std::move(c));
        children[segment_path] = random_detect.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "react")
    {
        if(react != nullptr)
        {
            children["react"] = react.get();
        }
        else
        {
            react = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::React>();
            react->parent = this;
            children["react"] = react.get();
        }
        return children.at("react");
    }

    if(child_yang_name == "service-function-path")
    {
        if(service_function_path != nullptr)
        {
            children["service-function-path"] = service_function_path.get();
        }
        else
        {
            service_function_path = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServiceFunctionPath>();
            service_function_path->parent = this;
            children["service-function-path"] = service_function_path.get();
        }
        return children.at("service-function-path");
    }

    if(child_yang_name == "service-policy")
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
        else
        {
            service_policy = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::ServicePolicy>();
            service_policy->parent = this;
            children["service-policy"] = service_policy.get();
        }
        return children.at("service-policy");
    }

    if(child_yang_name == "set")
    {
        if(set != nullptr)
        {
            children["set"] = set.get();
        }
        else
        {
            set = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Set>();
            set->parent = this;
            children["set"] = set.get();
        }
        return children.at("set");
    }

    if(child_yang_name == "shape")
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
        else
        {
            shape = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::Shape>();
            shape->parent = this;
            children["shape"] = shape.get();
        }
        return children.at("shape");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::get_children()
{
    if(children.find("bandwidth-remaining") == children.end())
    {
        if(bandwidth_remaining != nullptr)
        {
            children["bandwidth-remaining"] = bandwidth_remaining.get();
        }
    }

    if(children.find("cac-local") == children.end())
    {
        if(cac_local != nullptr)
        {
            children["cac-local"] = cac_local.get();
        }
    }

    if(children.find("flow-params") == children.end())
    {
        if(flow_params != nullptr)
        {
            children["flow-params"] = flow_params.get();
        }
    }

    if(children.find("metrics-ipcbr") == children.end())
    {
        if(metrics_ipcbr != nullptr)
        {
            children["metrics-ipcbr"] = metrics_ipcbr.get();
        }
    }

    if(children.find("min-bandwidth") == children.end())
    {
        if(min_bandwidth != nullptr)
        {
            children["min-bandwidth"] = min_bandwidth.get();
        }
    }

    if(children.find("pbr-forward") == children.end())
    {
        if(pbr_forward != nullptr)
        {
            children["pbr-forward"] = pbr_forward.get();
        }
    }

    if(children.find("pfc") == children.end())
    {
        if(pfc != nullptr)
        {
            children["pfc"] = pfc.get();
        }
    }

    if(children.find("police") == children.end())
    {
        if(police != nullptr)
        {
            children["police"] = police.get();
        }
    }

    if(children.find("queue-limit") == children.end())
    {
        if(queue_limit != nullptr)
        {
            children["queue-limit"] = queue_limit.get();
        }
    }

    for (auto const & c : random_detect)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("react") == children.end())
    {
        if(react != nullptr)
        {
            children["react"] = react.get();
        }
    }

    if(children.find("service-function-path") == children.end())
    {
        if(service_function_path != nullptr)
        {
            children["service-function-path"] = service_function_path.get();
        }
    }

    if(children.find("service-policy") == children.end())
    {
        if(service_policy != nullptr)
        {
            children["service-policy"] = service_policy.get();
        }
    }

    if(children.find("set") == children.end())
    {
        if(set != nullptr)
        {
            children["set"] = set.get();
        }
    }

    if(children.find("shape") == children.end())
    {
        if(shape != nullptr)
        {
            children["shape"] = shape.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class-name")
    {
        class_name = value;
    }
    if(value_path == "class-type")
    {
        class_type = value;
    }
    if(value_path == "decap-gre")
    {
        decap_gre = value;
    }
    if(value_path == "default-red")
    {
        default_red = value;
    }
    if(value_path == "ecn-red")
    {
        ecn_red = value;
    }
    if(value_path == "fragment")
    {
        fragment = value;
    }
    if(value_path == "http-redirect")
    {
        http_redirect = value;
    }
    if(value_path == "pbr-drop")
    {
        pbr_drop = value;
    }
    if(value_path == "pbr-transmit")
    {
        pbr_transmit = value;
    }
    if(value_path == "priority-level")
    {
        priority_level = value;
    }
    if(value_path == "service-fragment")
    {
        service_fragment = value;
    }
}

PolicyManager::PolicyMaps::PolicyMap::PolicyMap()
    :
    	name{YType::str, "name"},
	 type{YType::enumeration, "type"},
	 description{YType::str, "description"}
{
    yang_name = "policy-map"; yang_parent_name = "policy-maps";
}

PolicyManager::PolicyMaps::PolicyMap::~PolicyMap()
{
}

bool PolicyManager::PolicyMaps::PolicyMap::has_data() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<policy_map_rule.size(); index++)
    {
        if(policy_map_rule[index]->has_data())
            return true;
    }
    return name.is_set
	|| type.is_set
	|| description.is_set;
}

bool PolicyManager::PolicyMaps::PolicyMap::has_operation() const
{
    for (std::size_t index=0; index<event.size(); index++)
    {
        if(event[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<policy_map_rule.size(); index++)
    {
        if(policy_map_rule[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(type.operation)
	|| is_set(description.operation);
}

std::string PolicyManager::PolicyMaps::PolicyMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-map" <<"[name='" <<name.get() <<"']" <<"[type='" <<type.get() <<"']";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::PolicyMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager/policy-maps/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::PolicyMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "event")
    {
        for(auto const & c : event)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::Event>();
        c->parent = this;
        event.push_back(std::move(c));
        children[segment_path] = event.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map-rule")
    {
        for(auto const & c : policy_map_rule)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::PolicyMaps::PolicyMap::PolicyMapRule>();
        c->parent = this;
        policy_map_rule.push_back(std::move(c));
        children[segment_path] = policy_map_rule.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::PolicyMap::get_children()
{
    for (auto const & c : event)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    for (auto const & c : policy_map_rule)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::PolicyMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "type")
    {
        type = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
}

PolicyManager::PolicyMaps::PolicyMaps()
{
    yang_name = "policy-maps"; yang_parent_name = "policy-manager";
}

PolicyManager::PolicyMaps::~PolicyMaps()
{
}

bool PolicyManager::PolicyMaps::has_data() const
{
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_data())
            return true;
    }
    return false;
}

bool PolicyManager::PolicyMaps::has_operation() const
{
    for (std::size_t index=0; index<policy_map.size(); index++)
    {
        if(policy_map[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string PolicyManager::PolicyMaps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy-maps";

    return path_buffer.str();

}

EntityPath PolicyManager::PolicyMaps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::PolicyMaps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "policy-map")
    {
        for(auto const & c : policy_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<PolicyManager::PolicyMaps::PolicyMap>();
        c->parent = this;
        policy_map.push_back(std::move(c));
        children[segment_path] = policy_map.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::PolicyMaps::get_children()
{
    for (auto const & c : policy_map)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void PolicyManager::PolicyMaps::set_value(const std::string & value_path, std::string value)
{
}

PolicyManager::PolicyManager()
    :
    class_maps(std::make_unique<PolicyManager::ClassMaps>())
	,policy_maps(std::make_unique<PolicyManager::PolicyMaps>())
{
    class_maps->parent = this;
    children["class-maps"] = class_maps.get();

    policy_maps->parent = this;
    children["policy-maps"] = policy_maps.get();

    yang_name = "policy-manager"; yang_parent_name = "Cisco-IOS-XR-infra-policymgr-cfg";
}

PolicyManager::~PolicyManager()
{
}

bool PolicyManager::has_data() const
{
    return (class_maps !=  nullptr && class_maps->has_data())
	|| (policy_maps !=  nullptr && policy_maps->has_data());
}

bool PolicyManager::has_operation() const
{
    return is_set(operation)
	|| (class_maps !=  nullptr && class_maps->has_operation())
	|| (policy_maps !=  nullptr && policy_maps->has_operation());
}

std::string PolicyManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-policymgr-cfg:policy-manager";

    return path_buffer.str();

}

EntityPath PolicyManager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* PolicyManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "class-maps")
    {
        if(class_maps != nullptr)
        {
            children["class-maps"] = class_maps.get();
        }
        else
        {
            class_maps = std::make_unique<PolicyManager::ClassMaps>();
            class_maps->parent = this;
            children["class-maps"] = class_maps.get();
        }
        return children.at("class-maps");
    }

    if(child_yang_name == "policy-maps")
    {
        if(policy_maps != nullptr)
        {
            children["policy-maps"] = policy_maps.get();
        }
        else
        {
            policy_maps = std::make_unique<PolicyManager::PolicyMaps>();
            policy_maps->parent = this;
            children["policy-maps"] = policy_maps.get();
        }
        return children.at("policy-maps");
    }

    return nullptr;
}

std::map<std::string, Entity*> & PolicyManager::get_children()
{
    if(children.find("class-maps") == children.end())
    {
        if(class_maps != nullptr)
        {
            children["class-maps"] = class_maps.get();
        }
    }

    if(children.find("policy-maps") == children.end())
    {
        if(policy_maps != nullptr)
        {
            children["policy-maps"] = policy_maps.get();
        }
    }

    return children;
}

void PolicyManager::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> PolicyManager::clone_ptr()
{
    return std::make_unique<PolicyManager>();
}

const Enum::YLeaf EventTypeEnum::account_logoff {0, "account-logoff"};
const Enum::YLeaf EventTypeEnum::account_logon {1, "account-logon"};
const Enum::YLeaf EventTypeEnum::authentication_failure {2, "authentication-failure"};
const Enum::YLeaf EventTypeEnum::authentication_no_response {3, "authentication-no-response"};
const Enum::YLeaf EventTypeEnum::authorization_failure {4, "authorization-failure"};
const Enum::YLeaf EventTypeEnum::authorization_no_response {5, "authorization-no-response"};
const Enum::YLeaf EventTypeEnum::credit_exhausted {6, "credit-exhausted"};
const Enum::YLeaf EventTypeEnum::exception {7, "exception"};
const Enum::YLeaf EventTypeEnum::idle_timeout {8, "idle-timeout"};
const Enum::YLeaf EventTypeEnum::quota_depleted {9, "quota-depleted"};
const Enum::YLeaf EventTypeEnum::service_start {10, "service-start"};
const Enum::YLeaf EventTypeEnum::service_stop {11, "service-stop"};
const Enum::YLeaf EventTypeEnum::session_activate {12, "session-activate"};
const Enum::YLeaf EventTypeEnum::session_start {13, "session-start"};
const Enum::YLeaf EventTypeEnum::session_stop {14, "session-stop"};
const Enum::YLeaf EventTypeEnum::timer_expiry {15, "timer-expiry"};

const Enum::YLeaf ClassMapTypeEnum::qos {1, "qos"};
const Enum::YLeaf ClassMapTypeEnum::traffic {3, "traffic"};
const Enum::YLeaf ClassMapTypeEnum::control {4, "control"};

const Enum::YLeaf ExecutionStrategyEnum::do_all {0, "do-all"};
const Enum::YLeaf ExecutionStrategyEnum::do_until_failure {1, "do-until-failure"};
const Enum::YLeaf ExecutionStrategyEnum::do_until_success {2, "do-until-success"};

const Enum::YLeaf AuthorizeIdentifierEnum::circuit_id {0, "circuit-id"};
const Enum::YLeaf AuthorizeIdentifierEnum::dhcp_client_id {1, "dhcp-client-id"};
const Enum::YLeaf AuthorizeIdentifierEnum::remote_id {2, "remote-id"};
const Enum::YLeaf AuthorizeIdentifierEnum::source_address_ipv4 {3, "source-address-ipv4"};
const Enum::YLeaf AuthorizeIdentifierEnum::source_address_ipv6 {4, "source-address-ipv6"};
const Enum::YLeaf AuthorizeIdentifierEnum::source_address_mac {5, "source-address-mac"};
const Enum::YLeaf AuthorizeIdentifierEnum::username {6, "username"};

const Enum::YLeaf PmapClassMapTypeEnum::qos {1, "qos"};
const Enum::YLeaf PmapClassMapTypeEnum::traffic {2, "traffic"};
const Enum::YLeaf PmapClassMapTypeEnum::subscriber_control {3, "subscriber-control"};

const Enum::YLeaf PolicyMapTypeEnum::qos {1, "qos"};
const Enum::YLeaf PolicyMapTypeEnum::pbr {2, "pbr"};
const Enum::YLeaf PolicyMapTypeEnum::traffic {3, "traffic"};
const Enum::YLeaf PolicyMapTypeEnum::subscriber_control {4, "subscriber-control"};
const Enum::YLeaf PolicyMapTypeEnum::redirect {6, "redirect"};
const Enum::YLeaf PolicyMapTypeEnum::flow_monitor {7, "flow-monitor"};


}
}

