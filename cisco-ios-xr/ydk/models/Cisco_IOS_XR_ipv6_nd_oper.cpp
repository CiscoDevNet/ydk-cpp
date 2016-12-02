
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_ipv6_nd_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv6_nd_oper {

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::LastReachedTime()
    :
    	seconds{YType::uint32, "seconds"}
{
    yang_name = "last-reached-time"; yang_parent_name = "host-address";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::~LastReachedTime()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::has_data() const
{
    return seconds.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(seconds.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "last-reached-time";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_entity_path(Entity* ancestor) const
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

    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::HostAddress()
    :
    	host_address{YType::str, "host-address"},
	 encapsulation{YType::enumeration, "encapsulation"},
	 interface_name{YType::str, "interface-name"},
	 is_router{YType::boolean, "is-router"},
	 link_layer_address{YType::str, "link-layer-address"},
	 location{YType::str, "location"},
	 origin_encapsulation{YType::enumeration, "origin-encapsulation"},
	 reachability_state{YType::enumeration, "reachability-state"},
	 selected_encapsulation{YType::enumeration, "selected-encapsulation"}
    	,
    last_reached_time(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime>())
{
    last_reached_time->parent = this;
    children["last-reached-time"] = last_reached_time.get();

    yang_name = "host-address"; yang_parent_name = "host-addresses";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::~HostAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::has_data() const
{
    return host_address.is_set
	|| encapsulation.is_set
	|| interface_name.is_set
	|| is_router.is_set
	|| link_layer_address.is_set
	|| location.is_set
	|| origin_encapsulation.is_set
	|| reachability_state.is_set
	|| selected_encapsulation.is_set
	|| (last_reached_time !=  nullptr && last_reached_time->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(host_address.operation)
	|| is_set(encapsulation.operation)
	|| is_set(interface_name.operation)
	|| is_set(is_router.operation)
	|| is_set(link_layer_address.operation)
	|| is_set(location.operation)
	|| is_set(origin_encapsulation.operation)
	|| is_set(reachability_state.operation)
	|| is_set(selected_encapsulation.operation)
	|| (last_reached_time !=  nullptr && is_set(last_reached_time->operation));
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-address" <<"[host-address='" <<host_address.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_entity_path(Entity* ancestor) const
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

    if (host_address.is_set || is_set(host_address.operation)) leaf_name_data.push_back(host_address.get_name_leafdata());
    if (encapsulation.is_set || is_set(encapsulation.operation)) leaf_name_data.push_back(encapsulation.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (is_router.is_set || is_set(is_router.operation)) leaf_name_data.push_back(is_router.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (location.is_set || is_set(location.operation)) leaf_name_data.push_back(location.get_name_leafdata());
    if (origin_encapsulation.is_set || is_set(origin_encapsulation.operation)) leaf_name_data.push_back(origin_encapsulation.get_name_leafdata());
    if (reachability_state.is_set || is_set(reachability_state.operation)) leaf_name_data.push_back(reachability_state.get_name_leafdata());
    if (selected_encapsulation.is_set || is_set(selected_encapsulation.operation)) leaf_name_data.push_back(selected_encapsulation.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "last-reached-time")
    {
        if(last_reached_time != nullptr)
        {
            children["last-reached-time"] = last_reached_time.get();
        }
        else
        {
            last_reached_time = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::LastReachedTime>();
            last_reached_time->parent = this;
            children["last-reached-time"] = last_reached_time.get();
        }
        return children.at("last-reached-time");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::get_children()
{
    if(children.find("last-reached-time") == children.end())
    {
        if(last_reached_time != nullptr)
        {
            children["last-reached-time"] = last_reached_time.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "host-address")
    {
        host_address = value;
    }
    if(value_path == "encapsulation")
    {
        encapsulation = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "is-router")
    {
        is_router = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
    if(value_path == "location")
    {
        location = value;
    }
    if(value_path == "origin-encapsulation")
    {
        origin_encapsulation = value;
    }
    if(value_path == "reachability-state")
    {
        reachability_state = value;
    }
    if(value_path == "selected-encapsulation")
    {
        selected_encapsulation = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddresses()
{
    yang_name = "host-addresses"; yang_parent_name = "neighbor-interface";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::~HostAddresses()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::has_data() const
{
    for (std::size_t index=0; index<host_address.size(); index++)
    {
        if(host_address[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::has_operation() const
{
    for (std::size_t index=0; index<host_address.size(); index++)
    {
        if(host_address[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host-addresses";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host-address")
    {
        for(auto const & c : host_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::HostAddress>();
        c->parent = this;
        host_address.push_back(std::move(c));
        children[segment_path] = host_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::get_children()
{
    for (auto const & c : host_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses::set_value(const std::string & value_path, std::string value)
{
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::NeighborInterface()
    :
    	interface_name{YType::str, "interface-name"}
    	,
    host_addresses(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses>())
{
    host_addresses->parent = this;
    children["host-addresses"] = host_addresses.get();

    yang_name = "neighbor-interface"; yang_parent_name = "neighbor-interfaces";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::~NeighborInterface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::has_data() const
{
    return interface_name.is_set
	|| (host_addresses !=  nullptr && host_addresses->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (host_addresses !=  nullptr && is_set(host_addresses->operation));
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "host-addresses")
    {
        if(host_addresses != nullptr)
        {
            children["host-addresses"] = host_addresses.get();
        }
        else
        {
            host_addresses = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::HostAddresses>();
            host_addresses->parent = this;
            children["host-addresses"] = host_addresses.get();
        }
        return children.at("host-addresses");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::get_children()
{
    if(children.find("host-addresses") == children.end())
    {
        if(host_addresses != nullptr)
        {
            children["host-addresses"] = host_addresses.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterfaces()
{
    yang_name = "neighbor-interfaces"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::~NeighborInterfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::has_data() const
{
    for (std::size_t index=0; index<neighbor_interface.size(); index++)
    {
        if(neighbor_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::has_operation() const
{
    for (std::size_t index=0; index<neighbor_interface.size(); index++)
    {
        if(neighbor_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-interfaces";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "neighbor-interface")
    {
        for(auto const & c : neighbor_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::NeighborInterface>();
        c->parent = this;
        neighbor_interface.push_back(std::move(c));
        children[segment_path] = neighbor_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::get_children()
{
    for (auto const & c : neighbor_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::Multicast()
    :
    	delayed_entries{YType::uint32, "delayed-entries"},
	 deleted_entries{YType::uint32, "deleted-entries"},
	 incomplete_entries{YType::uint32, "incomplete-entries"},
	 probe_entries{YType::uint32, "probe-entries"},
	 reachable_entries{YType::uint32, "reachable-entries"},
	 stale_entries{YType::uint32, "stale-entries"},
	 subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{
    yang_name = "multicast"; yang_parent_name = "neighbor-summary";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::~Multicast()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::has_data() const
{
    return delayed_entries.is_set
	|| deleted_entries.is_set
	|| incomplete_entries.is_set
	|| probe_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(delayed_entries.operation)
	|| is_set(deleted_entries.operation)
	|| is_set(incomplete_entries.operation)
	|| is_set(probe_entries.operation)
	|| is_set(reachable_entries.operation)
	|| is_set(stale_entries.operation)
	|| is_set(subtotal_neighbor_entries.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_entity_path(Entity* ancestor) const
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

    if (delayed_entries.is_set || is_set(delayed_entries.operation)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.operation)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (incomplete_entries.is_set || is_set(incomplete_entries.operation)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.operation)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.operation)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.operation)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.operation)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries = value;
    }
    if(value_path == "stale-entries")
    {
        stale_entries = value;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::Static_()
    :
    	delayed_entries{YType::uint32, "delayed-entries"},
	 deleted_entries{YType::uint32, "deleted-entries"},
	 incomplete_entries{YType::uint32, "incomplete-entries"},
	 probe_entries{YType::uint32, "probe-entries"},
	 reachable_entries{YType::uint32, "reachable-entries"},
	 stale_entries{YType::uint32, "stale-entries"},
	 subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{
    yang_name = "static"; yang_parent_name = "neighbor-summary";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::~Static_()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::has_data() const
{
    return delayed_entries.is_set
	|| deleted_entries.is_set
	|| incomplete_entries.is_set
	|| probe_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::has_operation() const
{
    return is_set(operation)
	|| is_set(delayed_entries.operation)
	|| is_set(deleted_entries.operation)
	|| is_set(incomplete_entries.operation)
	|| is_set(probe_entries.operation)
	|| is_set(reachable_entries.operation)
	|| is_set(stale_entries.operation)
	|| is_set(subtotal_neighbor_entries.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::get_entity_path(Entity* ancestor) const
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

    if (delayed_entries.is_set || is_set(delayed_entries.operation)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.operation)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (incomplete_entries.is_set || is_set(incomplete_entries.operation)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.operation)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.operation)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.operation)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.operation)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries = value;
    }
    if(value_path == "stale-entries")
    {
        stale_entries = value;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::Dynamic()
    :
    	delayed_entries{YType::uint32, "delayed-entries"},
	 deleted_entries{YType::uint32, "deleted-entries"},
	 incomplete_entries{YType::uint32, "incomplete-entries"},
	 probe_entries{YType::uint32, "probe-entries"},
	 reachable_entries{YType::uint32, "reachable-entries"},
	 stale_entries{YType::uint32, "stale-entries"},
	 subtotal_neighbor_entries{YType::uint32, "subtotal-neighbor-entries"}
{
    yang_name = "dynamic"; yang_parent_name = "neighbor-summary";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::~Dynamic()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::has_data() const
{
    return delayed_entries.is_set
	|| deleted_entries.is_set
	|| incomplete_entries.is_set
	|| probe_entries.is_set
	|| reachable_entries.is_set
	|| stale_entries.is_set
	|| subtotal_neighbor_entries.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::has_operation() const
{
    return is_set(operation)
	|| is_set(delayed_entries.operation)
	|| is_set(deleted_entries.operation)
	|| is_set(incomplete_entries.operation)
	|| is_set(probe_entries.operation)
	|| is_set(reachable_entries.operation)
	|| is_set(stale_entries.operation)
	|| is_set(subtotal_neighbor_entries.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_entity_path(Entity* ancestor) const
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

    if (delayed_entries.is_set || is_set(delayed_entries.operation)) leaf_name_data.push_back(delayed_entries.get_name_leafdata());
    if (deleted_entries.is_set || is_set(deleted_entries.operation)) leaf_name_data.push_back(deleted_entries.get_name_leafdata());
    if (incomplete_entries.is_set || is_set(incomplete_entries.operation)) leaf_name_data.push_back(incomplete_entries.get_name_leafdata());
    if (probe_entries.is_set || is_set(probe_entries.operation)) leaf_name_data.push_back(probe_entries.get_name_leafdata());
    if (reachable_entries.is_set || is_set(reachable_entries.operation)) leaf_name_data.push_back(reachable_entries.get_name_leafdata());
    if (stale_entries.is_set || is_set(stale_entries.operation)) leaf_name_data.push_back(stale_entries.get_name_leafdata());
    if (subtotal_neighbor_entries.is_set || is_set(subtotal_neighbor_entries.operation)) leaf_name_data.push_back(subtotal_neighbor_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delayed-entries")
    {
        delayed_entries = value;
    }
    if(value_path == "deleted-entries")
    {
        deleted_entries = value;
    }
    if(value_path == "incomplete-entries")
    {
        incomplete_entries = value;
    }
    if(value_path == "probe-entries")
    {
        probe_entries = value;
    }
    if(value_path == "reachable-entries")
    {
        reachable_entries = value;
    }
    if(value_path == "stale-entries")
    {
        stale_entries = value;
    }
    if(value_path == "subtotal-neighbor-entries")
    {
        subtotal_neighbor_entries = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::NeighborSummary()
    :
    	total_neighbor_entries{YType::uint32, "total-neighbor-entries"}
    	,
    dynamic(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic>())
	,multicast(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast>())
	,static_(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_>())
{
    dynamic->parent = this;
    children["dynamic"] = dynamic.get();

    multicast->parent = this;
    children["multicast"] = multicast.get();

    static_->parent = this;
    children["static"] = static_.get();

    yang_name = "neighbor-summary"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::~NeighborSummary()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::has_data() const
{
    return total_neighbor_entries.is_set
	|| (dynamic !=  nullptr && dynamic->has_data())
	|| (multicast !=  nullptr && multicast->has_data())
	|| (static_ !=  nullptr && static_->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(total_neighbor_entries.operation)
	|| (dynamic !=  nullptr && is_set(dynamic->operation))
	|| (multicast !=  nullptr && is_set(multicast->operation))
	|| (static_ !=  nullptr && is_set(static_->operation));
}

std::string Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor-summary";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_entity_path(Entity* ancestor) const
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

    if (total_neighbor_entries.is_set || is_set(total_neighbor_entries.operation)) leaf_name_data.push_back(total_neighbor_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "dynamic")
    {
        if(dynamic != nullptr)
        {
            children["dynamic"] = dynamic.get();
        }
        else
        {
            dynamic = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Dynamic>();
            dynamic->parent = this;
            children["dynamic"] = dynamic.get();
        }
        return children.at("dynamic");
    }

    if(child_yang_name == "multicast")
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast.get();
        }
        else
        {
            multicast = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Multicast>();
            multicast->parent = this;
            children["multicast"] = multicast.get();
        }
        return children.at("multicast");
    }

    if(child_yang_name == "static")
    {
        if(static_ != nullptr)
        {
            children["static"] = static_.get();
        }
        else
        {
            static_ = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::Static_>();
            static_->parent = this;
            children["static"] = static_.get();
        }
        return children.at("static");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::get_children()
{
    if(children.find("dynamic") == children.end())
    {
        if(dynamic != nullptr)
        {
            children["dynamic"] = dynamic.get();
        }
    }

    if(children.find("multicast") == children.end())
    {
        if(multicast != nullptr)
        {
            children["multicast"] = multicast.get();
        }
    }

    if(children.find("static") == children.end())
    {
        if(static_ != nullptr)
        {
            children["static"] = static_.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NeighborSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "total-neighbor-entries")
    {
        total_neighbor_entries = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::Age()
    :
    	seconds{YType::uint32, "seconds"}
{
    yang_name = "age"; yang_parent_name = "bundle-node";
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::~Age()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::has_data() const
{
    return seconds.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::has_operation() const
{
    return is_set(operation)
	|| is_set(seconds.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "age";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_entity_path(Entity* ancestor) const
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

    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::BundleNode()
    :
    	node_name{YType::str, "node-name"},
	 group_id{YType::uint32, "group-id"},
	 process_name{YType::str, "process-name"},
	 received_packets{YType::uint32, "received-packets"},
	 received_sequence_number{YType::uint32, "received-sequence-number"},
	 sent_packets{YType::uint32, "sent-packets"},
	 sent_sequence_number{YType::uint32, "sent-sequence-number"},
	 state{YType::enumeration, "state"},
	 state_changes{YType::uint32, "state-changes"}
    	,
    age(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age>())
{
    age->parent = this;
    children["age"] = age.get();

    yang_name = "bundle-node"; yang_parent_name = "bundle-nodes";
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::~BundleNode()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::has_data() const
{
    return node_name.is_set
	|| group_id.is_set
	|| process_name.is_set
	|| received_packets.is_set
	|| received_sequence_number.is_set
	|| sent_packets.is_set
	|| sent_sequence_number.is_set
	|| state.is_set
	|| state_changes.is_set
	|| (age !=  nullptr && age->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(group_id.operation)
	|| is_set(process_name.operation)
	|| is_set(received_packets.operation)
	|| is_set(received_sequence_number.operation)
	|| is_set(sent_packets.operation)
	|| is_set(sent_sequence_number.operation)
	|| is_set(state.operation)
	|| is_set(state_changes.operation)
	|| (age !=  nullptr && is_set(age->operation));
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_entity_path(Entity* ancestor) const
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

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (process_name.is_set || is_set(process_name.operation)) leaf_name_data.push_back(process_name.get_name_leafdata());
    if (received_packets.is_set || is_set(received_packets.operation)) leaf_name_data.push_back(received_packets.get_name_leafdata());
    if (received_sequence_number.is_set || is_set(received_sequence_number.operation)) leaf_name_data.push_back(received_sequence_number.get_name_leafdata());
    if (sent_packets.is_set || is_set(sent_packets.operation)) leaf_name_data.push_back(sent_packets.get_name_leafdata());
    if (sent_sequence_number.is_set || is_set(sent_sequence_number.operation)) leaf_name_data.push_back(sent_sequence_number.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (state_changes.is_set || is_set(state_changes.operation)) leaf_name_data.push_back(state_changes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "age")
    {
        if(age != nullptr)
        {
            children["age"] = age.get();
        }
        else
        {
            age = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::Age>();
            age->parent = this;
            children["age"] = age.get();
        }
        return children.at("age");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::get_children()
{
    if(children.find("age") == children.end())
    {
        if(age != nullptr)
        {
            children["age"] = age.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "group-id")
    {
        group_id = value;
    }
    if(value_path == "process-name")
    {
        process_name = value;
    }
    if(value_path == "received-packets")
    {
        received_packets = value;
    }
    if(value_path == "received-sequence-number")
    {
        received_sequence_number = value;
    }
    if(value_path == "sent-packets")
    {
        sent_packets = value;
    }
    if(value_path == "sent-sequence-number")
    {
        sent_sequence_number = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "state-changes")
    {
        state_changes = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNodes()
{
    yang_name = "bundle-nodes"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::BundleNodes::~BundleNodes()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::has_data() const
{
    for (std::size_t index=0; index<bundle_node.size(); index++)
    {
        if(bundle_node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleNodes::has_operation() const
{
    for (std::size_t index=0; index<bundle_node.size(); index++)
    {
        if(bundle_node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-nodes";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-node")
    {
        for(auto const & c : bundle_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleNodes::BundleNode>();
        c->parent = this;
        bundle_node.push_back(std::move(c));
        children[segment_path] = bundle_node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleNodes::get_children()
{
    for (auto const & c : bundle_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleNodes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::NdParameters()
    :
    	complete_glean_count{YType::uint32, "complete-glean-count"},
	 complete_protocol_count{YType::uint32, "complete-protocol-count"},
	 dad_attempts{YType::uint32, "dad-attempts"},
	 dropped_glean_req_count{YType::uint32, "dropped-glean-req-count"},
	 dropped_protocol_req_count{YType::uint32, "dropped-protocol-req-count"},
	 incomplete_glean_count{YType::uint32, "incomplete-glean-count"},
	 incomplete_protocol_count{YType::uint32, "incomplete-protocol-count"},
	 is_dad_enabled{YType::boolean, "is-dad-enabled"},
	 is_dhcp_managed{YType::boolean, "is-dhcp-managed"},
	 is_icm_pv6_redirect{YType::boolean, "is-icm-pv6-redirect"},
	 is_route_address_managed{YType::boolean, "is-route-address-managed"},
	 is_suppressed{YType::boolean, "is-suppressed"},
	 nd_advertisement_lifetime{YType::uint32, "nd-advertisement-lifetime"},
	 nd_cache_limit{YType::uint32, "nd-cache-limit"},
	 nd_max_transmit_interval{YType::uint32, "nd-max-transmit-interval"},
	 nd_min_transmit_interval{YType::uint32, "nd-min-transmit-interval"},
	 nd_reachable_time{YType::uint32, "nd-reachable-time"},
	 nd_retransmit_interval{YType::uint32, "nd-retransmit-interval"}
{
    yang_name = "nd-parameters"; yang_parent_name = "bundle-interface";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::~NdParameters()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::has_data() const
{
    return complete_glean_count.is_set
	|| complete_protocol_count.is_set
	|| dad_attempts.is_set
	|| dropped_glean_req_count.is_set
	|| dropped_protocol_req_count.is_set
	|| incomplete_glean_count.is_set
	|| incomplete_protocol_count.is_set
	|| is_dad_enabled.is_set
	|| is_dhcp_managed.is_set
	|| is_icm_pv6_redirect.is_set
	|| is_route_address_managed.is_set
	|| is_suppressed.is_set
	|| nd_advertisement_lifetime.is_set
	|| nd_cache_limit.is_set
	|| nd_max_transmit_interval.is_set
	|| nd_min_transmit_interval.is_set
	|| nd_reachable_time.is_set
	|| nd_retransmit_interval.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::has_operation() const
{
    return is_set(operation)
	|| is_set(complete_glean_count.operation)
	|| is_set(complete_protocol_count.operation)
	|| is_set(dad_attempts.operation)
	|| is_set(dropped_glean_req_count.operation)
	|| is_set(dropped_protocol_req_count.operation)
	|| is_set(incomplete_glean_count.operation)
	|| is_set(incomplete_protocol_count.operation)
	|| is_set(is_dad_enabled.operation)
	|| is_set(is_dhcp_managed.operation)
	|| is_set(is_icm_pv6_redirect.operation)
	|| is_set(is_route_address_managed.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(nd_advertisement_lifetime.operation)
	|| is_set(nd_cache_limit.operation)
	|| is_set(nd_max_transmit_interval.operation)
	|| is_set(nd_min_transmit_interval.operation)
	|| is_set(nd_reachable_time.operation)
	|| is_set(nd_retransmit_interval.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-parameters";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_entity_path(Entity* ancestor) const
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

    if (complete_glean_count.is_set || is_set(complete_glean_count.operation)) leaf_name_data.push_back(complete_glean_count.get_name_leafdata());
    if (complete_protocol_count.is_set || is_set(complete_protocol_count.operation)) leaf_name_data.push_back(complete_protocol_count.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.operation)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (dropped_glean_req_count.is_set || is_set(dropped_glean_req_count.operation)) leaf_name_data.push_back(dropped_glean_req_count.get_name_leafdata());
    if (dropped_protocol_req_count.is_set || is_set(dropped_protocol_req_count.operation)) leaf_name_data.push_back(dropped_protocol_req_count.get_name_leafdata());
    if (incomplete_glean_count.is_set || is_set(incomplete_glean_count.operation)) leaf_name_data.push_back(incomplete_glean_count.get_name_leafdata());
    if (incomplete_protocol_count.is_set || is_set(incomplete_protocol_count.operation)) leaf_name_data.push_back(incomplete_protocol_count.get_name_leafdata());
    if (is_dad_enabled.is_set || is_set(is_dad_enabled.operation)) leaf_name_data.push_back(is_dad_enabled.get_name_leafdata());
    if (is_dhcp_managed.is_set || is_set(is_dhcp_managed.operation)) leaf_name_data.push_back(is_dhcp_managed.get_name_leafdata());
    if (is_icm_pv6_redirect.is_set || is_set(is_icm_pv6_redirect.operation)) leaf_name_data.push_back(is_icm_pv6_redirect.get_name_leafdata());
    if (is_route_address_managed.is_set || is_set(is_route_address_managed.operation)) leaf_name_data.push_back(is_route_address_managed.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (nd_advertisement_lifetime.is_set || is_set(nd_advertisement_lifetime.operation)) leaf_name_data.push_back(nd_advertisement_lifetime.get_name_leafdata());
    if (nd_cache_limit.is_set || is_set(nd_cache_limit.operation)) leaf_name_data.push_back(nd_cache_limit.get_name_leafdata());
    if (nd_max_transmit_interval.is_set || is_set(nd_max_transmit_interval.operation)) leaf_name_data.push_back(nd_max_transmit_interval.get_name_leafdata());
    if (nd_min_transmit_interval.is_set || is_set(nd_min_transmit_interval.operation)) leaf_name_data.push_back(nd_min_transmit_interval.get_name_leafdata());
    if (nd_reachable_time.is_set || is_set(nd_reachable_time.operation)) leaf_name_data.push_back(nd_reachable_time.get_name_leafdata());
    if (nd_retransmit_interval.is_set || is_set(nd_retransmit_interval.operation)) leaf_name_data.push_back(nd_retransmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "complete-glean-count")
    {
        complete_glean_count = value;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count = value;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count = value;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count = value;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count = value;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count = value;
    }
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled = value;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed = value;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect = value;
    }
    if(value_path == "is-route-address-managed")
    {
        is_route_address_managed = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime = value;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit = value;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval = value;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval = value;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time = value;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::LocalAddress()
    :
    	ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "bundle-interface";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::~LocalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::GlobalAddress()
    :
    	ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "global-address"; yang_parent_name = "bundle-interface";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::~GlobalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-address";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::MemberNode()
    :
    	node_name{YType::str, "node-name"},
	 total_links{YType::uint32, "total-links"}
{
    yang_name = "member-node"; yang_parent_name = "bundle-interface";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::~MemberNode()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::has_data() const
{
    return node_name.is_set
	|| total_links.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(total_links.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "member-node";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_entity_path(Entity* ancestor) const
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

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (total_links.is_set || is_set(total_links.operation)) leaf_name_data.push_back(total_links.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "total-links")
    {
        total_links = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::BundleInterface()
    :
    	interface_name{YType::str, "interface-name"},
	 etype{YType::uint32, "etype"},
	 iftype{YType::uint32, "iftype"},
	 is_interface_enabled{YType::boolean, "is-interface-enabled"},
	 is_ipv6_enabled{YType::boolean, "is-ipv6-enabled"},
	 is_mpls_enabled{YType::boolean, "is-mpls-enabled"},
	 mac_addr{YType::str, "mac-addr"},
	 mac_addr_size{YType::uint32, "mac-addr-size"},
	 member_link{YType::uint32, "member-link"},
	 mtu{YType::uint32, "mtu"},
	 parent_interface_name{YType::str, "parent-interface-name"},
	 vlan_tag{YType::uint16, "vlan-tag"}
    	,
    local_address(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress>())
	,nd_parameters(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters>())
{
    local_address->parent = this;
    children["local-address"] = local_address.get();

    nd_parameters->parent = this;
    children["nd-parameters"] = nd_parameters.get();

    yang_name = "bundle-interface"; yang_parent_name = "bundle-interfaces";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::~BundleInterface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::has_data() const
{
    for (std::size_t index=0; index<global_address.size(); index++)
    {
        if(global_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<member_node.size(); index++)
    {
        if(member_node[index]->has_data())
            return true;
    }
    for (auto const & leaf : member_link.getValues())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| etype.is_set
	|| iftype.is_set
	|| is_interface_enabled.is_set
	|| is_ipv6_enabled.is_set
	|| is_mpls_enabled.is_set
	|| mac_addr.is_set
	|| mac_addr_size.is_set
	|| mtu.is_set
	|| parent_interface_name.is_set
	|| vlan_tag.is_set
	|| (local_address !=  nullptr && local_address->has_data())
	|| (nd_parameters !=  nullptr && nd_parameters->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::has_operation() const
{
    for (std::size_t index=0; index<global_address.size(); index++)
    {
        if(global_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<member_node.size(); index++)
    {
        if(member_node[index]->has_operation())
            return true;
    }
    for (auto const & leaf : member_link.getValues())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(etype.operation)
	|| is_set(iftype.operation)
	|| is_set(is_interface_enabled.operation)
	|| is_set(is_ipv6_enabled.operation)
	|| is_set(is_mpls_enabled.operation)
	|| is_set(mac_addr.operation)
	|| is_set(mac_addr_size.operation)
	|| is_set(mtu.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(vlan_tag.operation)
	|| (local_address !=  nullptr && is_set(local_address->operation))
	|| (nd_parameters !=  nullptr && is_set(nd_parameters->operation));
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (etype.is_set || is_set(etype.operation)) leaf_name_data.push_back(etype.get_name_leafdata());
    if (iftype.is_set || is_set(iftype.operation)) leaf_name_data.push_back(iftype.get_name_leafdata());
    if (is_interface_enabled.is_set || is_set(is_interface_enabled.operation)) leaf_name_data.push_back(is_interface_enabled.get_name_leafdata());
    if (is_ipv6_enabled.is_set || is_set(is_ipv6_enabled.operation)) leaf_name_data.push_back(is_ipv6_enabled.get_name_leafdata());
    if (is_mpls_enabled.is_set || is_set(is_mpls_enabled.operation)) leaf_name_data.push_back(is_mpls_enabled.get_name_leafdata());
    if (mac_addr.is_set || is_set(mac_addr.operation)) leaf_name_data.push_back(mac_addr.get_name_leafdata());
    if (mac_addr_size.is_set || is_set(mac_addr_size.operation)) leaf_name_data.push_back(mac_addr_size.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (vlan_tag.is_set || is_set(vlan_tag.operation)) leaf_name_data.push_back(vlan_tag.get_name_leafdata());

    auto member_link_name_datas = member_link.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), member_link_name_datas.begin(), member_link_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "global-address")
    {
        for(auto const & c : global_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::GlobalAddress>();
        c->parent = this;
        global_address.push_back(std::move(c));
        children[segment_path] = global_address.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
        else
        {
            local_address = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address.get();
        }
        return children.at("local-address");
    }

    if(child_yang_name == "member-node")
    {
        for(auto const & c : member_node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::MemberNode>();
        c->parent = this;
        member_node.push_back(std::move(c));
        children[segment_path] = member_node.back().get();
        return children.at(segment_path);
    }

    if(child_yang_name == "nd-parameters")
    {
        if(nd_parameters != nullptr)
        {
            children["nd-parameters"] = nd_parameters.get();
        }
        else
        {
            nd_parameters = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::NdParameters>();
            nd_parameters->parent = this;
            children["nd-parameters"] = nd_parameters.get();
        }
        return children.at("nd-parameters");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::get_children()
{
    for (auto const & c : global_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
    }

    for (auto const & c : member_node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    if(children.find("nd-parameters") == children.end())
    {
        if(nd_parameters != nullptr)
        {
            children["nd-parameters"] = nd_parameters.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "etype")
    {
        etype = value;
    }
    if(value_path == "iftype")
    {
        iftype = value;
    }
    if(value_path == "is-interface-enabled")
    {
        is_interface_enabled = value;
    }
    if(value_path == "is-ipv6-enabled")
    {
        is_ipv6_enabled = value;
    }
    if(value_path == "is-mpls-enabled")
    {
        is_mpls_enabled = value;
    }
    if(value_path == "mac-addr")
    {
        mac_addr = value;
    }
    if(value_path == "mac-addr-size")
    {
        mac_addr_size = value;
    }
    if(value_path == "member-link")
    {
        member_link.append(value);
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "vlan-tag")
    {
        vlan_tag = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterfaces()
{
    yang_name = "bundle-interfaces"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::~BundleInterfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::has_data() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::has_operation() const
{
    for (std::size_t index=0; index<bundle_interface.size(); index++)
    {
        if(bundle_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bundle-interfaces";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interface")
    {
        for(auto const & c : bundle_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::BundleInterface>();
        c->parent = this;
        bundle_interface.push_back(std::move(c));
        children[segment_path] = bundle_interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::get_children()
{
    for (auto const & c : bundle_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::Interface()
    :
    	interface_name{YType::str, "interface-name"},
	 complete_glean_count{YType::uint32, "complete-glean-count"},
	 complete_protocol_count{YType::uint32, "complete-protocol-count"},
	 dad_attempts{YType::uint32, "dad-attempts"},
	 dropped_glean_req_count{YType::uint32, "dropped-glean-req-count"},
	 dropped_protocol_req_count{YType::uint32, "dropped-protocol-req-count"},
	 incomplete_glean_count{YType::uint32, "incomplete-glean-count"},
	 incomplete_protocol_count{YType::uint32, "incomplete-protocol-count"},
	 is_dad_enabled{YType::boolean, "is-dad-enabled"},
	 is_dhcp_managed{YType::boolean, "is-dhcp-managed"},
	 is_icm_pv6_redirect{YType::boolean, "is-icm-pv6-redirect"},
	 is_route_address_managed{YType::boolean, "is-route-address-managed"},
	 is_suppressed{YType::boolean, "is-suppressed"},
	 nd_advertisement_lifetime{YType::uint32, "nd-advertisement-lifetime"},
	 nd_cache_limit{YType::uint32, "nd-cache-limit"},
	 nd_max_transmit_interval{YType::uint32, "nd-max-transmit-interval"},
	 nd_min_transmit_interval{YType::uint32, "nd-min-transmit-interval"},
	 nd_reachable_time{YType::uint32, "nd-reachable-time"},
	 nd_retransmit_interval{YType::uint32, "nd-retransmit-interval"}
{
    yang_name = "interface"; yang_parent_name = "interfaces";
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::~Interface()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| complete_glean_count.is_set
	|| complete_protocol_count.is_set
	|| dad_attempts.is_set
	|| dropped_glean_req_count.is_set
	|| dropped_protocol_req_count.is_set
	|| incomplete_glean_count.is_set
	|| incomplete_protocol_count.is_set
	|| is_dad_enabled.is_set
	|| is_dhcp_managed.is_set
	|| is_icm_pv6_redirect.is_set
	|| is_route_address_managed.is_set
	|| is_suppressed.is_set
	|| nd_advertisement_lifetime.is_set
	|| nd_cache_limit.is_set
	|| nd_max_transmit_interval.is_set
	|| nd_min_transmit_interval.is_set
	|| nd_reachable_time.is_set
	|| nd_retransmit_interval.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(complete_glean_count.operation)
	|| is_set(complete_protocol_count.operation)
	|| is_set(dad_attempts.operation)
	|| is_set(dropped_glean_req_count.operation)
	|| is_set(dropped_protocol_req_count.operation)
	|| is_set(incomplete_glean_count.operation)
	|| is_set(incomplete_protocol_count.operation)
	|| is_set(is_dad_enabled.operation)
	|| is_set(is_dhcp_managed.operation)
	|| is_set(is_icm_pv6_redirect.operation)
	|| is_set(is_route_address_managed.operation)
	|| is_set(is_suppressed.operation)
	|| is_set(nd_advertisement_lifetime.operation)
	|| is_set(nd_cache_limit.operation)
	|| is_set(nd_max_transmit_interval.operation)
	|| is_set(nd_min_transmit_interval.operation)
	|| is_set(nd_reachable_time.operation)
	|| is_set(nd_retransmit_interval.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (complete_glean_count.is_set || is_set(complete_glean_count.operation)) leaf_name_data.push_back(complete_glean_count.get_name_leafdata());
    if (complete_protocol_count.is_set || is_set(complete_protocol_count.operation)) leaf_name_data.push_back(complete_protocol_count.get_name_leafdata());
    if (dad_attempts.is_set || is_set(dad_attempts.operation)) leaf_name_data.push_back(dad_attempts.get_name_leafdata());
    if (dropped_glean_req_count.is_set || is_set(dropped_glean_req_count.operation)) leaf_name_data.push_back(dropped_glean_req_count.get_name_leafdata());
    if (dropped_protocol_req_count.is_set || is_set(dropped_protocol_req_count.operation)) leaf_name_data.push_back(dropped_protocol_req_count.get_name_leafdata());
    if (incomplete_glean_count.is_set || is_set(incomplete_glean_count.operation)) leaf_name_data.push_back(incomplete_glean_count.get_name_leafdata());
    if (incomplete_protocol_count.is_set || is_set(incomplete_protocol_count.operation)) leaf_name_data.push_back(incomplete_protocol_count.get_name_leafdata());
    if (is_dad_enabled.is_set || is_set(is_dad_enabled.operation)) leaf_name_data.push_back(is_dad_enabled.get_name_leafdata());
    if (is_dhcp_managed.is_set || is_set(is_dhcp_managed.operation)) leaf_name_data.push_back(is_dhcp_managed.get_name_leafdata());
    if (is_icm_pv6_redirect.is_set || is_set(is_icm_pv6_redirect.operation)) leaf_name_data.push_back(is_icm_pv6_redirect.get_name_leafdata());
    if (is_route_address_managed.is_set || is_set(is_route_address_managed.operation)) leaf_name_data.push_back(is_route_address_managed.get_name_leafdata());
    if (is_suppressed.is_set || is_set(is_suppressed.operation)) leaf_name_data.push_back(is_suppressed.get_name_leafdata());
    if (nd_advertisement_lifetime.is_set || is_set(nd_advertisement_lifetime.operation)) leaf_name_data.push_back(nd_advertisement_lifetime.get_name_leafdata());
    if (nd_cache_limit.is_set || is_set(nd_cache_limit.operation)) leaf_name_data.push_back(nd_cache_limit.get_name_leafdata());
    if (nd_max_transmit_interval.is_set || is_set(nd_max_transmit_interval.operation)) leaf_name_data.push_back(nd_max_transmit_interval.get_name_leafdata());
    if (nd_min_transmit_interval.is_set || is_set(nd_min_transmit_interval.operation)) leaf_name_data.push_back(nd_min_transmit_interval.get_name_leafdata());
    if (nd_reachable_time.is_set || is_set(nd_reachable_time.operation)) leaf_name_data.push_back(nd_reachable_time.get_name_leafdata());
    if (nd_retransmit_interval.is_set || is_set(nd_retransmit_interval.operation)) leaf_name_data.push_back(nd_retransmit_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "complete-glean-count")
    {
        complete_glean_count = value;
    }
    if(value_path == "complete-protocol-count")
    {
        complete_protocol_count = value;
    }
    if(value_path == "dad-attempts")
    {
        dad_attempts = value;
    }
    if(value_path == "dropped-glean-req-count")
    {
        dropped_glean_req_count = value;
    }
    if(value_path == "dropped-protocol-req-count")
    {
        dropped_protocol_req_count = value;
    }
    if(value_path == "incomplete-glean-count")
    {
        incomplete_glean_count = value;
    }
    if(value_path == "incomplete-protocol-count")
    {
        incomplete_protocol_count = value;
    }
    if(value_path == "is-dad-enabled")
    {
        is_dad_enabled = value;
    }
    if(value_path == "is-dhcp-managed")
    {
        is_dhcp_managed = value;
    }
    if(value_path == "is-icm-pv6-redirect")
    {
        is_icm_pv6_redirect = value;
    }
    if(value_path == "is-route-address-managed")
    {
        is_route_address_managed = value;
    }
    if(value_path == "is-suppressed")
    {
        is_suppressed = value;
    }
    if(value_path == "nd-advertisement-lifetime")
    {
        nd_advertisement_lifetime = value;
    }
    if(value_path == "nd-cache-limit")
    {
        nd_cache_limit = value;
    }
    if(value_path == "nd-max-transmit-interval")
    {
        nd_max_transmit_interval = value;
    }
    if(value_path == "nd-min-transmit-interval")
    {
        nd_min_transmit_interval = value;
    }
    if(value_path == "nd-reachable-time")
    {
        nd_reachable_time = value;
    }
    if(value_path == "nd-retransmit-interval")
    {
        nd_retransmit_interval = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::Interfaces::~Interfaces()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::Interfaces::get_children()
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

void Ipv6NodeDiscovery::Nodes::Node::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::LocalAddress()
    :
    	ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "local-address"; yang_parent_name = "nd-virtual-router";
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::~LocalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-address";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::VrGlobalAddress()
    :
    	ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "vr-global-address"; yang_parent_name = "nd-virtual-router";
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::~VrGlobalAddress()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vr-global-address";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_entity_path(Entity* ancestor) const
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

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::get_children()
{
    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::NdVirtualRouter()
    :
    	interface_name{YType::str, "interface-name"},
	 context{YType::uint32, "context"},
	 flags{YType::enumeration, "flags"},
	 link_layer_address{YType::str, "link-layer-address"},
	 state{YType::enumeration, "state"},
	 vr_gl_addr_ct{YType::uint32, "vr-gl-addr-ct"}
    	,
    local_address(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress>())
{
    local_address->parent = this;
    children["local-address"] = local_address.get();

    yang_name = "nd-virtual-router"; yang_parent_name = "nd-virtual-routers";
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::~NdVirtualRouter()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::has_data() const
{
    for (std::size_t index=0; index<vr_global_address.size(); index++)
    {
        if(vr_global_address[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| context.is_set
	|| flags.is_set
	|| link_layer_address.is_set
	|| state.is_set
	|| vr_gl_addr_ct.is_set
	|| (local_address !=  nullptr && local_address->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::has_operation() const
{
    for (std::size_t index=0; index<vr_global_address.size(); index++)
    {
        if(vr_global_address[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(context.operation)
	|| is_set(flags.operation)
	|| is_set(link_layer_address.operation)
	|| is_set(state.operation)
	|| is_set(vr_gl_addr_ct.operation)
	|| (local_address !=  nullptr && is_set(local_address->operation));
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-virtual-router" <<"[interface-name='" <<interface_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_entity_path(Entity* ancestor) const
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

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (flags.is_set || is_set(flags.operation)) leaf_name_data.push_back(flags.get_name_leafdata());
    if (link_layer_address.is_set || is_set(link_layer_address.operation)) leaf_name_data.push_back(link_layer_address.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (vr_gl_addr_ct.is_set || is_set(vr_gl_addr_ct.operation)) leaf_name_data.push_back(vr_gl_addr_ct.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "local-address")
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
        else
        {
            local_address = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::LocalAddress>();
            local_address->parent = this;
            children["local-address"] = local_address.get();
        }
        return children.at("local-address");
    }

    if(child_yang_name == "vr-global-address")
    {
        for(auto const & c : vr_global_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::VrGlobalAddress>();
        c->parent = this;
        vr_global_address.push_back(std::move(c));
        children[segment_path] = vr_global_address.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::get_children()
{
    if(children.find("local-address") == children.end())
    {
        if(local_address != nullptr)
        {
            children["local-address"] = local_address.get();
        }
    }

    for (auto const & c : vr_global_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "flags")
    {
        flags = value;
    }
    if(value_path == "link-layer-address")
    {
        link_layer_address = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "vr-gl-addr-ct")
    {
        vr_gl_addr_ct = value;
    }
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouters()
{
    yang_name = "nd-virtual-routers"; yang_parent_name = "node";
}

Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::~NdVirtualRouters()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::has_data() const
{
    for (std::size_t index=0; index<nd_virtual_router.size(); index++)
    {
        if(nd_virtual_router[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::has_operation() const
{
    for (std::size_t index=0; index<nd_virtual_router.size(); index++)
    {
        if(nd_virtual_router[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nd-virtual-routers";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_entity_path(Entity* ancestor) const
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



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nd-virtual-router")
    {
        for(auto const & c : nd_virtual_router)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::NdVirtualRouter>();
        c->parent = this;
        nd_virtual_router.push_back(std::move(c));
        children[segment_path] = nd_virtual_router.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::get_children()
{
    for (auto const & c : nd_virtual_router)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters::set_value(const std::string & value_path, std::string value)
{
}

Ipv6NodeDiscovery::Nodes::Node::Node()
    :
    	node_name{YType::str, "node-name"}
    	,
    bundle_interfaces(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces>())
	,bundle_nodes(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleNodes>())
	,interfaces(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::Interfaces>())
	,nd_virtual_routers(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters>())
	,neighbor_interfaces(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces>())
	,neighbor_summary(std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary>())
{
    bundle_interfaces->parent = this;
    children["bundle-interfaces"] = bundle_interfaces.get();

    bundle_nodes->parent = this;
    children["bundle-nodes"] = bundle_nodes.get();

    interfaces->parent = this;
    children["interfaces"] = interfaces.get();

    nd_virtual_routers->parent = this;
    children["nd-virtual-routers"] = nd_virtual_routers.get();

    neighbor_interfaces->parent = this;
    children["neighbor-interfaces"] = neighbor_interfaces.get();

    neighbor_summary->parent = this;
    children["neighbor-summary"] = neighbor_summary.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Ipv6NodeDiscovery::Nodes::Node::~Node()
{
}

bool Ipv6NodeDiscovery::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (bundle_interfaces !=  nullptr && bundle_interfaces->has_data())
	|| (bundle_nodes !=  nullptr && bundle_nodes->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (nd_virtual_routers !=  nullptr && nd_virtual_routers->has_data())
	|| (neighbor_interfaces !=  nullptr && neighbor_interfaces->has_data())
	|| (neighbor_summary !=  nullptr && neighbor_summary->has_data());
}

bool Ipv6NodeDiscovery::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (bundle_interfaces !=  nullptr && is_set(bundle_interfaces->operation))
	|| (bundle_nodes !=  nullptr && is_set(bundle_nodes->operation))
	|| (interfaces !=  nullptr && is_set(interfaces->operation))
	|| (nd_virtual_routers !=  nullptr && is_set(nd_virtual_routers->operation))
	|| (neighbor_interfaces !=  nullptr && is_set(neighbor_interfaces->operation))
	|| (neighbor_summary !=  nullptr && is_set(neighbor_summary->operation));
}

std::string Ipv6NodeDiscovery::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bundle-interfaces")
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
        else
        {
            bundle_interfaces = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleInterfaces>();
            bundle_interfaces->parent = this;
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
        return children.at("bundle-interfaces");
    }

    if(child_yang_name == "bundle-nodes")
    {
        if(bundle_nodes != nullptr)
        {
            children["bundle-nodes"] = bundle_nodes.get();
        }
        else
        {
            bundle_nodes = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::BundleNodes>();
            bundle_nodes->parent = this;
            children["bundle-nodes"] = bundle_nodes.get();
        }
        return children.at("bundle-nodes");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
        else
        {
            interfaces = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces.get();
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "nd-virtual-routers")
    {
        if(nd_virtual_routers != nullptr)
        {
            children["nd-virtual-routers"] = nd_virtual_routers.get();
        }
        else
        {
            nd_virtual_routers = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NdVirtualRouters>();
            nd_virtual_routers->parent = this;
            children["nd-virtual-routers"] = nd_virtual_routers.get();
        }
        return children.at("nd-virtual-routers");
    }

    if(child_yang_name == "neighbor-interfaces")
    {
        if(neighbor_interfaces != nullptr)
        {
            children["neighbor-interfaces"] = neighbor_interfaces.get();
        }
        else
        {
            neighbor_interfaces = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborInterfaces>();
            neighbor_interfaces->parent = this;
            children["neighbor-interfaces"] = neighbor_interfaces.get();
        }
        return children.at("neighbor-interfaces");
    }

    if(child_yang_name == "neighbor-summary")
    {
        if(neighbor_summary != nullptr)
        {
            children["neighbor-summary"] = neighbor_summary.get();
        }
        else
        {
            neighbor_summary = std::make_unique<Ipv6NodeDiscovery::Nodes::Node::NeighborSummary>();
            neighbor_summary->parent = this;
            children["neighbor-summary"] = neighbor_summary.get();
        }
        return children.at("neighbor-summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::Node::get_children()
{
    if(children.find("bundle-interfaces") == children.end())
    {
        if(bundle_interfaces != nullptr)
        {
            children["bundle-interfaces"] = bundle_interfaces.get();
        }
    }

    if(children.find("bundle-nodes") == children.end())
    {
        if(bundle_nodes != nullptr)
        {
            children["bundle-nodes"] = bundle_nodes.get();
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces.get();
        }
    }

    if(children.find("nd-virtual-routers") == children.end())
    {
        if(nd_virtual_routers != nullptr)
        {
            children["nd-virtual-routers"] = nd_virtual_routers.get();
        }
    }

    if(children.find("neighbor-interfaces") == children.end())
    {
        if(neighbor_interfaces != nullptr)
        {
            children["neighbor-interfaces"] = neighbor_interfaces.get();
        }
    }

    if(children.find("neighbor-summary") == children.end())
    {
        if(neighbor_summary != nullptr)
        {
            children["neighbor-summary"] = neighbor_summary.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Ipv6NodeDiscovery::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ipv6-node-discovery";
}

Ipv6NodeDiscovery::Nodes::~Nodes()
{
}

bool Ipv6NodeDiscovery::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ipv6NodeDiscovery::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ipv6NodeDiscovery::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Ipv6NodeDiscovery::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Ipv6NodeDiscovery::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::Nodes::get_children()
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

void Ipv6NodeDiscovery::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Ipv6NodeDiscovery::Ipv6NodeDiscovery()
    :
    nodes(std::make_unique<Ipv6NodeDiscovery::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    yang_name = "ipv6-node-discovery"; yang_parent_name = "Cisco-IOS-XR-ipv6-nd-oper";
}

Ipv6NodeDiscovery::~Ipv6NodeDiscovery()
{
}

bool Ipv6NodeDiscovery::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ipv6NodeDiscovery::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation));
}

std::string Ipv6NodeDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv6-nd-oper:ipv6-node-discovery";

    return path_buffer.str();

}

EntityPath Ipv6NodeDiscovery::get_entity_path(Entity* ancestor) const
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

Entity* Ipv6NodeDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "nodes")
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
        else
        {
            nodes = std::make_unique<Ipv6NodeDiscovery::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Ipv6NodeDiscovery::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    return children;
}

void Ipv6NodeDiscovery::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Ipv6NodeDiscovery::clone_ptr()
{
    return std::make_unique<Ipv6NodeDiscovery>();
}

const Enum::Value Ipv6NdShVrStateEnum::deleted {0, "deleted"};
const Enum::Value Ipv6NdShVrStateEnum::standby {1, "standby"};
const Enum::Value Ipv6NdShVrStateEnum::active {2, "active"};

const Enum::Value Ipv6NdBndlStateEnum::run {0, "run"};
const Enum::Value Ipv6NdBndlStateEnum::error {1, "error"};
const Enum::Value Ipv6NdBndlStateEnum::wait {2, "wait"};

const Enum::Value Ipv6NdMediaEncapEnum::none {0, "none"};
const Enum::Value Ipv6NdMediaEncapEnum::arpa {1, "arpa"};
const Enum::Value Ipv6NdMediaEncapEnum::snap {2, "snap"};
const Enum::Value Ipv6NdMediaEncapEnum::ieee802_1q {3, "ieee802-1q"};
const Enum::Value Ipv6NdMediaEncapEnum::srp {4, "srp"};
const Enum::Value Ipv6NdMediaEncapEnum::srpa {5, "srpa"};
const Enum::Value Ipv6NdMediaEncapEnum::srpb {6, "srpb"};
const Enum::Value Ipv6NdMediaEncapEnum::ppp {7, "ppp"};
const Enum::Value Ipv6NdMediaEncapEnum::hdlc {8, "hdlc"};
const Enum::Value Ipv6NdMediaEncapEnum::chdlc {9, "chdlc"};
const Enum::Value Ipv6NdMediaEncapEnum::dot1q {10, "dot1q"};
const Enum::Value Ipv6NdMediaEncapEnum::fr {11, "fr"};
const Enum::Value Ipv6NdMediaEncapEnum::gre {12, "gre"};

const Enum::Value Ipv6NdNeighborOriginEnum::other {0, "other"};
const Enum::Value Ipv6NdNeighborOriginEnum::static_ {1, "static"};
const Enum::Value Ipv6NdNeighborOriginEnum::dynamic {2, "dynamic"};

const Enum::Value Ipv6NdShStateEnum::incomplete {0, "incomplete"};
const Enum::Value Ipv6NdShStateEnum::reachable {1, "reachable"};
const Enum::Value Ipv6NdShStateEnum::stale {2, "stale"};
const Enum::Value Ipv6NdShStateEnum::glean {3, "glean"};
const Enum::Value Ipv6NdShStateEnum::delay {4, "delay"};
const Enum::Value Ipv6NdShStateEnum::probe {5, "probe"};
const Enum::Value Ipv6NdShStateEnum::delete_ {6, "delete"};

const Enum::Value Ipv6NdShVrFlagsEnum::no_flags {0, "no-flags"};
const Enum::Value Ipv6NdShVrFlagsEnum::final_ra {1, "final-ra"};


}
}

