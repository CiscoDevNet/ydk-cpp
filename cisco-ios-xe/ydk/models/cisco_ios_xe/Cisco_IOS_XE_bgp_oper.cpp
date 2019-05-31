
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_bgp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_bgp_oper {

BgpStateData::BgpStateData()
    :
    neighbors(std::make_shared<BgpStateData::Neighbors>())
    , address_families(std::make_shared<BgpStateData::AddressFamilies>())
    , bgp_route_vrfs(std::make_shared<BgpStateData::BgpRouteVrfs>())
    , bgp_route_rds(std::make_shared<BgpStateData::BgpRouteRds>())
{
    neighbors->parent = this;
    address_families->parent = this;
    bgp_route_vrfs->parent = this;
    bgp_route_rds->parent = this;

    yang_name = "bgp-state-data"; yang_parent_name = "Cisco-IOS-XE-bgp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

BgpStateData::~BgpStateData()
{
}

bool BgpStateData::has_data() const
{
    if (is_presence_container) return true;
    return (neighbors !=  nullptr && neighbors->has_data())
	|| (address_families !=  nullptr && address_families->has_data())
	|| (bgp_route_vrfs !=  nullptr && bgp_route_vrfs->has_data())
	|| (bgp_route_rds !=  nullptr && bgp_route_rds->has_data());
}

bool BgpStateData::has_operation() const
{
    return is_set(yfilter)
	|| (neighbors !=  nullptr && neighbors->has_operation())
	|| (address_families !=  nullptr && address_families->has_operation())
	|| (bgp_route_vrfs !=  nullptr && bgp_route_vrfs->has_operation())
	|| (bgp_route_rds !=  nullptr && bgp_route_rds->has_operation());
}

std::string BgpStateData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbors")
    {
        if(neighbors == nullptr)
        {
            neighbors = std::make_shared<BgpStateData::Neighbors>();
        }
        return neighbors;
    }

    if(child_yang_name == "address-families")
    {
        if(address_families == nullptr)
        {
            address_families = std::make_shared<BgpStateData::AddressFamilies>();
        }
        return address_families;
    }

    if(child_yang_name == "bgp-route-vrfs")
    {
        if(bgp_route_vrfs == nullptr)
        {
            bgp_route_vrfs = std::make_shared<BgpStateData::BgpRouteVrfs>();
        }
        return bgp_route_vrfs;
    }

    if(child_yang_name == "bgp-route-rds")
    {
        if(bgp_route_rds == nullptr)
        {
            bgp_route_rds = std::make_shared<BgpStateData::BgpRouteRds>();
        }
        return bgp_route_rds;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(neighbors != nullptr)
    {
        _children["neighbors"] = neighbors;
    }

    if(address_families != nullptr)
    {
        _children["address-families"] = address_families;
    }

    if(bgp_route_vrfs != nullptr)
    {
        _children["bgp-route-vrfs"] = bgp_route_vrfs;
    }

    if(bgp_route_rds != nullptr)
    {
        _children["bgp-route-rds"] = bgp_route_rds;
    }

    return _children;
}

void BgpStateData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> BgpStateData::clone_ptr() const
{
    return std::make_shared<BgpStateData>();
}

std::string BgpStateData::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xe_models_path;
}

std::string BgpStateData::get_bundle_name() const
{
    return "cisco_ios_xe";
}

augment_capabilities_function BgpStateData::get_augment_capabilities_function() const
{
    return cisco_ios_xe_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> BgpStateData::get_namespace_identity_lookup() const
{
    return cisco_ios_xe_namespace_identity_lookup;
}

bool BgpStateData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbors" || name == "address-families" || name == "bgp-route-vrfs" || name == "bgp-route-rds")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbors()
    :
    neighbor(this, {"afi_safi", "vrf_name", "neighbor_id"})
{

    yang_name = "neighbors"; yang_parent_name = "bgp-state-data"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpStateData::Neighbors::~Neighbors()
{
}

bool BgpStateData::Neighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::Neighbors::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::Neighbors::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::Neighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<BgpStateData::Neighbors::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::Neighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::Neighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::Neighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::Neighbor()
    :
    afi_safi{YType::enumeration, "afi-safi"},
    vrf_name{YType::str, "vrf-name"},
    neighbor_id{YType::str, "neighbor-id"},
    description{YType::str, "description"},
    bgp_version{YType::uint16, "bgp-version"},
    link{YType::enumeration, "link"},
    up_time{YType::str, "up-time"},
    last_write{YType::str, "last-write"},
    last_read{YType::str, "last-read"},
    installed_prefixes{YType::uint32, "installed-prefixes"},
    session_state{YType::enumeration, "session-state"},
    negotiated_cap{YType::str, "negotiated-cap"},
    as{YType::uint32, "as"}
        ,
    negotiated_keepalive_timers(std::make_shared<BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers>())
    , bgp_neighbor_counters(std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters>())
    , connection(std::make_shared<BgpStateData::Neighbors::Neighbor::Connection>())
    , transport(std::make_shared<BgpStateData::Neighbors::Neighbor::Transport>())
    , prefix_activity(std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity>())
{
    negotiated_keepalive_timers->parent = this;
    bgp_neighbor_counters->parent = this;
    connection->parent = this;
    transport->parent = this;
    prefix_activity->parent = this;

    yang_name = "neighbor"; yang_parent_name = "neighbors"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpStateData::Neighbors::Neighbor::~Neighbor()
{
}

bool BgpStateData::Neighbors::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : negotiated_cap.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return afi_safi.is_set
	|| vrf_name.is_set
	|| neighbor_id.is_set
	|| description.is_set
	|| bgp_version.is_set
	|| link.is_set
	|| up_time.is_set
	|| last_write.is_set
	|| last_read.is_set
	|| installed_prefixes.is_set
	|| session_state.is_set
	|| as.is_set
	|| (negotiated_keepalive_timers !=  nullptr && negotiated_keepalive_timers->has_data())
	|| (bgp_neighbor_counters !=  nullptr && bgp_neighbor_counters->has_data())
	|| (connection !=  nullptr && connection->has_data())
	|| (transport !=  nullptr && transport->has_data())
	|| (prefix_activity !=  nullptr && prefix_activity->has_data());
}

bool BgpStateData::Neighbors::Neighbor::has_operation() const
{
    for (auto const & leaf : negotiated_cap.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(afi_safi.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(bgp_version.yfilter)
	|| ydk::is_set(link.yfilter)
	|| ydk::is_set(up_time.yfilter)
	|| ydk::is_set(last_write.yfilter)
	|| ydk::is_set(last_read.yfilter)
	|| ydk::is_set(installed_prefixes.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(negotiated_cap.yfilter)
	|| ydk::is_set(as.yfilter)
	|| (negotiated_keepalive_timers !=  nullptr && negotiated_keepalive_timers->has_operation())
	|| (bgp_neighbor_counters !=  nullptr && bgp_neighbor_counters->has_operation())
	|| (connection !=  nullptr && connection->has_operation())
	|| (transport !=  nullptr && transport->has_operation())
	|| (prefix_activity !=  nullptr && prefix_activity->has_operation());
}

std::string BgpStateData::Neighbors::Neighbor::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/neighbors/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::Neighbors::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(afi_safi, "afi-safi");
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    ADD_KEY_TOKEN(neighbor_id, "neighbor-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.yfilter)) leaf_name_data.push_back(afi_safi.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (bgp_version.is_set || is_set(bgp_version.yfilter)) leaf_name_data.push_back(bgp_version.get_name_leafdata());
    if (link.is_set || is_set(link.yfilter)) leaf_name_data.push_back(link.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());
    if (last_write.is_set || is_set(last_write.yfilter)) leaf_name_data.push_back(last_write.get_name_leafdata());
    if (last_read.is_set || is_set(last_read.yfilter)) leaf_name_data.push_back(last_read.get_name_leafdata());
    if (installed_prefixes.is_set || is_set(installed_prefixes.yfilter)) leaf_name_data.push_back(installed_prefixes.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    auto negotiated_cap_name_datas = negotiated_cap.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), negotiated_cap_name_datas.begin(), negotiated_cap_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "negotiated-keepalive-timers")
    {
        if(negotiated_keepalive_timers == nullptr)
        {
            negotiated_keepalive_timers = std::make_shared<BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers>();
        }
        return negotiated_keepalive_timers;
    }

    if(child_yang_name == "bgp-neighbor-counters")
    {
        if(bgp_neighbor_counters == nullptr)
        {
            bgp_neighbor_counters = std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters>();
        }
        return bgp_neighbor_counters;
    }

    if(child_yang_name == "connection")
    {
        if(connection == nullptr)
        {
            connection = std::make_shared<BgpStateData::Neighbors::Neighbor::Connection>();
        }
        return connection;
    }

    if(child_yang_name == "transport")
    {
        if(transport == nullptr)
        {
            transport = std::make_shared<BgpStateData::Neighbors::Neighbor::Transport>();
        }
        return transport;
    }

    if(child_yang_name == "prefix-activity")
    {
        if(prefix_activity == nullptr)
        {
            prefix_activity = std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity>();
        }
        return prefix_activity;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(negotiated_keepalive_timers != nullptr)
    {
        _children["negotiated-keepalive-timers"] = negotiated_keepalive_timers;
    }

    if(bgp_neighbor_counters != nullptr)
    {
        _children["bgp-neighbor-counters"] = bgp_neighbor_counters;
    }

    if(connection != nullptr)
    {
        _children["connection"] = connection;
    }

    if(transport != nullptr)
    {
        _children["transport"] = transport;
    }

    if(prefix_activity != nullptr)
    {
        _children["prefix-activity"] = prefix_activity;
    }

    return _children;
}

void BgpStateData::Neighbors::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
        afi_safi.value_namespace = name_space;
        afi_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-version")
    {
        bgp_version = value;
        bgp_version.value_namespace = name_space;
        bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "link")
    {
        link = value;
        link.value_namespace = name_space;
        link.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-write")
    {
        last_write = value;
        last_write.value_namespace = name_space;
        last_write.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-read")
    {
        last_read = value;
        last_read.value_namespace = name_space;
        last_read.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "installed-prefixes")
    {
        installed_prefixes = value;
        installed_prefixes.value_namespace = name_space;
        installed_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "negotiated-cap")
    {
        negotiated_cap.append(value);
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi")
    {
        afi_safi.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "bgp-version")
    {
        bgp_version.yfilter = yfilter;
    }
    if(value_path == "link")
    {
        link.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
    if(value_path == "last-write")
    {
        last_write.yfilter = yfilter;
    }
    if(value_path == "last-read")
    {
        last_read.yfilter = yfilter;
    }
    if(value_path == "installed-prefixes")
    {
        installed_prefixes.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "negotiated-cap")
    {
        negotiated_cap.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "negotiated-keepalive-timers" || name == "bgp-neighbor-counters" || name == "connection" || name == "transport" || name == "prefix-activity" || name == "afi-safi" || name == "vrf-name" || name == "neighbor-id" || name == "description" || name == "bgp-version" || name == "link" || name == "up-time" || name == "last-write" || name == "last-read" || name == "installed-prefixes" || name == "session-state" || name == "negotiated-cap" || name == "as")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::NegotiatedKeepaliveTimers()
    :
    hold_time{YType::uint16, "hold-time"},
    keepalive_interval{YType::uint16, "keepalive-interval"}
{

    yang_name = "negotiated-keepalive-timers"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::~NegotiatedKeepaliveTimers()
{
}

bool BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::has_data() const
{
    if (is_presence_container) return true;
    return hold_time.is_set
	|| keepalive_interval.is_set;
}

bool BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(keepalive_interval.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "negotiated-keepalive-timers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (keepalive_interval.is_set || is_set(keepalive_interval.yfilter)) leaf_name_data.push_back(keepalive_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval = value;
        keepalive_interval.value_namespace = name_space;
        keepalive_interval.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "keepalive-interval")
    {
        keepalive_interval.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::NegotiatedKeepaliveTimers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hold-time" || name == "keepalive-interval")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::BgpNeighborCounters()
    :
    inq_depth{YType::uint32, "inq-depth"},
    outq_depth{YType::uint32, "outq-depth"}
        ,
    sent(std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent>())
    , received(std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received>())
{
    sent->parent = this;
    received->parent = this;

    yang_name = "bgp-neighbor-counters"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::~BgpNeighborCounters()
{
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::has_data() const
{
    if (is_presence_container) return true;
    return inq_depth.is_set
	|| outq_depth.is_set
	|| (sent !=  nullptr && sent->has_data())
	|| (received !=  nullptr && received->has_data());
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inq_depth.yfilter)
	|| ydk::is_set(outq_depth.yfilter)
	|| (sent !=  nullptr && sent->has_operation())
	|| (received !=  nullptr && received->has_operation());
}

std::string BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-counters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inq_depth.is_set || is_set(inq_depth.yfilter)) leaf_name_data.push_back(inq_depth.get_name_leafdata());
    if (outq_depth.is_set || is_set(outq_depth.yfilter)) leaf_name_data.push_back(outq_depth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent>();
        }
        return sent;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received>();
        }
        return received;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sent != nullptr)
    {
        _children["sent"] = sent;
    }

    if(received != nullptr)
    {
        _children["received"] = received;
    }

    return _children;
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inq-depth")
    {
        inq_depth = value;
        inq_depth.value_namespace = name_space;
        inq_depth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outq-depth")
    {
        outq_depth = value;
        outq_depth.value_namespace = name_space;
        outq_depth.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inq-depth")
    {
        inq_depth.yfilter = yfilter;
    }
    if(value_path == "outq-depth")
    {
        outq_depth.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received" || name == "inq-depth" || name == "outq-depth")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::Sent()
    :
    opens{YType::uint32, "opens"},
    updates{YType::uint32, "updates"},
    notifications{YType::uint32, "notifications"},
    keepalives{YType::uint32, "keepalives"},
    route_refreshes{YType::uint32, "route-refreshes"}
{

    yang_name = "sent"; yang_parent_name = "bgp-neighbor-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::~Sent()
{
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::has_data() const
{
    if (is_presence_container) return true;
    return opens.is_set
	|| updates.is_set
	|| notifications.is_set
	|| keepalives.is_set
	|| route_refreshes.is_set;
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opens.yfilter)
	|| ydk::is_set(updates.yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(route_refreshes.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opens.is_set || is_set(opens.yfilter)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (route_refreshes.is_set || is_set(route_refreshes.yfilter)) leaf_name_data.push_back(route_refreshes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opens")
    {
        opens = value;
        opens.value_namespace = name_space;
        opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes = value;
        route_refreshes.value_namespace = name_space;
        route_refreshes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opens")
    {
        opens.yfilter = yfilter;
    }
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opens" || name == "updates" || name == "notifications" || name == "keepalives" || name == "route-refreshes")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::Received()
    :
    opens{YType::uint32, "opens"},
    updates{YType::uint32, "updates"},
    notifications{YType::uint32, "notifications"},
    keepalives{YType::uint32, "keepalives"},
    route_refreshes{YType::uint32, "route-refreshes"}
{

    yang_name = "received"; yang_parent_name = "bgp-neighbor-counters"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::~Received()
{
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::has_data() const
{
    if (is_presence_container) return true;
    return opens.is_set
	|| updates.is_set
	|| notifications.is_set
	|| keepalives.is_set
	|| route_refreshes.is_set;
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(opens.yfilter)
	|| ydk::is_set(updates.yfilter)
	|| ydk::is_set(notifications.yfilter)
	|| ydk::is_set(keepalives.yfilter)
	|| ydk::is_set(route_refreshes.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (opens.is_set || is_set(opens.yfilter)) leaf_name_data.push_back(opens.get_name_leafdata());
    if (updates.is_set || is_set(updates.yfilter)) leaf_name_data.push_back(updates.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.yfilter)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (keepalives.is_set || is_set(keepalives.yfilter)) leaf_name_data.push_back(keepalives.get_name_leafdata());
    if (route_refreshes.is_set || is_set(route_refreshes.yfilter)) leaf_name_data.push_back(route_refreshes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "opens")
    {
        opens = value;
        opens.value_namespace = name_space;
        opens.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updates")
    {
        updates = value;
        updates.value_namespace = name_space;
        updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "notifications")
    {
        notifications = value;
        notifications.value_namespace = name_space;
        notifications.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "keepalives")
    {
        keepalives = value;
        keepalives.value_namespace = name_space;
        keepalives.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes = value;
        route_refreshes.value_namespace = name_space;
        route_refreshes.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "opens")
    {
        opens.yfilter = yfilter;
    }
    if(value_path == "updates")
    {
        updates.yfilter = yfilter;
    }
    if(value_path == "notifications")
    {
        notifications.yfilter = yfilter;
    }
    if(value_path == "keepalives")
    {
        keepalives.yfilter = yfilter;
    }
    if(value_path == "route-refreshes")
    {
        route_refreshes.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::BgpNeighborCounters::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "opens" || name == "updates" || name == "notifications" || name == "keepalives" || name == "route-refreshes")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::Connection::Connection()
    :
    state{YType::enumeration, "state"},
    mode{YType::enumeration, "mode"},
    total_established{YType::uint32, "total-established"},
    total_dropped{YType::uint32, "total-dropped"},
    last_reset{YType::str, "last-reset"},
    reset_reason{YType::str, "reset-reason"}
{

    yang_name = "connection"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::Connection::~Connection()
{
}

bool BgpStateData::Neighbors::Neighbor::Connection::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| mode.is_set
	|| total_established.is_set
	|| total_dropped.is_set
	|| last_reset.is_set
	|| reset_reason.is_set;
}

bool BgpStateData::Neighbors::Neighbor::Connection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(mode.yfilter)
	|| ydk::is_set(total_established.yfilter)
	|| ydk::is_set(total_dropped.yfilter)
	|| ydk::is_set(last_reset.yfilter)
	|| ydk::is_set(reset_reason.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::Connection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (mode.is_set || is_set(mode.yfilter)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (total_established.is_set || is_set(total_established.yfilter)) leaf_name_data.push_back(total_established.get_name_leafdata());
    if (total_dropped.is_set || is_set(total_dropped.yfilter)) leaf_name_data.push_back(total_dropped.get_name_leafdata());
    if (last_reset.is_set || is_set(last_reset.yfilter)) leaf_name_data.push_back(last_reset.get_name_leafdata());
    if (reset_reason.is_set || is_set(reset_reason.yfilter)) leaf_name_data.push_back(reset_reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::Neighbors::Neighbor::Connection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mode")
    {
        mode = value;
        mode.value_namespace = name_space;
        mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-established")
    {
        total_established = value;
        total_established.value_namespace = name_space;
        total_established.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dropped")
    {
        total_dropped = value;
        total_dropped.value_namespace = name_space;
        total_dropped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-reset")
    {
        last_reset = value;
        last_reset.value_namespace = name_space;
        last_reset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reset-reason")
    {
        reset_reason = value;
        reset_reason.value_namespace = name_space;
        reset_reason.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::Connection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "mode")
    {
        mode.yfilter = yfilter;
    }
    if(value_path == "total-established")
    {
        total_established.yfilter = yfilter;
    }
    if(value_path == "total-dropped")
    {
        total_dropped.yfilter = yfilter;
    }
    if(value_path == "last-reset")
    {
        last_reset.yfilter = yfilter;
    }
    if(value_path == "reset-reason")
    {
        reset_reason.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::Connection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state" || name == "mode" || name == "total-established" || name == "total-dropped" || name == "last-reset" || name == "reset-reason")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::Transport::Transport()
    :
    path_mtu_discovery{YType::boolean, "path-mtu-discovery"},
    local_port{YType::uint32, "local-port"},
    local_host{YType::str, "local-host"},
    foreign_port{YType::uint32, "foreign-port"},
    foreign_host{YType::str, "foreign-host"},
    mss{YType::uint32, "mss"}
{

    yang_name = "transport"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::Transport::~Transport()
{
}

bool BgpStateData::Neighbors::Neighbor::Transport::has_data() const
{
    if (is_presence_container) return true;
    return path_mtu_discovery.is_set
	|| local_port.is_set
	|| local_host.is_set
	|| foreign_port.is_set
	|| foreign_host.is_set
	|| mss.is_set;
}

bool BgpStateData::Neighbors::Neighbor::Transport::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(path_mtu_discovery.yfilter)
	|| ydk::is_set(local_port.yfilter)
	|| ydk::is_set(local_host.yfilter)
	|| ydk::is_set(foreign_port.yfilter)
	|| ydk::is_set(foreign_host.yfilter)
	|| ydk::is_set(mss.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::Transport::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "transport";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::Transport::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (path_mtu_discovery.is_set || is_set(path_mtu_discovery.yfilter)) leaf_name_data.push_back(path_mtu_discovery.get_name_leafdata());
    if (local_port.is_set || is_set(local_port.yfilter)) leaf_name_data.push_back(local_port.get_name_leafdata());
    if (local_host.is_set || is_set(local_host.yfilter)) leaf_name_data.push_back(local_host.get_name_leafdata());
    if (foreign_port.is_set || is_set(foreign_port.yfilter)) leaf_name_data.push_back(foreign_port.get_name_leafdata());
    if (foreign_host.is_set || is_set(foreign_host.yfilter)) leaf_name_data.push_back(foreign_host.get_name_leafdata());
    if (mss.is_set || is_set(mss.yfilter)) leaf_name_data.push_back(mss.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::Transport::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::Transport::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::Neighbors::Neighbor::Transport::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery = value;
        path_mtu_discovery.value_namespace = name_space;
        path_mtu_discovery.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-port")
    {
        local_port = value;
        local_port.value_namespace = name_space;
        local_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-host")
    {
        local_host = value;
        local_host.value_namespace = name_space;
        local_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-port")
    {
        foreign_port = value;
        foreign_port.value_namespace = name_space;
        foreign_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "foreign-host")
    {
        foreign_host = value;
        foreign_host.value_namespace = name_space;
        foreign_host.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mss")
    {
        mss = value;
        mss.value_namespace = name_space;
        mss.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::Transport::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "path-mtu-discovery")
    {
        path_mtu_discovery.yfilter = yfilter;
    }
    if(value_path == "local-port")
    {
        local_port.yfilter = yfilter;
    }
    if(value_path == "local-host")
    {
        local_host.yfilter = yfilter;
    }
    if(value_path == "foreign-port")
    {
        foreign_port.yfilter = yfilter;
    }
    if(value_path == "foreign-host")
    {
        foreign_host.yfilter = yfilter;
    }
    if(value_path == "mss")
    {
        mss.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::Transport::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-mtu-discovery" || name == "local-port" || name == "local-host" || name == "foreign-port" || name == "foreign-host" || name == "mss")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::PrefixActivity()
    :
    sent(std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent>())
    , received(std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity::Received>())
{
    sent->parent = this;
    received->parent = this;

    yang_name = "prefix-activity"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::~PrefixActivity()
{
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::has_data() const
{
    if (is_presence_container) return true;
    return (sent !=  nullptr && sent->has_data())
	|| (received !=  nullptr && received->has_data());
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::has_operation() const
{
    return is_set(yfilter)
	|| (sent !=  nullptr && sent->has_operation())
	|| (received !=  nullptr && received->has_operation());
}

std::string BgpStateData::Neighbors::Neighbor::PrefixActivity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-activity";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::PrefixActivity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::PrefixActivity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sent")
    {
        if(sent == nullptr)
        {
            sent = std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent>();
        }
        return sent;
    }

    if(child_yang_name == "received")
    {
        if(received == nullptr)
        {
            received = std::make_shared<BgpStateData::Neighbors::Neighbor::PrefixActivity::Received>();
        }
        return received;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::PrefixActivity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sent != nullptr)
    {
        _children["sent"] = sent;
    }

    if(received != nullptr)
    {
        _children["received"] = received;
    }

    return _children;
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent" || name == "received")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::Sent()
    :
    current_prefixes{YType::uint64, "current-prefixes"},
    total_prefixes{YType::uint64, "total-prefixes"},
    implicit_withdraw{YType::uint64, "implicit-withdraw"},
    explicit_withdraw{YType::uint64, "explicit-withdraw"},
    bestpaths{YType::uint64, "bestpaths"},
    multipaths{YType::uint64, "multipaths"}
{

    yang_name = "sent"; yang_parent_name = "prefix-activity"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::~Sent()
{
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::has_data() const
{
    if (is_presence_container) return true;
    return current_prefixes.is_set
	|| total_prefixes.is_set
	|| implicit_withdraw.is_set
	|| explicit_withdraw.is_set
	|| bestpaths.is_set
	|| multipaths.is_set;
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_prefixes.yfilter)
	|| ydk::is_set(total_prefixes.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| ydk::is_set(explicit_withdraw.yfilter)
	|| ydk::is_set(bestpaths.yfilter)
	|| ydk::is_set(multipaths.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_prefixes.is_set || is_set(current_prefixes.yfilter)) leaf_name_data.push_back(current_prefixes.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());
    if (explicit_withdraw.is_set || is_set(explicit_withdraw.yfilter)) leaf_name_data.push_back(explicit_withdraw.get_name_leafdata());
    if (bestpaths.is_set || is_set(bestpaths.yfilter)) leaf_name_data.push_back(bestpaths.get_name_leafdata());
    if (multipaths.is_set || is_set(multipaths.yfilter)) leaf_name_data.push_back(multipaths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-prefixes")
    {
        current_prefixes = value;
        current_prefixes.value_namespace = name_space;
        current_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw = value;
        explicit_withdraw.value_namespace = name_space;
        explicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestpaths")
    {
        bestpaths = value;
        bestpaths.value_namespace = name_space;
        bestpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipaths")
    {
        multipaths = value;
        multipaths.value_namespace = name_space;
        multipaths.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-prefixes")
    {
        current_prefixes.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "bestpaths")
    {
        bestpaths.yfilter = yfilter;
    }
    if(value_path == "multipaths")
    {
        multipaths.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Sent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-prefixes" || name == "total-prefixes" || name == "implicit-withdraw" || name == "explicit-withdraw" || name == "bestpaths" || name == "multipaths")
        return true;
    return false;
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::Received()
    :
    current_prefixes{YType::uint64, "current-prefixes"},
    total_prefixes{YType::uint64, "total-prefixes"},
    implicit_withdraw{YType::uint64, "implicit-withdraw"},
    explicit_withdraw{YType::uint64, "explicit-withdraw"},
    bestpaths{YType::uint64, "bestpaths"},
    multipaths{YType::uint64, "multipaths"}
{

    yang_name = "received"; yang_parent_name = "prefix-activity"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::~Received()
{
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::has_data() const
{
    if (is_presence_container) return true;
    return current_prefixes.is_set
	|| total_prefixes.is_set
	|| implicit_withdraw.is_set
	|| explicit_withdraw.is_set
	|| bestpaths.is_set
	|| multipaths.is_set;
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(current_prefixes.yfilter)
	|| ydk::is_set(total_prefixes.yfilter)
	|| ydk::is_set(implicit_withdraw.yfilter)
	|| ydk::is_set(explicit_withdraw.yfilter)
	|| ydk::is_set(bestpaths.yfilter)
	|| ydk::is_set(multipaths.yfilter);
}

std::string BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (current_prefixes.is_set || is_set(current_prefixes.yfilter)) leaf_name_data.push_back(current_prefixes.get_name_leafdata());
    if (total_prefixes.is_set || is_set(total_prefixes.yfilter)) leaf_name_data.push_back(total_prefixes.get_name_leafdata());
    if (implicit_withdraw.is_set || is_set(implicit_withdraw.yfilter)) leaf_name_data.push_back(implicit_withdraw.get_name_leafdata());
    if (explicit_withdraw.is_set || is_set(explicit_withdraw.yfilter)) leaf_name_data.push_back(explicit_withdraw.get_name_leafdata());
    if (bestpaths.is_set || is_set(bestpaths.yfilter)) leaf_name_data.push_back(bestpaths.get_name_leafdata());
    if (multipaths.is_set || is_set(multipaths.yfilter)) leaf_name_data.push_back(multipaths.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "current-prefixes")
    {
        current_prefixes = value;
        current_prefixes.value_namespace = name_space;
        current_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes = value;
        total_prefixes.value_namespace = name_space;
        total_prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw = value;
        implicit_withdraw.value_namespace = name_space;
        implicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw = value;
        explicit_withdraw.value_namespace = name_space;
        explicit_withdraw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestpaths")
    {
        bestpaths = value;
        bestpaths.value_namespace = name_space;
        bestpaths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipaths")
    {
        multipaths = value;
        multipaths.value_namespace = name_space;
        multipaths.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "current-prefixes")
    {
        current_prefixes.yfilter = yfilter;
    }
    if(value_path == "total-prefixes")
    {
        total_prefixes.yfilter = yfilter;
    }
    if(value_path == "implicit-withdraw")
    {
        implicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "explicit-withdraw")
    {
        explicit_withdraw.yfilter = yfilter;
    }
    if(value_path == "bestpaths")
    {
        bestpaths.yfilter = yfilter;
    }
    if(value_path == "multipaths")
    {
        multipaths.yfilter = yfilter;
    }
}

bool BgpStateData::Neighbors::Neighbor::PrefixActivity::Received::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "current-prefixes" || name == "total-prefixes" || name == "implicit-withdraw" || name == "explicit-withdraw" || name == "bestpaths" || name == "multipaths")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamilies()
    :
    address_family(this, {"afi_safi", "vrf_name"})
{

    yang_name = "address-families"; yang_parent_name = "bgp-state-data"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpStateData::AddressFamilies::~AddressFamilies()
{
}

bool BgpStateData::AddressFamilies::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_family.len(); index++)
    {
        if(address_family[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::AddressFamilies::has_operation() const
{
    for (std::size_t index=0; index<address_family.len(); index++)
    {
        if(address_family[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::AddressFamilies::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::AddressFamilies::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-families";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family")
    {
        auto ent_ = std::make_shared<BgpStateData::AddressFamilies::AddressFamily>();
        ent_->parent = this;
        address_family.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_family.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::AddressFamilies::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::AddressFamilies::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::AddressFamilies::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::AddressFamily()
    :
    afi_safi{YType::enumeration, "afi-safi"},
    vrf_name{YType::str, "vrf-name"},
    router_id{YType::str, "router-id"},
    bgp_table_version{YType::uint64, "bgp-table-version"},
    routing_table_version{YType::uint64, "routing-table-version"},
    total_memory{YType::uint64, "total-memory"},
    local_as{YType::uint32, "local-as"}
        ,
    prefixes(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Prefixes>())
    , path(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Path>())
    , as_path(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::AsPath>())
    , route_map(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::RouteMap>())
    , filter_list(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::FilterList>())
    , activities(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Activities>())
    , bgp_neighbor_summaries(std::make_shared<BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries>())
{
    prefixes->parent = this;
    path->parent = this;
    as_path->parent = this;
    route_map->parent = this;
    filter_list->parent = this;
    activities->parent = this;
    bgp_neighbor_summaries->parent = this;

    yang_name = "address-family"; yang_parent_name = "address-families"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpStateData::AddressFamilies::AddressFamily::~AddressFamily()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi.is_set
	|| vrf_name.is_set
	|| router_id.is_set
	|| bgp_table_version.is_set
	|| routing_table_version.is_set
	|| total_memory.is_set
	|| local_as.is_set
	|| (prefixes !=  nullptr && prefixes->has_data())
	|| (path !=  nullptr && path->has_data())
	|| (as_path !=  nullptr && as_path->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (filter_list !=  nullptr && filter_list->has_data())
	|| (activities !=  nullptr && activities->has_data())
	|| (bgp_neighbor_summaries !=  nullptr && bgp_neighbor_summaries->has_data());
}

bool BgpStateData::AddressFamilies::AddressFamily::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(bgp_table_version.yfilter)
	|| ydk::is_set(routing_table_version.yfilter)
	|| ydk::is_set(total_memory.yfilter)
	|| ydk::is_set(local_as.yfilter)
	|| (prefixes !=  nullptr && prefixes->has_operation())
	|| (path !=  nullptr && path->has_operation())
	|| (as_path !=  nullptr && as_path->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (filter_list !=  nullptr && filter_list->has_operation())
	|| (activities !=  nullptr && activities->has_operation())
	|| (bgp_neighbor_summaries !=  nullptr && bgp_neighbor_summaries->has_operation());
}

std::string BgpStateData::AddressFamilies::AddressFamily::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/address-families/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::AddressFamilies::AddressFamily::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family";
    ADD_KEY_TOKEN(afi_safi, "afi-safi");
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.yfilter)) leaf_name_data.push_back(afi_safi.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (bgp_table_version.is_set || is_set(bgp_table_version.yfilter)) leaf_name_data.push_back(bgp_table_version.get_name_leafdata());
    if (routing_table_version.is_set || is_set(routing_table_version.yfilter)) leaf_name_data.push_back(routing_table_version.get_name_leafdata());
    if (total_memory.is_set || is_set(total_memory.yfilter)) leaf_name_data.push_back(total_memory.get_name_leafdata());
    if (local_as.is_set || is_set(local_as.yfilter)) leaf_name_data.push_back(local_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prefixes")
    {
        if(prefixes == nullptr)
        {
            prefixes = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Prefixes>();
        }
        return prefixes;
    }

    if(child_yang_name == "path")
    {
        if(path == nullptr)
        {
            path = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Path>();
        }
        return path;
    }

    if(child_yang_name == "as-path")
    {
        if(as_path == nullptr)
        {
            as_path = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::AsPath>();
        }
        return as_path;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "filter-list")
    {
        if(filter_list == nullptr)
        {
            filter_list = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::FilterList>();
        }
        return filter_list;
    }

    if(child_yang_name == "activities")
    {
        if(activities == nullptr)
        {
            activities = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::Activities>();
        }
        return activities;
    }

    if(child_yang_name == "bgp-neighbor-summaries")
    {
        if(bgp_neighbor_summaries == nullptr)
        {
            bgp_neighbor_summaries = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries>();
        }
        return bgp_neighbor_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(prefixes != nullptr)
    {
        _children["prefixes"] = prefixes;
    }

    if(path != nullptr)
    {
        _children["path"] = path;
    }

    if(as_path != nullptr)
    {
        _children["as-path"] = as_path;
    }

    if(route_map != nullptr)
    {
        _children["route-map"] = route_map;
    }

    if(filter_list != nullptr)
    {
        _children["filter-list"] = filter_list;
    }

    if(activities != nullptr)
    {
        _children["activities"] = activities;
    }

    if(bgp_neighbor_summaries != nullptr)
    {
        _children["bgp-neighbor-summaries"] = bgp_neighbor_summaries;
    }

    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
        afi_safi.value_namespace = name_space;
        afi_safi.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-table-version")
    {
        bgp_table_version = value;
        bgp_table_version.value_namespace = name_space;
        bgp_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routing-table-version")
    {
        routing_table_version = value;
        routing_table_version.value_namespace = name_space;
        routing_table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-memory")
    {
        total_memory = value;
        total_memory.value_namespace = name_space;
        total_memory.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-as")
    {
        local_as = value;
        local_as.value_namespace = name_space;
        local_as.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi")
    {
        afi_safi.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "bgp-table-version")
    {
        bgp_table_version.yfilter = yfilter;
    }
    if(value_path == "routing-table-version")
    {
        routing_table_version.yfilter = yfilter;
    }
    if(value_path == "total-memory")
    {
        total_memory.yfilter = yfilter;
    }
    if(value_path == "local-as")
    {
        local_as.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "path" || name == "as-path" || name == "route-map" || name == "filter-list" || name == "activities" || name == "bgp-neighbor-summaries" || name == "afi-safi" || name == "vrf-name" || name == "router-id" || name == "bgp-table-version" || name == "routing-table-version" || name == "total-memory" || name == "local-as")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::Prefixes::Prefixes()
    :
    total_entries{YType::uint64, "total-entries"},
    memory_usage{YType::uint64, "memory-usage"}
{

    yang_name = "prefixes"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::AddressFamilies::AddressFamily::Prefixes::~Prefixes()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::Prefixes::has_data() const
{
    if (is_presence_container) return true;
    return total_entries.is_set
	|| memory_usage.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::Prefixes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(memory_usage.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::Prefixes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefixes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::Prefixes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::Prefixes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::Prefixes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::Prefixes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::Prefixes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::Prefixes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-entries" || name == "memory-usage")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::Path::Path()
    :
    total_entries{YType::uint64, "total-entries"},
    memory_usage{YType::uint64, "memory-usage"}
{

    yang_name = "path"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::AddressFamilies::AddressFamily::Path::~Path()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::Path::has_data() const
{
    if (is_presence_container) return true;
    return total_entries.is_set
	|| memory_usage.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::Path::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(memory_usage.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::Path::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::Path::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::Path::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::Path::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::Path::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::Path::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::Path::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-entries" || name == "memory-usage")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::AsPath::AsPath()
    :
    total_entries{YType::uint64, "total-entries"},
    memory_usage{YType::uint64, "memory-usage"}
{

    yang_name = "as-path"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::AddressFamilies::AddressFamily::AsPath::~AsPath()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::AsPath::has_data() const
{
    if (is_presence_container) return true;
    return total_entries.is_set
	|| memory_usage.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::AsPath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(memory_usage.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::AsPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "as-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::AsPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::AsPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::AsPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::AsPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::AsPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::AsPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-entries" || name == "memory-usage")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::RouteMap::RouteMap()
    :
    total_entries{YType::uint64, "total-entries"},
    memory_usage{YType::uint64, "memory-usage"}
{

    yang_name = "route-map"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::AddressFamilies::AddressFamily::RouteMap::~RouteMap()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return total_entries.is_set
	|| memory_usage.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(memory_usage.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-entries" || name == "memory-usage")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::FilterList::FilterList()
    :
    total_entries{YType::uint64, "total-entries"},
    memory_usage{YType::uint64, "memory-usage"}
{

    yang_name = "filter-list"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::AddressFamilies::AddressFamily::FilterList::~FilterList()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::FilterList::has_data() const
{
    if (is_presence_container) return true;
    return total_entries.is_set
	|| memory_usage.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_entries.yfilter)
	|| ydk::is_set(memory_usage.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_entries.is_set || is_set(total_entries.yfilter)) leaf_name_data.push_back(total_entries.get_name_leafdata());
    if (memory_usage.is_set || is_set(memory_usage.yfilter)) leaf_name_data.push_back(memory_usage.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-entries")
    {
        total_entries = value;
        total_entries.value_namespace = name_space;
        total_entries.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "memory-usage")
    {
        memory_usage = value;
        memory_usage.value_namespace = name_space;
        memory_usage.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-entries")
    {
        total_entries.yfilter = yfilter;
    }
    if(value_path == "memory-usage")
    {
        memory_usage.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-entries" || name == "memory-usage")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::Activities::Activities()
    :
    prefixes{YType::uint64, "prefixes"},
    paths{YType::uint64, "paths"},
    scan_interval{YType::str, "scan-interval"}
{

    yang_name = "activities"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::AddressFamilies::AddressFamily::Activities::~Activities()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::Activities::has_data() const
{
    if (is_presence_container) return true;
    return prefixes.is_set
	|| paths.is_set
	|| scan_interval.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::Activities::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefixes.yfilter)
	|| ydk::is_set(paths.yfilter)
	|| ydk::is_set(scan_interval.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::Activities::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "activities";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::Activities::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefixes.is_set || is_set(prefixes.yfilter)) leaf_name_data.push_back(prefixes.get_name_leafdata());
    if (paths.is_set || is_set(paths.yfilter)) leaf_name_data.push_back(paths.get_name_leafdata());
    if (scan_interval.is_set || is_set(scan_interval.yfilter)) leaf_name_data.push_back(scan_interval.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::Activities::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::Activities::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::Activities::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefixes")
    {
        prefixes = value;
        prefixes.value_namespace = name_space;
        prefixes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "paths")
    {
        paths = value;
        paths.value_namespace = name_space;
        paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-interval")
    {
        scan_interval = value;
        scan_interval.value_namespace = name_space;
        scan_interval.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::Activities::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefixes")
    {
        prefixes.yfilter = yfilter;
    }
    if(value_path == "paths")
    {
        paths.yfilter = yfilter;
    }
    if(value_path == "scan-interval")
    {
        scan_interval.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::Activities::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefixes" || name == "paths" || name == "scan-interval")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummaries()
    :
    bgp_neighbor_summary(this, {"id"})
{

    yang_name = "bgp-neighbor-summaries"; yang_parent_name = "address-family"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::~BgpNeighborSummaries()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_neighbor_summary.len(); index++)
    {
        if(bgp_neighbor_summary[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor_summary.len(); index++)
    {
        if(bgp_neighbor_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-summary")
    {
        auto ent_ = std::make_shared<BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary>();
        ent_->parent = this;
        bgp_neighbor_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_neighbor_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-summary")
        return true;
    return false;
}

BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::BgpNeighborSummary()
    :
    id{YType::str, "id"},
    bgp_version{YType::uint32, "bgp-version"},
    messages_received{YType::uint64, "messages-received"},
    messages_sent{YType::uint64, "messages-sent"},
    table_version{YType::uint64, "table-version"},
    input_queue{YType::uint64, "input-queue"},
    output_queue{YType::uint64, "output-queue"},
    up_time{YType::str, "up-time"},
    state{YType::enumeration, "state"},
    prefixes_received{YType::uint64, "prefixes-received"},
    dynamically_configured{YType::boolean, "dynamically-configured"},
    as{YType::uint32, "as"}
{

    yang_name = "bgp-neighbor-summary"; yang_parent_name = "bgp-neighbor-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::~BgpNeighborSummary()
{
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::has_data() const
{
    if (is_presence_container) return true;
    return id.is_set
	|| bgp_version.is_set
	|| messages_received.is_set
	|| messages_sent.is_set
	|| table_version.is_set
	|| input_queue.is_set
	|| output_queue.is_set
	|| up_time.is_set
	|| state.is_set
	|| prefixes_received.is_set
	|| dynamically_configured.is_set
	|| as.is_set;
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(bgp_version.yfilter)
	|| ydk::is_set(messages_received.yfilter)
	|| ydk::is_set(messages_sent.yfilter)
	|| ydk::is_set(table_version.yfilter)
	|| ydk::is_set(input_queue.yfilter)
	|| ydk::is_set(output_queue.yfilter)
	|| ydk::is_set(up_time.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(prefixes_received.yfilter)
	|| ydk::is_set(dynamically_configured.yfilter)
	|| ydk::is_set(as.yfilter);
}

std::string BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-summary";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (bgp_version.is_set || is_set(bgp_version.yfilter)) leaf_name_data.push_back(bgp_version.get_name_leafdata());
    if (messages_received.is_set || is_set(messages_received.yfilter)) leaf_name_data.push_back(messages_received.get_name_leafdata());
    if (messages_sent.is_set || is_set(messages_sent.yfilter)) leaf_name_data.push_back(messages_sent.get_name_leafdata());
    if (table_version.is_set || is_set(table_version.yfilter)) leaf_name_data.push_back(table_version.get_name_leafdata());
    if (input_queue.is_set || is_set(input_queue.yfilter)) leaf_name_data.push_back(input_queue.get_name_leafdata());
    if (output_queue.is_set || is_set(output_queue.yfilter)) leaf_name_data.push_back(output_queue.get_name_leafdata());
    if (up_time.is_set || is_set(up_time.yfilter)) leaf_name_data.push_back(up_time.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (prefixes_received.is_set || is_set(prefixes_received.yfilter)) leaf_name_data.push_back(prefixes_received.get_name_leafdata());
    if (dynamically_configured.is_set || is_set(dynamically_configured.yfilter)) leaf_name_data.push_back(dynamically_configured.get_name_leafdata());
    if (as.is_set || is_set(as.yfilter)) leaf_name_data.push_back(as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-version")
    {
        bgp_version = value;
        bgp_version.value_namespace = name_space;
        bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-received")
    {
        messages_received = value;
        messages_received.value_namespace = name_space;
        messages_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "messages-sent")
    {
        messages_sent = value;
        messages_sent.value_namespace = name_space;
        messages_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "table-version")
    {
        table_version = value;
        table_version.value_namespace = name_space;
        table_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "input-queue")
    {
        input_queue = value;
        input_queue.value_namespace = name_space;
        input_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "output-queue")
    {
        output_queue = value;
        output_queue.value_namespace = name_space;
        output_queue.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-time")
    {
        up_time = value;
        up_time.value_namespace = name_space;
        up_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefixes-received")
    {
        prefixes_received = value;
        prefixes_received.value_namespace = name_space;
        prefixes_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dynamically-configured")
    {
        dynamically_configured = value;
        dynamically_configured.value_namespace = name_space;
        dynamically_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as")
    {
        as = value;
        as.value_namespace = name_space;
        as.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "bgp-version")
    {
        bgp_version.yfilter = yfilter;
    }
    if(value_path == "messages-received")
    {
        messages_received.yfilter = yfilter;
    }
    if(value_path == "messages-sent")
    {
        messages_sent.yfilter = yfilter;
    }
    if(value_path == "table-version")
    {
        table_version.yfilter = yfilter;
    }
    if(value_path == "input-queue")
    {
        input_queue.yfilter = yfilter;
    }
    if(value_path == "output-queue")
    {
        output_queue.yfilter = yfilter;
    }
    if(value_path == "up-time")
    {
        up_time.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "prefixes-received")
    {
        prefixes_received.yfilter = yfilter;
    }
    if(value_path == "dynamically-configured")
    {
        dynamically_configured.yfilter = yfilter;
    }
    if(value_path == "as")
    {
        as.yfilter = yfilter;
    }
}

bool BgpStateData::AddressFamilies::AddressFamily::BgpNeighborSummaries::BgpNeighborSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "id" || name == "bgp-version" || name == "messages-received" || name == "messages-sent" || name == "table-version" || name == "input-queue" || name == "output-queue" || name == "up-time" || name == "state" || name == "prefixes-received" || name == "dynamically-configured" || name == "as")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrfs()
    :
    bgp_route_vrf(this, {"vrf"})
{

    yang_name = "bgp-route-vrfs"; yang_parent_name = "bgp-state-data"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpStateData::BgpRouteVrfs::~BgpRouteVrfs()
{
}

bool BgpStateData::BgpRouteVrfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_route_vrf.len(); index++)
    {
        if(bgp_route_vrf[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_vrf.len(); index++)
    {
        if(bgp_route_vrf[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::BgpRouteVrfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-vrfs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-vrf")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf>();
        ent_->parent = this;
        bgp_route_vrf.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_route_vrf.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-vrf")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteVrf()
    :
    vrf{YType::str, "vrf"}
        ,
    bgp_route_afs(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs>())
{
    bgp_route_afs->parent = this;

    yang_name = "bgp-route-vrf"; yang_parent_name = "bgp-route-vrfs"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::~BgpRouteVrf()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::has_data() const
{
    if (is_presence_container) return true;
    return vrf.is_set
	|| (bgp_route_afs !=  nullptr && bgp_route_afs->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf.yfilter)
	|| (bgp_route_afs !=  nullptr && bgp_route_afs->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/bgp-route-vrfs/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-vrf";
    ADD_KEY_TOKEN(vrf, "vrf");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.yfilter)) leaf_name_data.push_back(vrf.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-afs")
    {
        if(bgp_route_afs == nullptr)
        {
            bgp_route_afs = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs>();
        }
        return bgp_route_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_route_afs != nullptr)
    {
        _children["bgp-route-afs"] = bgp_route_afs;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf")
    {
        vrf = value;
        vrf.value_namespace = name_space;
        vrf.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf")
    {
        vrf.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-afs" || name == "vrf")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAfs()
    :
    bgp_route_af(this, {"afi_safi"})
{

    yang_name = "bgp-route-afs"; yang_parent_name = "bgp-route-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::~BgpRouteAfs()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_route_af.len(); index++)
    {
        if(bgp_route_af[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_af.len(); index++)
    {
        if(bgp_route_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-af")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf>();
        ent_->parent = this;
        bgp_route_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_route_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-af")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteAf()
    :
    afi_safi{YType::enumeration, "afi-safi"}
        ,
    bgp_route_filters(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters>())
    , bgp_route_neighbors(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors>())
    , bgp_peer_groups(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups>())
{
    bgp_route_filters->parent = this;
    bgp_route_neighbors->parent = this;
    bgp_peer_groups->parent = this;

    yang_name = "bgp-route-af"; yang_parent_name = "bgp-route-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::~BgpRouteAf()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi.is_set
	|| (bgp_route_filters !=  nullptr && bgp_route_filters->has_data())
	|| (bgp_route_neighbors !=  nullptr && bgp_route_neighbors->has_data())
	|| (bgp_peer_groups !=  nullptr && bgp_peer_groups->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi.yfilter)
	|| (bgp_route_filters !=  nullptr && bgp_route_filters->has_operation())
	|| (bgp_route_neighbors !=  nullptr && bgp_route_neighbors->has_operation())
	|| (bgp_peer_groups !=  nullptr && bgp_peer_groups->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-af";
    ADD_KEY_TOKEN(afi_safi, "afi-safi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.yfilter)) leaf_name_data.push_back(afi_safi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-filters")
    {
        if(bgp_route_filters == nullptr)
        {
            bgp_route_filters = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters>();
        }
        return bgp_route_filters;
    }

    if(child_yang_name == "bgp-route-neighbors")
    {
        if(bgp_route_neighbors == nullptr)
        {
            bgp_route_neighbors = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors>();
        }
        return bgp_route_neighbors;
    }

    if(child_yang_name == "bgp-peer-groups")
    {
        if(bgp_peer_groups == nullptr)
        {
            bgp_peer_groups = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups>();
        }
        return bgp_peer_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_route_filters != nullptr)
    {
        _children["bgp-route-filters"] = bgp_route_filters;
    }

    if(bgp_route_neighbors != nullptr)
    {
        _children["bgp-route-neighbors"] = bgp_route_neighbors;
    }

    if(bgp_peer_groups != nullptr)
    {
        _children["bgp-peer-groups"] = bgp_peer_groups;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
        afi_safi.value_namespace = name_space;
        afi_safi.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi")
    {
        afi_safi.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-filters" || name == "bgp-route-neighbors" || name == "bgp-peer-groups" || name == "afi-safi")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilters()
    :
    bgp_route_filter(this, {"route_filter"})
{

    yang_name = "bgp-route-filters"; yang_parent_name = "bgp-route-af"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::~BgpRouteFilters()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_route_filter.len(); index++)
    {
        if(bgp_route_filter[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_filter.len(); index++)
    {
        if(bgp_route_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-filter")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter>();
        ent_->parent = this;
        bgp_route_filter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_route_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteFilter()
    :
    route_filter{YType::enumeration, "route-filter"}
        ,
    bgp_route_entries(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries>())
{
    bgp_route_entries->parent = this;

    yang_name = "bgp-route-filter"; yang_parent_name = "bgp-route-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::~BgpRouteFilter()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::has_data() const
{
    if (is_presence_container) return true;
    return route_filter.is_set
	|| (bgp_route_entries !=  nullptr && bgp_route_entries->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_filter.yfilter)
	|| (bgp_route_entries !=  nullptr && bgp_route_entries->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-filter";
    ADD_KEY_TOKEN(route_filter, "route-filter");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_filter.is_set || is_set(route_filter.yfilter)) leaf_name_data.push_back(route_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-entries")
    {
        if(bgp_route_entries == nullptr)
        {
            bgp_route_entries = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries>();
        }
        return bgp_route_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_route_entries != nullptr)
    {
        _children["bgp-route-entries"] = bgp_route_entries;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-filter")
    {
        route_filter = value;
        route_filter.value_namespace = name_space;
        route_filter.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-filter")
    {
        route_filter.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-entries" || name == "route-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntries()
    :
    bgp_route_entry(this, {"prefix"})
{

    yang_name = "bgp-route-entries"; yang_parent_name = "bgp-route-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::~BgpRouteEntries()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_route_entry.len(); index++)
    {
        if(bgp_route_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_entry.len(); index++)
    {
        if(bgp_route_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-entry")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry>();
        ent_->parent = this;
        bgp_route_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_route_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpRouteEntry()
    :
    prefix{YType::str, "prefix"},
    version{YType::uint32, "version"},
    available_paths{YType::uint32, "available-paths"},
    advertised_to{YType::str, "advertised-to"}
        ,
    bgp_path_entries(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries>())
{
    bgp_path_entries->parent = this;

    yang_name = "bgp-route-entry"; yang_parent_name = "bgp-route-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::~BgpRouteEntry()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| version.is_set
	|| available_paths.is_set
	|| advertised_to.is_set
	|| (bgp_path_entries !=  nullptr && bgp_path_entries->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(available_paths.yfilter)
	|| ydk::is_set(advertised_to.yfilter)
	|| (bgp_path_entries !=  nullptr && bgp_path_entries->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-entry";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (available_paths.is_set || is_set(available_paths.yfilter)) leaf_name_data.push_back(available_paths.get_name_leafdata());
    if (advertised_to.is_set || is_set(advertised_to.yfilter)) leaf_name_data.push_back(advertised_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-path-entries")
    {
        if(bgp_path_entries == nullptr)
        {
            bgp_path_entries = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries>();
        }
        return bgp_path_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_path_entries != nullptr)
    {
        _children["bgp-path-entries"] = bgp_path_entries;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-paths")
    {
        available_paths = value;
        available_paths.value_namespace = name_space;
        available_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertised-to")
    {
        advertised_to = value;
        advertised_to.value_namespace = name_space;
        advertised_to.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "available-paths")
    {
        available_paths.yfilter = yfilter;
    }
    if(value_path == "advertised-to")
    {
        advertised_to.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-path-entries" || name == "prefix" || name == "version" || name == "available-paths" || name == "advertised-to")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntries()
    :
    bgp_path_entry(this, {"nexthop"})
{

    yang_name = "bgp-path-entries"; yang_parent_name = "bgp-route-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::~BgpPathEntries()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_path_entry.len(); index++)
    {
        if(bgp_path_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_path_entry.len(); index++)
    {
        if(bgp_path_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-path-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-path-entry")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry>();
        ent_->parent = this;
        bgp_path_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_path_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-path-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::BgpPathEntry()
    :
    nexthop{YType::str, "nexthop"},
    metric{YType::uint32, "metric"},
    local_pref{YType::uint32, "local-pref"},
    weight{YType::uint32, "weight"},
    as_path{YType::str, "as-path"},
    origin{YType::enumeration, "origin"},
    rpki_status{YType::enumeration, "rpki-status"},
    community{YType::str, "community"},
    mpls_in{YType::str, "mpls-in"},
    mpls_out{YType::str, "mpls-out"},
    sr_profile_name{YType::str, "sr-profile-name"},
    sr_binding_sid{YType::uint32, "sr-binding-sid"},
    sr_label_indx{YType::uint32, "sr-label-indx"},
    as4_path{YType::str, "as4-path"},
    atomic_aggregate{YType::boolean, "atomic-aggregate"},
    aggr_as_number{YType::uint32, "aggr-as-number"},
    aggr_as4_number{YType::uint32, "aggr-as4-number"},
    aggr_address{YType::str, "aggr-address"},
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    extended_community{YType::str, "extended-community"},
    ext_aigp_metric{YType::uint64, "ext-aigp-metric"},
    path_id{YType::uint32, "path-id"}
        ,
    path_status(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus>())
{
    path_status->parent = this;

    yang_name = "bgp-path-entry"; yang_parent_name = "bgp-path-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::~BgpPathEntry()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::has_data() const
{
    if (is_presence_container) return true;
    return nexthop.is_set
	|| metric.is_set
	|| local_pref.is_set
	|| weight.is_set
	|| as_path.is_set
	|| origin.is_set
	|| rpki_status.is_set
	|| community.is_set
	|| mpls_in.is_set
	|| mpls_out.is_set
	|| sr_profile_name.is_set
	|| sr_binding_sid.is_set
	|| sr_label_indx.is_set
	|| as4_path.is_set
	|| atomic_aggregate.is_set
	|| aggr_as_number.is_set
	|| aggr_as4_number.is_set
	|| aggr_address.is_set
	|| originator_id.is_set
	|| cluster_list.is_set
	|| extended_community.is_set
	|| ext_aigp_metric.is_set
	|| path_id.is_set
	|| (path_status !=  nullptr && path_status->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(rpki_status.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(mpls_in.yfilter)
	|| ydk::is_set(mpls_out.yfilter)
	|| ydk::is_set(sr_profile_name.yfilter)
	|| ydk::is_set(sr_binding_sid.yfilter)
	|| ydk::is_set(sr_label_indx.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(atomic_aggregate.yfilter)
	|| ydk::is_set(aggr_as_number.yfilter)
	|| ydk::is_set(aggr_as4_number.yfilter)
	|| ydk::is_set(aggr_address.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(extended_community.yfilter)
	|| ydk::is_set(ext_aigp_metric.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| (path_status !=  nullptr && path_status->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-path-entry";
    ADD_KEY_TOKEN(nexthop, "nexthop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (rpki_status.is_set || is_set(rpki_status.yfilter)) leaf_name_data.push_back(rpki_status.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (mpls_in.is_set || is_set(mpls_in.yfilter)) leaf_name_data.push_back(mpls_in.get_name_leafdata());
    if (mpls_out.is_set || is_set(mpls_out.yfilter)) leaf_name_data.push_back(mpls_out.get_name_leafdata());
    if (sr_profile_name.is_set || is_set(sr_profile_name.yfilter)) leaf_name_data.push_back(sr_profile_name.get_name_leafdata());
    if (sr_binding_sid.is_set || is_set(sr_binding_sid.yfilter)) leaf_name_data.push_back(sr_binding_sid.get_name_leafdata());
    if (sr_label_indx.is_set || is_set(sr_label_indx.yfilter)) leaf_name_data.push_back(sr_label_indx.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (atomic_aggregate.is_set || is_set(atomic_aggregate.yfilter)) leaf_name_data.push_back(atomic_aggregate.get_name_leafdata());
    if (aggr_as_number.is_set || is_set(aggr_as_number.yfilter)) leaf_name_data.push_back(aggr_as_number.get_name_leafdata());
    if (aggr_as4_number.is_set || is_set(aggr_as4_number.yfilter)) leaf_name_data.push_back(aggr_as4_number.get_name_leafdata());
    if (aggr_address.is_set || is_set(aggr_address.yfilter)) leaf_name_data.push_back(aggr_address.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (cluster_list.is_set || is_set(cluster_list.yfilter)) leaf_name_data.push_back(cluster_list.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.yfilter)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (ext_aigp_metric.is_set || is_set(ext_aigp_metric.yfilter)) leaf_name_data.push_back(ext_aigp_metric.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-status")
    {
        if(path_status == nullptr)
        {
            path_status = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus>();
        }
        return path_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_status != nullptr)
    {
        _children["path-status"] = path_status;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-status")
    {
        rpki_status = value;
        rpki_status.value_namespace = name_space;
        rpki_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-in")
    {
        mpls_in = value;
        mpls_in.value_namespace = name_space;
        mpls_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-out")
    {
        mpls_out = value;
        mpls_out.value_namespace = name_space;
        mpls_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-profile-name")
    {
        sr_profile_name = value;
        sr_profile_name.value_namespace = name_space;
        sr_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-binding-sid")
    {
        sr_binding_sid = value;
        sr_binding_sid.value_namespace = name_space;
        sr_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-label-indx")
    {
        sr_label_indx = value;
        sr_label_indx.value_namespace = name_space;
        sr_label_indx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggregate")
    {
        atomic_aggregate = value;
        atomic_aggregate.value_namespace = name_space;
        atomic_aggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-as-number")
    {
        aggr_as_number = value;
        aggr_as_number.value_namespace = name_space;
        aggr_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-as4-number")
    {
        aggr_as4_number = value;
        aggr_as4_number.value_namespace = name_space;
        aggr_as4_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-address")
    {
        aggr_address = value;
        aggr_address.value_namespace = name_space;
        aggr_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list = value;
        cluster_list.value_namespace = name_space;
        cluster_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
        extended_community.value_namespace = name_space;
        extended_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-aigp-metric")
    {
        ext_aigp_metric = value;
        ext_aigp_metric.value_namespace = name_space;
        ext_aigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "rpki-status")
    {
        rpki_status.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "mpls-in")
    {
        mpls_in.yfilter = yfilter;
    }
    if(value_path == "mpls-out")
    {
        mpls_out.yfilter = yfilter;
    }
    if(value_path == "sr-profile-name")
    {
        sr_profile_name.yfilter = yfilter;
    }
    if(value_path == "sr-binding-sid")
    {
        sr_binding_sid.yfilter = yfilter;
    }
    if(value_path == "sr-label-indx")
    {
        sr_label_indx.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggregate")
    {
        atomic_aggregate.yfilter = yfilter;
    }
    if(value_path == "aggr-as-number")
    {
        aggr_as_number.yfilter = yfilter;
    }
    if(value_path == "aggr-as4-number")
    {
        aggr_as4_number.yfilter = yfilter;
    }
    if(value_path == "aggr-address")
    {
        aggr_address.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "extended-community")
    {
        extended_community.yfilter = yfilter;
    }
    if(value_path == "ext-aigp-metric")
    {
        ext_aigp_metric.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-status" || name == "nexthop" || name == "metric" || name == "local-pref" || name == "weight" || name == "as-path" || name == "origin" || name == "rpki-status" || name == "community" || name == "mpls-in" || name == "mpls-out" || name == "sr-profile-name" || name == "sr-binding-sid" || name == "sr-label-indx" || name == "as4-path" || name == "atomic-aggregate" || name == "aggr-as-number" || name == "aggr-as4-number" || name == "aggr-address" || name == "originator-id" || name == "cluster-list" || name == "extended-community" || name == "ext-aigp-metric" || name == "path-id")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::PathStatus()
    :
    suppressed{YType::empty, "suppressed"},
    damped{YType::empty, "damped"},
    history{YType::empty, "history"},
    valid{YType::empty, "valid"},
    sourced{YType::empty, "sourced"},
    bestpath{YType::empty, "bestpath"},
    internal{YType::empty, "internal"},
    rib_fail{YType::empty, "rib-fail"},
    stale{YType::empty, "stale"},
    multipath{YType::empty, "multipath"},
    backup_path{YType::empty, "backup-path"},
    rt_filter{YType::empty, "rt-filter"},
    best_external{YType::empty, "best-external"},
    additional_path{YType::empty, "additional-path"},
    rib_compressed{YType::empty, "rib-compressed"}
{

    yang_name = "path-status"; yang_parent_name = "bgp-path-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::~PathStatus()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::has_data() const
{
    if (is_presence_container) return true;
    return suppressed.is_set
	|| damped.is_set
	|| history.is_set
	|| valid.is_set
	|| sourced.is_set
	|| bestpath.is_set
	|| internal.is_set
	|| rib_fail.is_set
	|| stale.is_set
	|| multipath.is_set
	|| backup_path.is_set
	|| rt_filter.is_set
	|| best_external.is_set
	|| additional_path.is_set
	|| rib_compressed.is_set;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(damped.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(sourced.yfilter)
	|| ydk::is_set(bestpath.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rib_fail.yfilter)
	|| ydk::is_set(stale.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(rt_filter.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(additional_path.yfilter)
	|| ydk::is_set(rib_compressed.yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (damped.is_set || is_set(damped.yfilter)) leaf_name_data.push_back(damped.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (sourced.is_set || is_set(sourced.yfilter)) leaf_name_data.push_back(sourced.get_name_leafdata());
    if (bestpath.is_set || is_set(bestpath.yfilter)) leaf_name_data.push_back(bestpath.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rib_fail.is_set || is_set(rib_fail.yfilter)) leaf_name_data.push_back(rib_fail.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.yfilter)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (rt_filter.is_set || is_set(rt_filter.yfilter)) leaf_name_data.push_back(rt_filter.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (additional_path.is_set || is_set(additional_path.yfilter)) leaf_name_data.push_back(additional_path.get_name_leafdata());
    if (rib_compressed.is_set || is_set(rib_compressed.yfilter)) leaf_name_data.push_back(rib_compressed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damped")
    {
        damped = value;
        damped.value_namespace = name_space;
        damped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourced")
    {
        sourced = value;
        sourced.value_namespace = name_space;
        sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestpath")
    {
        bestpath = value;
        bestpath.value_namespace = name_space;
        bestpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-fail")
    {
        rib_fail = value;
        rib_fail.value_namespace = name_space;
        rib_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
        backup_path.value_namespace = name_space;
        backup_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-filter")
    {
        rt_filter = value;
        rt_filter.value_namespace = name_space;
        rt_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-path")
    {
        additional_path = value;
        additional_path.value_namespace = name_space;
        additional_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed = value;
        rib_compressed.value_namespace = name_space;
        rib_compressed.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "damped")
    {
        damped.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "sourced")
    {
        sourced.yfilter = yfilter;
    }
    if(value_path == "bestpath")
    {
        bestpath.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rib-fail")
    {
        rib_fail.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "rt-filter")
    {
        rt_filter.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "additional-path")
    {
        additional_path.yfilter = yfilter;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteFilters::BgpRouteFilter::BgpRouteEntries::BgpRouteEntry::BgpPathEntries::BgpPathEntry::PathStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppressed" || name == "damped" || name == "history" || name == "valid" || name == "sourced" || name == "bestpath" || name == "internal" || name == "rib-fail" || name == "stale" || name == "multipath" || name == "backup-path" || name == "rt-filter" || name == "best-external" || name == "additional-path" || name == "rib-compressed")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbors()
    :
    bgp_route_neighbor(this, {"nbr_id"})
{

    yang_name = "bgp-route-neighbors"; yang_parent_name = "bgp-route-af"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::~BgpRouteNeighbors()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_route_neighbor.len(); index++)
    {
        if(bgp_route_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_neighbor.len(); index++)
    {
        if(bgp_route_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-neighbor")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor>();
        ent_->parent = this;
        bgp_route_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_route_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-neighbor")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpRouteNeighbor()
    :
    nbr_id{YType::str, "nbr-id"}
        ,
    bgp_neighbor_route_filters(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters>())
{
    bgp_neighbor_route_filters->parent = this;

    yang_name = "bgp-route-neighbor"; yang_parent_name = "bgp-route-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::~BgpRouteNeighbor()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return nbr_id.is_set
	|| (bgp_neighbor_route_filters !=  nullptr && bgp_neighbor_route_filters->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_id.yfilter)
	|| (bgp_neighbor_route_filters !=  nullptr && bgp_neighbor_route_filters->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-neighbor";
    ADD_KEY_TOKEN(nbr_id, "nbr-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_id.is_set || is_set(nbr_id.yfilter)) leaf_name_data.push_back(nbr_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-route-filters")
    {
        if(bgp_neighbor_route_filters == nullptr)
        {
            bgp_neighbor_route_filters = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters>();
        }
        return bgp_neighbor_route_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_neighbor_route_filters != nullptr)
    {
        _children["bgp-neighbor-route-filters"] = bgp_neighbor_route_filters;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-id")
    {
        nbr_id = value;
        nbr_id.value_namespace = name_space;
        nbr_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-id")
    {
        nbr_id.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-route-filters" || name == "nbr-id")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilters()
    :
    bgp_neighbor_route_filter(this, {"nbr_fltr"})
{

    yang_name = "bgp-neighbor-route-filters"; yang_parent_name = "bgp-route-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::~BgpNeighborRouteFilters()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_neighbor_route_filter.len(); index++)
    {
        if(bgp_neighbor_route_filter[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor_route_filter.len(); index++)
    {
        if(bgp_neighbor_route_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-route-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-route-filter")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter>();
        ent_->parent = this;
        bgp_neighbor_route_filter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_neighbor_route_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-route-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteFilter()
    :
    nbr_fltr{YType::enumeration, "nbr-fltr"}
        ,
    bgp_neighbor_route_entries(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries>())
{
    bgp_neighbor_route_entries->parent = this;

    yang_name = "bgp-neighbor-route-filter"; yang_parent_name = "bgp-neighbor-route-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::~BgpNeighborRouteFilter()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::has_data() const
{
    if (is_presence_container) return true;
    return nbr_fltr.is_set
	|| (bgp_neighbor_route_entries !=  nullptr && bgp_neighbor_route_entries->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nbr_fltr.yfilter)
	|| (bgp_neighbor_route_entries !=  nullptr && bgp_neighbor_route_entries->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-route-filter";
    ADD_KEY_TOKEN(nbr_fltr, "nbr-fltr");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbr_fltr.is_set || is_set(nbr_fltr.yfilter)) leaf_name_data.push_back(nbr_fltr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-route-entries")
    {
        if(bgp_neighbor_route_entries == nullptr)
        {
            bgp_neighbor_route_entries = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries>();
        }
        return bgp_neighbor_route_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_neighbor_route_entries != nullptr)
    {
        _children["bgp-neighbor-route-entries"] = bgp_neighbor_route_entries;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nbr-fltr")
    {
        nbr_fltr = value;
        nbr_fltr.value_namespace = name_space;
        nbr_fltr.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nbr-fltr")
    {
        nbr_fltr.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-route-entries" || name == "nbr-fltr")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntries()
    :
    bgp_neighbor_route_entry(this, {"prefix"})
{

    yang_name = "bgp-neighbor-route-entries"; yang_parent_name = "bgp-neighbor-route-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::~BgpNeighborRouteEntries()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_neighbor_route_entry.len(); index++)
    {
        if(bgp_neighbor_route_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor_route_entry.len(); index++)
    {
        if(bgp_neighbor_route_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-route-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-route-entry")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry>();
        ent_->parent = this;
        bgp_neighbor_route_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_neighbor_route_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-route-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborRouteEntry()
    :
    prefix{YType::str, "prefix"},
    version{YType::uint32, "version"},
    available_paths{YType::uint32, "available-paths"},
    advertised_to{YType::str, "advertised-to"}
        ,
    bgp_neighbor_path_entries(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries>())
{
    bgp_neighbor_path_entries->parent = this;

    yang_name = "bgp-neighbor-route-entry"; yang_parent_name = "bgp-neighbor-route-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::~BgpNeighborRouteEntry()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| version.is_set
	|| available_paths.is_set
	|| advertised_to.is_set
	|| (bgp_neighbor_path_entries !=  nullptr && bgp_neighbor_path_entries->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(available_paths.yfilter)
	|| ydk::is_set(advertised_to.yfilter)
	|| (bgp_neighbor_path_entries !=  nullptr && bgp_neighbor_path_entries->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-route-entry";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (available_paths.is_set || is_set(available_paths.yfilter)) leaf_name_data.push_back(available_paths.get_name_leafdata());
    if (advertised_to.is_set || is_set(advertised_to.yfilter)) leaf_name_data.push_back(advertised_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-path-entries")
    {
        if(bgp_neighbor_path_entries == nullptr)
        {
            bgp_neighbor_path_entries = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries>();
        }
        return bgp_neighbor_path_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_neighbor_path_entries != nullptr)
    {
        _children["bgp-neighbor-path-entries"] = bgp_neighbor_path_entries;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-paths")
    {
        available_paths = value;
        available_paths.value_namespace = name_space;
        available_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertised-to")
    {
        advertised_to = value;
        advertised_to.value_namespace = name_space;
        advertised_to.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "available-paths")
    {
        available_paths.yfilter = yfilter;
    }
    if(value_path == "advertised-to")
    {
        advertised_to.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-path-entries" || name == "prefix" || name == "version" || name == "available-paths" || name == "advertised-to")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntries()
    :
    bgp_neighbor_path_entry(this, {"nexthop"})
{

    yang_name = "bgp-neighbor-path-entries"; yang_parent_name = "bgp-neighbor-route-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::~BgpNeighborPathEntries()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_neighbor_path_entry.len(); index++)
    {
        if(bgp_neighbor_path_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_neighbor_path_entry.len(); index++)
    {
        if(bgp_neighbor_path_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-path-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-neighbor-path-entry")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry>();
        ent_->parent = this;
        bgp_neighbor_path_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_neighbor_path_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-neighbor-path-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::BgpNeighborPathEntry()
    :
    nexthop{YType::str, "nexthop"},
    metric{YType::uint32, "metric"},
    local_pref{YType::uint32, "local-pref"},
    weight{YType::uint32, "weight"},
    as_path{YType::str, "as-path"},
    origin{YType::enumeration, "origin"},
    rpki_status{YType::enumeration, "rpki-status"},
    community{YType::str, "community"},
    mpls_in{YType::str, "mpls-in"},
    mpls_out{YType::str, "mpls-out"},
    sr_profile_name{YType::str, "sr-profile-name"},
    sr_binding_sid{YType::uint32, "sr-binding-sid"},
    sr_label_indx{YType::uint32, "sr-label-indx"},
    as4_path{YType::str, "as4-path"},
    atomic_aggregate{YType::boolean, "atomic-aggregate"},
    aggr_as_number{YType::uint32, "aggr-as-number"},
    aggr_as4_number{YType::uint32, "aggr-as4-number"},
    aggr_address{YType::str, "aggr-address"},
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    extended_community{YType::str, "extended-community"},
    ext_aigp_metric{YType::uint64, "ext-aigp-metric"},
    path_id{YType::uint32, "path-id"}
        ,
    path_status(std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus>())
{
    path_status->parent = this;

    yang_name = "bgp-neighbor-path-entry"; yang_parent_name = "bgp-neighbor-path-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::~BgpNeighborPathEntry()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::has_data() const
{
    if (is_presence_container) return true;
    return nexthop.is_set
	|| metric.is_set
	|| local_pref.is_set
	|| weight.is_set
	|| as_path.is_set
	|| origin.is_set
	|| rpki_status.is_set
	|| community.is_set
	|| mpls_in.is_set
	|| mpls_out.is_set
	|| sr_profile_name.is_set
	|| sr_binding_sid.is_set
	|| sr_label_indx.is_set
	|| as4_path.is_set
	|| atomic_aggregate.is_set
	|| aggr_as_number.is_set
	|| aggr_as4_number.is_set
	|| aggr_address.is_set
	|| originator_id.is_set
	|| cluster_list.is_set
	|| extended_community.is_set
	|| ext_aigp_metric.is_set
	|| path_id.is_set
	|| (path_status !=  nullptr && path_status->has_data());
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(rpki_status.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(mpls_in.yfilter)
	|| ydk::is_set(mpls_out.yfilter)
	|| ydk::is_set(sr_profile_name.yfilter)
	|| ydk::is_set(sr_binding_sid.yfilter)
	|| ydk::is_set(sr_label_indx.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(atomic_aggregate.yfilter)
	|| ydk::is_set(aggr_as_number.yfilter)
	|| ydk::is_set(aggr_as4_number.yfilter)
	|| ydk::is_set(aggr_address.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(extended_community.yfilter)
	|| ydk::is_set(ext_aigp_metric.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| (path_status !=  nullptr && path_status->has_operation());
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-neighbor-path-entry";
    ADD_KEY_TOKEN(nexthop, "nexthop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (rpki_status.is_set || is_set(rpki_status.yfilter)) leaf_name_data.push_back(rpki_status.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (mpls_in.is_set || is_set(mpls_in.yfilter)) leaf_name_data.push_back(mpls_in.get_name_leafdata());
    if (mpls_out.is_set || is_set(mpls_out.yfilter)) leaf_name_data.push_back(mpls_out.get_name_leafdata());
    if (sr_profile_name.is_set || is_set(sr_profile_name.yfilter)) leaf_name_data.push_back(sr_profile_name.get_name_leafdata());
    if (sr_binding_sid.is_set || is_set(sr_binding_sid.yfilter)) leaf_name_data.push_back(sr_binding_sid.get_name_leafdata());
    if (sr_label_indx.is_set || is_set(sr_label_indx.yfilter)) leaf_name_data.push_back(sr_label_indx.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (atomic_aggregate.is_set || is_set(atomic_aggregate.yfilter)) leaf_name_data.push_back(atomic_aggregate.get_name_leafdata());
    if (aggr_as_number.is_set || is_set(aggr_as_number.yfilter)) leaf_name_data.push_back(aggr_as_number.get_name_leafdata());
    if (aggr_as4_number.is_set || is_set(aggr_as4_number.yfilter)) leaf_name_data.push_back(aggr_as4_number.get_name_leafdata());
    if (aggr_address.is_set || is_set(aggr_address.yfilter)) leaf_name_data.push_back(aggr_address.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (cluster_list.is_set || is_set(cluster_list.yfilter)) leaf_name_data.push_back(cluster_list.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.yfilter)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (ext_aigp_metric.is_set || is_set(ext_aigp_metric.yfilter)) leaf_name_data.push_back(ext_aigp_metric.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-status")
    {
        if(path_status == nullptr)
        {
            path_status = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus>();
        }
        return path_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_status != nullptr)
    {
        _children["path-status"] = path_status;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-status")
    {
        rpki_status = value;
        rpki_status.value_namespace = name_space;
        rpki_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-in")
    {
        mpls_in = value;
        mpls_in.value_namespace = name_space;
        mpls_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-out")
    {
        mpls_out = value;
        mpls_out.value_namespace = name_space;
        mpls_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-profile-name")
    {
        sr_profile_name = value;
        sr_profile_name.value_namespace = name_space;
        sr_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-binding-sid")
    {
        sr_binding_sid = value;
        sr_binding_sid.value_namespace = name_space;
        sr_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-label-indx")
    {
        sr_label_indx = value;
        sr_label_indx.value_namespace = name_space;
        sr_label_indx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggregate")
    {
        atomic_aggregate = value;
        atomic_aggregate.value_namespace = name_space;
        atomic_aggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-as-number")
    {
        aggr_as_number = value;
        aggr_as_number.value_namespace = name_space;
        aggr_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-as4-number")
    {
        aggr_as4_number = value;
        aggr_as4_number.value_namespace = name_space;
        aggr_as4_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-address")
    {
        aggr_address = value;
        aggr_address.value_namespace = name_space;
        aggr_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list = value;
        cluster_list.value_namespace = name_space;
        cluster_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
        extended_community.value_namespace = name_space;
        extended_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-aigp-metric")
    {
        ext_aigp_metric = value;
        ext_aigp_metric.value_namespace = name_space;
        ext_aigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "rpki-status")
    {
        rpki_status.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "mpls-in")
    {
        mpls_in.yfilter = yfilter;
    }
    if(value_path == "mpls-out")
    {
        mpls_out.yfilter = yfilter;
    }
    if(value_path == "sr-profile-name")
    {
        sr_profile_name.yfilter = yfilter;
    }
    if(value_path == "sr-binding-sid")
    {
        sr_binding_sid.yfilter = yfilter;
    }
    if(value_path == "sr-label-indx")
    {
        sr_label_indx.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggregate")
    {
        atomic_aggregate.yfilter = yfilter;
    }
    if(value_path == "aggr-as-number")
    {
        aggr_as_number.yfilter = yfilter;
    }
    if(value_path == "aggr-as4-number")
    {
        aggr_as4_number.yfilter = yfilter;
    }
    if(value_path == "aggr-address")
    {
        aggr_address.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "extended-community")
    {
        extended_community.yfilter = yfilter;
    }
    if(value_path == "ext-aigp-metric")
    {
        ext_aigp_metric.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-status" || name == "nexthop" || name == "metric" || name == "local-pref" || name == "weight" || name == "as-path" || name == "origin" || name == "rpki-status" || name == "community" || name == "mpls-in" || name == "mpls-out" || name == "sr-profile-name" || name == "sr-binding-sid" || name == "sr-label-indx" || name == "as4-path" || name == "atomic-aggregate" || name == "aggr-as-number" || name == "aggr-as4-number" || name == "aggr-address" || name == "originator-id" || name == "cluster-list" || name == "extended-community" || name == "ext-aigp-metric" || name == "path-id")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::PathStatus()
    :
    suppressed{YType::empty, "suppressed"},
    damped{YType::empty, "damped"},
    history{YType::empty, "history"},
    valid{YType::empty, "valid"},
    sourced{YType::empty, "sourced"},
    bestpath{YType::empty, "bestpath"},
    internal{YType::empty, "internal"},
    rib_fail{YType::empty, "rib-fail"},
    stale{YType::empty, "stale"},
    multipath{YType::empty, "multipath"},
    backup_path{YType::empty, "backup-path"},
    rt_filter{YType::empty, "rt-filter"},
    best_external{YType::empty, "best-external"},
    additional_path{YType::empty, "additional-path"},
    rib_compressed{YType::empty, "rib-compressed"}
{

    yang_name = "path-status"; yang_parent_name = "bgp-neighbor-path-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::~PathStatus()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::has_data() const
{
    if (is_presence_container) return true;
    return suppressed.is_set
	|| damped.is_set
	|| history.is_set
	|| valid.is_set
	|| sourced.is_set
	|| bestpath.is_set
	|| internal.is_set
	|| rib_fail.is_set
	|| stale.is_set
	|| multipath.is_set
	|| backup_path.is_set
	|| rt_filter.is_set
	|| best_external.is_set
	|| additional_path.is_set
	|| rib_compressed.is_set;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(damped.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(sourced.yfilter)
	|| ydk::is_set(bestpath.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rib_fail.yfilter)
	|| ydk::is_set(stale.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(rt_filter.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(additional_path.yfilter)
	|| ydk::is_set(rib_compressed.yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (damped.is_set || is_set(damped.yfilter)) leaf_name_data.push_back(damped.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (sourced.is_set || is_set(sourced.yfilter)) leaf_name_data.push_back(sourced.get_name_leafdata());
    if (bestpath.is_set || is_set(bestpath.yfilter)) leaf_name_data.push_back(bestpath.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rib_fail.is_set || is_set(rib_fail.yfilter)) leaf_name_data.push_back(rib_fail.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.yfilter)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (rt_filter.is_set || is_set(rt_filter.yfilter)) leaf_name_data.push_back(rt_filter.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (additional_path.is_set || is_set(additional_path.yfilter)) leaf_name_data.push_back(additional_path.get_name_leafdata());
    if (rib_compressed.is_set || is_set(rib_compressed.yfilter)) leaf_name_data.push_back(rib_compressed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damped")
    {
        damped = value;
        damped.value_namespace = name_space;
        damped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourced")
    {
        sourced = value;
        sourced.value_namespace = name_space;
        sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestpath")
    {
        bestpath = value;
        bestpath.value_namespace = name_space;
        bestpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-fail")
    {
        rib_fail = value;
        rib_fail.value_namespace = name_space;
        rib_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
        backup_path.value_namespace = name_space;
        backup_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-filter")
    {
        rt_filter = value;
        rt_filter.value_namespace = name_space;
        rt_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-path")
    {
        additional_path = value;
        additional_path.value_namespace = name_space;
        additional_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed = value;
        rib_compressed.value_namespace = name_space;
        rib_compressed.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "damped")
    {
        damped.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "sourced")
    {
        sourced.yfilter = yfilter;
    }
    if(value_path == "bestpath")
    {
        bestpath.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rib-fail")
    {
        rib_fail.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "rt-filter")
    {
        rt_filter.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "additional-path")
    {
        additional_path.yfilter = yfilter;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpRouteNeighbors::BgpRouteNeighbor::BgpNeighborRouteFilters::BgpNeighborRouteFilter::BgpNeighborRouteEntries::BgpNeighborRouteEntry::BgpNeighborPathEntries::BgpNeighborPathEntry::PathStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppressed" || name == "damped" || name == "history" || name == "valid" || name == "sourced" || name == "bestpath" || name == "internal" || name == "rib-fail" || name == "stale" || name == "multipath" || name == "backup-path" || name == "rt-filter" || name == "best-external" || name == "additional-path" || name == "rib-compressed")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroups()
    :
    bgp_peer_group(this, {"name"})
{

    yang_name = "bgp-peer-groups"; yang_parent_name = "bgp-route-af"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::~BgpPeerGroups()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_peer_group.len(); index++)
    {
        if(bgp_peer_group[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::has_operation() const
{
    for (std::size_t index=0; index<bgp_peer_group.len(); index++)
    {
        if(bgp_peer_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-peer-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-peer-group")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup>();
        ent_->parent = this;
        bgp_peer_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_peer_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-peer-group")
        return true;
    return false;
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::BgpPeerGroup()
    :
    name{YType::str, "name"},
    description{YType::str, "description"},
    remote_as{YType::uint32, "remote-as"},
    bgp_version{YType::uint16, "bgp-version"},
    min_time{YType::uint16, "min-time"},
    num_of_sessions{YType::uint32, "num-of-sessions"},
    num_estab_sessions{YType::uint32, "num-estab-sessions"},
    num_sso_sessions{YType::uint32, "num-sso-sessions"},
    peer_members{YType::str, "peer-members"},
    fmt_grp_ix{YType::uint16, "fmt-grp-ix"},
    adv_ix{YType::uint16, "adv-ix"},
    aspath_in{YType::uint32, "aspath-in"},
    aspath_out{YType::uint32, "aspath-out"},
    routemap_in{YType::str, "routemap-in"},
    routemap_out{YType::str, "routemap-out"},
    updated_messages{YType::uint64, "updated-messages"},
    rep_count{YType::uint32, "rep-count"},
    slowpeer_detection_value{YType::uint16, "slowpeer-detection-value"},
    weight{YType::uint16, "weight"},
    send_community{YType::boolean, "send-community"},
    extended_community{YType::boolean, "extended-community"},
    remove_private_as{YType::boolean, "remove-private-as"}
{

    yang_name = "bgp-peer-group"; yang_parent_name = "bgp-peer-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::~BgpPeerGroup()
{
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : peer_members.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return name.is_set
	|| description.is_set
	|| remote_as.is_set
	|| bgp_version.is_set
	|| min_time.is_set
	|| num_of_sessions.is_set
	|| num_estab_sessions.is_set
	|| num_sso_sessions.is_set
	|| fmt_grp_ix.is_set
	|| adv_ix.is_set
	|| aspath_in.is_set
	|| aspath_out.is_set
	|| routemap_in.is_set
	|| routemap_out.is_set
	|| updated_messages.is_set
	|| rep_count.is_set
	|| slowpeer_detection_value.is_set
	|| weight.is_set
	|| send_community.is_set
	|| extended_community.is_set
	|| remove_private_as.is_set;
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::has_operation() const
{
    for (auto const & leaf : peer_members.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(remote_as.yfilter)
	|| ydk::is_set(bgp_version.yfilter)
	|| ydk::is_set(min_time.yfilter)
	|| ydk::is_set(num_of_sessions.yfilter)
	|| ydk::is_set(num_estab_sessions.yfilter)
	|| ydk::is_set(num_sso_sessions.yfilter)
	|| ydk::is_set(peer_members.yfilter)
	|| ydk::is_set(fmt_grp_ix.yfilter)
	|| ydk::is_set(adv_ix.yfilter)
	|| ydk::is_set(aspath_in.yfilter)
	|| ydk::is_set(aspath_out.yfilter)
	|| ydk::is_set(routemap_in.yfilter)
	|| ydk::is_set(routemap_out.yfilter)
	|| ydk::is_set(updated_messages.yfilter)
	|| ydk::is_set(rep_count.yfilter)
	|| ydk::is_set(slowpeer_detection_value.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(send_community.yfilter)
	|| ydk::is_set(extended_community.yfilter)
	|| ydk::is_set(remove_private_as.yfilter);
}

std::string BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-peer-group";
    ADD_KEY_TOKEN(name, "name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (remote_as.is_set || is_set(remote_as.yfilter)) leaf_name_data.push_back(remote_as.get_name_leafdata());
    if (bgp_version.is_set || is_set(bgp_version.yfilter)) leaf_name_data.push_back(bgp_version.get_name_leafdata());
    if (min_time.is_set || is_set(min_time.yfilter)) leaf_name_data.push_back(min_time.get_name_leafdata());
    if (num_of_sessions.is_set || is_set(num_of_sessions.yfilter)) leaf_name_data.push_back(num_of_sessions.get_name_leafdata());
    if (num_estab_sessions.is_set || is_set(num_estab_sessions.yfilter)) leaf_name_data.push_back(num_estab_sessions.get_name_leafdata());
    if (num_sso_sessions.is_set || is_set(num_sso_sessions.yfilter)) leaf_name_data.push_back(num_sso_sessions.get_name_leafdata());
    if (fmt_grp_ix.is_set || is_set(fmt_grp_ix.yfilter)) leaf_name_data.push_back(fmt_grp_ix.get_name_leafdata());
    if (adv_ix.is_set || is_set(adv_ix.yfilter)) leaf_name_data.push_back(adv_ix.get_name_leafdata());
    if (aspath_in.is_set || is_set(aspath_in.yfilter)) leaf_name_data.push_back(aspath_in.get_name_leafdata());
    if (aspath_out.is_set || is_set(aspath_out.yfilter)) leaf_name_data.push_back(aspath_out.get_name_leafdata());
    if (routemap_in.is_set || is_set(routemap_in.yfilter)) leaf_name_data.push_back(routemap_in.get_name_leafdata());
    if (routemap_out.is_set || is_set(routemap_out.yfilter)) leaf_name_data.push_back(routemap_out.get_name_leafdata());
    if (updated_messages.is_set || is_set(updated_messages.yfilter)) leaf_name_data.push_back(updated_messages.get_name_leafdata());
    if (rep_count.is_set || is_set(rep_count.yfilter)) leaf_name_data.push_back(rep_count.get_name_leafdata());
    if (slowpeer_detection_value.is_set || is_set(slowpeer_detection_value.yfilter)) leaf_name_data.push_back(slowpeer_detection_value.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (send_community.is_set || is_set(send_community.yfilter)) leaf_name_data.push_back(send_community.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.yfilter)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (remove_private_as.is_set || is_set(remove_private_as.yfilter)) leaf_name_data.push_back(remove_private_as.get_name_leafdata());

    auto peer_members_name_datas = peer_members.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), peer_members_name_datas.begin(), peer_members_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
    if(value_path == "remote-as")
    {
        remote_as = value;
        remote_as.value_namespace = name_space;
        remote_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-version")
    {
        bgp_version = value;
        bgp_version.value_namespace = name_space;
        bgp_version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-time")
    {
        min_time = value;
        min_time.value_namespace = name_space;
        min_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-of-sessions")
    {
        num_of_sessions = value;
        num_of_sessions.value_namespace = name_space;
        num_of_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-estab-sessions")
    {
        num_estab_sessions = value;
        num_estab_sessions.value_namespace = name_space;
        num_estab_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-sso-sessions")
    {
        num_sso_sessions = value;
        num_sso_sessions.value_namespace = name_space;
        num_sso_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-members")
    {
        peer_members.append(value);
    }
    if(value_path == "fmt-grp-ix")
    {
        fmt_grp_ix = value;
        fmt_grp_ix.value_namespace = name_space;
        fmt_grp_ix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "adv-ix")
    {
        adv_ix = value;
        adv_ix.value_namespace = name_space;
        adv_ix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aspath-in")
    {
        aspath_in = value;
        aspath_in.value_namespace = name_space;
        aspath_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aspath-out")
    {
        aspath_out = value;
        aspath_out.value_namespace = name_space;
        aspath_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routemap-in")
    {
        routemap_in = value;
        routemap_in.value_namespace = name_space;
        routemap_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routemap-out")
    {
        routemap_out = value;
        routemap_out.value_namespace = name_space;
        routemap_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "updated-messages")
    {
        updated_messages = value;
        updated_messages.value_namespace = name_space;
        updated_messages.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rep-count")
    {
        rep_count = value;
        rep_count.value_namespace = name_space;
        rep_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slowpeer-detection-value")
    {
        slowpeer_detection_value = value;
        slowpeer_detection_value.value_namespace = name_space;
        slowpeer_detection_value.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-community")
    {
        send_community = value;
        send_community.value_namespace = name_space;
        send_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
        extended_community.value_namespace = name_space;
        extended_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as = value;
        remove_private_as.value_namespace = name_space;
        remove_private_as.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "remote-as")
    {
        remote_as.yfilter = yfilter;
    }
    if(value_path == "bgp-version")
    {
        bgp_version.yfilter = yfilter;
    }
    if(value_path == "min-time")
    {
        min_time.yfilter = yfilter;
    }
    if(value_path == "num-of-sessions")
    {
        num_of_sessions.yfilter = yfilter;
    }
    if(value_path == "num-estab-sessions")
    {
        num_estab_sessions.yfilter = yfilter;
    }
    if(value_path == "num-sso-sessions")
    {
        num_sso_sessions.yfilter = yfilter;
    }
    if(value_path == "peer-members")
    {
        peer_members.yfilter = yfilter;
    }
    if(value_path == "fmt-grp-ix")
    {
        fmt_grp_ix.yfilter = yfilter;
    }
    if(value_path == "adv-ix")
    {
        adv_ix.yfilter = yfilter;
    }
    if(value_path == "aspath-in")
    {
        aspath_in.yfilter = yfilter;
    }
    if(value_path == "aspath-out")
    {
        aspath_out.yfilter = yfilter;
    }
    if(value_path == "routemap-in")
    {
        routemap_in.yfilter = yfilter;
    }
    if(value_path == "routemap-out")
    {
        routemap_out.yfilter = yfilter;
    }
    if(value_path == "updated-messages")
    {
        updated_messages.yfilter = yfilter;
    }
    if(value_path == "rep-count")
    {
        rep_count.yfilter = yfilter;
    }
    if(value_path == "slowpeer-detection-value")
    {
        slowpeer_detection_value.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "send-community")
    {
        send_community.yfilter = yfilter;
    }
    if(value_path == "extended-community")
    {
        extended_community.yfilter = yfilter;
    }
    if(value_path == "remove-private-as")
    {
        remove_private_as.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteVrfs::BgpRouteVrf::BgpRouteAfs::BgpRouteAf::BgpPeerGroups::BgpPeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "name" || name == "description" || name == "remote-as" || name == "bgp-version" || name == "min-time" || name == "num-of-sessions" || name == "num-estab-sessions" || name == "num-sso-sessions" || name == "peer-members" || name == "fmt-grp-ix" || name == "adv-ix" || name == "aspath-in" || name == "aspath-out" || name == "routemap-in" || name == "routemap-out" || name == "updated-messages" || name == "rep-count" || name == "slowpeer-detection-value" || name == "weight" || name == "send-community" || name == "extended-community" || name == "remove-private-as")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRds()
    :
    bgp_route_rd(this, {"rd_value"})
{

    yang_name = "bgp-route-rds"; yang_parent_name = "bgp-state-data"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpStateData::BgpRouteRds::~BgpRouteRds()
{
}

bool BgpStateData::BgpRouteRds::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_route_rd.len(); index++)
    {
        if(bgp_route_rd[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::has_operation() const
{
    for (std::size_t index=0; index<bgp_route_rd.len(); index++)
    {
        if(bgp_route_rd[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::BgpRouteRds::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-rds";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-route-rd")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd>();
        ent_->parent = this;
        bgp_route_rd.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_route_rd.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-route-rd")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRouteRd()
    :
    rd_value{YType::str, "rd-value"}
        ,
    bgp_rd_route_afs(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs>())
{
    bgp_rd_route_afs->parent = this;

    yang_name = "bgp-route-rd"; yang_parent_name = "bgp-route-rds"; is_top_level_class = false; has_list_ancestor = false; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::~BgpRouteRd()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::has_data() const
{
    if (is_presence_container) return true;
    return rd_value.is_set
	|| (bgp_rd_route_afs !=  nullptr && bgp_rd_route_afs->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd_value.yfilter)
	|| (bgp_rd_route_afs !=  nullptr && bgp_rd_route_afs->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-bgp-oper:bgp-state-data/bgp-route-rds/" << get_segment_path();
    return path_buffer.str();
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-route-rd";
    ADD_KEY_TOKEN(rd_value, "rd-value");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd_value.is_set || is_set(rd_value.yfilter)) leaf_name_data.push_back(rd_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-route-afs")
    {
        if(bgp_rd_route_afs == nullptr)
        {
            bgp_rd_route_afs = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs>();
        }
        return bgp_rd_route_afs;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_rd_route_afs != nullptr)
    {
        _children["bgp-rd-route-afs"] = bgp_rd_route_afs;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd-value")
    {
        rd_value = value;
        rd_value.value_namespace = name_space;
        rd_value.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd-value")
    {
        rd_value.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-route-afs" || name == "rd-value")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAfs()
    :
    bgp_rd_route_af(this, {"afi_safi"})
{

    yang_name = "bgp-rd-route-afs"; yang_parent_name = "bgp-route-rd"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::~BgpRdRouteAfs()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_rd_route_af.len(); index++)
    {
        if(bgp_rd_route_af[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::has_operation() const
{
    for (std::size_t index=0; index<bgp_rd_route_af.len(); index++)
    {
        if(bgp_rd_route_af[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-route-afs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-route-af")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf>();
        ent_->parent = this;
        bgp_rd_route_af.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_rd_route_af.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-route-af")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteAf()
    :
    afi_safi{YType::enumeration, "afi-safi"}
        ,
    bgp_rd_route_filters(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters>())
    , bgp_rd_route_neighbors(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors>())
{
    bgp_rd_route_filters->parent = this;
    bgp_rd_route_neighbors->parent = this;

    yang_name = "bgp-rd-route-af"; yang_parent_name = "bgp-rd-route-afs"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::~BgpRdRouteAf()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::has_data() const
{
    if (is_presence_container) return true;
    return afi_safi.is_set
	|| (bgp_rd_route_filters !=  nullptr && bgp_rd_route_filters->has_data())
	|| (bgp_rd_route_neighbors !=  nullptr && bgp_rd_route_neighbors->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(afi_safi.yfilter)
	|| (bgp_rd_route_filters !=  nullptr && bgp_rd_route_filters->has_operation())
	|| (bgp_rd_route_neighbors !=  nullptr && bgp_rd_route_neighbors->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-route-af";
    ADD_KEY_TOKEN(afi_safi, "afi-safi");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (afi_safi.is_set || is_set(afi_safi.yfilter)) leaf_name_data.push_back(afi_safi.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-route-filters")
    {
        if(bgp_rd_route_filters == nullptr)
        {
            bgp_rd_route_filters = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters>();
        }
        return bgp_rd_route_filters;
    }

    if(child_yang_name == "bgp-rd-route-neighbors")
    {
        if(bgp_rd_route_neighbors == nullptr)
        {
            bgp_rd_route_neighbors = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors>();
        }
        return bgp_rd_route_neighbors;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_rd_route_filters != nullptr)
    {
        _children["bgp-rd-route-filters"] = bgp_rd_route_filters;
    }

    if(bgp_rd_route_neighbors != nullptr)
    {
        _children["bgp-rd-route-neighbors"] = bgp_rd_route_neighbors;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "afi-safi")
    {
        afi_safi = value;
        afi_safi.value_namespace = name_space;
        afi_safi.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "afi-safi")
    {
        afi_safi.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-route-filters" || name == "bgp-rd-route-neighbors" || name == "afi-safi")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilters()
    :
    bgp_rd_route_filter(this, {"route_filter"})
{

    yang_name = "bgp-rd-route-filters"; yang_parent_name = "bgp-rd-route-af"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::~BgpRdRouteFilters()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_rd_route_filter.len(); index++)
    {
        if(bgp_rd_route_filter[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::has_operation() const
{
    for (std::size_t index=0; index<bgp_rd_route_filter.len(); index++)
    {
        if(bgp_rd_route_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-route-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-route-filter")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter>();
        ent_->parent = this;
        bgp_rd_route_filter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_rd_route_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-route-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteFilter()
    :
    route_filter{YType::enumeration, "route-filter"}
        ,
    bgp_rd_route_entries(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries>())
{
    bgp_rd_route_entries->parent = this;

    yang_name = "bgp-rd-route-filter"; yang_parent_name = "bgp-rd-route-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::~BgpRdRouteFilter()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::has_data() const
{
    if (is_presence_container) return true;
    return route_filter.is_set
	|| (bgp_rd_route_entries !=  nullptr && bgp_rd_route_entries->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_filter.yfilter)
	|| (bgp_rd_route_entries !=  nullptr && bgp_rd_route_entries->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-route-filter";
    ADD_KEY_TOKEN(route_filter, "route-filter");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_filter.is_set || is_set(route_filter.yfilter)) leaf_name_data.push_back(route_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-route-entries")
    {
        if(bgp_rd_route_entries == nullptr)
        {
            bgp_rd_route_entries = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries>();
        }
        return bgp_rd_route_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_rd_route_entries != nullptr)
    {
        _children["bgp-rd-route-entries"] = bgp_rd_route_entries;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-filter")
    {
        route_filter = value;
        route_filter.value_namespace = name_space;
        route_filter.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-filter")
    {
        route_filter.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-route-entries" || name == "route-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntries()
    :
    bgp_rd_route_entry(this, {"prefix"})
{

    yang_name = "bgp-rd-route-entries"; yang_parent_name = "bgp-rd-route-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::~BgpRdRouteEntries()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_rd_route_entry.len(); index++)
    {
        if(bgp_rd_route_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_rd_route_entry.len(); index++)
    {
        if(bgp_rd_route_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-route-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-route-entry")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry>();
        ent_->parent = this;
        bgp_rd_route_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_rd_route_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-route-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdRouteEntry()
    :
    prefix{YType::str, "prefix"},
    version{YType::uint32, "version"},
    available_paths{YType::uint32, "available-paths"},
    advertised_to{YType::str, "advertised-to"}
        ,
    bgp_rd_path_entries(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries>())
{
    bgp_rd_path_entries->parent = this;

    yang_name = "bgp-rd-route-entry"; yang_parent_name = "bgp-rd-route-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::~BgpRdRouteEntry()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| version.is_set
	|| available_paths.is_set
	|| advertised_to.is_set
	|| (bgp_rd_path_entries !=  nullptr && bgp_rd_path_entries->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(available_paths.yfilter)
	|| ydk::is_set(advertised_to.yfilter)
	|| (bgp_rd_path_entries !=  nullptr && bgp_rd_path_entries->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-route-entry";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (available_paths.is_set || is_set(available_paths.yfilter)) leaf_name_data.push_back(available_paths.get_name_leafdata());
    if (advertised_to.is_set || is_set(advertised_to.yfilter)) leaf_name_data.push_back(advertised_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-path-entries")
    {
        if(bgp_rd_path_entries == nullptr)
        {
            bgp_rd_path_entries = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries>();
        }
        return bgp_rd_path_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_rd_path_entries != nullptr)
    {
        _children["bgp-rd-path-entries"] = bgp_rd_path_entries;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-paths")
    {
        available_paths = value;
        available_paths.value_namespace = name_space;
        available_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertised-to")
    {
        advertised_to = value;
        advertised_to.value_namespace = name_space;
        advertised_to.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "available-paths")
    {
        available_paths.yfilter = yfilter;
    }
    if(value_path == "advertised-to")
    {
        advertised_to.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-path-entries" || name == "prefix" || name == "version" || name == "available-paths" || name == "advertised-to")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntries()
    :
    bgp_rd_path_entry(this, {"nexthop"})
{

    yang_name = "bgp-rd-path-entries"; yang_parent_name = "bgp-rd-route-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::~BgpRdPathEntries()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_rd_path_entry.len(); index++)
    {
        if(bgp_rd_path_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_rd_path_entry.len(); index++)
    {
        if(bgp_rd_path_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-path-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-path-entry")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry>();
        ent_->parent = this;
        bgp_rd_path_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_rd_path_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-path-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::BgpRdPathEntry()
    :
    nexthop{YType::str, "nexthop"},
    metric{YType::uint32, "metric"},
    local_pref{YType::uint32, "local-pref"},
    weight{YType::uint32, "weight"},
    as_path{YType::str, "as-path"},
    origin{YType::enumeration, "origin"},
    rpki_status{YType::enumeration, "rpki-status"},
    community{YType::str, "community"},
    mpls_in{YType::str, "mpls-in"},
    mpls_out{YType::str, "mpls-out"},
    sr_profile_name{YType::str, "sr-profile-name"},
    sr_binding_sid{YType::uint32, "sr-binding-sid"},
    sr_label_indx{YType::uint32, "sr-label-indx"},
    as4_path{YType::str, "as4-path"},
    atomic_aggregate{YType::boolean, "atomic-aggregate"},
    aggr_as_number{YType::uint32, "aggr-as-number"},
    aggr_as4_number{YType::uint32, "aggr-as4-number"},
    aggr_address{YType::str, "aggr-address"},
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    extended_community{YType::str, "extended-community"},
    ext_aigp_metric{YType::uint64, "ext-aigp-metric"},
    path_id{YType::uint32, "path-id"}
        ,
    path_status(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus>())
{
    path_status->parent = this;

    yang_name = "bgp-rd-path-entry"; yang_parent_name = "bgp-rd-path-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::~BgpRdPathEntry()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::has_data() const
{
    if (is_presence_container) return true;
    return nexthop.is_set
	|| metric.is_set
	|| local_pref.is_set
	|| weight.is_set
	|| as_path.is_set
	|| origin.is_set
	|| rpki_status.is_set
	|| community.is_set
	|| mpls_in.is_set
	|| mpls_out.is_set
	|| sr_profile_name.is_set
	|| sr_binding_sid.is_set
	|| sr_label_indx.is_set
	|| as4_path.is_set
	|| atomic_aggregate.is_set
	|| aggr_as_number.is_set
	|| aggr_as4_number.is_set
	|| aggr_address.is_set
	|| originator_id.is_set
	|| cluster_list.is_set
	|| extended_community.is_set
	|| ext_aigp_metric.is_set
	|| path_id.is_set
	|| (path_status !=  nullptr && path_status->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(rpki_status.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(mpls_in.yfilter)
	|| ydk::is_set(mpls_out.yfilter)
	|| ydk::is_set(sr_profile_name.yfilter)
	|| ydk::is_set(sr_binding_sid.yfilter)
	|| ydk::is_set(sr_label_indx.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(atomic_aggregate.yfilter)
	|| ydk::is_set(aggr_as_number.yfilter)
	|| ydk::is_set(aggr_as4_number.yfilter)
	|| ydk::is_set(aggr_address.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(extended_community.yfilter)
	|| ydk::is_set(ext_aigp_metric.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| (path_status !=  nullptr && path_status->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-path-entry";
    ADD_KEY_TOKEN(nexthop, "nexthop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (rpki_status.is_set || is_set(rpki_status.yfilter)) leaf_name_data.push_back(rpki_status.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (mpls_in.is_set || is_set(mpls_in.yfilter)) leaf_name_data.push_back(mpls_in.get_name_leafdata());
    if (mpls_out.is_set || is_set(mpls_out.yfilter)) leaf_name_data.push_back(mpls_out.get_name_leafdata());
    if (sr_profile_name.is_set || is_set(sr_profile_name.yfilter)) leaf_name_data.push_back(sr_profile_name.get_name_leafdata());
    if (sr_binding_sid.is_set || is_set(sr_binding_sid.yfilter)) leaf_name_data.push_back(sr_binding_sid.get_name_leafdata());
    if (sr_label_indx.is_set || is_set(sr_label_indx.yfilter)) leaf_name_data.push_back(sr_label_indx.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (atomic_aggregate.is_set || is_set(atomic_aggregate.yfilter)) leaf_name_data.push_back(atomic_aggregate.get_name_leafdata());
    if (aggr_as_number.is_set || is_set(aggr_as_number.yfilter)) leaf_name_data.push_back(aggr_as_number.get_name_leafdata());
    if (aggr_as4_number.is_set || is_set(aggr_as4_number.yfilter)) leaf_name_data.push_back(aggr_as4_number.get_name_leafdata());
    if (aggr_address.is_set || is_set(aggr_address.yfilter)) leaf_name_data.push_back(aggr_address.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (cluster_list.is_set || is_set(cluster_list.yfilter)) leaf_name_data.push_back(cluster_list.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.yfilter)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (ext_aigp_metric.is_set || is_set(ext_aigp_metric.yfilter)) leaf_name_data.push_back(ext_aigp_metric.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-status")
    {
        if(path_status == nullptr)
        {
            path_status = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus>();
        }
        return path_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_status != nullptr)
    {
        _children["path-status"] = path_status;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-status")
    {
        rpki_status = value;
        rpki_status.value_namespace = name_space;
        rpki_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-in")
    {
        mpls_in = value;
        mpls_in.value_namespace = name_space;
        mpls_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-out")
    {
        mpls_out = value;
        mpls_out.value_namespace = name_space;
        mpls_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-profile-name")
    {
        sr_profile_name = value;
        sr_profile_name.value_namespace = name_space;
        sr_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-binding-sid")
    {
        sr_binding_sid = value;
        sr_binding_sid.value_namespace = name_space;
        sr_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-label-indx")
    {
        sr_label_indx = value;
        sr_label_indx.value_namespace = name_space;
        sr_label_indx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggregate")
    {
        atomic_aggregate = value;
        atomic_aggregate.value_namespace = name_space;
        atomic_aggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-as-number")
    {
        aggr_as_number = value;
        aggr_as_number.value_namespace = name_space;
        aggr_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-as4-number")
    {
        aggr_as4_number = value;
        aggr_as4_number.value_namespace = name_space;
        aggr_as4_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-address")
    {
        aggr_address = value;
        aggr_address.value_namespace = name_space;
        aggr_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list = value;
        cluster_list.value_namespace = name_space;
        cluster_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
        extended_community.value_namespace = name_space;
        extended_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-aigp-metric")
    {
        ext_aigp_metric = value;
        ext_aigp_metric.value_namespace = name_space;
        ext_aigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "rpki-status")
    {
        rpki_status.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "mpls-in")
    {
        mpls_in.yfilter = yfilter;
    }
    if(value_path == "mpls-out")
    {
        mpls_out.yfilter = yfilter;
    }
    if(value_path == "sr-profile-name")
    {
        sr_profile_name.yfilter = yfilter;
    }
    if(value_path == "sr-binding-sid")
    {
        sr_binding_sid.yfilter = yfilter;
    }
    if(value_path == "sr-label-indx")
    {
        sr_label_indx.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggregate")
    {
        atomic_aggregate.yfilter = yfilter;
    }
    if(value_path == "aggr-as-number")
    {
        aggr_as_number.yfilter = yfilter;
    }
    if(value_path == "aggr-as4-number")
    {
        aggr_as4_number.yfilter = yfilter;
    }
    if(value_path == "aggr-address")
    {
        aggr_address.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "extended-community")
    {
        extended_community.yfilter = yfilter;
    }
    if(value_path == "ext-aigp-metric")
    {
        ext_aigp_metric.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-status" || name == "nexthop" || name == "metric" || name == "local-pref" || name == "weight" || name == "as-path" || name == "origin" || name == "rpki-status" || name == "community" || name == "mpls-in" || name == "mpls-out" || name == "sr-profile-name" || name == "sr-binding-sid" || name == "sr-label-indx" || name == "as4-path" || name == "atomic-aggregate" || name == "aggr-as-number" || name == "aggr-as4-number" || name == "aggr-address" || name == "originator-id" || name == "cluster-list" || name == "extended-community" || name == "ext-aigp-metric" || name == "path-id")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::PathStatus()
    :
    suppressed{YType::empty, "suppressed"},
    damped{YType::empty, "damped"},
    history{YType::empty, "history"},
    valid{YType::empty, "valid"},
    sourced{YType::empty, "sourced"},
    bestpath{YType::empty, "bestpath"},
    internal{YType::empty, "internal"},
    rib_fail{YType::empty, "rib-fail"},
    stale{YType::empty, "stale"},
    multipath{YType::empty, "multipath"},
    backup_path{YType::empty, "backup-path"},
    rt_filter{YType::empty, "rt-filter"},
    best_external{YType::empty, "best-external"},
    additional_path{YType::empty, "additional-path"},
    rib_compressed{YType::empty, "rib-compressed"}
{

    yang_name = "path-status"; yang_parent_name = "bgp-rd-path-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::~PathStatus()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::has_data() const
{
    if (is_presence_container) return true;
    return suppressed.is_set
	|| damped.is_set
	|| history.is_set
	|| valid.is_set
	|| sourced.is_set
	|| bestpath.is_set
	|| internal.is_set
	|| rib_fail.is_set
	|| stale.is_set
	|| multipath.is_set
	|| backup_path.is_set
	|| rt_filter.is_set
	|| best_external.is_set
	|| additional_path.is_set
	|| rib_compressed.is_set;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(damped.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(sourced.yfilter)
	|| ydk::is_set(bestpath.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rib_fail.yfilter)
	|| ydk::is_set(stale.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(rt_filter.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(additional_path.yfilter)
	|| ydk::is_set(rib_compressed.yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (damped.is_set || is_set(damped.yfilter)) leaf_name_data.push_back(damped.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (sourced.is_set || is_set(sourced.yfilter)) leaf_name_data.push_back(sourced.get_name_leafdata());
    if (bestpath.is_set || is_set(bestpath.yfilter)) leaf_name_data.push_back(bestpath.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rib_fail.is_set || is_set(rib_fail.yfilter)) leaf_name_data.push_back(rib_fail.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.yfilter)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (rt_filter.is_set || is_set(rt_filter.yfilter)) leaf_name_data.push_back(rt_filter.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (additional_path.is_set || is_set(additional_path.yfilter)) leaf_name_data.push_back(additional_path.get_name_leafdata());
    if (rib_compressed.is_set || is_set(rib_compressed.yfilter)) leaf_name_data.push_back(rib_compressed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damped")
    {
        damped = value;
        damped.value_namespace = name_space;
        damped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourced")
    {
        sourced = value;
        sourced.value_namespace = name_space;
        sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestpath")
    {
        bestpath = value;
        bestpath.value_namespace = name_space;
        bestpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-fail")
    {
        rib_fail = value;
        rib_fail.value_namespace = name_space;
        rib_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
        backup_path.value_namespace = name_space;
        backup_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-filter")
    {
        rt_filter = value;
        rt_filter.value_namespace = name_space;
        rt_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-path")
    {
        additional_path = value;
        additional_path.value_namespace = name_space;
        additional_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed = value;
        rib_compressed.value_namespace = name_space;
        rib_compressed.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "damped")
    {
        damped.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "sourced")
    {
        sourced.yfilter = yfilter;
    }
    if(value_path == "bestpath")
    {
        bestpath.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rib-fail")
    {
        rib_fail.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "rt-filter")
    {
        rt_filter.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "additional-path")
    {
        additional_path.yfilter = yfilter;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteFilters::BgpRdRouteFilter::BgpRdRouteEntries::BgpRdRouteEntry::BgpRdPathEntries::BgpRdPathEntry::PathStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppressed" || name == "damped" || name == "history" || name == "valid" || name == "sourced" || name == "bestpath" || name == "internal" || name == "rib-fail" || name == "stale" || name == "multipath" || name == "backup-path" || name == "rt-filter" || name == "best-external" || name == "additional-path" || name == "rib-compressed")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbors()
    :
    bgp_rd_route_neighbor(this, {"neighbor_id"})
{

    yang_name = "bgp-rd-route-neighbors"; yang_parent_name = "bgp-rd-route-af"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::~BgpRdRouteNeighbors()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_rd_route_neighbor.len(); index++)
    {
        if(bgp_rd_route_neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::has_operation() const
{
    for (std::size_t index=0; index<bgp_rd_route_neighbor.len(); index++)
    {
        if(bgp_rd_route_neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-route-neighbors";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-route-neighbor")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor>();
        ent_->parent = this;
        bgp_rd_route_neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_rd_route_neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-route-neighbor")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdRouteNeighbor()
    :
    neighbor_id{YType::str, "neighbor-id"}
        ,
    bgp_rd_neighbor_route_filters(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters>())
{
    bgp_rd_neighbor_route_filters->parent = this;

    yang_name = "bgp-rd-route-neighbor"; yang_parent_name = "bgp-rd-route-neighbors"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::~BgpRdRouteNeighbor()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_id.is_set
	|| (bgp_rd_neighbor_route_filters !=  nullptr && bgp_rd_neighbor_route_filters->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_id.yfilter)
	|| (bgp_rd_neighbor_route_filters !=  nullptr && bgp_rd_neighbor_route_filters->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-route-neighbor";
    ADD_KEY_TOKEN(neighbor_id, "neighbor-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_id.is_set || is_set(neighbor_id.yfilter)) leaf_name_data.push_back(neighbor_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-neighbor-route-filters")
    {
        if(bgp_rd_neighbor_route_filters == nullptr)
        {
            bgp_rd_neighbor_route_filters = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters>();
        }
        return bgp_rd_neighbor_route_filters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_rd_neighbor_route_filters != nullptr)
    {
        _children["bgp-rd-neighbor-route-filters"] = bgp_rd_neighbor_route_filters;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id = value;
        neighbor_id.value_namespace = name_space;
        neighbor_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-id")
    {
        neighbor_id.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-neighbor-route-filters" || name == "neighbor-id")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilters()
    :
    bgp_rd_neighbor_route_filter(this, {"neighbor_filter"})
{

    yang_name = "bgp-rd-neighbor-route-filters"; yang_parent_name = "bgp-rd-route-neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::~BgpRdNeighborRouteFilters()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_rd_neighbor_route_filter.len(); index++)
    {
        if(bgp_rd_neighbor_route_filter[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::has_operation() const
{
    for (std::size_t index=0; index<bgp_rd_neighbor_route_filter.len(); index++)
    {
        if(bgp_rd_neighbor_route_filter[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-neighbor-route-filters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-neighbor-route-filter")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter>();
        ent_->parent = this;
        bgp_rd_neighbor_route_filter.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_rd_neighbor_route_filter.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-neighbor-route-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteFilter()
    :
    neighbor_filter{YType::enumeration, "neighbor-filter"}
        ,
    bgp_rd_neighbor_route_entries(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries>())
{
    bgp_rd_neighbor_route_entries->parent = this;

    yang_name = "bgp-rd-neighbor-route-filter"; yang_parent_name = "bgp-rd-neighbor-route-filters"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::~BgpRdNeighborRouteFilter()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::has_data() const
{
    if (is_presence_container) return true;
    return neighbor_filter.is_set
	|| (bgp_rd_neighbor_route_entries !=  nullptr && bgp_rd_neighbor_route_entries->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(neighbor_filter.yfilter)
	|| (bgp_rd_neighbor_route_entries !=  nullptr && bgp_rd_neighbor_route_entries->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-neighbor-route-filter";
    ADD_KEY_TOKEN(neighbor_filter, "neighbor-filter");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (neighbor_filter.is_set || is_set(neighbor_filter.yfilter)) leaf_name_data.push_back(neighbor_filter.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-neighbor-route-entries")
    {
        if(bgp_rd_neighbor_route_entries == nullptr)
        {
            bgp_rd_neighbor_route_entries = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries>();
        }
        return bgp_rd_neighbor_route_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_rd_neighbor_route_entries != nullptr)
    {
        _children["bgp-rd-neighbor-route-entries"] = bgp_rd_neighbor_route_entries;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "neighbor-filter")
    {
        neighbor_filter = value;
        neighbor_filter.value_namespace = name_space;
        neighbor_filter.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "neighbor-filter")
    {
        neighbor_filter.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-neighbor-route-entries" || name == "neighbor-filter")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntries()
    :
    bgp_rd_neighbor_route_entry(this, {"prefix"})
{

    yang_name = "bgp-rd-neighbor-route-entries"; yang_parent_name = "bgp-rd-neighbor-route-filter"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::~BgpRdNeighborRouteEntries()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_rd_neighbor_route_entry.len(); index++)
    {
        if(bgp_rd_neighbor_route_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_rd_neighbor_route_entry.len(); index++)
    {
        if(bgp_rd_neighbor_route_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-neighbor-route-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-neighbor-route-entry")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry>();
        ent_->parent = this;
        bgp_rd_neighbor_route_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_rd_neighbor_route_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-neighbor-route-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborRouteEntry()
    :
    prefix{YType::str, "prefix"},
    version{YType::uint32, "version"},
    available_paths{YType::uint32, "available-paths"},
    advertised_to{YType::str, "advertised-to"}
        ,
    bgp_rd_neighbor_path_entries(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries>())
{
    bgp_rd_neighbor_path_entries->parent = this;

    yang_name = "bgp-rd-neighbor-route-entry"; yang_parent_name = "bgp-rd-neighbor-route-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::~BgpRdNeighborRouteEntry()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::has_data() const
{
    if (is_presence_container) return true;
    return prefix.is_set
	|| version.is_set
	|| available_paths.is_set
	|| advertised_to.is_set
	|| (bgp_rd_neighbor_path_entries !=  nullptr && bgp_rd_neighbor_path_entries->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(prefix.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(available_paths.yfilter)
	|| ydk::is_set(advertised_to.yfilter)
	|| (bgp_rd_neighbor_path_entries !=  nullptr && bgp_rd_neighbor_path_entries->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-neighbor-route-entry";
    ADD_KEY_TOKEN(prefix, "prefix");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (available_paths.is_set || is_set(available_paths.yfilter)) leaf_name_data.push_back(available_paths.get_name_leafdata());
    if (advertised_to.is_set || is_set(advertised_to.yfilter)) leaf_name_data.push_back(advertised_to.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-neighbor-path-entries")
    {
        if(bgp_rd_neighbor_path_entries == nullptr)
        {
            bgp_rd_neighbor_path_entries = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries>();
        }
        return bgp_rd_neighbor_path_entries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_rd_neighbor_path_entries != nullptr)
    {
        _children["bgp-rd-neighbor-path-entries"] = bgp_rd_neighbor_path_entries;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-paths")
    {
        available_paths = value;
        available_paths.value_namespace = name_space;
        available_paths.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertised-to")
    {
        advertised_to = value;
        advertised_to.value_namespace = name_space;
        advertised_to.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "available-paths")
    {
        available_paths.yfilter = yfilter;
    }
    if(value_path == "advertised-to")
    {
        advertised_to.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-neighbor-path-entries" || name == "prefix" || name == "version" || name == "available-paths" || name == "advertised-to")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntries()
    :
    bgp_rd_neighbor_path_entry(this, {"nexthop"})
{

    yang_name = "bgp-rd-neighbor-path-entries"; yang_parent_name = "bgp-rd-neighbor-route-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::~BgpRdNeighborPathEntries()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bgp_rd_neighbor_path_entry.len(); index++)
    {
        if(bgp_rd_neighbor_path_entry[index]->has_data())
            return true;
    }
    return false;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::has_operation() const
{
    for (std::size_t index=0; index<bgp_rd_neighbor_path_entry.len(); index++)
    {
        if(bgp_rd_neighbor_path_entry[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-neighbor-path-entries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-rd-neighbor-path-entry")
    {
        auto ent_ = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry>();
        ent_->parent = this;
        bgp_rd_neighbor_path_entry.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bgp_rd_neighbor_path_entry.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-rd-neighbor-path-entry")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::BgpRdNeighborPathEntry()
    :
    nexthop{YType::str, "nexthop"},
    metric{YType::uint32, "metric"},
    local_pref{YType::uint32, "local-pref"},
    weight{YType::uint32, "weight"},
    as_path{YType::str, "as-path"},
    origin{YType::enumeration, "origin"},
    rpki_status{YType::enumeration, "rpki-status"},
    community{YType::str, "community"},
    mpls_in{YType::str, "mpls-in"},
    mpls_out{YType::str, "mpls-out"},
    sr_profile_name{YType::str, "sr-profile-name"},
    sr_binding_sid{YType::uint32, "sr-binding-sid"},
    sr_label_indx{YType::uint32, "sr-label-indx"},
    as4_path{YType::str, "as4-path"},
    atomic_aggregate{YType::boolean, "atomic-aggregate"},
    aggr_as_number{YType::uint32, "aggr-as-number"},
    aggr_as4_number{YType::uint32, "aggr-as4-number"},
    aggr_address{YType::str, "aggr-address"},
    originator_id{YType::str, "originator-id"},
    cluster_list{YType::str, "cluster-list"},
    extended_community{YType::str, "extended-community"},
    ext_aigp_metric{YType::uint64, "ext-aigp-metric"},
    path_id{YType::uint32, "path-id"}
        ,
    path_status(std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus>())
{
    path_status->parent = this;

    yang_name = "bgp-rd-neighbor-path-entry"; yang_parent_name = "bgp-rd-neighbor-path-entries"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::~BgpRdNeighborPathEntry()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::has_data() const
{
    if (is_presence_container) return true;
    return nexthop.is_set
	|| metric.is_set
	|| local_pref.is_set
	|| weight.is_set
	|| as_path.is_set
	|| origin.is_set
	|| rpki_status.is_set
	|| community.is_set
	|| mpls_in.is_set
	|| mpls_out.is_set
	|| sr_profile_name.is_set
	|| sr_binding_sid.is_set
	|| sr_label_indx.is_set
	|| as4_path.is_set
	|| atomic_aggregate.is_set
	|| aggr_as_number.is_set
	|| aggr_as4_number.is_set
	|| aggr_address.is_set
	|| originator_id.is_set
	|| cluster_list.is_set
	|| extended_community.is_set
	|| ext_aigp_metric.is_set
	|| path_id.is_set
	|| (path_status !=  nullptr && path_status->has_data());
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nexthop.yfilter)
	|| ydk::is_set(metric.yfilter)
	|| ydk::is_set(local_pref.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| ydk::is_set(as_path.yfilter)
	|| ydk::is_set(origin.yfilter)
	|| ydk::is_set(rpki_status.yfilter)
	|| ydk::is_set(community.yfilter)
	|| ydk::is_set(mpls_in.yfilter)
	|| ydk::is_set(mpls_out.yfilter)
	|| ydk::is_set(sr_profile_name.yfilter)
	|| ydk::is_set(sr_binding_sid.yfilter)
	|| ydk::is_set(sr_label_indx.yfilter)
	|| ydk::is_set(as4_path.yfilter)
	|| ydk::is_set(atomic_aggregate.yfilter)
	|| ydk::is_set(aggr_as_number.yfilter)
	|| ydk::is_set(aggr_as4_number.yfilter)
	|| ydk::is_set(aggr_address.yfilter)
	|| ydk::is_set(originator_id.yfilter)
	|| ydk::is_set(cluster_list.yfilter)
	|| ydk::is_set(extended_community.yfilter)
	|| ydk::is_set(ext_aigp_metric.yfilter)
	|| ydk::is_set(path_id.yfilter)
	|| (path_status !=  nullptr && path_status->has_operation());
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-rd-neighbor-path-entry";
    ADD_KEY_TOKEN(nexthop, "nexthop");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nexthop.is_set || is_set(nexthop.yfilter)) leaf_name_data.push_back(nexthop.get_name_leafdata());
    if (metric.is_set || is_set(metric.yfilter)) leaf_name_data.push_back(metric.get_name_leafdata());
    if (local_pref.is_set || is_set(local_pref.yfilter)) leaf_name_data.push_back(local_pref.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());
    if (as_path.is_set || is_set(as_path.yfilter)) leaf_name_data.push_back(as_path.get_name_leafdata());
    if (origin.is_set || is_set(origin.yfilter)) leaf_name_data.push_back(origin.get_name_leafdata());
    if (rpki_status.is_set || is_set(rpki_status.yfilter)) leaf_name_data.push_back(rpki_status.get_name_leafdata());
    if (community.is_set || is_set(community.yfilter)) leaf_name_data.push_back(community.get_name_leafdata());
    if (mpls_in.is_set || is_set(mpls_in.yfilter)) leaf_name_data.push_back(mpls_in.get_name_leafdata());
    if (mpls_out.is_set || is_set(mpls_out.yfilter)) leaf_name_data.push_back(mpls_out.get_name_leafdata());
    if (sr_profile_name.is_set || is_set(sr_profile_name.yfilter)) leaf_name_data.push_back(sr_profile_name.get_name_leafdata());
    if (sr_binding_sid.is_set || is_set(sr_binding_sid.yfilter)) leaf_name_data.push_back(sr_binding_sid.get_name_leafdata());
    if (sr_label_indx.is_set || is_set(sr_label_indx.yfilter)) leaf_name_data.push_back(sr_label_indx.get_name_leafdata());
    if (as4_path.is_set || is_set(as4_path.yfilter)) leaf_name_data.push_back(as4_path.get_name_leafdata());
    if (atomic_aggregate.is_set || is_set(atomic_aggregate.yfilter)) leaf_name_data.push_back(atomic_aggregate.get_name_leafdata());
    if (aggr_as_number.is_set || is_set(aggr_as_number.yfilter)) leaf_name_data.push_back(aggr_as_number.get_name_leafdata());
    if (aggr_as4_number.is_set || is_set(aggr_as4_number.yfilter)) leaf_name_data.push_back(aggr_as4_number.get_name_leafdata());
    if (aggr_address.is_set || is_set(aggr_address.yfilter)) leaf_name_data.push_back(aggr_address.get_name_leafdata());
    if (originator_id.is_set || is_set(originator_id.yfilter)) leaf_name_data.push_back(originator_id.get_name_leafdata());
    if (cluster_list.is_set || is_set(cluster_list.yfilter)) leaf_name_data.push_back(cluster_list.get_name_leafdata());
    if (extended_community.is_set || is_set(extended_community.yfilter)) leaf_name_data.push_back(extended_community.get_name_leafdata());
    if (ext_aigp_metric.is_set || is_set(ext_aigp_metric.yfilter)) leaf_name_data.push_back(ext_aigp_metric.get_name_leafdata());
    if (path_id.is_set || is_set(path_id.yfilter)) leaf_name_data.push_back(path_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "path-status")
    {
        if(path_status == nullptr)
        {
            path_status = std::make_shared<BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus>();
        }
        return path_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(path_status != nullptr)
    {
        _children["path-status"] = path_status;
    }

    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nexthop")
    {
        nexthop = value;
        nexthop.value_namespace = name_space;
        nexthop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "metric")
    {
        metric = value;
        metric.value_namespace = name_space;
        metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-pref")
    {
        local_pref = value;
        local_pref.value_namespace = name_space;
        local_pref.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path")
    {
        as_path = value;
        as_path.value_namespace = name_space;
        as_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "origin")
    {
        origin = value;
        origin.value_namespace = name_space;
        origin.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rpki-status")
    {
        rpki_status = value;
        rpki_status.value_namespace = name_space;
        rpki_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "community")
    {
        community = value;
        community.value_namespace = name_space;
        community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-in")
    {
        mpls_in = value;
        mpls_in.value_namespace = name_space;
        mpls_in.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpls-out")
    {
        mpls_out = value;
        mpls_out.value_namespace = name_space;
        mpls_out.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-profile-name")
    {
        sr_profile_name = value;
        sr_profile_name.value_namespace = name_space;
        sr_profile_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-binding-sid")
    {
        sr_binding_sid = value;
        sr_binding_sid.value_namespace = name_space;
        sr_binding_sid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sr-label-indx")
    {
        sr_label_indx = value;
        sr_label_indx.value_namespace = name_space;
        sr_label_indx.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as4-path")
    {
        as4_path = value;
        as4_path.value_namespace = name_space;
        as4_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "atomic-aggregate")
    {
        atomic_aggregate = value;
        atomic_aggregate.value_namespace = name_space;
        atomic_aggregate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-as-number")
    {
        aggr_as_number = value;
        aggr_as_number.value_namespace = name_space;
        aggr_as_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-as4-number")
    {
        aggr_as4_number = value;
        aggr_as4_number.value_namespace = name_space;
        aggr_as4_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aggr-address")
    {
        aggr_address = value;
        aggr_address.value_namespace = name_space;
        aggr_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "originator-id")
    {
        originator_id = value;
        originator_id.value_namespace = name_space;
        originator_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cluster-list")
    {
        cluster_list = value;
        cluster_list.value_namespace = name_space;
        cluster_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "extended-community")
    {
        extended_community = value;
        extended_community.value_namespace = name_space;
        extended_community.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ext-aigp-metric")
    {
        ext_aigp_metric = value;
        ext_aigp_metric.value_namespace = name_space;
        ext_aigp_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "path-id")
    {
        path_id = value;
        path_id.value_namespace = name_space;
        path_id.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nexthop")
    {
        nexthop.yfilter = yfilter;
    }
    if(value_path == "metric")
    {
        metric.yfilter = yfilter;
    }
    if(value_path == "local-pref")
    {
        local_pref.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
    if(value_path == "as-path")
    {
        as_path.yfilter = yfilter;
    }
    if(value_path == "origin")
    {
        origin.yfilter = yfilter;
    }
    if(value_path == "rpki-status")
    {
        rpki_status.yfilter = yfilter;
    }
    if(value_path == "community")
    {
        community.yfilter = yfilter;
    }
    if(value_path == "mpls-in")
    {
        mpls_in.yfilter = yfilter;
    }
    if(value_path == "mpls-out")
    {
        mpls_out.yfilter = yfilter;
    }
    if(value_path == "sr-profile-name")
    {
        sr_profile_name.yfilter = yfilter;
    }
    if(value_path == "sr-binding-sid")
    {
        sr_binding_sid.yfilter = yfilter;
    }
    if(value_path == "sr-label-indx")
    {
        sr_label_indx.yfilter = yfilter;
    }
    if(value_path == "as4-path")
    {
        as4_path.yfilter = yfilter;
    }
    if(value_path == "atomic-aggregate")
    {
        atomic_aggregate.yfilter = yfilter;
    }
    if(value_path == "aggr-as-number")
    {
        aggr_as_number.yfilter = yfilter;
    }
    if(value_path == "aggr-as4-number")
    {
        aggr_as4_number.yfilter = yfilter;
    }
    if(value_path == "aggr-address")
    {
        aggr_address.yfilter = yfilter;
    }
    if(value_path == "originator-id")
    {
        originator_id.yfilter = yfilter;
    }
    if(value_path == "cluster-list")
    {
        cluster_list.yfilter = yfilter;
    }
    if(value_path == "extended-community")
    {
        extended_community.yfilter = yfilter;
    }
    if(value_path == "ext-aigp-metric")
    {
        ext_aigp_metric.yfilter = yfilter;
    }
    if(value_path == "path-id")
    {
        path_id.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "path-status" || name == "nexthop" || name == "metric" || name == "local-pref" || name == "weight" || name == "as-path" || name == "origin" || name == "rpki-status" || name == "community" || name == "mpls-in" || name == "mpls-out" || name == "sr-profile-name" || name == "sr-binding-sid" || name == "sr-label-indx" || name == "as4-path" || name == "atomic-aggregate" || name == "aggr-as-number" || name == "aggr-as4-number" || name == "aggr-address" || name == "originator-id" || name == "cluster-list" || name == "extended-community" || name == "ext-aigp-metric" || name == "path-id")
        return true;
    return false;
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::PathStatus()
    :
    suppressed{YType::empty, "suppressed"},
    damped{YType::empty, "damped"},
    history{YType::empty, "history"},
    valid{YType::empty, "valid"},
    sourced{YType::empty, "sourced"},
    bestpath{YType::empty, "bestpath"},
    internal{YType::empty, "internal"},
    rib_fail{YType::empty, "rib-fail"},
    stale{YType::empty, "stale"},
    multipath{YType::empty, "multipath"},
    backup_path{YType::empty, "backup-path"},
    rt_filter{YType::empty, "rt-filter"},
    best_external{YType::empty, "best-external"},
    additional_path{YType::empty, "additional-path"},
    rib_compressed{YType::empty, "rib-compressed"}
{

    yang_name = "path-status"; yang_parent_name = "bgp-rd-neighbor-path-entry"; is_top_level_class = false; has_list_ancestor = true; 
}

BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::~PathStatus()
{
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::has_data() const
{
    if (is_presence_container) return true;
    return suppressed.is_set
	|| damped.is_set
	|| history.is_set
	|| valid.is_set
	|| sourced.is_set
	|| bestpath.is_set
	|| internal.is_set
	|| rib_fail.is_set
	|| stale.is_set
	|| multipath.is_set
	|| backup_path.is_set
	|| rt_filter.is_set
	|| best_external.is_set
	|| additional_path.is_set
	|| rib_compressed.is_set;
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(suppressed.yfilter)
	|| ydk::is_set(damped.yfilter)
	|| ydk::is_set(history.yfilter)
	|| ydk::is_set(valid.yfilter)
	|| ydk::is_set(sourced.yfilter)
	|| ydk::is_set(bestpath.yfilter)
	|| ydk::is_set(internal.yfilter)
	|| ydk::is_set(rib_fail.yfilter)
	|| ydk::is_set(stale.yfilter)
	|| ydk::is_set(multipath.yfilter)
	|| ydk::is_set(backup_path.yfilter)
	|| ydk::is_set(rt_filter.yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| ydk::is_set(additional_path.yfilter)
	|| ydk::is_set(rib_compressed.yfilter);
}

std::string BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "path-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (suppressed.is_set || is_set(suppressed.yfilter)) leaf_name_data.push_back(suppressed.get_name_leafdata());
    if (damped.is_set || is_set(damped.yfilter)) leaf_name_data.push_back(damped.get_name_leafdata());
    if (history.is_set || is_set(history.yfilter)) leaf_name_data.push_back(history.get_name_leafdata());
    if (valid.is_set || is_set(valid.yfilter)) leaf_name_data.push_back(valid.get_name_leafdata());
    if (sourced.is_set || is_set(sourced.yfilter)) leaf_name_data.push_back(sourced.get_name_leafdata());
    if (bestpath.is_set || is_set(bestpath.yfilter)) leaf_name_data.push_back(bestpath.get_name_leafdata());
    if (internal.is_set || is_set(internal.yfilter)) leaf_name_data.push_back(internal.get_name_leafdata());
    if (rib_fail.is_set || is_set(rib_fail.yfilter)) leaf_name_data.push_back(rib_fail.get_name_leafdata());
    if (stale.is_set || is_set(stale.yfilter)) leaf_name_data.push_back(stale.get_name_leafdata());
    if (multipath.is_set || is_set(multipath.yfilter)) leaf_name_data.push_back(multipath.get_name_leafdata());
    if (backup_path.is_set || is_set(backup_path.yfilter)) leaf_name_data.push_back(backup_path.get_name_leafdata());
    if (rt_filter.is_set || is_set(rt_filter.yfilter)) leaf_name_data.push_back(rt_filter.get_name_leafdata());
    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());
    if (additional_path.is_set || is_set(additional_path.yfilter)) leaf_name_data.push_back(additional_path.get_name_leafdata());
    if (rib_compressed.is_set || is_set(rib_compressed.yfilter)) leaf_name_data.push_back(rib_compressed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "suppressed")
    {
        suppressed = value;
        suppressed.value_namespace = name_space;
        suppressed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "damped")
    {
        damped = value;
        damped.value_namespace = name_space;
        damped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "history")
    {
        history = value;
        history.value_namespace = name_space;
        history.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "valid")
    {
        valid = value;
        valid.value_namespace = name_space;
        valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sourced")
    {
        sourced = value;
        sourced.value_namespace = name_space;
        sourced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bestpath")
    {
        bestpath = value;
        bestpath.value_namespace = name_space;
        bestpath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal")
    {
        internal = value;
        internal.value_namespace = name_space;
        internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-fail")
    {
        rib_fail = value;
        rib_fail.value_namespace = name_space;
        rib_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale")
    {
        stale = value;
        stale.value_namespace = name_space;
        stale.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multipath")
    {
        multipath = value;
        multipath.value_namespace = name_space;
        multipath.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "backup-path")
    {
        backup_path = value;
        backup_path.value_namespace = name_space;
        backup_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rt-filter")
    {
        rt_filter = value;
        rt_filter.value_namespace = name_space;
        rt_filter.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "additional-path")
    {
        additional_path = value;
        additional_path.value_namespace = name_space;
        additional_path.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed = value;
        rib_compressed.value_namespace = name_space;
        rib_compressed.value_namespace_prefix = name_space_prefix;
    }
}

void BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "suppressed")
    {
        suppressed.yfilter = yfilter;
    }
    if(value_path == "damped")
    {
        damped.yfilter = yfilter;
    }
    if(value_path == "history")
    {
        history.yfilter = yfilter;
    }
    if(value_path == "valid")
    {
        valid.yfilter = yfilter;
    }
    if(value_path == "sourced")
    {
        sourced.yfilter = yfilter;
    }
    if(value_path == "bestpath")
    {
        bestpath.yfilter = yfilter;
    }
    if(value_path == "internal")
    {
        internal.yfilter = yfilter;
    }
    if(value_path == "rib-fail")
    {
        rib_fail.yfilter = yfilter;
    }
    if(value_path == "stale")
    {
        stale.yfilter = yfilter;
    }
    if(value_path == "multipath")
    {
        multipath.yfilter = yfilter;
    }
    if(value_path == "backup-path")
    {
        backup_path.yfilter = yfilter;
    }
    if(value_path == "rt-filter")
    {
        rt_filter.yfilter = yfilter;
    }
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
    if(value_path == "additional-path")
    {
        additional_path.yfilter = yfilter;
    }
    if(value_path == "rib-compressed")
    {
        rib_compressed.yfilter = yfilter;
    }
}

bool BgpStateData::BgpRouteRds::BgpRouteRd::BgpRdRouteAfs::BgpRdRouteAf::BgpRdRouteNeighbors::BgpRdRouteNeighbor::BgpRdNeighborRouteFilters::BgpRdNeighborRouteFilter::BgpRdNeighborRouteEntries::BgpRdNeighborRouteEntry::BgpRdNeighborPathEntries::BgpRdNeighborPathEntry::PathStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "suppressed" || name == "damped" || name == "history" || name == "valid" || name == "sourced" || name == "bestpath" || name == "internal" || name == "rib-fail" || name == "stale" || name == "multipath" || name == "backup-path" || name == "rt-filter" || name == "best-external" || name == "additional-path" || name == "rib-compressed")
        return true;
    return false;
}

const Enum::YLeaf BgpLink::internal {0, "internal"};
const Enum::YLeaf BgpLink::external {1, "external"};

const Enum::YLeaf BgpFsmState::fsm_idle {0, "fsm-idle"};
const Enum::YLeaf BgpFsmState::fsm_connect {1, "fsm-connect"};
const Enum::YLeaf BgpFsmState::fsm_active {2, "fsm-active"};
const Enum::YLeaf BgpFsmState::fsm_opensent {3, "fsm-opensent"};
const Enum::YLeaf BgpFsmState::fsm_openconfirm {4, "fsm-openconfirm"};
const Enum::YLeaf BgpFsmState::fsm_established {5, "fsm-established"};
const Enum::YLeaf BgpFsmState::fsm_nonnegotiated {6, "fsm-nonnegotiated"};

const Enum::YLeaf BgpMode::mode_active {0, "mode-active"};
const Enum::YLeaf BgpMode::mode_passive {1, "mode-passive"};


}
}

