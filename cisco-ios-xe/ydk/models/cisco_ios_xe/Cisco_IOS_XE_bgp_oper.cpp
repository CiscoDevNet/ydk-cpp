
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_bgp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XE_bgp_oper {

BgpState::BgpState()
    :
    address_families(std::make_shared<BgpState::AddressFamilies>())
	,neighbors(std::make_shared<BgpState::Neighbors>())
{
    address_families->parent = this;

    neighbors->parent = this;

    yang_name = "bgp-state"; yang_parent_name = "Cisco-IOS-XE-bgp-oper";
}

BgpState::~BgpState()
{
}

bool BgpState::has_data() const
{
    return (address_families !=  nullptr && address_families->has_data())
	|| (neighbors !=  nullptr && neighbors->has_data());
}

bool BgpState::has_operation() const
{
    return is_set(operation)
	|| (address_families !=  nullptr && address_families->has_operation())
	|| (neighbors !=  nullptr && neighbors->has_operation());
}

std::string BgpState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state";

    return path_buffer.str();

}

const EntityPath BgpState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node. Path: "+get_segment_path()});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-families")
    {
        if(address_families == nullptr)
        {
            address_families = std::make_shared<BgpState::AddressFamilies>();
        }
        return address_families;
    }

    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<BgpState::Neighbors>();
        }
        return neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_families != nullptr)
    {
        children["address-families"] = address_families;
    }

    if(neighbors != nullptr)
    {
        children["neighbors"] = neighbors;
    }

    return children;
}

void BgpState::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> BgpState::clone_ptr() const
{
    return std::make_shared<BgpState>();
}

std::string BgpState::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BgpState::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BgpState::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

BgpState::Neighbors::Neighbors()
{
    yang_name = "neighbors"; yang_parent_name = "bgp-state";
}

BgpState::Neighbors::~Neighbors()
{
}

bool BgpState::Neighbors::has_data() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpState::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.size(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BgpState::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        for(auto const & c : neighbor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpState::Neighbors::Neighbor>();
        c->parent = this;
        neighbor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : neighbor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpState::Neighbors::set_value(const std::string & value_path, std::string value)
{
}

BgpState::Neighbors::Neighbor::Neighbor()
    :
    afi_safi{YType::enumeration, "afi-safi"},
    vrf_name{YType::str, "vrf-name"},
    neighbor_id{YType::str, "neighbor-id"},
    bgp_version{YType::uint16, "bgp-version"},
    description{YType::str, "description"},
    installed_prefixes{YType::uint32, "installed-prefixes"},
    last_read{YType::str, "last-read"},
    last_write{YType::str, "last-write"},
    link{YType::enumeration, "link"},
    negotiated_cap{YType::str, "negotiated-cap"},
    session_state{YType::enumeration, "session-state"},
    up_time{YType::str, "up-time"}
    	,
    bgp_neighbor_counters(std::make_shared<BgpState::Neighbors::Neighbor::BgpNeighborCounters>())
	,connection(std::make_shared<BgpState::Neighbors::Neighbor::Connection>())
	,negotiated_keepalive_timers(std::make_shared<BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers>())
	,prefix_activity(std::make_shared<BgpState::Neighbors::Neighbor::PrefixActivity>())
	,transport(std::make_shared<BgpState::Neighbors::Neighbor::Transport>())
{
    bgp_neighbor_counters->parent = this;

    connection->parent = this;

    negotiated_keepalive_timers->parent = this;

    prefix_activity->parent = this;

    transport->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors";
}

BgpState::Neighbors::Neighbor::~Neighbor()
{
}

bool BgpState::Neighbors::Neighbor::has_data() const
{
    for (auto const & leaf : negotiated_cap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return afi_safi.is_set
	|| vrf_name.is_set
	|| neighbor_id.is_set
	|| bgp_version.is_set
	|| description.is_set
	|| installed_prefixes.is_set
	|| last_read.is_set
	|| last_write.is_set
	|| link.is_set
	|| session_state.is_set
	|| up_time.is_set
	|| (bgp_neighbor_counters !=  nullptr && bgp_neighbor_counters->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (negotiated_keepalive_timers !=  nullptr && negotiated_keepalive_timers->has_data())
	|| (prefix_activity !=  nullptr && prefix_activity->has_data())
	|| (transport !=  nullptr && transport->has_data());
}

bool BgpState::Neighbors::Neighbor::has_operation() const
{
    for (auto const & leaf : negotiated_cap.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(afi_safi.operation)
	|| is_set(vrf_name.operation)
	|| is_set(neighbor_id.operation)
	|| is_set(bgp_version.operation)
	|| is_set(description.operation)
	|| is_set(installed_prefixes.operation)
	|| is_set(last_read.operation)
	|| is_set(last_write.operation)
	|| is_set(link.operation)
	|| is_set(negotiated_cap.operation)
	|| is_set(session_state.operation)
	|| is_set(up_time.operation)
	|| (bgp_neighbor_counters !=  nullptr && bgp_neighbor_counters->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (negotiated_keepalive_timers !=  nullptr && negotiated_keepalive_timers->has_operation())
	|| (prefix_activity !=  nullptr && prefix_activity->has_operation())
	|| (transport !=  nullptr && transport->has_operation());
}

std::string BgpState::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor" <<"[afi-safi='" <<afi_safi <<"']" <<"[vrf-name='" <<vrf_name <<"']" <<"[neighbor-id='" <<neighbor_id <<"']";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state/neighbors/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.operation)) leaf_name_data.push_back(afi_safi.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.operation)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (bgp_version.is_set || is_set(bgp_version.operation)) leaf_name_data.push_back(bgp_version.get_name_leafdata());
    if (description.is_set || is_set(description.operation)) leaf_name_data.push_back(description.get_name_leafdata());
    if (installed_prefixes.is_set || is_set(installed_prefixes.operation)) leaf_name_data.push_back(installed_prefixes.get_name_leafdata());
    if (last_read.is_set || is_set(last_read.operation)) leaf_name_data.push_back(last_read.get_name_leafdata());
    if (last_write.is_set || is_set(last_write.operation)) leaf_name_data.push_back(last_write.get_name_leafdata());
    if (link.is_set || is_set(link.operation)) leaf_name_data.push_back(link.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.operation)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.operation)) leaf_name_data.push_back(up_time.get_name_leafdata());

    auto negotiated_cap_name_datas = negotiated_cap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), negotiated_cap_name_datas.begin(), negotiated_cap_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-counters")
    {
        if(bgp_neighbor_counters == nullptr)
        {
            bgp_neighbor_counters = std::make_shared<BgpState::Neighbors::Neighbor::BgpNeighborCounters>();
        }
        return bgp_neighbor_counters;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<BgpState::Neighbors::Neighbor::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "negotiated-keepalive-timers")
    {
        if(negotiated_keepalive_timers == nullptr)
        {
            negotiated_keepalive_timers = std::make_shared<BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers>();
        }
        return negotiated_keepalive_timers;
    }

    if(child_yang_name == "prefix-activity")
    {
        if(prefix_activity == nullptr)
        {
            prefix_activity = std::make_shared<BgpState::Neighbors::Neighbor::PrefixActivity>();
        }
        return prefix_activity;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<BgpState::Neighbors::Neighbor::Transport>();
        }
        return transport;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bgp_neighbor_counters != nullptr)
    {
        children["bgp-neighbor-counters"] = bgp_neighbor_counters;
    }

    if(connection != nullptr)
    {
        children["connection"] = connection;
    }

    if(negotiated_keepalive_timers != nullptr)
    {
        children["negotiated-keepalive-timers"] = negotiated_keepalive_timers;
    }

    if(prefix_activity != nullptr)
    {
        children["prefix-activity"] = prefix_activity;
    }

    if(transport != nullptr)
    {
        children["transport"] = transport;
    }

    return children;
}

void BgpState::Neighbors::Neighbor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
    }
    if(value_path == "bgp-version")
    {
        bgp_version = value;
    }
    if(value_path == "description")
    {
        description = value;
    }
    if(value_path == "installed-prefixes")
    {
        installed_prefixes = value;
    }
    if(value_path == "last-read")
    {
        last_read = value;
    }
    if(value_path == "last-write")
    {
        last_write = value;
    }
    if(value_path == "link")
    {
        link = value;
    }
    if(value_path == "negotiated-cap")
    {
        negotiated_cap.append(value);
    }
    if(value_path == "session-state")
    {
        session_state = value;
    }
    if(value_path == "up-time")
    {
        up_time = value;
    }
}

BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::NegotiatedKeepaliveTimers()
    :
    hold_time{YType::uint16, "hold-time"},
    keepalive_interval{YType::uint16, "keepalive-interval"}
{
    yang_name = "negotiated-keepalive-timers"; yang_parent_name = "neighbor";
}

BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::~NegotiatedKeepaliveTimers()
{
}

bool BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::has_data() const
{
    return hold_time.is_set
	|| keepalive_interval.is_set;
}

bool BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::has_operation() const
{
    return is_set(operation)
	|| is_set(hold_time.operation)
	|| is_set(keepalive_interval.operation);
}

std::string BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "negotiated-keepalive-timers";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NegotiatedKeepaliveTimers' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.operation)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::Neighbors::Neighbor::NegotiatedKeepaliveTimers::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
    }
}

BgpState::Neighbors::Neighbor::BgpNeighborCounters::BgpNeighborCounters()
    :
    inq_depth{YType::uint32, "inq-depth"},
    outq_depth{YType::uint32, "outq-depth"}
    	,
    received(std::make_shared<BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received>())
	,sent(std::make_shared<BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent>())
{
    received->parent = this;

    sent->parent = this;

    yang_name = "bgp-neighbor-counters"; yang_parent_name = "neighbor";
}

BgpState::Neighbors::Neighbor::BgpNeighborCounters::~BgpNeighborCounters()
{
}

bool BgpState::Neighbors::Neighbor::BgpNeighborCounters::has_data() const
{
    return inq_depth.is_set
	|| outq_depth.is_set
	|| (received !=  nullptr && received->has_data())
	|| (sent !=  nullptr && sent->has_data());
}

bool BgpState::Neighbors::Neighbor::BgpNeighborCounters::has_operation() const
{
    return is_set(operation)
	|| is_set(inq_depth.operation)
	|| is_set(outq_depth.operation)
	|| (received !=  nullptr && received->has_operation())
	|| (sent !=  nullptr && sent->has_operation());
}

std::string BgpState::Neighbors::Neighbor::BgpNeighborCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-counters";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::BgpNeighborCounters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpNeighborCounters' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inq_depth.is_set || is_set(inq_depth.operation)) leaf_name_data.push_back(inq_depth.get_name_leafdata());
    if (outq_depth.is_set || is_set(outq_depth.operation)) leaf_name_data.push_back(outq_depth.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::BgpNeighborCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received>();
        }
        return received;
    }

    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent>();
        }
        return sent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::BgpNeighborCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(sent != nullptr)
    {
        children["sent"] = sent;
    }

    return children;
}

void BgpState::Neighbors::Neighbor::BgpNeighborCounters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "inq-depth")
    {
        inq_depth = value;
    }
    if(value_path == "outq-depth")
    {
        outq_depth = value;
    }
}

BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::Sent()
    :
    keepalives{YType::uint32, "keepalives"},
    notifications{YType::uint32, "notifications"},
    opens{YType::uint32, "opens"},
    route_refreshes{YType::uint32, "route-refreshes"},
    updates{YType::uint32, "updates"}
{
    yang_name = "sent"; yang_parent_name = "bgp-neighbor-counters";
}

BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::~Sent()
{
}

bool BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::has_data() const
{
    return keepalives.is_set
	|| notifications.is_set
	|| opens.is_set
	|| route_refreshes.is_set
	|| updates.is_set;
}

bool BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::has_operation() const
{
    return is_set(operation)
	|| is_set(keepalives.operation)
	|| is_set(notifications.operation)
	|| is_set(opens.operation)
	|| is_set(route_refreshes.operation)
	|| is_set(updates.operation);
}

std::string BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sent' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalives.is_set || is_set(keepalives.operation)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.operation)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (opens.is_set || is_set(opens.operation)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (route_refreshes.is_set || is_set(route_refreshes.operation)) leaf_name_data.push_back(route_refreshes.get_name_leafdata());
    if (updates.is_set || is_set(updates.operation)) leaf_name_data.push_back(updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::Neighbors::Neighbor::BgpNeighborCounters::Sent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keepalives")
    {
        keepalives = value;
    }
    if(value_path == "notifications")
    {
        notifications = value;
    }
    if(value_path == "opens")
    {
        opens = value;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes = value;
    }
    if(value_path == "updates")
    {
        updates = value;
    }
}

BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::Received()
    :
    keepalives{YType::uint32, "keepalives"},
    notifications{YType::uint32, "notifications"},
    opens{YType::uint32, "opens"},
    route_refreshes{YType::uint32, "route-refreshes"},
    updates{YType::uint32, "updates"}
{
    yang_name = "received"; yang_parent_name = "bgp-neighbor-counters";
}

BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::~Received()
{
}

bool BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::has_data() const
{
    return keepalives.is_set
	|| notifications.is_set
	|| opens.is_set
	|| route_refreshes.is_set
	|| updates.is_set;
}

bool BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(keepalives.operation)
	|| is_set(notifications.operation)
	|| is_set(opens.operation)
	|| is_set(route_refreshes.operation)
	|| is_set(updates.operation);
}

std::string BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Received' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (keepalives.is_set || is_set(keepalives.operation)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.operation)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (opens.is_set || is_set(opens.operation)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (route_refreshes.is_set || is_set(route_refreshes.operation)) leaf_name_data.push_back(route_refreshes.get_name_leafdata());
    if (updates.is_set || is_set(updates.operation)) leaf_name_data.push_back(updates.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::Neighbors::Neighbor::BgpNeighborCounters::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "keepalives")
    {
        keepalives = value;
    }
    if(value_path == "notifications")
    {
        notifications = value;
    }
    if(value_path == "opens")
    {
        opens = value;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes = value;
    }
    if(value_path == "updates")
    {
        updates = value;
    }
}

BgpState::Neighbors::Neighbor::Connection::Connection()
    :
    last_reset{YType::str, "last-reset"},
    mode{YType::enumeration, "mode"},
    reset_reason{YType::str, "reset-reason"},
    state{YType::enumeration, "state"},
    total_dropped{YType::uint32, "total-dropped"},
    total_established{YType::uint32, "total-established"}
{
    yang_name = "connection"; yang_parent_name = "neighbor";
}

BgpState::Neighbors::Neighbor::Connection::~Connection()
{
}

bool BgpState::Neighbors::Neighbor::Connection::has_data() const
{
    return last_reset.is_set
	|| mode.is_set
	|| reset_reason.is_set
	|| state.is_set
	|| total_dropped.is_set
	|| total_established.is_set;
}

bool BgpState::Neighbors::Neighbor::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(last_reset.operation)
	|| is_set(mode.operation)
	|| is_set(reset_reason.operation)
	|| is_set(state.operation)
	|| is_set(total_dropped.operation)
	|| is_set(total_established.operation);
}

std::string BgpState::Neighbors::Neighbor::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Connection' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_reset.is_set || is_set(last_reset.operation)) leaf_name_data.push_back(last_reset.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (reset_reason.is_set || is_set(reset_reason.operation)) leaf_name_data.push_back(reset_reason.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (total_dropped.is_set || is_set(total_dropped.operation)) leaf_name_data.push_back(total_dropped.get_name_leafdata());
    if (total_established.is_set || is_set(total_established.operation)) leaf_name_data.push_back(total_established.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::Neighbors::Neighbor::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "last-reset")
    {
        last_reset = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "reset-reason")
    {
        reset_reason = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "total-dropped")
    {
        total_dropped = value;
    }
    if(value_path == "total-established")
    {
        total_established = value;
    }
}

BgpState::Neighbors::Neighbor::Transport::Transport()
    :
    foreign_host{YType::str, "foreign-host"},
    foreign_port{YType::uint32, "foreign-port"},
    local_host{YType::str, "local-host"},
    local_port{YType::uint32, "local-port"},
    mss{YType::uint32, "mss"},
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"}
{
    yang_name = "transport"; yang_parent_name = "neighbor";
}

BgpState::Neighbors::Neighbor::Transport::~Transport()
{
}

bool BgpState::Neighbors::Neighbor::Transport::has_data() const
{
    return foreign_host.is_set
	|| foreign_port.is_set
	|| local_host.is_set
	|| local_port.is_set
	|| mss.is_set
	|| path_mtu_discovery.is_set;
}

bool BgpState::Neighbors::Neighbor::Transport::has_operation() const
{
    return is_set(operation)
	|| is_set(foreign_host.operation)
	|| is_set(foreign_port.operation)
	|| is_set(local_host.operation)
	|| is_set(local_port.operation)
	|| is_set(mss.operation)
	|| is_set(path_mtu_discovery.operation);
}

std::string BgpState::Neighbors::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::Transport::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Transport' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (foreign_host.is_set || is_set(foreign_host.operation)) leaf_name_data.push_back(foreign_host.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.operation)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (local_host.is_set || is_set(local_host.operation)) leaf_name_data.push_back(local_host.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.operation)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (mss.is_set || is_set(mss.operation)) leaf_name_data.push_back(mss.get_name_leafdata());
    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.operation)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::Neighbors::Neighbor::Transport::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "foreign-host")
    {
        foreign_host = value;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
    }
    if(value_path == "local-host")
    {
        local_host = value;
    }
    if(value_path == "local-port")
    {
        local_port = value;
    }
    if(value_path == "mss")
    {
        mss = value;
    }
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
    }
}

BgpState::Neighbors::Neighbor::PrefixActivity::PrefixActivity()
    :
    received(std::make_shared<BgpState::Neighbors::Neighbor::PrefixActivity::Received>())
	,sent(std::make_shared<BgpState::Neighbors::Neighbor::PrefixActivity::Sent>())
{
    received->parent = this;

    sent->parent = this;

    yang_name = "prefix-activity"; yang_parent_name = "neighbor";
}

BgpState::Neighbors::Neighbor::PrefixActivity::~PrefixActivity()
{
}

bool BgpState::Neighbors::Neighbor::PrefixActivity::has_data() const
{
    return (received !=  nullptr && received->has_data())
	|| (sent !=  nullptr && sent->has_data());
}

bool BgpState::Neighbors::Neighbor::PrefixActivity::has_operation() const
{
    return is_set(operation)
	|| (received !=  nullptr && received->has_operation())
	|| (sent !=  nullptr && sent->has_operation());
}

std::string BgpState::Neighbors::Neighbor::PrefixActivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-activity";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::PrefixActivity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixActivity' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::PrefixActivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<BgpState::Neighbors::Neighbor::PrefixActivity::Received>();
        }
        return received;
    }

    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<BgpState::Neighbors::Neighbor::PrefixActivity::Sent>();
        }
        return sent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::PrefixActivity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(received != nullptr)
    {
        children["received"] = received;
    }

    if(sent != nullptr)
    {
        children["sent"] = sent;
    }

    return children;
}

void BgpState::Neighbors::Neighbor::PrefixActivity::set_value(const std::string & value_path, std::string value)
{
}

BgpState::Neighbors::Neighbor::PrefixActivity::Sent::Sent()
    :
    bestpaths{YType::uint64, "bestpaths"},
    current_prefixes{YType::uint64, "current-prefixes"},
    explicit_withdraw{YType::uint64, "explicit-withdraw"},
    implicit_withdraw{YType::uint64, "implicit-withdraw"},
    multipaths{YType::uint64, "multipaths"},
    total_prefixes{YType::uint64, "total-prefixes"}
{
    yang_name = "sent"; yang_parent_name = "prefix-activity";
}

BgpState::Neighbors::Neighbor::PrefixActivity::Sent::~Sent()
{
}

bool BgpState::Neighbors::Neighbor::PrefixActivity::Sent::has_data() const
{
    return bestpaths.is_set
	|| current_prefixes.is_set
	|| explicit_withdraw.is_set
	|| implicit_withdraw.is_set
	|| multipaths.is_set
	|| total_prefixes.is_set;
}

bool BgpState::Neighbors::Neighbor::PrefixActivity::Sent::has_operation() const
{
    return is_set(operation)
	|| is_set(bestpaths.operation)
	|| is_set(current_prefixes.operation)
	|| is_set(explicit_withdraw.operation)
	|| is_set(implicit_withdraw.operation)
	|| is_set(multipaths.operation)
	|| is_set(total_prefixes.operation);
}

std::string BgpState::Neighbors::Neighbor::PrefixActivity::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::PrefixActivity::Sent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sent' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bestpaths.is_set || is_set(bestpaths.operation)) leaf_name_data.push_back(bestpaths.get_name_leafdata());
    if (current_prefixes.is_set || is_set(current_prefixes.operation)) leaf_name_data.push_back(current_prefixes.get_name_leafdata());
    if (explicit_withdraw.is_set || is_set(explicit_withdraw.operation)) leaf_name_data.push_back(explicit_withdraw.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.operation)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());
    if (multipaths.is_set || is_set(multipaths.operation)) leaf_name_data.push_back(multipaths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.operation)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::PrefixActivity::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::PrefixActivity::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::Neighbors::Neighbor::PrefixActivity::Sent::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bestpaths")
    {
        bestpaths = value;
    }
    if(value_path == "current-prefixes")
    {
        current_prefixes = value;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw = value;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
    }
    if(value_path == "multipaths")
    {
        multipaths = value;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
    }
}

BgpState::Neighbors::Neighbor::PrefixActivity::Received::Received()
    :
    bestpaths{YType::uint64, "bestpaths"},
    current_prefixes{YType::uint64, "current-prefixes"},
    explicit_withdraw{YType::uint64, "explicit-withdraw"},
    implicit_withdraw{YType::uint64, "implicit-withdraw"},
    multipaths{YType::uint64, "multipaths"},
    total_prefixes{YType::uint64, "total-prefixes"}
{
    yang_name = "received"; yang_parent_name = "prefix-activity";
}

BgpState::Neighbors::Neighbor::PrefixActivity::Received::~Received()
{
}

bool BgpState::Neighbors::Neighbor::PrefixActivity::Received::has_data() const
{
    return bestpaths.is_set
	|| current_prefixes.is_set
	|| explicit_withdraw.is_set
	|| implicit_withdraw.is_set
	|| multipaths.is_set
	|| total_prefixes.is_set;
}

bool BgpState::Neighbors::Neighbor::PrefixActivity::Received::has_operation() const
{
    return is_set(operation)
	|| is_set(bestpaths.operation)
	|| is_set(current_prefixes.operation)
	|| is_set(explicit_withdraw.operation)
	|| is_set(implicit_withdraw.operation)
	|| is_set(multipaths.operation)
	|| is_set(total_prefixes.operation);
}

std::string BgpState::Neighbors::Neighbor::PrefixActivity::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";

    return path_buffer.str();

}

const EntityPath BgpState::Neighbors::Neighbor::PrefixActivity::Received::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Received' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bestpaths.is_set || is_set(bestpaths.operation)) leaf_name_data.push_back(bestpaths.get_name_leafdata());
    if (current_prefixes.is_set || is_set(current_prefixes.operation)) leaf_name_data.push_back(current_prefixes.get_name_leafdata());
    if (explicit_withdraw.is_set || is_set(explicit_withdraw.operation)) leaf_name_data.push_back(explicit_withdraw.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.operation)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());
    if (multipaths.is_set || is_set(multipaths.operation)) leaf_name_data.push_back(multipaths.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.operation)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::Neighbors::Neighbor::PrefixActivity::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::Neighbors::Neighbor::PrefixActivity::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::Neighbors::Neighbor::PrefixActivity::Received::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bestpaths")
    {
        bestpaths = value;
    }
    if(value_path == "current-prefixes")
    {
        current_prefixes = value;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw = value;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
    }
    if(value_path == "multipaths")
    {
        multipaths = value;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
    }
}

BgpState::AddressFamilies::AddressFamilies()
{
    yang_name = "address-families"; yang_parent_name = "bgp-state";
}

BgpState::AddressFamilies::~AddressFamilies()
{
}

bool BgpState::AddressFamilies::has_data() const
{
    for (std::size_t index=0; index<address_family.size(); index++)
    {
        if(address_family[index]->has_data())
            return true;
    }
    return false;
}

bool BgpState::AddressFamilies::has_operation() const
{
    for (std::size_t index=0; index<address_family.size(); index++)
    {
        if(address_family[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BgpState::AddressFamilies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-families";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        for(auto const & c : address_family)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpState::AddressFamilies::AddressFamily>();
        c->parent = this;
        address_family.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : address_family)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpState::AddressFamilies::set_value(const std::string & value_path, std::string value)
{
}

BgpState::AddressFamilies::AddressFamily::AddressFamily()
    :
    afi_safi{YType::enumeration, "afi-safi"},
    vrf_name{YType::str, "vrf-name"},
    bgp_table_version{YType::uint64, "bgp-table-version"},
    router_id{YType::str, "router-id"},
    routing_table_version{YType::uint64, "routing-table-version"},
    total_memory{YType::uint64, "total-memory"}
    	,
    activities(std::make_shared<BgpState::AddressFamilies::AddressFamily::Activities>())
	,as_path(std::make_shared<BgpState::AddressFamilies::AddressFamily::AsPath>())
	,bgp_neighbor_summaries(std::make_shared<BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries>())
	,filter_list(std::make_shared<BgpState::AddressFamilies::AddressFamily::FilterList>())
	,path(std::make_shared<BgpState::AddressFamilies::AddressFamily::Path>())
	,prefixes(std::make_shared<BgpState::AddressFamilies::AddressFamily::Prefixes>())
	,route_map(std::make_shared<BgpState::AddressFamilies::AddressFamily::RouteMap>())
{
    activities->parent = this;

    as_path->parent = this;

    bgp_neighbor_summaries->parent = this;

    filter_list->parent = this;

    path->parent = this;

    prefixes->parent = this;

    route_map->parent = this;

    yang_name = "address-family"; yang_parent_name = "address-families";
}

BgpState::AddressFamilies::AddressFamily::~AddressFamily()
{
}

bool BgpState::AddressFamilies::AddressFamily::has_data() const
{
    return afi_safi.is_set
	|| vrf_name.is_set
	|| bgp_table_version.is_set
	|| router_id.is_set
	|| routing_table_version.is_set
	|| total_memory.is_set
	|| (activities !=  nullptr && activities->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (bgp_neighbor_summaries !=  nullptr && bgp_neighbor_summaries->has_data())
	|| (filter_list !=  nullptr && filter_list->has_data())
	|| (path !=  nullptr && path->has_data())
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (route_map !=  nullptr && route_map->has_data());
}

bool BgpState::AddressFamilies::AddressFamily::has_operation() const
{
    return is_set(operation)
	|| is_set(afi_safi.operation)
	|| is_set(vrf_name.operation)
	|| is_set(bgp_table_version.operation)
	|| is_set(router_id.operation)
	|| is_set(routing_table_version.operation)
	|| is_set(total_memory.operation)
	|| (activities !=  nullptr && activities->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (bgp_neighbor_summaries !=  nullptr && bgp_neighbor_summaries->has_operation())
	|| (filter_list !=  nullptr && filter_list->has_operation())
	|| (path !=  nullptr && path->has_operation())
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation());
}

std::string BgpState::AddressFamilies::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family" <<"[afi-safi='" <<afi_safi <<"']" <<"[vrf-name='" <<vrf_name <<"']";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state/address-families/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.operation)) leaf_name_data.push_back(afi_safi.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (bgp_table_version.is_set || is_set(bgp_table_version.operation)) leaf_name_data.push_back(bgp_table_version.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.operation)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (routing_table_version.is_set || is_set(routing_table_version.operation)) leaf_name_data.push_back(routing_table_version.get_name_leafdata());
    if (total_memory.is_set || is_set(total_memory.operation)) leaf_name_data.push_back(total_memory.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "activities")
    {
        if(activities == nullptr)
        {
            activities = std::make_shared<BgpState::AddressFamilies::AddressFamily::Activities>();
        }
        return activities;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<BgpState::AddressFamilies::AddressFamily::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "bgp-neighbor-summaries")
    {
        if(bgp_neighbor_summaries == nullptr)
        {
            bgp_neighbor_summaries = std::make_shared<BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries>();
        }
        return bgp_neighbor_summaries;
    }

    if(child_yang_name == "filter-list")
    {
        if(filter_list == nullptr)
        {
            filter_list = std::make_shared<BgpState::AddressFamilies::AddressFamily::FilterList>();
        }
        return filter_list;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<BgpState::AddressFamilies::AddressFamily::Path>();
        }
        return path;
    }

    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<BgpState::AddressFamilies::AddressFamily::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<BgpState::AddressFamilies::AddressFamily::RouteMap>();
        }
        return route_map;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(activities != nullptr)
    {
        children["activities"] = activities;
    }

    if(as_path != nullptr)
    {
        children["as-path"] = as_path;
    }

    if(bgp_neighbor_summaries != nullptr)
    {
        children["bgp-neighbor-summaries"] = bgp_neighbor_summaries;
    }

    if(filter_list != nullptr)
    {
        children["filter-list"] = filter_list;
    }

    if(path != nullptr)
    {
        children["path"] = path;
    }

    if(prefixes != nullptr)
    {
        children["prefixes"] = prefixes;
    }

    if(route_map != nullptr)
    {
        children["route-map"] = route_map;
    }

    return children;
}

void BgpState::AddressFamilies::AddressFamily::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "bgp-table-version")
    {
        bgp_table_version = value;
    }
    if(value_path == "router-id")
    {
        router_id = value;
    }
    if(value_path == "routing-table-version")
    {
        routing_table_version = value;
    }
    if(value_path == "total-memory")
    {
        total_memory = value;
    }
}

BgpState::AddressFamilies::AddressFamily::Prefixes::Prefixes()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{
    yang_name = "prefixes"; yang_parent_name = "address-family";
}

BgpState::AddressFamilies::AddressFamily::Prefixes::~Prefixes()
{
}

bool BgpState::AddressFamilies::AddressFamily::Prefixes::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpState::AddressFamilies::AddressFamily::Prefixes::has_operation() const
{
    return is_set(operation)
	|| is_set(memory_usage.operation)
	|| is_set(total_entries.operation);
}

std::string BgpState::AddressFamilies::AddressFamily::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::Prefixes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prefixes' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.operation)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::AddressFamilies::AddressFamily::Prefixes::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
}

BgpState::AddressFamilies::AddressFamily::Path::Path()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{
    yang_name = "path"; yang_parent_name = "address-family";
}

BgpState::AddressFamilies::AddressFamily::Path::~Path()
{
}

bool BgpState::AddressFamilies::AddressFamily::Path::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpState::AddressFamilies::AddressFamily::Path::has_operation() const
{
    return is_set(operation)
	|| is_set(memory_usage.operation)
	|| is_set(total_entries.operation);
}

std::string BgpState::AddressFamilies::AddressFamily::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::Path::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Path' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.operation)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::AddressFamilies::AddressFamily::Path::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
}

BgpState::AddressFamilies::AddressFamily::AsPath::AsPath()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{
    yang_name = "as-path"; yang_parent_name = "address-family";
}

BgpState::AddressFamilies::AddressFamily::AsPath::~AsPath()
{
}

bool BgpState::AddressFamilies::AddressFamily::AsPath::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpState::AddressFamilies::AddressFamily::AsPath::has_operation() const
{
    return is_set(operation)
	|| is_set(memory_usage.operation)
	|| is_set(total_entries.operation);
}

std::string BgpState::AddressFamilies::AddressFamily::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::AsPath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AsPath' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.operation)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::AddressFamilies::AddressFamily::AsPath::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
}

BgpState::AddressFamilies::AddressFamily::RouteMap::RouteMap()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{
    yang_name = "route-map"; yang_parent_name = "address-family";
}

BgpState::AddressFamilies::AddressFamily::RouteMap::~RouteMap()
{
}

bool BgpState::AddressFamilies::AddressFamily::RouteMap::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpState::AddressFamilies::AddressFamily::RouteMap::has_operation() const
{
    return is_set(operation)
	|| is_set(memory_usage.operation)
	|| is_set(total_entries.operation);
}

std::string BgpState::AddressFamilies::AddressFamily::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::RouteMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteMap' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.operation)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::AddressFamilies::AddressFamily::RouteMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
}

BgpState::AddressFamilies::AddressFamily::FilterList::FilterList()
    :
    memory_usage{YType::uint64, "memory-usage"},
    total_entries{YType::uint64, "total-entries"}
{
    yang_name = "filter-list"; yang_parent_name = "address-family";
}

BgpState::AddressFamilies::AddressFamily::FilterList::~FilterList()
{
}

bool BgpState::AddressFamilies::AddressFamily::FilterList::has_data() const
{
    return memory_usage.is_set
	|| total_entries.is_set;
}

bool BgpState::AddressFamilies::AddressFamily::FilterList::has_operation() const
{
    return is_set(operation)
	|| is_set(memory_usage.operation)
	|| is_set(total_entries.operation);
}

std::string BgpState::AddressFamilies::AddressFamily::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::FilterList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FilterList' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (memory_usage.is_set || is_set(memory_usage.operation)) leaf_name_data.push_back(memory_usage.get_name_leafdata());
    if (total_entries.is_set || is_set(total_entries.operation)) leaf_name_data.push_back(total_entries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::AddressFamilies::AddressFamily::FilterList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "memory-usage")
    {
        memory_usage = value;
    }
    if(value_path == "total-entries")
    {
        total_entries = value;
    }
}

BgpState::AddressFamilies::AddressFamily::Activities::Activities()
    :
    paths{YType::uint64, "paths"},
    prefixes{YType::uint64, "prefixes"},
    scan_interval{YType::str, "scan-interval"}
{
    yang_name = "activities"; yang_parent_name = "address-family";
}

BgpState::AddressFamilies::AddressFamily::Activities::~Activities()
{
}

bool BgpState::AddressFamilies::AddressFamily::Activities::has_data() const
{
    return paths.is_set
	|| prefixes.is_set
	|| scan_interval.is_set;
}

bool BgpState::AddressFamilies::AddressFamily::Activities::has_operation() const
{
    return is_set(operation)
	|| is_set(paths.operation)
	|| is_set(prefixes.operation)
	|| is_set(scan_interval.operation);
}

std::string BgpState::AddressFamilies::AddressFamily::Activities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activities";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::Activities::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Activities' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (paths.is_set || is_set(paths.operation)) leaf_name_data.push_back(paths.get_name_leafdata());
    if (prefixes.is_set || is_set(prefixes.operation)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (scan_interval.is_set || is_set(scan_interval.operation)) leaf_name_data.push_back(scan_interval.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::Activities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::Activities::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::AddressFamilies::AddressFamily::Activities::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "paths")
    {
        paths = value;
    }
    if(value_path == "prefixes")
    {
        prefixes = value;
    }
    if(value_path == "scan-interval")
    {
        scan_interval = value;
    }
}

BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummaries()
{
    yang_name = "bgp-neighbor-summaries"; yang_parent_name = "address-family";
}

BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::~BgpNeighborSummaries()
{
}

bool BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::has_data() const
{
    for (std::size_t index=0; index<bgp_neighbor_summary.size(); index++)
    {
        if(bgp_neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor_summary.size(); index++)
    {
        if(bgp_neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-summaries";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpNeighborSummaries' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-summary")
    {
        for(auto const & c : bgp_neighbor_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary>();
        c->parent = this;
        bgp_neighbor_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bgp_neighbor_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::set_value(const std::string & value_path, std::string value)
{
}

BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::BgpNeighborSummary()
    :
    id{YType::str, "id"},
    bgp_version{YType::uint32, "bgp-version"},
    input_queue{YType::uint64, "input-queue"},
    messages_received{YType::uint64, "messages-received"},
    messages_sent{YType::uint64, "messages-sent"},
    output_queue{YType::uint64, "output-queue"},
    prefixes_received{YType::uint64, "prefixes-received"},
    state{YType::enumeration, "state"},
    table_version{YType::uint64, "table-version"},
    up_time{YType::str, "up-time"}
{
    yang_name = "bgp-neighbor-summary"; yang_parent_name = "bgp-neighbor-summaries";
}

BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::~BgpNeighborSummary()
{
}

bool BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::has_data() const
{
    return id.is_set
	|| bgp_version.is_set
	|| input_queue.is_set
	|| messages_received.is_set
	|| messages_sent.is_set
	|| output_queue.is_set
	|| prefixes_received.is_set
	|| state.is_set
	|| table_version.is_set
	|| up_time.is_set;
}

bool BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(bgp_version.operation)
	|| is_set(input_queue.operation)
	|| is_set(messages_received.operation)
	|| is_set(messages_sent.operation)
	|| is_set(output_queue.operation)
	|| is_set(prefixes_received.operation)
	|| is_set(state.operation)
	|| is_set(table_version.operation)
	|| is_set(up_time.operation);
}

std::string BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-summary" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'BgpNeighborSummary' in Cisco_IOS_XE_bgp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (bgp_version.is_set || is_set(bgp_version.operation)) leaf_name_data.push_back(bgp_version.get_name_leafdata());
    if (input_queue.is_set || is_set(input_queue.operation)) leaf_name_data.push_back(input_queue.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.operation)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.operation)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (output_queue.is_set || is_set(output_queue.operation)) leaf_name_data.push_back(output_queue.get_name_leafdata());
    if (prefixes_received.is_set || is_set(prefixes_received.operation)) leaf_name_data.push_back(prefixes_received.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.operation)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.operation)) leaf_name_data.push_back(up_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void BgpState::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "bgp-version")
    {
        bgp_version = value;
    }
    if(value_path == "input-queue")
    {
        input_queue = value;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
    }
    if(value_path == "output-queue")
    {
        output_queue = value;
    }
    if(value_path == "prefixes-received")
    {
        prefixes_received = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "table-version")
    {
        table_version = value;
    }
    if(value_path == "up-time")
    {
        up_time = value;
    }
}

const Enum::YLeaf BgpFsmStateEnum::idle {0, "idle"};
const Enum::YLeaf BgpFsmStateEnum::connect {1, "connect"};
const Enum::YLeaf BgpFsmStateEnum::active {2, "active"};
const Enum::YLeaf BgpFsmStateEnum::opensent {3, "opensent"};
const Enum::YLeaf BgpFsmStateEnum::openconfirm {4, "openconfirm"};
const Enum::YLeaf BgpFsmStateEnum::established {5, "established"};
const Enum::YLeaf BgpFsmStateEnum::nonnegotiated {6, "nonnegotiated"};

const Enum::YLeaf BgpAfiSafiEnum::ipv4_mdt {0, "ipv4-mdt"};
const Enum::YLeaf BgpAfiSafiEnum::ipv4_multicast {1, "ipv4-multicast"};
const Enum::YLeaf BgpAfiSafiEnum::ipv4_unicast {2, "ipv4-unicast"};
const Enum::YLeaf BgpAfiSafiEnum::ipv4_mvpn {3, "ipv4-mvpn"};
const Enum::YLeaf BgpAfiSafiEnum::ipv4_flowspec {4, "ipv4-flowspec"};
const Enum::YLeaf BgpAfiSafiEnum::ipv6_multicast {5, "ipv6-multicast"};
const Enum::YLeaf BgpAfiSafiEnum::ipv6_unicast {6, "ipv6-unicast"};
const Enum::YLeaf BgpAfiSafiEnum::ipv6_mvpn {7, "ipv6-mvpn"};
const Enum::YLeaf BgpAfiSafiEnum::ipv6_flowspec {8, "ipv6-flowspec"};
const Enum::YLeaf BgpAfiSafiEnum::l2vpn_vpls {9, "l2vpn-vpls"};
const Enum::YLeaf BgpAfiSafiEnum::l2vpn_e_vpn {10, "l2vpn-e-vpn"};
const Enum::YLeaf BgpAfiSafiEnum::nsap_unicast {11, "nsap-unicast"};
const Enum::YLeaf BgpAfiSafiEnum::rtfilter_unicast {12, "rtfilter-unicast"};
const Enum::YLeaf BgpAfiSafiEnum::vpnv4_multicast {13, "vpnv4-multicast"};
const Enum::YLeaf BgpAfiSafiEnum::vpnv4_unicast {14, "vpnv4-unicast"};
const Enum::YLeaf BgpAfiSafiEnum::vpnv6_unicast {15, "vpnv6-unicast"};
const Enum::YLeaf BgpAfiSafiEnum::vpnv6_multicast {16, "vpnv6-multicast"};
const Enum::YLeaf BgpAfiSafiEnum::vpnv4_flowspec {17, "vpnv4-flowspec"};
const Enum::YLeaf BgpAfiSafiEnum::vpnv6_flowspec {18, "vpnv6-flowspec"};

const Enum::YLeaf BgpOriginCodeEnum::origin_igp {0, "origin-igp"};
const Enum::YLeaf BgpOriginCodeEnum::origin_egp {1, "origin-egp"};
const Enum::YLeaf BgpOriginCodeEnum::origin_incomplete {2, "origin-incomplete"};

const Enum::YLeaf TcpFsmStateEnum::closed {0, "closed"};
const Enum::YLeaf TcpFsmStateEnum::listen {1, "listen"};
const Enum::YLeaf TcpFsmStateEnum::synsent {2, "synsent"};
const Enum::YLeaf TcpFsmStateEnum::synrcvd {3, "synrcvd"};
const Enum::YLeaf TcpFsmStateEnum::established {4, "established"};
const Enum::YLeaf TcpFsmStateEnum::finwait1 {5, "finwait1"};
const Enum::YLeaf TcpFsmStateEnum::finwait2 {6, "finwait2"};
const Enum::YLeaf TcpFsmStateEnum::closewait {7, "closewait"};
const Enum::YLeaf TcpFsmStateEnum::lastack {8, "lastack"};
const Enum::YLeaf TcpFsmStateEnum::closing {9, "closing"};
const Enum::YLeaf TcpFsmStateEnum::timewait {10, "timewait"};

const Enum::YLeaf BgpLinkEnum::internal {0, "internal"};
const Enum::YLeaf BgpLinkEnum::external {1, "external"};

const Enum::YLeaf BgpRouteOptionEnum::bgp_all_routes {0, "bgp-all-routes"};
const Enum::YLeaf BgpRouteOptionEnum::bgp_cidr_only_routes {1, "bgp-cidr-only-routes"};
const Enum::YLeaf BgpRouteOptionEnum::bgp_dampened_routes {2, "bgp-dampened-routes"};
const Enum::YLeaf BgpRouteOptionEnum::bgp_rib_fail_routes {3, "bgp-rib-fail-routes"};
const Enum::YLeaf BgpRouteOptionEnum::bgp_injected_routes {4, "bgp-injected-routes"};
const Enum::YLeaf BgpRouteOptionEnum::bgp_pending_routes {5, "bgp-pending-routes"};
const Enum::YLeaf BgpRouteOptionEnum::bgp_inconsistent_routes {6, "bgp-inconsistent-routes"};

const Enum::YLeaf BgpRpkiStatusEnum::rpki_valid {0, "rpki-valid"};
const Enum::YLeaf BgpRpkiStatusEnum::rpki_invalid {1, "rpki-invalid"};
const Enum::YLeaf BgpRpkiStatusEnum::rpki_not_found {2, "rpki-not-found"};

const Enum::YLeaf BgpModeEnum::active {0, "active"};
const Enum::YLeaf BgpModeEnum::passive {1, "passive"};


}
}

