
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_Ethernet_SPAN_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_Ethernet_SPAN_oper {

SpanMonitorSession::Global::Statistics::Statistic::Statistic()
    :
    	interface{YType::str, "interface"},
	 session{YType::str, "session"},
	 octets_not_mirrored{YType::uint64, "octets-not-mirrored"},
	 packets_not_mirrored{YType::uint64, "packets-not-mirrored"},
	 rx_octets_mirrored{YType::uint64, "rx-octets-mirrored"},
	 rx_packets_mirrored{YType::uint64, "rx-packets-mirrored"},
	 tx_octets_mirrored{YType::uint64, "tx-octets-mirrored"},
	 tx_packets_mirrored{YType::uint64, "tx-packets-mirrored"}
{
    yang_name = "statistic"; yang_parent_name = "statistics";
}

SpanMonitorSession::Global::Statistics::Statistic::~Statistic()
{
}

bool SpanMonitorSession::Global::Statistics::Statistic::has_data() const
{
    return interface.is_set
	|| session.is_set
	|| octets_not_mirrored.is_set
	|| packets_not_mirrored.is_set
	|| rx_octets_mirrored.is_set
	|| rx_packets_mirrored.is_set
	|| tx_octets_mirrored.is_set
	|| tx_packets_mirrored.is_set;
}

bool SpanMonitorSession::Global::Statistics::Statistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(session.operation)
	|| is_set(octets_not_mirrored.operation)
	|| is_set(packets_not_mirrored.operation)
	|| is_set(rx_octets_mirrored.operation)
	|| is_set(rx_packets_mirrored.operation)
	|| is_set(tx_octets_mirrored.operation)
	|| is_set(tx_packets_mirrored.operation);
}

std::string SpanMonitorSession::Global::Statistics::Statistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistic" <<"[interface='" <<interface.get() <<"']" <<"[session='" <<session.get() <<"']";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::Statistics::Statistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/global/statistics/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (session.is_set || is_set(session.operation)) leaf_name_data.push_back(session.get_name_leafdata());
    if (octets_not_mirrored.is_set || is_set(octets_not_mirrored.operation)) leaf_name_data.push_back(octets_not_mirrored.get_name_leafdata());
    if (packets_not_mirrored.is_set || is_set(packets_not_mirrored.operation)) leaf_name_data.push_back(packets_not_mirrored.get_name_leafdata());
    if (rx_octets_mirrored.is_set || is_set(rx_octets_mirrored.operation)) leaf_name_data.push_back(rx_octets_mirrored.get_name_leafdata());
    if (rx_packets_mirrored.is_set || is_set(rx_packets_mirrored.operation)) leaf_name_data.push_back(rx_packets_mirrored.get_name_leafdata());
    if (tx_octets_mirrored.is_set || is_set(tx_octets_mirrored.operation)) leaf_name_data.push_back(tx_octets_mirrored.get_name_leafdata());
    if (tx_packets_mirrored.is_set || is_set(tx_packets_mirrored.operation)) leaf_name_data.push_back(tx_packets_mirrored.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::Statistics::Statistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Global::Statistics::Statistic::get_children()
{
    return children;
}

void SpanMonitorSession::Global::Statistics::Statistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "session")
    {
        session = value;
    }
    if(value_path == "octets-not-mirrored")
    {
        octets_not_mirrored = value;
    }
    if(value_path == "packets-not-mirrored")
    {
        packets_not_mirrored = value;
    }
    if(value_path == "rx-octets-mirrored")
    {
        rx_octets_mirrored = value;
    }
    if(value_path == "rx-packets-mirrored")
    {
        rx_packets_mirrored = value;
    }
    if(value_path == "tx-octets-mirrored")
    {
        tx_octets_mirrored = value;
    }
    if(value_path == "tx-packets-mirrored")
    {
        tx_packets_mirrored = value;
    }
}

SpanMonitorSession::Global::Statistics::Statistics()
{
    yang_name = "statistics"; yang_parent_name = "global";
}

SpanMonitorSession::Global::Statistics::~Statistics()
{
}

bool SpanMonitorSession::Global::Statistics::has_data() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Global::Statistics::has_operation() const
{
    for (std::size_t index=0; index<statistic.size(); index++)
    {
        if(statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SpanMonitorSession::Global::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistic")
    {
        for(auto const & c : statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SpanMonitorSession::Global::Statistics::Statistic>();
        c->parent = this;
        statistic.push_back(std::move(c));
        children[segment_path] = statistic.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Global::Statistics::get_children()
{
    for (auto const & c : statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SpanMonitorSession::Global::Statistics::set_value(const std::string & value_path, std::string value)
{
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::InterfaceData()
    :
    	interface_name{YType::str, "interface-name"},
	 interface_state{YType::enumeration, "interface-state"}
{
    yang_name = "interface-data"; yang_parent_name = "destination-data";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::~InterfaceData()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::has_data() const
{
    return interface_name.is_set
	|| interface_state.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface_state.operation);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-data";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.operation)) leaf_name_data.push_back(interface_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::get_children()
{
    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::PseudowireData()
    :
    	pseudowire_is_up{YType::boolean, "pseudowire-is-up"},
	 pseudowire_name{YType::str, "pseudowire-name"}
{
    yang_name = "pseudowire-data"; yang_parent_name = "destination-data";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::~PseudowireData()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::has_data() const
{
    return pseudowire_is_up.is_set
	|| pseudowire_name.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::has_operation() const
{
    return is_set(operation)
	|| is_set(pseudowire_is_up.operation)
	|| is_set(pseudowire_name.operation);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-data";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::get_entity_path(Entity* ancestor) const
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

    if (pseudowire_is_up.is_set || is_set(pseudowire_is_up.operation)) leaf_name_data.push_back(pseudowire_is_up.get_name_leafdata());
    if (pseudowire_name.is_set || is_set(pseudowire_name.operation)) leaf_name_data.push_back(pseudowire_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::get_children()
{
    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pseudowire-is-up")
    {
        pseudowire_is_up = value;
    }
    if(value_path == "pseudowire-name")
    {
        pseudowire_name = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::NextHopIpv4Data()
    :
    	address_is_reachable{YType::boolean, "address-is-reachable"},
	 ipv4_address{YType::str, "ipv4-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "next-hop-ipv4-data"; yang_parent_name = "destination-data";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::~NextHopIpv4Data()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::has_data() const
{
    return address_is_reachable.is_set
	|| ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::has_operation() const
{
    return is_set(operation)
	|| is_set(address_is_reachable.operation)
	|| is_set(ipv4_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-ipv4-data";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::get_entity_path(Entity* ancestor) const
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

    if (address_is_reachable.is_set || is_set(address_is_reachable.operation)) leaf_name_data.push_back(address_is_reachable.get_name_leafdata());
    if (ipv4_address.is_set || is_set(ipv4_address.operation)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::get_children()
{
    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-is-reachable")
    {
        address_is_reachable = value;
    }
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::NextHopIpv6Data()
    :
    	address_is_reachable{YType::boolean, "address-is-reachable"},
	 ipv6_address{YType::str, "ipv6-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "next-hop-ipv6-data"; yang_parent_name = "destination-data";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::~NextHopIpv6Data()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::has_data() const
{
    return address_is_reachable.is_set
	|| ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::has_operation() const
{
    return is_set(operation)
	|| is_set(address_is_reachable.operation)
	|| is_set(ipv6_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-ipv6-data";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::get_entity_path(Entity* ancestor) const
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

    if (address_is_reachable.is_set || is_set(address_is_reachable.operation)) leaf_name_data.push_back(address_is_reachable.get_name_leafdata());
    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::get_children()
{
    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address-is-reachable")
    {
        address_is_reachable = value;
    }
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::DestinationData()
    :
    	destination_class{YType::enumeration, "destination-class"},
	 invalid_value{YType::uint32, "invalid-value"}
    	,
    interface_data(std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData>())
	,next_hop_ipv4_data(std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data>())
	,next_hop_ipv6_data(std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data>())
	,pseudowire_data(std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData>())
{
    interface_data->parent = this;
    children["interface-data"] = interface_data.get();

    next_hop_ipv4_data->parent = this;
    children["next-hop-ipv4-data"] = next_hop_ipv4_data.get();

    next_hop_ipv6_data->parent = this;
    children["next-hop-ipv6-data"] = next_hop_ipv6_data.get();

    pseudowire_data->parent = this;
    children["pseudowire-data"] = pseudowire_data.get();

    yang_name = "destination-data"; yang_parent_name = "global-session";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::~DestinationData()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::has_data() const
{
    return destination_class.is_set
	|| invalid_value.is_set
	|| (interface_data !=  nullptr && interface_data->has_data())
	|| (next_hop_ipv4_data !=  nullptr && next_hop_ipv4_data->has_data())
	|| (next_hop_ipv6_data !=  nullptr && next_hop_ipv6_data->has_data())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_data());
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_class.operation)
	|| is_set(invalid_value.operation)
	|| (interface_data !=  nullptr && interface_data->has_operation())
	|| (next_hop_ipv4_data !=  nullptr && next_hop_ipv4_data->has_operation())
	|| (next_hop_ipv6_data !=  nullptr && next_hop_ipv6_data->has_operation())
	|| (pseudowire_data !=  nullptr && pseudowire_data->has_operation());
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-data";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::get_entity_path(Entity* ancestor) const
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

    if (destination_class.is_set || is_set(destination_class.operation)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.operation)) leaf_name_data.push_back(invalid_value.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-data")
    {
        if(interface_data != nullptr)
        {
            children["interface-data"] = interface_data.get();
        }
        else
        {
            interface_data = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::InterfaceData>();
            interface_data->parent = this;
            children["interface-data"] = interface_data.get();
        }
        return children.at("interface-data");
    }

    if(child_yang_name == "next-hop-ipv4-data")
    {
        if(next_hop_ipv4_data != nullptr)
        {
            children["next-hop-ipv4-data"] = next_hop_ipv4_data.get();
        }
        else
        {
            next_hop_ipv4_data = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv4Data>();
            next_hop_ipv4_data->parent = this;
            children["next-hop-ipv4-data"] = next_hop_ipv4_data.get();
        }
        return children.at("next-hop-ipv4-data");
    }

    if(child_yang_name == "next-hop-ipv6-data")
    {
        if(next_hop_ipv6_data != nullptr)
        {
            children["next-hop-ipv6-data"] = next_hop_ipv6_data.get();
        }
        else
        {
            next_hop_ipv6_data = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::NextHopIpv6Data>();
            next_hop_ipv6_data->parent = this;
            children["next-hop-ipv6-data"] = next_hop_ipv6_data.get();
        }
        return children.at("next-hop-ipv6-data");
    }

    if(child_yang_name == "pseudowire-data")
    {
        if(pseudowire_data != nullptr)
        {
            children["pseudowire-data"] = pseudowire_data.get();
        }
        else
        {
            pseudowire_data = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::PseudowireData>();
            pseudowire_data->parent = this;
            children["pseudowire-data"] = pseudowire_data.get();
        }
        return children.at("pseudowire-data");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::get_children()
{
    if(children.find("interface-data") == children.end())
    {
        if(interface_data != nullptr)
        {
            children["interface-data"] = interface_data.get();
        }
    }

    if(children.find("next-hop-ipv4-data") == children.end())
    {
        if(next_hop_ipv4_data != nullptr)
        {
            children["next-hop-ipv4-data"] = next_hop_ipv4_data.get();
        }
    }

    if(children.find("next-hop-ipv6-data") == children.end())
    {
        if(next_hop_ipv6_data != nullptr)
        {
            children["next-hop-ipv6-data"] = next_hop_ipv6_data.get();
        }
    }

    if(children.find("pseudowire-data") == children.end())
    {
        if(pseudowire_data != nullptr)
        {
            children["pseudowire-data"] = pseudowire_data.get();
        }
    }

    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    	ipv4_address{YType::str, "ipv4-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    	ipv6_address{YType::str, "ipv6-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::DestinationId()
    :
    	destination_class{YType::enumeration, "destination-class"},
	 interface{YType::str, "interface"},
	 invalid_value{YType::uint32, "invalid-value"},
	 pseudowire_id{YType::uint32, "pseudowire-id"}
    	,
    ipv4_address_and_vrf(std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf>())
	,ipv6_address_and_vrf(std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();

    ipv6_address_and_vrf->parent = this;
    children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();

    yang_name = "destination-id"; yang_parent_name = "global-session";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::has_data() const
{
    return destination_class.is_set
	|| interface.is_set
	|| invalid_value.is_set
	|| pseudowire_id.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_class.operation)
	|| is_set(interface.operation)
	|| is_set(invalid_value.operation)
	|| is_set(pseudowire_id.operation)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::get_entity_path(Entity* ancestor) const
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

    if (destination_class.is_set || is_set(destination_class.operation)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.operation)) leaf_name_data.push_back(invalid_value.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        else
        {
            ipv4_address_and_vrf = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv4AddressAndVrf>();
            ipv4_address_and_vrf->parent = this;
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        return children.at("ipv4-address-and-vrf");
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        else
        {
            ipv6_address_and_vrf = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::Ipv6AddressAndVrf>();
            ipv6_address_and_vrf->parent = this;
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        return children.at("ipv6-address-and-vrf");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::get_children()
{
    if(children.find("ipv4-address-and-vrf") == children.end())
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
    }

    if(children.find("ipv6-address-and-vrf") == children.end())
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
    }

    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::GlobalSession()
    :
    	session{YType::str, "session"},
	 destination_error{YType::uint32, "destination-error"},
	 destination_interface_handle{YType::str, "destination-interface-handle"},
	 destination_interface_name{YType::str, "destination-interface-name"},
	 id{YType::uint32, "id"},
	 interface_error{YType::uint32, "interface-error"},
	 name{YType::str, "name"},
	 session_class{YType::enumeration, "session-class"}
    	,
    destination_data(std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData>())
	,destination_id(std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId>())
{
    destination_data->parent = this;
    children["destination-data"] = destination_data.get();

    destination_id->parent = this;
    children["destination-id"] = destination_id.get();

    yang_name = "global-session"; yang_parent_name = "global-sessions";
}

SpanMonitorSession::Global::GlobalSessions::GlobalSession::~GlobalSession()
{
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::has_data() const
{
    return session.is_set
	|| destination_error.is_set
	|| destination_interface_handle.is_set
	|| destination_interface_name.is_set
	|| id.is_set
	|| interface_error.is_set
	|| name.is_set
	|| session_class.is_set
	|| (destination_data !=  nullptr && destination_data->has_data())
	|| (destination_id !=  nullptr && destination_id->has_data());
}

bool SpanMonitorSession::Global::GlobalSessions::GlobalSession::has_operation() const
{
    return is_set(operation)
	|| is_set(session.operation)
	|| is_set(destination_error.operation)
	|| is_set(destination_interface_handle.operation)
	|| is_set(destination_interface_name.operation)
	|| is_set(id.operation)
	|| is_set(interface_error.operation)
	|| is_set(name.operation)
	|| is_set(session_class.operation)
	|| (destination_data !=  nullptr && destination_data->has_operation())
	|| (destination_id !=  nullptr && destination_id->has_operation());
}

std::string SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-session" <<"[session='" <<session.get() <<"']";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/global/global-sessions/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session.is_set || is_set(session.operation)) leaf_name_data.push_back(session.get_name_leafdata());
    if (destination_error.is_set || is_set(destination_error.operation)) leaf_name_data.push_back(destination_error.get_name_leafdata());
    if (destination_interface_handle.is_set || is_set(destination_interface_handle.operation)) leaf_name_data.push_back(destination_interface_handle.get_name_leafdata());
    if (destination_interface_name.is_set || is_set(destination_interface_name.operation)) leaf_name_data.push_back(destination_interface_name.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (interface_error.is_set || is_set(interface_error.operation)) leaf_name_data.push_back(interface_error.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-data")
    {
        if(destination_data != nullptr)
        {
            children["destination-data"] = destination_data.get();
        }
        else
        {
            destination_data = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationData>();
            destination_data->parent = this;
            children["destination-data"] = destination_data.get();
        }
        return children.at("destination-data");
    }

    if(child_yang_name == "destination-id")
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
        else
        {
            destination_id = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession::DestinationId>();
            destination_id->parent = this;
            children["destination-id"] = destination_id.get();
        }
        return children.at("destination-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::GlobalSession::get_children()
{
    if(children.find("destination-data") == children.end())
    {
        if(destination_data != nullptr)
        {
            children["destination-data"] = destination_data.get();
        }
    }

    if(children.find("destination-id") == children.end())
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
    }

    return children;
}

void SpanMonitorSession::Global::GlobalSessions::GlobalSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session")
    {
        session = value;
    }
    if(value_path == "destination-error")
    {
        destination_error = value;
    }
    if(value_path == "destination-interface-handle")
    {
        destination_interface_handle = value;
    }
    if(value_path == "destination-interface-name")
    {
        destination_interface_name = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "interface-error")
    {
        interface_error = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "session-class")
    {
        session_class = value;
    }
}

SpanMonitorSession::Global::GlobalSessions::GlobalSessions()
{
    yang_name = "global-sessions"; yang_parent_name = "global";
}

SpanMonitorSession::Global::GlobalSessions::~GlobalSessions()
{
}

bool SpanMonitorSession::Global::GlobalSessions::has_data() const
{
    for (std::size_t index=0; index<global_session.size(); index++)
    {
        if(global_session[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Global::GlobalSessions::has_operation() const
{
    for (std::size_t index=0; index<global_session.size(); index++)
    {
        if(global_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SpanMonitorSession::Global::GlobalSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-sessions";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::GlobalSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/global/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::GlobalSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-session")
    {
        for(auto const & c : global_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SpanMonitorSession::Global::GlobalSessions::GlobalSession>();
        c->parent = this;
        global_session.push_back(std::move(c));
        children[segment_path] = global_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Global::GlobalSessions::get_children()
{
    for (auto const & c : global_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SpanMonitorSession::Global::GlobalSessions::set_value(const std::string & value_path, std::string value)
{
}

SpanMonitorSession::Global::Global()
    :
    global_sessions(std::make_unique<SpanMonitorSession::Global::GlobalSessions>())
	,statistics(std::make_unique<SpanMonitorSession::Global::Statistics>())
{
    global_sessions->parent = this;
    children["global-sessions"] = global_sessions.get();

    statistics->parent = this;
    children["statistics"] = statistics.get();

    yang_name = "global"; yang_parent_name = "span-monitor-session";
}

SpanMonitorSession::Global::~Global()
{
}

bool SpanMonitorSession::Global::has_data() const
{
    return (global_sessions !=  nullptr && global_sessions->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool SpanMonitorSession::Global::has_operation() const
{
    return is_set(operation)
	|| (global_sessions !=  nullptr && global_sessions->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string SpanMonitorSession::Global::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Global::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Global::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-sessions")
    {
        if(global_sessions != nullptr)
        {
            children["global-sessions"] = global_sessions.get();
        }
        else
        {
            global_sessions = std::make_unique<SpanMonitorSession::Global::GlobalSessions>();
            global_sessions->parent = this;
            children["global-sessions"] = global_sessions.get();
        }
        return children.at("global-sessions");
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
        else
        {
            statistics = std::make_unique<SpanMonitorSession::Global::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics.get();
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Global::get_children()
{
    if(children.find("global-sessions") == children.end())
    {
        if(global_sessions != nullptr)
        {
            children["global-sessions"] = global_sessions.get();
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics.get();
        }
    }

    return children;
}

void SpanMonitorSession::Global::set_value(const std::string & value_path, std::string value)
{
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::TrafficParameters()
    :
    	is_acl_enabled{YType::boolean, "is-acl-enabled"},
	 mirror_bytes{YType::uint32, "mirror-bytes"},
	 mirror_interval{YType::enumeration, "mirror-interval"},
	 port_level{YType::boolean, "port-level"},
	 traffic_direction{YType::enumeration, "traffic-direction"}
{
    yang_name = "traffic-parameters"; yang_parent_name = "attachment";
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::~TrafficParameters()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::has_data() const
{
    return is_acl_enabled.is_set
	|| mirror_bytes.is_set
	|| mirror_interval.is_set
	|| port_level.is_set
	|| traffic_direction.is_set;
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(is_acl_enabled.operation)
	|| is_set(mirror_bytes.operation)
	|| is_set(mirror_interval.operation)
	|| is_set(port_level.operation)
	|| is_set(traffic_direction.operation);
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-parameters";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::get_entity_path(Entity* ancestor) const
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

    if (is_acl_enabled.is_set || is_set(is_acl_enabled.operation)) leaf_name_data.push_back(is_acl_enabled.get_name_leafdata());
    if (mirror_bytes.is_set || is_set(mirror_bytes.operation)) leaf_name_data.push_back(mirror_bytes.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());
    if (port_level.is_set || is_set(port_level.operation)) leaf_name_data.push_back(port_level.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.operation)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled = value;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
    if(value_path == "port-level")
    {
        port_level = value;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
    }
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    	ipv4_address{YType::str, "ipv4-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    	ipv6_address{YType::str, "ipv6-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::DestinationId()
    :
    	destination_class{YType::enumeration, "destination-class"},
	 interface{YType::str, "interface"},
	 invalid_value{YType::uint32, "invalid-value"},
	 pseudowire_id{YType::uint32, "pseudowire-id"}
    	,
    ipv4_address_and_vrf(std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf>())
	,ipv6_address_and_vrf(std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();

    ipv6_address_and_vrf->parent = this;
    children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();

    yang_name = "destination-id"; yang_parent_name = "attachment";
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::has_data() const
{
    return destination_class.is_set
	|| interface.is_set
	|| invalid_value.is_set
	|| pseudowire_id.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_class.operation)
	|| is_set(interface.operation)
	|| is_set(invalid_value.operation)
	|| is_set(pseudowire_id.operation)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::get_entity_path(Entity* ancestor) const
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

    if (destination_class.is_set || is_set(destination_class.operation)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.operation)) leaf_name_data.push_back(invalid_value.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        else
        {
            ipv4_address_and_vrf = std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv4AddressAndVrf>();
            ipv4_address_and_vrf->parent = this;
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        return children.at("ipv4-address-and-vrf");
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        else
        {
            ipv6_address_and_vrf = std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::Ipv6AddressAndVrf>();
            ipv6_address_and_vrf->parent = this;
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        return children.at("ipv6-address-and-vrf");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::get_children()
{
    if(children.find("ipv4-address-and-vrf") == children.end())
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
    }

    if(children.find("ipv6-address-and-vrf") == children.end())
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::Attachment()
    :
    	interface{YType::str, "interface"},
	 session{YType::str, "session"},
	 dest_pw_type_not_supported{YType::boolean, "dest-pw-type-not-supported"},
	 destination_interface{YType::str, "destination-interface"},
	 global_class{YType::enumeration, "global-class"},
	 id{YType::uint32, "id"},
	 local_class{YType::enumeration, "local-class"},
	 name{YType::str, "name"},
	 pfi_error{YType::uint32, "pfi-error"},
	 session_is_configured{YType::boolean, "session-is-configured"},
	 source_interface{YType::str, "source-interface"},
	 source_interface_state{YType::enumeration, "source-interface-state"},
	 traffic_direction{YType::enumeration, "traffic-direction"}
    	,
    destination_id(std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId>())
	,traffic_parameters(std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters>())
{
    destination_id->parent = this;
    children["destination-id"] = destination_id.get();

    traffic_parameters->parent = this;
    children["traffic-parameters"] = traffic_parameters.get();

    yang_name = "attachment"; yang_parent_name = "attachments";
}

SpanMonitorSession::Nodes::Node::Attachments::Attachment::~Attachment()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::has_data() const
{
    return interface.is_set
	|| session.is_set
	|| dest_pw_type_not_supported.is_set
	|| destination_interface.is_set
	|| global_class.is_set
	|| id.is_set
	|| local_class.is_set
	|| name.is_set
	|| pfi_error.is_set
	|| session_is_configured.is_set
	|| source_interface.is_set
	|| source_interface_state.is_set
	|| traffic_direction.is_set
	|| (destination_id !=  nullptr && destination_id->has_data())
	|| (traffic_parameters !=  nullptr && traffic_parameters->has_data());
}

bool SpanMonitorSession::Nodes::Node::Attachments::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(session.operation)
	|| is_set(dest_pw_type_not_supported.operation)
	|| is_set(destination_interface.operation)
	|| is_set(global_class.operation)
	|| is_set(id.operation)
	|| is_set(local_class.operation)
	|| is_set(name.operation)
	|| is_set(pfi_error.operation)
	|| is_set(session_is_configured.operation)
	|| is_set(source_interface.operation)
	|| is_set(source_interface_state.operation)
	|| is_set(traffic_direction.operation)
	|| (destination_id !=  nullptr && destination_id->has_operation())
	|| (traffic_parameters !=  nullptr && traffic_parameters->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Attachments::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment" <<"[interface='" <<interface.get() <<"']" <<"[session='" <<session.get() <<"']";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Attachments::Attachment::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (session.is_set || is_set(session.operation)) leaf_name_data.push_back(session.get_name_leafdata());
    if (dest_pw_type_not_supported.is_set || is_set(dest_pw_type_not_supported.operation)) leaf_name_data.push_back(dest_pw_type_not_supported.get_name_leafdata());
    if (destination_interface.is_set || is_set(destination_interface.operation)) leaf_name_data.push_back(destination_interface.get_name_leafdata());
    if (global_class.is_set || is_set(global_class.operation)) leaf_name_data.push_back(global_class.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (local_class.is_set || is_set(local_class.operation)) leaf_name_data.push_back(local_class.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (pfi_error.is_set || is_set(pfi_error.operation)) leaf_name_data.push_back(pfi_error.get_name_leafdata());
    if (session_is_configured.is_set || is_set(session_is_configured.operation)) leaf_name_data.push_back(session_is_configured.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (source_interface_state.is_set || is_set(source_interface_state.operation)) leaf_name_data.push_back(source_interface_state.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.operation)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Attachments::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-id")
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
        else
        {
            destination_id = std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment::DestinationId>();
            destination_id->parent = this;
            children["destination-id"] = destination_id.get();
        }
        return children.at("destination-id");
    }

    if(child_yang_name == "traffic-parameters")
    {
        if(traffic_parameters != nullptr)
        {
            children["traffic-parameters"] = traffic_parameters.get();
        }
        else
        {
            traffic_parameters = std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment::TrafficParameters>();
            traffic_parameters->parent = this;
            children["traffic-parameters"] = traffic_parameters.get();
        }
        return children.at("traffic-parameters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Attachments::Attachment::get_children()
{
    if(children.find("destination-id") == children.end())
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
    }

    if(children.find("traffic-parameters") == children.end())
    {
        if(traffic_parameters != nullptr)
        {
            children["traffic-parameters"] = traffic_parameters.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::Attachments::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "session")
    {
        session = value;
    }
    if(value_path == "dest-pw-type-not-supported")
    {
        dest_pw_type_not_supported = value;
    }
    if(value_path == "destination-interface")
    {
        destination_interface = value;
    }
    if(value_path == "global-class")
    {
        global_class = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "local-class")
    {
        local_class = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "pfi-error")
    {
        pfi_error = value;
    }
    if(value_path == "session-is-configured")
    {
        session_is_configured = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "source-interface-state")
    {
        source_interface_state = value;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
    }
}

SpanMonitorSession::Nodes::Node::Attachments::Attachments()
{
    yang_name = "attachments"; yang_parent_name = "node";
}

SpanMonitorSession::Nodes::Node::Attachments::~Attachments()
{
}

bool SpanMonitorSession::Nodes::Node::Attachments::has_data() const
{
    for (std::size_t index=0; index<attachment.size(); index++)
    {
        if(attachment[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Nodes::Node::Attachments::has_operation() const
{
    for (std::size_t index=0; index<attachment.size(); index++)
    {
        if(attachment[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SpanMonitorSession::Nodes::Node::Attachments::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachments";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Attachments::get_entity_path(Entity* ancestor) const
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

Entity* SpanMonitorSession::Nodes::Node::Attachments::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment")
    {
        for(auto const & c : attachment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SpanMonitorSession::Nodes::Node::Attachments::Attachment>();
        c->parent = this;
        attachment.push_back(std::move(c));
        children[segment_path] = attachment.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Attachments::get_children()
{
    for (auto const & c : attachment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::Attachments::set_value(const std::string & value_path, std::string value)
{
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    	ipv4_address{YType::str, "ipv4-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    	ipv6_address{YType::str, "ipv6-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::DestinationId()
    :
    	destination_class{YType::enumeration, "destination-class"},
	 interface{YType::str, "interface"},
	 invalid_value{YType::uint32, "invalid-value"},
	 pseudowire_id{YType::uint32, "pseudowire-id"}
    	,
    ipv4_address_and_vrf(std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf>())
	,ipv6_address_and_vrf(std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();

    ipv6_address_and_vrf->parent = this;
    children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();

    yang_name = "destination-id"; yang_parent_name = "hardware-session";
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::has_data() const
{
    return destination_class.is_set
	|| interface.is_set
	|| invalid_value.is_set
	|| pseudowire_id.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_class.operation)
	|| is_set(interface.operation)
	|| is_set(invalid_value.operation)
	|| is_set(pseudowire_id.operation)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::get_entity_path(Entity* ancestor) const
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

    if (destination_class.is_set || is_set(destination_class.operation)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.operation)) leaf_name_data.push_back(invalid_value.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        else
        {
            ipv4_address_and_vrf = std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv4AddressAndVrf>();
            ipv4_address_and_vrf->parent = this;
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        return children.at("ipv4-address-and-vrf");
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        else
        {
            ipv6_address_and_vrf = std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::Ipv6AddressAndVrf>();
            ipv6_address_and_vrf->parent = this;
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        return children.at("ipv6-address-and-vrf");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::get_children()
{
    if(children.find("ipv4-address-and-vrf") == children.end())
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
    }

    if(children.find("ipv6-address-and-vrf") == children.end())
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::HardwareSession()
    :
    	destination_interface{YType::str, "destination-interface"},
	 id{YType::uint32, "id"},
	 name{YType::str, "name"},
	 platform_error{YType::uint32, "platform-error"},
	 session_class{YType::enumeration, "session-class"},
	 session_class_xr{YType::enumeration, "session-class-xr"},
	 session_id{YType::int32, "session-id"}
    	,
    destination_id(std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId>())
{
    destination_id->parent = this;
    children["destination-id"] = destination_id.get();

    yang_name = "hardware-session"; yang_parent_name = "hardware-sessions";
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::~HardwareSession()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::has_data() const
{
    return destination_interface.is_set
	|| id.is_set
	|| name.is_set
	|| platform_error.is_set
	|| session_class.is_set
	|| session_class_xr.is_set
	|| session_id.is_set
	|| (destination_id !=  nullptr && destination_id->has_data());
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_interface.operation)
	|| is_set(id.operation)
	|| is_set(name.operation)
	|| is_set(platform_error.operation)
	|| is_set(session_class.operation)
	|| is_set(session_class_xr.operation)
	|| is_set(session_id.operation)
	|| (destination_id !=  nullptr && destination_id->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-session";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::get_entity_path(Entity* ancestor) const
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

    if (destination_interface.is_set || is_set(destination_interface.operation)) leaf_name_data.push_back(destination_interface.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (platform_error.is_set || is_set(platform_error.operation)) leaf_name_data.push_back(platform_error.get_name_leafdata());
    if (session_class.is_set || is_set(session_class.operation)) leaf_name_data.push_back(session_class.get_name_leafdata());
    if (session_class_xr.is_set || is_set(session_class_xr.operation)) leaf_name_data.push_back(session_class_xr.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-id")
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
        else
        {
            destination_id = std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::DestinationId>();
            destination_id->parent = this;
            children["destination-id"] = destination_id.get();
        }
        return children.at("destination-id");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::get_children()
{
    if(children.find("destination-id") == children.end())
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-interface")
    {
        destination_interface = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "platform-error")
    {
        platform_error = value;
    }
    if(value_path == "session-class")
    {
        session_class = value;
    }
    if(value_path == "session-class-xr")
    {
        session_class_xr = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSessions()
{
    yang_name = "hardware-sessions"; yang_parent_name = "node";
}

SpanMonitorSession::Nodes::Node::HardwareSessions::~HardwareSessions()
{
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::has_data() const
{
    for (std::size_t index=0; index<hardware_session.size(); index++)
    {
        if(hardware_session[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Nodes::Node::HardwareSessions::has_operation() const
{
    for (std::size_t index=0; index<hardware_session.size(); index++)
    {
        if(hardware_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SpanMonitorSession::Nodes::Node::HardwareSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hardware-sessions";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::HardwareSessions::get_entity_path(Entity* ancestor) const
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

Entity* SpanMonitorSession::Nodes::Node::HardwareSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "hardware-session")
    {
        for(auto const & c : hardware_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions::HardwareSession>();
        c->parent = this;
        hardware_session.push_back(std::move(c));
        children[segment_path] = hardware_session.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::HardwareSessions::get_children()
{
    for (auto const & c : hardware_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::HardwareSessions::set_value(const std::string & value_path, std::string value)
{
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    	ipv4_address{YType::str, "ipv4-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    	ipv6_address{YType::str, "ipv6-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::DestinationId()
    :
    	destination_class{YType::enumeration, "destination-class"},
	 interface{YType::str, "interface"},
	 invalid_value{YType::uint32, "invalid-value"},
	 pseudowire_id{YType::uint32, "pseudowire-id"}
    	,
    ipv4_address_and_vrf(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf>())
	,ipv6_address_and_vrf(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();

    ipv6_address_and_vrf->parent = this;
    children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();

    yang_name = "destination-id"; yang_parent_name = "interface";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::has_data() const
{
    return destination_class.is_set
	|| interface.is_set
	|| invalid_value.is_set
	|| pseudowire_id.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_class.operation)
	|| is_set(interface.operation)
	|| is_set(invalid_value.operation)
	|| is_set(pseudowire_id.operation)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::get_entity_path(Entity* ancestor) const
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

    if (destination_class.is_set || is_set(destination_class.operation)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.operation)) leaf_name_data.push_back(invalid_value.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        else
        {
            ipv4_address_and_vrf = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv4AddressAndVrf>();
            ipv4_address_and_vrf->parent = this;
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        return children.at("ipv4-address-and-vrf");
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        else
        {
            ipv6_address_and_vrf = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::Ipv6AddressAndVrf>();
            ipv6_address_and_vrf->parent = this;
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        return children.at("ipv6-address-and-vrf");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::get_children()
{
    if(children.find("ipv4-address-and-vrf") == children.end())
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
    }

    if(children.find("ipv6-address-and-vrf") == children.end())
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::TrafficMirroringParameters()
    :
    	is_acl_enabled{YType::boolean, "is-acl-enabled"},
	 mirror_bytes{YType::uint32, "mirror-bytes"},
	 mirror_interval{YType::enumeration, "mirror-interval"},
	 port_level{YType::boolean, "port-level"},
	 traffic_direction{YType::enumeration, "traffic-direction"}
{
    yang_name = "traffic-mirroring-parameters"; yang_parent_name = "interface";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::~TrafficMirroringParameters()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::has_data() const
{
    return is_acl_enabled.is_set
	|| mirror_bytes.is_set
	|| mirror_interval.is_set
	|| port_level.is_set
	|| traffic_direction.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(is_acl_enabled.operation)
	|| is_set(mirror_bytes.operation)
	|| is_set(mirror_interval.operation)
	|| is_set(port_level.operation)
	|| is_set(traffic_direction.operation);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-mirroring-parameters";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::get_entity_path(Entity* ancestor) const
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

    if (is_acl_enabled.is_set || is_set(is_acl_enabled.operation)) leaf_name_data.push_back(is_acl_enabled.get_name_leafdata());
    if (mirror_bytes.is_set || is_set(mirror_bytes.operation)) leaf_name_data.push_back(mirror_bytes.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());
    if (port_level.is_set || is_set(port_level.operation)) leaf_name_data.push_back(port_level.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.operation)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled = value;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
    if(value_path == "port-level")
    {
        port_level = value;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::Ipv4AddressAndVrf()
    :
    	ipv4_address{YType::str, "ipv4-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv4-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::~Ipv4AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::has_data() const
{
    return ipv4_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::get_entity_path(Entity* ancestor) const
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
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::Ipv6AddressAndVrf()
    :
    	ipv6_address{YType::str, "ipv6-address"},
	 vrf_name{YType::str, "vrf-name"}
{
    yang_name = "ipv6-address-and-vrf"; yang_parent_name = "destination-id";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::~Ipv6AddressAndVrf()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::has_data() const
{
    return ipv6_address.is_set
	|| vrf_name.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation)
	|| is_set(vrf_name.operation);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6-address-and-vrf";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::DestinationId()
    :
    	destination_class{YType::enumeration, "destination-class"},
	 interface{YType::str, "interface"},
	 invalid_value{YType::uint32, "invalid-value"},
	 pseudowire_id{YType::uint32, "pseudowire-id"}
    	,
    ipv4_address_and_vrf(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf>())
	,ipv6_address_and_vrf(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf>())
{
    ipv4_address_and_vrf->parent = this;
    children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();

    ipv6_address_and_vrf->parent = this;
    children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();

    yang_name = "destination-id"; yang_parent_name = "attachment";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::~DestinationId()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::has_data() const
{
    return destination_class.is_set
	|| interface.is_set
	|| invalid_value.is_set
	|| pseudowire_id.is_set
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_data())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_data());
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_class.operation)
	|| is_set(interface.operation)
	|| is_set(invalid_value.operation)
	|| is_set(pseudowire_id.operation)
	|| (ipv4_address_and_vrf !=  nullptr && ipv4_address_and_vrf->has_operation())
	|| (ipv6_address_and_vrf !=  nullptr && ipv6_address_and_vrf->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-id";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::get_entity_path(Entity* ancestor) const
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

    if (destination_class.is_set || is_set(destination_class.operation)) leaf_name_data.push_back(destination_class.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (invalid_value.is_set || is_set(invalid_value.operation)) leaf_name_data.push_back(invalid_value.get_name_leafdata());
    if (pseudowire_id.is_set || is_set(pseudowire_id.operation)) leaf_name_data.push_back(pseudowire_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "ipv4-address-and-vrf")
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        else
        {
            ipv4_address_and_vrf = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv4AddressAndVrf>();
            ipv4_address_and_vrf->parent = this;
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
        return children.at("ipv4-address-and-vrf");
    }

    if(child_yang_name == "ipv6-address-and-vrf")
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        else
        {
            ipv6_address_and_vrf = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::Ipv6AddressAndVrf>();
            ipv6_address_and_vrf->parent = this;
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
        return children.at("ipv6-address-and-vrf");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::get_children()
{
    if(children.find("ipv4-address-and-vrf") == children.end())
    {
        if(ipv4_address_and_vrf != nullptr)
        {
            children["ipv4-address-and-vrf"] = ipv4_address_and_vrf.get();
        }
    }

    if(children.find("ipv6-address-and-vrf") == children.end())
    {
        if(ipv6_address_and_vrf != nullptr)
        {
            children["ipv6-address-and-vrf"] = ipv6_address_and_vrf.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-class")
    {
        destination_class = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "invalid-value")
    {
        invalid_value = value;
    }
    if(value_path == "pseudowire-id")
    {
        pseudowire_id = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::TrafficMirroringParameters()
    :
    	is_acl_enabled{YType::boolean, "is-acl-enabled"},
	 mirror_bytes{YType::uint32, "mirror-bytes"},
	 mirror_interval{YType::enumeration, "mirror-interval"},
	 port_level{YType::boolean, "port-level"},
	 traffic_direction{YType::enumeration, "traffic-direction"}
{
    yang_name = "traffic-mirroring-parameters"; yang_parent_name = "attachment";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::~TrafficMirroringParameters()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::has_data() const
{
    return is_acl_enabled.is_set
	|| mirror_bytes.is_set
	|| mirror_interval.is_set
	|| port_level.is_set
	|| traffic_direction.is_set;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(is_acl_enabled.operation)
	|| is_set(mirror_bytes.operation)
	|| is_set(mirror_interval.operation)
	|| is_set(port_level.operation)
	|| is_set(traffic_direction.operation);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "traffic-mirroring-parameters";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::get_entity_path(Entity* ancestor) const
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

    if (is_acl_enabled.is_set || is_set(is_acl_enabled.operation)) leaf_name_data.push_back(is_acl_enabled.get_name_leafdata());
    if (mirror_bytes.is_set || is_set(mirror_bytes.operation)) leaf_name_data.push_back(mirror_bytes.get_name_leafdata());
    if (mirror_interval.is_set || is_set(mirror_interval.operation)) leaf_name_data.push_back(mirror_interval.get_name_leafdata());
    if (port_level.is_set || is_set(port_level.operation)) leaf_name_data.push_back(port_level.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.operation)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::get_children()
{
    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-acl-enabled")
    {
        is_acl_enabled = value;
    }
    if(value_path == "mirror-bytes")
    {
        mirror_bytes = value;
    }
    if(value_path == "mirror-interval")
    {
        mirror_interval = value;
    }
    if(value_path == "port-level")
    {
        port_level = value;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::Attachment()
    :
    	class_{YType::enumeration, "class"}
    	,
    destination_id(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId>())
	,traffic_mirroring_parameters(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters>())
{
    destination_id->parent = this;
    children["destination-id"] = destination_id.get();

    traffic_mirroring_parameters->parent = this;
    children["traffic-mirroring-parameters"] = traffic_mirroring_parameters.get();

    yang_name = "attachment"; yang_parent_name = "interface";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::~Attachment()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::has_data() const
{
    return class_.is_set
	|| (destination_id !=  nullptr && destination_id->has_data())
	|| (traffic_mirroring_parameters !=  nullptr && traffic_mirroring_parameters->has_data());
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::has_operation() const
{
    return is_set(operation)
	|| is_set(class_.operation)
	|| (destination_id !=  nullptr && destination_id->has_operation())
	|| (traffic_mirroring_parameters !=  nullptr && traffic_mirroring_parameters->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::get_entity_path(Entity* ancestor) const
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

    if (class_.is_set || is_set(class_.operation)) leaf_name_data.push_back(class_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-id")
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
        else
        {
            destination_id = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::DestinationId>();
            destination_id->parent = this;
            children["destination-id"] = destination_id.get();
        }
        return children.at("destination-id");
    }

    if(child_yang_name == "traffic-mirroring-parameters")
    {
        if(traffic_mirroring_parameters != nullptr)
        {
            children["traffic-mirroring-parameters"] = traffic_mirroring_parameters.get();
        }
        else
        {
            traffic_mirroring_parameters = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::TrafficMirroringParameters>();
            traffic_mirroring_parameters->parent = this;
            children["traffic-mirroring-parameters"] = traffic_mirroring_parameters.get();
        }
        return children.at("traffic-mirroring-parameters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::get_children()
{
    if(children.find("destination-id") == children.end())
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
    }

    if(children.find("traffic-mirroring-parameters") == children.end())
    {
        if(traffic_mirroring_parameters != nullptr)
        {
            children["traffic-mirroring-parameters"] = traffic_mirroring_parameters.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "class")
    {
        class_ = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::Interface()
    :
    	interface{YType::str, "interface"},
	 destination_interface{YType::str, "destination-interface"},
	 platform_error{YType::uint32, "platform-error"},
	 source_interface{YType::str, "source-interface"},
	 traffic_direction{YType::enumeration, "traffic-direction"}
    	,
    destination_id(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId>())
	,traffic_mirroring_parameters(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters>())
{
    destination_id->parent = this;
    children["destination-id"] = destination_id.get();

    traffic_mirroring_parameters->parent = this;
    children["traffic-mirroring-parameters"] = traffic_mirroring_parameters.get();

    yang_name = "interface"; yang_parent_name = "interfaces";
}

SpanMonitorSession::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::has_data() const
{
    for (std::size_t index=0; index<attachment.size(); index++)
    {
        if(attachment[index]->has_data())
            return true;
    }
    return interface.is_set
	|| destination_interface.is_set
	|| platform_error.is_set
	|| source_interface.is_set
	|| traffic_direction.is_set
	|| (destination_id !=  nullptr && destination_id->has_data())
	|| (traffic_mirroring_parameters !=  nullptr && traffic_mirroring_parameters->has_data());
}

bool SpanMonitorSession::Nodes::Node::Interfaces::Interface::has_operation() const
{
    for (std::size_t index=0; index<attachment.size(); index++)
    {
        if(attachment[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(destination_interface.operation)
	|| is_set(platform_error.operation)
	|| is_set(source_interface.operation)
	|| is_set(traffic_direction.operation)
	|| (destination_id !=  nullptr && destination_id->has_operation())
	|| (traffic_mirroring_parameters !=  nullptr && traffic_mirroring_parameters->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface='" <<interface.get() <<"']";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (destination_interface.is_set || is_set(destination_interface.operation)) leaf_name_data.push_back(destination_interface.get_name_leafdata());
    if (platform_error.is_set || is_set(platform_error.operation)) leaf_name_data.push_back(platform_error.get_name_leafdata());
    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());
    if (traffic_direction.is_set || is_set(traffic_direction.operation)) leaf_name_data.push_back(traffic_direction.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachment")
    {
        for(auto const & c : attachment)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::Attachment>();
        c->parent = this;
        attachment.push_back(std::move(c));
        children[segment_path] = attachment.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "destination-id")
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
        else
        {
            destination_id = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::DestinationId>();
            destination_id->parent = this;
            children["destination-id"] = destination_id.get();
        }
        return children.at("destination-id");
    }

    if(child_yang_name == "traffic-mirroring-parameters")
    {
        if(traffic_mirroring_parameters != nullptr)
        {
            children["traffic-mirroring-parameters"] = traffic_mirroring_parameters.get();
        }
        else
        {
            traffic_mirroring_parameters = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface::TrafficMirroringParameters>();
            traffic_mirroring_parameters->parent = this;
            children["traffic-mirroring-parameters"] = traffic_mirroring_parameters.get();
        }
        return children.at("traffic-mirroring-parameters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::Interface::get_children()
{
    for (auto const & c : attachment)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("destination-id") == children.end())
    {
        if(destination_id != nullptr)
        {
            children["destination-id"] = destination_id.get();
        }
    }

    if(children.find("traffic-mirroring-parameters") == children.end())
    {
        if(traffic_mirroring_parameters != nullptr)
        {
            children["traffic-mirroring-parameters"] = traffic_mirroring_parameters.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "destination-interface")
    {
        destination_interface = value;
    }
    if(value_path == "platform-error")
    {
        platform_error = value;
    }
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
    if(value_path == "traffic-direction")
    {
        traffic_direction = value;
    }
}

SpanMonitorSession::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

SpanMonitorSession::Nodes::Node::Interfaces::~Interfaces()
{
}

bool SpanMonitorSession::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SpanMonitorSession::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
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

Entity* SpanMonitorSession::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

SpanMonitorSession::Nodes::Node::Node()
    :
    	node{YType::str, "node"}
    	,
    attachments(std::make_unique<SpanMonitorSession::Nodes::Node::Attachments>())
	,hardware_sessions(std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions>())
	,interfaces(std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces>())
{
    attachments->parent = this;
    children["attachments"] = attachments.get();

    hardware_sessions->parent = this;
    children["hardware-sessions"] = hardware_sessions.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

SpanMonitorSession::Nodes::Node::~Node()
{
}

bool SpanMonitorSession::Nodes::Node::has_data() const
{
    return node.is_set
	|| (attachments !=  nullptr && attachments->has_data())
	|| (hardware_sessions !=  nullptr && hardware_sessions->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool SpanMonitorSession::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node.operation)
	|| (attachments !=  nullptr && attachments->has_operation())
	|| (hardware_sessions !=  nullptr && hardware_sessions->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string SpanMonitorSession::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node='" <<node.get() <<"']";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node.is_set || is_set(node.operation)) leaf_name_data.push_back(node.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "attachments")
    {
        if(attachments != nullptr)
        {
            children["attachments"] = attachments.get();
        }
        else
        {
            attachments = std::make_unique<SpanMonitorSession::Nodes::Node::Attachments>();
            attachments->parent = this;
            children["attachments"] = attachments.get();
        }
        return children.at("attachments");
    }

    if(child_yang_name == "hardware-sessions")
    {
        if(hardware_sessions != nullptr)
        {
            children["hardware-sessions"] = hardware_sessions.get();
        }
        else
        {
            hardware_sessions = std::make_unique<SpanMonitorSession::Nodes::Node::HardwareSessions>();
            hardware_sessions->parent = this;
            children["hardware-sessions"] = hardware_sessions.get();
        }
        return children.at("hardware-sessions");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<SpanMonitorSession::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::Node::get_children()
{
    if(children.find("attachments") == children.end())
    {
        if(attachments != nullptr)
        {
            children["attachments"] = attachments.get();
        }
    }

    if(children.find("hardware-sessions") == children.end())
    {
        if(hardware_sessions != nullptr)
        {
            children["hardware-sessions"] = hardware_sessions.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node")
    {
        node = value;
    }
}

SpanMonitorSession::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "span-monitor-session";
}

SpanMonitorSession::Nodes::~Nodes()
{
}

bool SpanMonitorSession::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SpanMonitorSession::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SpanMonitorSession::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SpanMonitorSession::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<SpanMonitorSession::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void SpanMonitorSession::Nodes::set_value(const std::string & value_path, std::string value)
{
}

SpanMonitorSession::SpanMonitorSession()
    :
    global(std::make_unique<SpanMonitorSession::Global>())
	,nodes(std::make_unique<SpanMonitorSession::Nodes>())
{
    global->parent = this;
    children["global"] = global.get();

    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "span-monitor-session"; yang_parent_name = "Cisco-IOS-XR-Ethernet-SPAN-oper";
}

SpanMonitorSession::~SpanMonitorSession()
{
}

bool SpanMonitorSession::has_data() const
{
    return (global !=  nullptr && global->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool SpanMonitorSession::has_operation() const
{
    return is_set(operation)
	|| (global !=  nullptr && global->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SpanMonitorSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-Ethernet-SPAN-oper:span-monitor-session";

    return path_buffer.str();

}

EntityPath SpanMonitorSession::get_entity_path(Entity* ancestor) const
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

Entity* SpanMonitorSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global")
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
        else
        {
            global = std::make_unique<SpanMonitorSession::Global>();
            global->parent = this;
            children["global"] = global.get();
        }
        return children.at("global");
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<SpanMonitorSession::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SpanMonitorSession::get_children()
{
    if(children.find("global") == children.end())
    {
        if(global != nullptr)
        {
            children["global"] = global.get();
        }
    }

    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void SpanMonitorSession::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SpanMonitorSession::clone_ptr()
{
    return std::make_unique<SpanMonitorSession>();
}

const Enum::YLeaf ImStateEnumEnum::im_state_not_ready {0, "im-state-not-ready"};
const Enum::YLeaf ImStateEnumEnum::im_state_admin_down {1, "im-state-admin-down"};
const Enum::YLeaf ImStateEnumEnum::im_state_down {2, "im-state-down"};
const Enum::YLeaf ImStateEnumEnum::im_state_up {3, "im-state-up"};
const Enum::YLeaf ImStateEnumEnum::im_state_shutdown {4, "im-state-shutdown"};
const Enum::YLeaf ImStateEnumEnum::im_state_err_disable {5, "im-state-err-disable"};
const Enum::YLeaf ImStateEnumEnum::im_state_down_immediate {6, "im-state-down-immediate"};
const Enum::YLeaf ImStateEnumEnum::im_state_down_immediate_admin {7, "im-state-down-immediate-admin"};
const Enum::YLeaf ImStateEnumEnum::im_state_down_graceful {8, "im-state-down-graceful"};
const Enum::YLeaf ImStateEnumEnum::im_state_begin_shutdown {9, "im-state-begin-shutdown"};
const Enum::YLeaf ImStateEnumEnum::im_state_end_shutdown {10, "im-state-end-shutdown"};
const Enum::YLeaf ImStateEnumEnum::im_state_begin_error_disable {11, "im-state-begin-error-disable"};
const Enum::YLeaf ImStateEnumEnum::im_state_end_error_disable {12, "im-state-end-error-disable"};
const Enum::YLeaf ImStateEnumEnum::im_state_begin_down_graceful {13, "im-state-begin-down-graceful"};
const Enum::YLeaf ImStateEnumEnum::im_state_reset {14, "im-state-reset"};
const Enum::YLeaf ImStateEnumEnum::im_state_operational {15, "im-state-operational"};
const Enum::YLeaf ImStateEnumEnum::im_state_not_operational {16, "im-state-not-operational"};
const Enum::YLeaf ImStateEnumEnum::im_state_unknown {17, "im-state-unknown"};
const Enum::YLeaf ImStateEnumEnum::im_state_last {18, "im-state-last"};

const Enum::YLeaf DestinationClassEnum::interface_class {0, "interface-class"};
const Enum::YLeaf DestinationClassEnum::pseudowire_class {1, "pseudowire-class"};
const Enum::YLeaf DestinationClassEnum::next_hop_ipv4_class {2, "next-hop-ipv4-class"};
const Enum::YLeaf DestinationClassEnum::next_hop_ipv6_class {3, "next-hop-ipv6-class"};
const Enum::YLeaf DestinationClassEnum::invalid_class {255, "invalid-class"};

const Enum::YLeaf TrafficDirectionEnum::invalid {0, "invalid"};
const Enum::YLeaf TrafficDirectionEnum::rx_only {1, "rx-only"};
const Enum::YLeaf TrafficDirectionEnum::tx_only {2, "tx-only"};
const Enum::YLeaf TrafficDirectionEnum::both {3, "both"};

const Enum::YLeaf SessionClassEnum::ethernet_class {0, "ethernet-class"};
const Enum::YLeaf SessionClassEnum::ipv4_class {1, "ipv4-class"};
const Enum::YLeaf SessionClassEnum::ipv6_class {2, "ipv6-class"};
const Enum::YLeaf SessionClassEnum::invalid_class {65535, "invalid-class"};

const Enum::YLeaf MirrorIntervalEnum::mirror_interval_all {0, "mirror-interval-all"};
const Enum::YLeaf MirrorIntervalEnum::mirror_interval512 {1, "mirror-interval512"};
const Enum::YLeaf MirrorIntervalEnum::mirror_interval1k {2, "mirror-interval1k"};
const Enum::YLeaf MirrorIntervalEnum::mirror_interval2k {3, "mirror-interval2k"};
const Enum::YLeaf MirrorIntervalEnum::mirror_interval4k {4, "mirror-interval4k"};
const Enum::YLeaf MirrorIntervalEnum::mirror_interval8k {5, "mirror-interval8k"};
const Enum::YLeaf MirrorIntervalEnum::mirror_interval16k {6, "mirror-interval16k"};


}
}

