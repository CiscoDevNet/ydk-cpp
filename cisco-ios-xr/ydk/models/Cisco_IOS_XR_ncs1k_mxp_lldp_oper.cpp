
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ncs1k_mxp_lldp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ncs1k_mxp_lldp_oper {

LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::LldpNeighborBriefEntry()
    :
    	chassis_id{YType::str, "chassis-id"},
	 enabled_capabilities{YType::str, "enabled-capabilities"},
	 hold_time{YType::uint16, "hold-time"},
	 port_id_detail{YType::str, "port-id-detail"},
	 recv_intf{YType::str, "recv-intf"},
	 system_name{YType::str, "system-name"}
{
    yang_name = "lldp-neighbor-brief-entry"; yang_parent_name = "neighbours";
}

LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::~LldpNeighborBriefEntry()
{
}

bool LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::has_data() const
{
    return chassis_id.is_set
	|| enabled_capabilities.is_set
	|| hold_time.is_set
	|| port_id_detail.is_set
	|| recv_intf.is_set
	|| system_name.is_set;
}

bool LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::has_operation() const
{
    return is_set(operation)
	|| is_set(chassis_id.operation)
	|| is_set(enabled_capabilities.operation)
	|| is_set(hold_time.operation)
	|| is_set(port_id_detail.operation)
	|| is_set(recv_intf.operation)
	|| is_set(system_name.operation);
}

std::string LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-neighbor-brief-entry";

    return path_buffer.str();

}

EntityPath LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data/lldp-neighbor-brief/neighbours/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (chassis_id.is_set || is_set(chassis_id.operation)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.operation)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (port_id_detail.is_set || is_set(port_id_detail.operation)) leaf_name_data.push_back(port_id_detail.get_name_leafdata());
    if (recv_intf.is_set || is_set(recv_intf.operation)) leaf_name_data.push_back(recv_intf.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.operation)) leaf_name_data.push_back(system_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::get_children()
{
    return children;
}

void LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "chassis-id")
    {
        chassis_id = value;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail = value;
    }
    if(value_path == "recv-intf")
    {
        recv_intf = value;
    }
    if(value_path == "system-name")
    {
        system_name = value;
    }
}

LldpSnoopData::LldpNeighborBrief::Neighbours::Neighbours()
{
    yang_name = "neighbours"; yang_parent_name = "lldp-neighbor-brief";
}

LldpSnoopData::LldpNeighborBrief::Neighbours::~Neighbours()
{
}

bool LldpSnoopData::LldpNeighborBrief::Neighbours::has_data() const
{
    for (std::size_t index=0; index<lldp_neighbor_brief_entry.size(); index++)
    {
        if(lldp_neighbor_brief_entry[index]->has_data())
            return true;
    }
    return false;
}

bool LldpSnoopData::LldpNeighborBrief::Neighbours::has_operation() const
{
    for (std::size_t index=0; index<lldp_neighbor_brief_entry.size(); index++)
    {
        if(lldp_neighbor_brief_entry[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LldpSnoopData::LldpNeighborBrief::Neighbours::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbours";

    return path_buffer.str();

}

EntityPath LldpSnoopData::LldpNeighborBrief::Neighbours::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data/lldp-neighbor-brief/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* LldpSnoopData::LldpNeighborBrief::Neighbours::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "lldp-neighbor-brief-entry")
    {
        for(auto const & c : lldp_neighbor_brief_entry)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<LldpSnoopData::LldpNeighborBrief::Neighbours::LldpNeighborBriefEntry>();
        c->parent = this;
        lldp_neighbor_brief_entry.push_back(std::move(c));
        children[segment_path] = lldp_neighbor_brief_entry.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & LldpSnoopData::LldpNeighborBrief::Neighbours::get_children()
{
    for (auto const & c : lldp_neighbor_brief_entry)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void LldpSnoopData::LldpNeighborBrief::Neighbours::set_value(const std::string & value_path, std::string value)
{
}

LldpSnoopData::LldpNeighborBrief::LldpNeighborBrief()
    :
    	number_of_entries{YType::uint16, "number-of-entries"}
    	,
    neighbours(std::make_unique<LldpSnoopData::LldpNeighborBrief::Neighbours>())
{
    neighbours->parent = this;
    children["neighbours"] = neighbours.get();

    yang_name = "lldp-neighbor-brief"; yang_parent_name = "lldp-snoop-data";
}

LldpSnoopData::LldpNeighborBrief::~LldpNeighborBrief()
{
}

bool LldpSnoopData::LldpNeighborBrief::has_data() const
{
    return number_of_entries.is_set
	|| (neighbours !=  nullptr && neighbours->has_data());
}

bool LldpSnoopData::LldpNeighborBrief::has_operation() const
{
    return is_set(operation)
	|| is_set(number_of_entries.operation)
	|| (neighbours !=  nullptr && is_set(neighbours->operation));
}

std::string LldpSnoopData::LldpNeighborBrief::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lldp-neighbor-brief";

    return path_buffer.str();

}

EntityPath LldpSnoopData::LldpNeighborBrief::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_of_entries.is_set || is_set(number_of_entries.operation)) leaf_name_data.push_back(number_of_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* LldpSnoopData::LldpNeighborBrief::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbours")
    {
        if(neighbours != nullptr)
        {
            children["neighbours"] = neighbours.get();
        }
        else
        {
            neighbours = std::make_unique<LldpSnoopData::LldpNeighborBrief::Neighbours>();
            neighbours->parent = this;
            children["neighbours"] = neighbours.get();
        }
        return children.at("neighbours");
    }

    return nullptr;
}

std::map<std::string, Entity*> & LldpSnoopData::LldpNeighborBrief::get_children()
{
    if(children.find("neighbours") == children.end())
    {
        if(neighbours != nullptr)
        {
            children["neighbours"] = neighbours.get();
        }
    }

    return children;
}

void LldpSnoopData::LldpNeighborBrief::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number-of-entries")
    {
        number_of_entries = value;
    }
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::Address()
    :
    	address_type{YType::enumeration, "address-type"},
	 ipv4_address{YType::str, "ipv4-address"},
	 ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "address"; yang_parent_name = "network-address";
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::~Address()
{
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::has_data() const
{
    return address_type.is_set
	|| ipv4_address.is_set
	|| ipv6_address.is_set;
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::has_operation() const
{
    return is_set(operation)
	|| is_set(address_type.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(ipv6_address.operation);
}

std::string LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

EntityPath LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_type.is_set || is_set(address_type.operation)) leaf_name_data.push_back(address_type.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::get_children()
{
    return children;
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-type")
    {
        address_type = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::NetworkAddress()
    :
    	if_num{YType::uint32, "if-num"},
	 ma_subtype{YType::uint8, "ma-subtype"}
    	,
    address(std::make_unique<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address>())
{
    address->parent = this;
    children["address"] = address.get();

    yang_name = "network-address"; yang_parent_name = "ethernet-controller-name";
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::~NetworkAddress()
{
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::has_data() const
{
    return if_num.is_set
	|| ma_subtype.is_set
	|| (address !=  nullptr && address->has_data());
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(if_num.operation)
	|| is_set(ma_subtype.operation)
	|| (address !=  nullptr && is_set(address->operation));
}

std::string LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network-address";

    return path_buffer.str();

}

EntityPath LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (if_num.is_set || is_set(if_num.operation)) leaf_name_data.push_back(if_num.get_name_leafdata());
    if (ma_subtype.is_set || is_set(ma_subtype.operation)) leaf_name_data.push_back(ma_subtype.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "address")
    {
        if(address != nullptr)
        {
            children["address"] = address.get();
        }
        else
        {
            address = std::make_unique<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::Address>();
            address->parent = this;
            children["address"] = address.get();
        }
        return children.at("address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::get_children()
{
    if(children.find("address") == children.end())
    {
        if(address != nullptr)
        {
            children["address"] = address.get();
        }
    }

    return children;
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "if-num")
    {
        if_num = value;
    }
    if(value_path == "ma-subtype")
    {
        ma_subtype = value;
    }
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::EthernetControllerName()
    :
    	name{YType::str, "name"},
	 chassis_id{YType::str, "chassis-id"},
	 drop_enabled{YType::boolean, "drop-enabled"},
	 enabled_capabilities{YType::str, "enabled-capabilities"},
	 hold_time{YType::uint16, "hold-time"},
	 lldp_neighbor{YType::str, "lldp-neighbor"},
	 port_description{YType::str, "port-description"},
	 port_id_ckt{YType::uint32, "port-id-ckt"},
	 port_id_detail{YType::str, "port-id-detail"},
	 rx_lldp_pkts{YType::uint64, "rx-lldp-pkts"},
	 source_mac{YType::str, "source-mac"},
	 system_capabilities{YType::str, "system-capabilities"},
	 system_description{YType::str, "system-description"},
	 system_name{YType::str, "system-name"}
    	,
    network_address(std::make_unique<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress>())
{
    network_address->parent = this;
    children["network-address"] = network_address.get();

    yang_name = "ethernet-controller-name"; yang_parent_name = "ethernet-controller-names";
}

LldpSnoopData::EthernetControllerNames::EthernetControllerName::~EthernetControllerName()
{
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::has_data() const
{
    return name.is_set
	|| chassis_id.is_set
	|| drop_enabled.is_set
	|| enabled_capabilities.is_set
	|| hold_time.is_set
	|| lldp_neighbor.is_set
	|| port_description.is_set
	|| port_id_ckt.is_set
	|| port_id_detail.is_set
	|| rx_lldp_pkts.is_set
	|| source_mac.is_set
	|| system_capabilities.is_set
	|| system_description.is_set
	|| system_name.is_set
	|| (network_address !=  nullptr && network_address->has_data());
}

bool LldpSnoopData::EthernetControllerNames::EthernetControllerName::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(chassis_id.operation)
	|| is_set(drop_enabled.operation)
	|| is_set(enabled_capabilities.operation)
	|| is_set(hold_time.operation)
	|| is_set(lldp_neighbor.operation)
	|| is_set(port_description.operation)
	|| is_set(port_id_ckt.operation)
	|| is_set(port_id_detail.operation)
	|| is_set(rx_lldp_pkts.operation)
	|| is_set(source_mac.operation)
	|| is_set(system_capabilities.operation)
	|| is_set(system_description.operation)
	|| is_set(system_name.operation)
	|| (network_address !=  nullptr && is_set(network_address->operation));
}

std::string LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-controller-name" <<"[name='" <<name.get() <<"']";

    return path_buffer.str();

}

EntityPath LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data/ethernet-controller-names/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (chassis_id.is_set || is_set(chassis_id.operation)) leaf_name_data.push_back(chassis_id.get_name_leafdata());
    if (drop_enabled.is_set || is_set(drop_enabled.operation)) leaf_name_data.push_back(drop_enabled.get_name_leafdata());
    if (enabled_capabilities.is_set || is_set(enabled_capabilities.operation)) leaf_name_data.push_back(enabled_capabilities.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (lldp_neighbor.is_set || is_set(lldp_neighbor.operation)) leaf_name_data.push_back(lldp_neighbor.get_name_leafdata());
    if (port_description.is_set || is_set(port_description.operation)) leaf_name_data.push_back(port_description.get_name_leafdata());
    if (port_id_ckt.is_set || is_set(port_id_ckt.operation)) leaf_name_data.push_back(port_id_ckt.get_name_leafdata());
    if (port_id_detail.is_set || is_set(port_id_detail.operation)) leaf_name_data.push_back(port_id_detail.get_name_leafdata());
    if (rx_lldp_pkts.is_set || is_set(rx_lldp_pkts.operation)) leaf_name_data.push_back(rx_lldp_pkts.get_name_leafdata());
    if (source_mac.is_set || is_set(source_mac.operation)) leaf_name_data.push_back(source_mac.get_name_leafdata());
    if (system_capabilities.is_set || is_set(system_capabilities.operation)) leaf_name_data.push_back(system_capabilities.get_name_leafdata());
    if (system_description.is_set || is_set(system_description.operation)) leaf_name_data.push_back(system_description.get_name_leafdata());
    if (system_name.is_set || is_set(system_name.operation)) leaf_name_data.push_back(system_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "network-address")
    {
        if(network_address != nullptr)
        {
            children["network-address"] = network_address.get();
        }
        else
        {
            network_address = std::make_unique<LldpSnoopData::EthernetControllerNames::EthernetControllerName::NetworkAddress>();
            network_address->parent = this;
            children["network-address"] = network_address.get();
        }
        return children.at("network-address");
    }

    return nullptr;
}

std::map<std::string, Entity*> & LldpSnoopData::EthernetControllerNames::EthernetControllerName::get_children()
{
    if(children.find("network-address") == children.end())
    {
        if(network_address != nullptr)
        {
            children["network-address"] = network_address.get();
        }
    }

    return children;
}

void LldpSnoopData::EthernetControllerNames::EthernetControllerName::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "chassis-id")
    {
        chassis_id = value;
    }
    if(value_path == "drop-enabled")
    {
        drop_enabled = value;
    }
    if(value_path == "enabled-capabilities")
    {
        enabled_capabilities = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "lldp-neighbor")
    {
        lldp_neighbor = value;
    }
    if(value_path == "port-description")
    {
        port_description = value;
    }
    if(value_path == "port-id-ckt")
    {
        port_id_ckt = value;
    }
    if(value_path == "port-id-detail")
    {
        port_id_detail = value;
    }
    if(value_path == "rx-lldp-pkts")
    {
        rx_lldp_pkts = value;
    }
    if(value_path == "source-mac")
    {
        source_mac = value;
    }
    if(value_path == "system-capabilities")
    {
        system_capabilities = value;
    }
    if(value_path == "system-description")
    {
        system_description = value;
    }
    if(value_path == "system-name")
    {
        system_name = value;
    }
}

LldpSnoopData::EthernetControllerNames::EthernetControllerNames()
{
    yang_name = "ethernet-controller-names"; yang_parent_name = "lldp-snoop-data";
}

LldpSnoopData::EthernetControllerNames::~EthernetControllerNames()
{
}

bool LldpSnoopData::EthernetControllerNames::has_data() const
{
    for (std::size_t index=0; index<ethernet_controller_name.size(); index++)
    {
        if(ethernet_controller_name[index]->has_data())
            return true;
    }
    return false;
}

bool LldpSnoopData::EthernetControllerNames::has_operation() const
{
    for (std::size_t index=0; index<ethernet_controller_name.size(); index++)
    {
        if(ethernet_controller_name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string LldpSnoopData::EthernetControllerNames::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet-controller-names";

    return path_buffer.str();

}

EntityPath LldpSnoopData::EthernetControllerNames::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* LldpSnoopData::EthernetControllerNames::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-controller-name")
    {
        for(auto const & c : ethernet_controller_name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<LldpSnoopData::EthernetControllerNames::EthernetControllerName>();
        c->parent = this;
        ethernet_controller_name.push_back(std::move(c));
        children[segment_path] = ethernet_controller_name.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & LldpSnoopData::EthernetControllerNames::get_children()
{
    for (auto const & c : ethernet_controller_name)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void LldpSnoopData::EthernetControllerNames::set_value(const std::string & value_path, std::string value)
{
}

LldpSnoopData::LldpSnoopData()
    :
    ethernet_controller_names(std::make_unique<LldpSnoopData::EthernetControllerNames>())
	,lldp_neighbor_brief(std::make_unique<LldpSnoopData::LldpNeighborBrief>())
{
    ethernet_controller_names->parent = this;
    children["ethernet-controller-names"] = ethernet_controller_names.get();

    lldp_neighbor_brief->parent = this;
    children["lldp-neighbor-brief"] = lldp_neighbor_brief.get();

    yang_name = "lldp-snoop-data"; yang_parent_name = "Cisco-IOS-XR-ncs1k-mxp-lldp-oper";
}

LldpSnoopData::~LldpSnoopData()
{
}

bool LldpSnoopData::has_data() const
{
    return (ethernet_controller_names !=  nullptr && ethernet_controller_names->has_data())
	|| (lldp_neighbor_brief !=  nullptr && lldp_neighbor_brief->has_data());
}

bool LldpSnoopData::has_operation() const
{
    return is_set(operation)
	|| (ethernet_controller_names !=  nullptr && is_set(ethernet_controller_names->operation))
	|| (lldp_neighbor_brief !=  nullptr && is_set(lldp_neighbor_brief->operation));
}

std::string LldpSnoopData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ncs1k-mxp-lldp-oper:lldp-snoop-data";

    return path_buffer.str();

}

EntityPath LldpSnoopData::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        BOOST_THROW_EXCEPTION(YDKInvalidArgumentException{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* LldpSnoopData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ethernet-controller-names")
    {
        if(ethernet_controller_names != nullptr)
        {
            children["ethernet-controller-names"] = ethernet_controller_names.get();
        }
        else
        {
            ethernet_controller_names = std::make_unique<LldpSnoopData::EthernetControllerNames>();
            ethernet_controller_names->parent = this;
            children["ethernet-controller-names"] = ethernet_controller_names.get();
        }
        return children.at("ethernet-controller-names");
    }

    if(child_yang_name == "lldp-neighbor-brief")
    {
        if(lldp_neighbor_brief != nullptr)
        {
            children["lldp-neighbor-brief"] = lldp_neighbor_brief.get();
        }
        else
        {
            lldp_neighbor_brief = std::make_unique<LldpSnoopData::LldpNeighborBrief>();
            lldp_neighbor_brief->parent = this;
            children["lldp-neighbor-brief"] = lldp_neighbor_brief.get();
        }
        return children.at("lldp-neighbor-brief");
    }

    return nullptr;
}

std::map<std::string, Entity*> & LldpSnoopData::get_children()
{
    if(children.find("ethernet-controller-names") == children.end())
    {
        if(ethernet_controller_names != nullptr)
        {
            children["ethernet-controller-names"] = ethernet_controller_names.get();
        }
    }

    if(children.find("lldp-neighbor-brief") == children.end())
    {
        if(lldp_neighbor_brief != nullptr)
        {
            children["lldp-neighbor-brief"] = lldp_neighbor_brief.get();
        }
    }

    return children;
}

void LldpSnoopData::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> LldpSnoopData::clone_ptr()
{
    return std::make_unique<LldpSnoopData>();
}

const Enum::Value LldpL3AddrProtocolEnum::ipv4 {0, "ipv4"};
const Enum::Value LldpL3AddrProtocolEnum::ipv6 {1, "ipv6"};


}
}

