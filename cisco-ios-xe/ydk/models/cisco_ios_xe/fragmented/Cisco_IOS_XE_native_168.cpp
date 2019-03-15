
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_168.hpp"
#include "Cisco_IOS_XE_native_169.hpp"

using namespace ydk;

namespace cisco_ios_xe {
namespace Cisco_IOS_XE_native {

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::ContextWord()
    :
    context_word{YType::str, "context_word"}
{

    yang_name = "context_word"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::~ContextWord()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::has_data() const
{
    if (is_presence_container) return true;
    return context_word.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_word.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word";
    ADD_KEY_TOKEN(context_word, "context_word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.yfilter)) leaf_name_data.push_back(context_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context_word")
    {
        context_word = value;
        context_word.value_namespace = name_space;
        context_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context_word")
    {
        context_word.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Vpnv6::Vpnv6Unicast::Snmp::Context::ContextWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    nsap(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_>())
{
    nsap->parent = this;

    yang_name = "nsap"; yang_parent_name = "no-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::~Nsap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (nsap !=  nullptr && nsap->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (nsap !=  nullptr && nsap->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsap";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nsap")
    {
        if(nsap == nullptr)
        {
            nsap = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_>();
        }
        return nsap;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nsap != nullptr)
    {
        _children["nsap"] = nsap;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nsap" || name == "af-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Nsap_()
    :
    default_metric{YType::uint32, "default-metric"}
        ,
    bgp(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_>())
    , default_information(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation>())
    , maximum_paths(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths>())
    , peer_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup>())
    , neighbor(this, {"id"})
    , network(this, {"number"})
    , snmp(nullptr) // presence node
{
    bgp->parent = this;
    default_information->parent = this;
    maximum_paths->parent = this;
    peer_group->parent = this;

    yang_name = "nsap"; yang_parent_name = "nsap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::~Nsap_()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return default_metric.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.len(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "network")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network>();
        ent_->parent = this;
        network.append(ent_);
        return ent_;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(maximum_paths != nullptr)
    {
        _children["maximum-paths"] = maximum_paths;
    }

    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : network.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "default-information" || name == "maximum-paths" || name == "peer-group" || name == "neighbor" || name == "network" || name == "snmp" || name == "default-metric")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Bgp_()
    :
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    redistribute_internal{YType::empty, "redistribute-internal"},
    scan_time{YType::uint8, "scan-time"},
    soft_reconfig_backup{YType::empty, "soft-reconfig-backup"}
        ,
    aggregate_timer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer>())
    , dampening(nullptr) // presence node
    , nexthop(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop>())
    , route_map(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap>())
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer>())
{
    aggregate_timer->parent = this;
    nexthop->parent = this;
    route_map->parent = this;
    slow_peer->parent = this;

    yang_name = "bgp"; yang_parent_name = "nsap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return dmzlink_bw.is_set
	|| redistribute_internal.is_set
	|| scan_time.is_set
	|| soft_reconfig_backup.is_set
	|| (aggregate_timer !=  nullptr && aggregate_timer->has_data())
	|| (dampening !=  nullptr && dampening->has_data())
	|| (nexthop !=  nullptr && nexthop->has_data())
	|| (route_map !=  nullptr && route_map->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(redistribute_internal.yfilter)
	|| ydk::is_set(scan_time.yfilter)
	|| ydk::is_set(soft_reconfig_backup.yfilter)
	|| (aggregate_timer !=  nullptr && aggregate_timer->has_operation())
	|| (dampening !=  nullptr && dampening->has_operation())
	|| (nexthop !=  nullptr && nexthop->has_operation())
	|| (route_map !=  nullptr && route_map->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (redistribute_internal.is_set || is_set(redistribute_internal.yfilter)) leaf_name_data.push_back(redistribute_internal.get_name_leafdata());
    if (scan_time.is_set || is_set(scan_time.yfilter)) leaf_name_data.push_back(scan_time.get_name_leafdata());
    if (soft_reconfig_backup.is_set || is_set(soft_reconfig_backup.yfilter)) leaf_name_data.push_back(soft_reconfig_backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-timer")
    {
        if(aggregate_timer == nullptr)
        {
            aggregate_timer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer>();
        }
        return aggregate_timer;
    }

    if(child_yang_name == "dampening")
    {
        if(dampening == nullptr)
        {
            dampening = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening>();
        }
        return dampening;
    }

    if(child_yang_name == "nexthop")
    {
        if(nexthop == nullptr)
        {
            nexthop = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop>();
        }
        return nexthop;
    }

    if(child_yang_name == "route-map")
    {
        if(route_map == nullptr)
        {
            route_map = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap>();
        }
        return route_map;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregate_timer != nullptr)
    {
        _children["aggregate-timer"] = aggregate_timer;
    }

    if(dampening != nullptr)
    {
        _children["dampening"] = dampening;
    }

    if(nexthop != nullptr)
    {
        _children["nexthop"] = nexthop;
    }

    if(route_map != nullptr)
    {
        _children["route-map"] = route_map;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal = value;
        redistribute_internal.value_namespace = name_space;
        redistribute_internal.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "scan-time")
    {
        scan_time = value;
        scan_time.value_namespace = name_space;
        scan_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup = value;
        soft_reconfig_backup.value_namespace = name_space;
        soft_reconfig_backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "redistribute-internal")
    {
        redistribute_internal.yfilter = yfilter;
    }
    if(value_path == "scan-time")
    {
        scan_time.yfilter = yfilter;
    }
    if(value_path == "soft-reconfig-backup")
    {
        soft_reconfig_backup.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-timer" || name == "dampening" || name == "nexthop" || name == "route-map" || name == "slow-peer" || name == "dmzlink-bw" || name == "redistribute-internal" || name == "scan-time" || name == "soft-reconfig-backup")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::AggregateTimer()
    :
    aggregate_timer{YType::uint8, "aggregate-timer"},
    disable_timer{YType::enumeration, "disable-timer"}
{

    yang_name = "aggregate-timer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::~AggregateTimer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::has_data() const
{
    if (is_presence_container) return true;
    return aggregate_timer.is_set
	|| disable_timer.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(aggregate_timer.yfilter)
	|| ydk::is_set(disable_timer.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-timer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aggregate_timer.is_set || is_set(aggregate_timer.yfilter)) leaf_name_data.push_back(aggregate_timer.get_name_leafdata());
    if (disable_timer.is_set || is_set(disable_timer.yfilter)) leaf_name_data.push_back(disable_timer.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "aggregate-timer")
    {
        aggregate_timer = value;
        aggregate_timer.value_namespace = name_space;
        aggregate_timer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disable-timer")
    {
        disable_timer = value;
        disable_timer.value_namespace = name_space;
        disable_timer.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "aggregate-timer")
    {
        aggregate_timer.yfilter = yfilter;
    }
    if(value_path == "disable-timer")
    {
        disable_timer.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-timer" || name == "disable-timer")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampening()
    :
    route_map{YType::str, "route-map"}
        ,
    dampen(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen>())
{
    dampen->parent = this;

    yang_name = "dampening"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::~Dampening()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (dampen !=  nullptr && dampen->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (dampen !=  nullptr && dampen->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampening";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dampen")
    {
        if(dampen == nullptr)
        {
            dampen = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen>();
        }
        return dampen;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dampen != nullptr)
    {
        _children["dampen"] = dampen;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dampen" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::Dampen()
    :
    half_life_time{YType::uint8, "half-life-time"},
    reuse_time{YType::uint16, "reuse-time"},
    suppress_time{YType::uint16, "suppress-time"},
    max_suppress_time{YType::uint8, "max-suppress-time"}
{

    yang_name = "dampen"; yang_parent_name = "dampening"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::~Dampen()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::has_data() const
{
    if (is_presence_container) return true;
    return half_life_time.is_set
	|| reuse_time.is_set
	|| suppress_time.is_set
	|| max_suppress_time.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(half_life_time.yfilter)
	|| ydk::is_set(reuse_time.yfilter)
	|| ydk::is_set(suppress_time.yfilter)
	|| ydk::is_set(max_suppress_time.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dampen";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (half_life_time.is_set || is_set(half_life_time.yfilter)) leaf_name_data.push_back(half_life_time.get_name_leafdata());
    if (reuse_time.is_set || is_set(reuse_time.yfilter)) leaf_name_data.push_back(reuse_time.get_name_leafdata());
    if (suppress_time.is_set || is_set(suppress_time.yfilter)) leaf_name_data.push_back(suppress_time.get_name_leafdata());
    if (max_suppress_time.is_set || is_set(max_suppress_time.yfilter)) leaf_name_data.push_back(max_suppress_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "half-life-time")
    {
        half_life_time = value;
        half_life_time.value_namespace = name_space;
        half_life_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reuse-time")
    {
        reuse_time = value;
        reuse_time.value_namespace = name_space;
        reuse_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suppress-time")
    {
        suppress_time = value;
        suppress_time.value_namespace = name_space;
        suppress_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time = value;
        max_suppress_time.value_namespace = name_space;
        max_suppress_time.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "half-life-time")
    {
        half_life_time.yfilter = yfilter;
    }
    if(value_path == "reuse-time")
    {
        reuse_time.yfilter = yfilter;
    }
    if(value_path == "suppress-time")
    {
        suppress_time.yfilter = yfilter;
    }
    if(value_path == "max-suppress-time")
    {
        max_suppress_time.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Dampening::Dampen::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "half-life-time" || name == "reuse-time" || name == "suppress-time" || name == "max-suppress-time")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Nexthop()
    :
    route_map{YType::str, "route-map"}
        ,
    trigger(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger>())
{
    trigger->parent = this;

    yang_name = "nexthop"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::~Nexthop()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set
	|| (trigger !=  nullptr && trigger->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter)
	|| (trigger !=  nullptr && trigger->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nexthop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "trigger")
    {
        if(trigger == nullptr)
        {
            trigger = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger>();
        }
        return trigger;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(trigger != nullptr)
    {
        _children["trigger"] = trigger;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "trigger" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::Trigger()
    :
    delay{YType::uint8, "delay"},
    enable{YType::boolean, "enable"}
{

    yang_name = "trigger"; yang_parent_name = "nexthop"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::~Trigger()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::has_data() const
{
    if (is_presence_container) return true;
    return delay.is_set
	|| enable.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(delay.yfilter)
	|| ydk::is_set(enable.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.yfilter)) leaf_name_data.push_back(delay.get_name_leafdata());
    if (enable.is_set || is_set(enable.yfilter)) leaf_name_data.push_back(enable.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "delay")
    {
        delay = value;
        delay.value_namespace = name_space;
        delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "enable")
    {
        enable = value;
        enable.value_namespace = name_space;
        enable.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "delay")
    {
        delay.yfilter = yfilter;
    }
    if(value_path == "enable")
    {
        enable.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::Nexthop::Trigger::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "delay" || name == "enable")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::RouteMap()
    :
    priority{YType::empty, "priority"}
{

    yang_name = "route-map"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return priority.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(priority.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (priority.is_set || is_set(priority.yfilter)) leaf_name_data.push_back(priority.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "priority")
    {
        priority = value;
        priority.value_namespace = name_space;
        priority.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "priority")
    {
        priority.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "priority")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::Detection()
    :
    disable{YType::empty, "disable"},
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disable" || name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{

    yang_name = "default-information"; yang_parent_name = "nsap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return originate.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::MaximumPaths()
    :
    ebgp{YType::uint16, "ebgp"},
    eibgp{YType::uint16, "eibgp"}
        ,
    ibgp(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp>())
    , external_rtfilter(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter>())
{
    ibgp->parent = this;
    external_rtfilter->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "nsap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::has_data() const
{
    if (is_presence_container) return true;
    return ebgp.is_set
	|| eibgp.is_set
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ebgp.yfilter)
	|| ydk::is_set(eibgp.yfilter)
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ebgp.is_set || is_set(ebgp.yfilter)) leaf_name_data.push_back(ebgp.get_name_leafdata());
    if (eibgp.is_set || is_set(eibgp.yfilter)) leaf_name_data.push_back(eibgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    if(external_rtfilter != nullptr)
    {
        _children["external-rtfilter"] = external_rtfilter;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ebgp")
    {
        ebgp = value;
        ebgp.value_namespace = name_space;
        ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eibgp")
    {
        eibgp = value;
        eibgp.value_namespace = name_space;
        eibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ebgp")
    {
        ebgp.yfilter = yfilter;
    }
    if(value_path == "eibgp")
    {
        eibgp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ibgp" || name == "external-rtfilter" || name == "ebgp" || name == "eibgp")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::Ibgp()
    :
    unequal_cost{YType::uint16, "unequal-cost"},
    max{YType::uint16, "max"}
{

    yang_name = "ibgp"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return unequal_cost.is_set
	|| max.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unequal-cost" || name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{

    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::MaximumPaths::ExternalRtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::PeerGroup()
    :
    neighbor(this, {"id"})
{

    yang_name = "peer-group"; yang_parent_name = "nsap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::get_children() const
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soo{YType::str, "soo"},
    weight{YType::uint16, "weight"}
        ,
    allowas_in(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability>())
    , default_originate(nullptr) // presence node
    , filter_list(this, {"inout"})
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , prefix_list(this, {"inout"})
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer>())
{
    capability->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;

    yang_name = "neighbor"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| dmzlink_bw.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soo.is_set
	|| weight.is_set
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "filter-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList>();
        ent_->parent = this;
        filter_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    count_ = 0;
    for (auto ent_ : filter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowas-in" || name == "capability" || name == "default-originate" || name == "filter-list" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "prefix-list" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "dmzlink-bw" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soo" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{

    yang_name = "filter-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(as_path_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.yfilter)) leaf_name_data.push_back(as_path_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
        as_path_list.value_namespace = name_space;
        as_path_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "as-path-list")
    {
        as_path_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "as-path-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "prefix-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "prefix-list-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soo{YType::str, "soo"},
    weight{YType::uint16, "weight"}
        ,
    allowas_in(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability>())
    , default_originate(nullptr) // presence node
    , filter_list(this, {"inout"})
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , prefix_list(this, {"inout"})
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer>())
{
    capability->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;

    yang_name = "neighbor"; yang_parent_name = "nsap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| dmzlink_bw.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soo.is_set
	|| weight.is_set
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (default_originate !=  nullptr && default_originate->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (default_originate !=  nullptr && default_originate->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "default-originate")
    {
        if(default_originate == nullptr)
        {
            default_originate = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate>();
        }
        return default_originate;
    }

    if(child_yang_name == "filter-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList>();
        ent_->parent = this;
        filter_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(default_originate != nullptr)
    {
        _children["default-originate"] = default_originate;
    }

    count_ = 0;
    for (auto ent_ : filter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "allowas-in" || name == "capability" || name == "default-originate" || name == "filter-list" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "prefix-list" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "dmzlink-bw" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soo" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::~Capability()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::DefaultOriginate()
    :
    route_map{YType::str, "route-map"}
{

    yang_name = "default-originate"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::~DefaultOriginate()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::has_data() const
{
    if (is_presence_container) return true;
    return route_map.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-originate";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::DefaultOriginate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{

    yang_name = "filter-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(as_path_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.yfilter)) leaf_name_data.push_back(as_path_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
        as_path_list.value_namespace = name_space;
        as_path_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "as-path-list")
    {
        as_path_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "as-path-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "prefix-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "prefix-list-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::Network()
    :
    number{YType::str, "number"},
    route_map{YType::str, "route-map"}
{

    yang_name = "network"; yang_parent_name = "nsap"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::~Network()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::has_data() const
{
    if (is_presence_container) return true;
    return number.is_set
	|| route_map.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number.yfilter)
	|| ydk::is_set(route_map.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network";
    ADD_KEY_TOKEN(number, "number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.yfilter)) leaf_name_data.push_back(number.get_name_leafdata());
    if (route_map.is_set || is_set(route_map.yfilter)) leaf_name_data.push_back(route_map.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number")
    {
        number = value;
        number.value_namespace = name_space;
        number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map")
    {
        route_map = value;
        route_map.value_namespace = name_space;
        route_map.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number")
    {
        number.yfilter = yfilter;
    }
    if(value_path == "route-map")
    {
        route_map.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Network::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number" || name == "route-map")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Snmp()
    :
    context(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context>())
{
    context->parent = this;

    yang_name = "snmp"; yang_parent_name = "nsap"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::~Snmp()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::has_data() const
{
    if (is_presence_container) return true;
    return (context !=  nullptr && context->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::has_operation() const
{
    return is_set(yfilter)
	|| (context !=  nullptr && context->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context")
    {
        if(context == nullptr)
        {
            context = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context>();
        }
        return context;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(context != nullptr)
    {
        _children["context"] = context;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::Context()
    :
    context_word(this, {"context_word"})
{

    yang_name = "context"; yang_parent_name = "snmp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::~Context()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::has_operation() const
{
    for (std::size_t index=0; index<context_word.len(); index++)
    {
        if(context_word[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "context_word")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord>();
        ent_->parent = this;
        context_word.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : context_word.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::ContextWord()
    :
    context_word{YType::str, "context_word"}
{

    yang_name = "context_word"; yang_parent_name = "context"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::~ContextWord()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::has_data() const
{
    if (is_presence_container) return true;
    return context_word.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(context_word.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "context_word";
    ADD_KEY_TOKEN(context_word, "context_word");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context_word.is_set || is_set(context_word.yfilter)) leaf_name_data.push_back(context_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "context_word")
    {
        context_word = value;
        context_word.value_namespace = name_space;
        context_word.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "context_word")
    {
        context_word.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Snmp::Context::ContextWord::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "context_word")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpn()
    :
    af_name{YType::enumeration, "af-name"}
        ,
    l2vpn_evpn(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn>())
    , l2vpn_vpls(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls>())
{
    l2vpn_evpn->parent = this;
    l2vpn_vpls->parent = this;

    yang_name = "l2vpn"; yang_parent_name = "no-vrf"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::~L2vpn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::has_data() const
{
    if (is_presence_container) return true;
    return af_name.is_set
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_data())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(af_name.yfilter)
	|| (l2vpn_evpn !=  nullptr && l2vpn_evpn->has_operation())
	|| (l2vpn_vpls !=  nullptr && l2vpn_vpls->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn";
    ADD_KEY_TOKEN(af_name, "af-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (af_name.is_set || is_set(af_name.yfilter)) leaf_name_data.push_back(af_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2vpn-evpn")
    {
        if(l2vpn_evpn == nullptr)
        {
            l2vpn_evpn = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn>();
        }
        return l2vpn_evpn;
    }

    if(child_yang_name == "l2vpn-vpls")
    {
        if(l2vpn_vpls == nullptr)
        {
            l2vpn_vpls = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnVpls>();
        }
        return l2vpn_vpls;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2vpn_evpn != nullptr)
    {
        _children["l2vpn-evpn"] = l2vpn_evpn;
    }

    if(l2vpn_vpls != nullptr)
    {
        _children["l2vpn-vpls"] = l2vpn_vpls;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "af-name")
    {
        af_name = value;
        af_name.value_namespace = name_space;
        af_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "af-name")
    {
        af_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2vpn-evpn" || name == "l2vpn-vpls" || name == "af-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::L2vpnEvpn()
    :
    default_metric{YType::uint32, "default-metric"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    unsuppress_map{YType::str, "unsuppress-map"},
    weight{YType::uint16, "weight"}
        ,
    bgp(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_>())
    , default_information(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation>())
    , maximum_paths(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths>())
    , peer_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup>())
    , neighbor(this, {"id"})
    , allowas_in(nullptr) // presence node
    , capability(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability>())
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer>())
    , network(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network>())
    , snmp(nullptr) // presence node
{
    bgp->parent = this;
    default_information->parent = this;
    maximum_paths->parent = this;
    peer_group->parent = this;
    capability->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;
    network->parent = this;

    yang_name = "l2vpn-evpn"; yang_parent_name = "l2vpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::~L2vpnEvpn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return default_metric.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| unsuppress_map.is_set
	|| weight.is_set
	|| (bgp !=  nullptr && bgp->has_data())
	|| (default_information !=  nullptr && default_information->has_data())
	|| (maximum_paths !=  nullptr && maximum_paths->has_data())
	|| (peer_group !=  nullptr && peer_group->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (capability !=  nullptr && capability->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data())
	|| (network !=  nullptr && network->has_data())
	|| (snmp !=  nullptr && snmp->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(default_metric.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (bgp !=  nullptr && bgp->has_operation())
	|| (default_information !=  nullptr && default_information->has_operation())
	|| (maximum_paths !=  nullptr && maximum_paths->has_operation())
	|| (peer_group !=  nullptr && peer_group->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (capability !=  nullptr && capability->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation())
	|| (network !=  nullptr && network->has_operation())
	|| (snmp !=  nullptr && snmp->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2vpn-evpn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_metric.is_set || is_set(default_metric.yfilter)) leaf_name_data.push_back(default_metric.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp")
    {
        if(bgp == nullptr)
        {
            bgp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_>();
        }
        return bgp;
    }

    if(child_yang_name == "default-information")
    {
        if(default_information == nullptr)
        {
            default_information = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation>();
        }
        return default_information;
    }

    if(child_yang_name == "maximum-paths")
    {
        if(maximum_paths == nullptr)
        {
            maximum_paths = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths>();
        }
        return maximum_paths;
    }

    if(child_yang_name == "peer-group")
    {
        if(peer_group == nullptr)
        {
            peer_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup>();
        }
        return peer_group;
    }

    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "capability")
    {
        if(capability == nullptr)
        {
            capability = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability>();
        }
        return capability;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SlowPeer>();
        }
        return slow_peer;
    }

    if(child_yang_name == "network")
    {
        if(network == nullptr)
        {
            network = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Network>();
        }
        return network;
    }

    if(child_yang_name == "snmp")
    {
        if(snmp == nullptr)
        {
            snmp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Snmp>();
        }
        return snmp;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp != nullptr)
    {
        _children["bgp"] = bgp;
    }

    if(default_information != nullptr)
    {
        _children["default-information"] = default_information;
    }

    if(maximum_paths != nullptr)
    {
        _children["maximum-paths"] = maximum_paths;
    }

    if(peer_group != nullptr)
    {
        _children["peer-group"] = peer_group;
    }

    count_ = 0;
    for (auto ent_ : neighbor.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    if(capability != nullptr)
    {
        _children["capability"] = capability;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    if(network != nullptr)
    {
        _children["network"] = network;
    }

    if(snmp != nullptr)
    {
        _children["snmp"] = snmp;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "default-metric")
    {
        default_metric = value;
        default_metric.value_namespace = name_space;
        default_metric.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "default-metric")
    {
        default_metric.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp" || name == "default-information" || name == "maximum-paths" || name == "peer-group" || name == "neighbor" || name == "allowas-in" || name == "capability" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "network" || name == "snmp" || name == "default-metric" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soft-reconfiguration" || name == "soo" || name == "unsuppress-map" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Bgp_()
    :
    additional_paths(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths>())
    , default_(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default>())
{
    additional_paths->parent = this;
    default_->parent = this;

    yang_name = "bgp"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::~Bgp_()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::has_data() const
{
    if (is_presence_container) return true;
    return (additional_paths !=  nullptr && additional_paths->has_data())
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::has_operation() const
{
    return is_set(yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(additional_paths != nullptr)
    {
        _children["additional-paths"] = additional_paths;
    }

    if(default_ != nullptr)
    {
        _children["default"] = default_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "default")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::AdditionalPaths()
    :
    install{YType::empty, "install"},
    receive{YType::empty, "receive"}
        ,
    select(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select>())
    , send(nullptr) // presence node
{
    select->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return install.is_set
	|| receive.is_set
	|| (select !=  nullptr && select->has_data())
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(install.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (select !=  nullptr && select->has_operation())
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (install.is_set || is_set(install.yfilter)) leaf_name_data.push_back(install.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "select")
    {
        if(select == nullptr)
        {
            select = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select>();
        }
        return select;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(select != nullptr)
    {
        _children["select"] = select;
    }

    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "install")
    {
        install = value;
        install.value_namespace = name_space;
        install.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "install")
    {
        install.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "select" || name == "send" || name == "install" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Select()
    :
    all(nullptr) // presence node
    , backup(nullptr) // presence node
    , best(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best>())
    , best_external(nullptr) // presence node
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "select"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::~Select()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (backup !=  nullptr && backup->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (best_external !=  nullptr && best_external->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (backup !=  nullptr && backup->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (best_external !=  nullptr && best_external->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "select";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All>();
        }
        return all;
    }

    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best>();
        }
        return best;
    }

    if(child_yang_name == "best-external")
    {
        if(best_external == nullptr)
        {
            best_external = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal>();
        }
        return best_external;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(best_external != nullptr)
    {
        _children["best-external"] = best_external;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "backup" || name == "best" || name == "best-external" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best>())
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::has_data() const
{
    if (is_presence_container) return true;
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Best()
    :
    range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::Backup()
    :
    best_external{YType::empty, "best-external"}
{

    yang_name = "backup"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::~Backup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::has_data() const
{
    if (is_presence_container) return true;
    return best_external.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Best()
    :
    range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::has_operation() const
{
    for (std::size_t index=0; index<range.len(); index++)
    {
        if(range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range>();
        ent_->parent = this;
        range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::Range()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
        ,
    group_best(nullptr) // presence node
{

    yang_name = "range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::~Range()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{

    yang_name = "group-best"; yang_parent_name = "range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::Best::Range::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::BestExternal()
    :
    backup{YType::empty, "backup"}
{

    yang_name = "best-external"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::~BestExternal()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::has_data() const
{
    if (is_presence_container) return true;
    return backup.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(backup.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-external";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (backup.is_set || is_set(backup.yfilter)) leaf_name_data.push_back(backup.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "backup")
    {
        backup = value;
        backup.value_namespace = name_space;
        backup.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "backup")
    {
        backup.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::BestExternal::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "select"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Select::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{

    yang_name = "send"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::Default()
    :
    route_target{YType::enumeration, "route-target"}
{

    yang_name = "default"; yang_parent_name = "bgp"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::~Default()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::has_data() const
{
    if (is_presence_container) return true;
    return route_target.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(route_target.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (route_target.is_set || is_set(route_target.yfilter)) leaf_name_data.push_back(route_target.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "route-target")
    {
        route_target = value;
        route_target.value_namespace = name_space;
        route_target.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "route-target")
    {
        route_target.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "route-target")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::DefaultInformation()
    :
    originate{YType::empty, "originate"}
{

    yang_name = "default-information"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::~DefaultInformation()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::has_data() const
{
    if (is_presence_container) return true;
    return originate.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(originate.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default-information";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (originate.is_set || is_set(originate.yfilter)) leaf_name_data.push_back(originate.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "originate")
    {
        originate = value;
        originate.value_namespace = name_space;
        originate.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "originate")
    {
        originate.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::DefaultInformation::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "originate")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::MaximumPaths()
    :
    ebgp{YType::uint16, "ebgp"},
    eibgp{YType::uint16, "eibgp"}
        ,
    ibgp(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp>())
    , external_rtfilter(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter>())
{
    ibgp->parent = this;
    external_rtfilter->parent = this;

    yang_name = "maximum-paths"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::~MaximumPaths()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::has_data() const
{
    if (is_presence_container) return true;
    return ebgp.is_set
	|| eibgp.is_set
	|| (ibgp !=  nullptr && ibgp->has_data())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ebgp.yfilter)
	|| ydk::is_set(eibgp.yfilter)
	|| (ibgp !=  nullptr && ibgp->has_operation())
	|| (external_rtfilter !=  nullptr && external_rtfilter->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ebgp.is_set || is_set(ebgp.yfilter)) leaf_name_data.push_back(ebgp.get_name_leafdata());
    if (eibgp.is_set || is_set(eibgp.yfilter)) leaf_name_data.push_back(eibgp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ibgp")
    {
        if(ibgp == nullptr)
        {
            ibgp = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp>();
        }
        return ibgp;
    }

    if(child_yang_name == "external-rtfilter")
    {
        if(external_rtfilter == nullptr)
        {
            external_rtfilter = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter>();
        }
        return external_rtfilter;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ibgp != nullptr)
    {
        _children["ibgp"] = ibgp;
    }

    if(external_rtfilter != nullptr)
    {
        _children["external-rtfilter"] = external_rtfilter;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ebgp")
    {
        ebgp = value;
        ebgp.value_namespace = name_space;
        ebgp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eibgp")
    {
        eibgp = value;
        eibgp.value_namespace = name_space;
        eibgp.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ebgp")
    {
        ebgp.yfilter = yfilter;
    }
    if(value_path == "eibgp")
    {
        eibgp.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ibgp" || name == "external-rtfilter" || name == "ebgp" || name == "eibgp")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::Ibgp()
    :
    unequal_cost{YType::uint16, "unequal-cost"},
    max{YType::uint16, "max"}
{

    yang_name = "ibgp"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::~Ibgp()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::has_data() const
{
    if (is_presence_container) return true;
    return unequal_cost.is_set
	|| max.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unequal_cost.yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ibgp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unequal_cost.is_set || is_set(unequal_cost.yfilter)) leaf_name_data.push_back(unequal_cost.get_name_leafdata());
    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost = value;
        unequal_cost.value_namespace = name_space;
        unequal_cost.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unequal-cost")
    {
        unequal_cost.yfilter = yfilter;
    }
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::Ibgp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unequal-cost" || name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::ExternalRtfilter()
    :
    max{YType::uint16, "max"}
{

    yang_name = "external-rtfilter"; yang_parent_name = "maximum-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::~ExternalRtfilter()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::has_data() const
{
    if (is_presence_container) return true;
    return max.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "external-rtfilter";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max.is_set || is_set(max.yfilter)) leaf_name_data.push_back(max.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max")
    {
        max = value;
        max.value_namespace = name_space;
        max.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max")
    {
        max.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPaths::ExternalRtfilter::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::PeerGroup()
    :
    neighbor(this, {"id"})
{

    yang_name = "peer-group"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::~PeerGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::has_operation() const
{
    for (std::size_t index=0; index<neighbor.len(); index++)
    {
        if(neighbor[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "neighbor")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor>();
        ent_->parent = this;
        neighbor.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::get_children() const
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

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "neighbor")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    unsuppress_map{YType::str, "unsuppress-map"},
    weight{YType::uint16, "weight"}
        ,
    additional_paths(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths>())
    , advertise(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise>())
    , allowas_in(nullptr) // presence node
    , distribute_list(this, {"inout"})
    , encap(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap>())
    , filter_list(this, {"inout"})
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , prefix_list(this, {"inout"})
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer>())
{
    additional_paths->parent = this;
    advertise->parent = this;
    encap->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;

    yang_name = "neighbor"; yang_parent_name = "peer-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distribute_list.len(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| dmzlink_bw.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| unsuppress_map.is_set
	|| weight.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (encap !=  nullptr && encap->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.len(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (encap !=  nullptr && encap->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "distribute-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList>();
        ent_->parent = this;
        distribute_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "encap")
    {
        if(encap == nullptr)
        {
            encap = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap>();
        }
        return encap;
    }

    if(child_yang_name == "filter-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList>();
        ent_->parent = this;
        filter_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(additional_paths != nullptr)
    {
        _children["additional-paths"] = additional_paths;
    }

    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    count_ = 0;
    for (auto ent_ : distribute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(encap != nullptr)
    {
        _children["encap"] = encap;
    }

    count_ = 0;
    for (auto ent_ : filter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "advertise" || name == "allowas-in" || name == "distribute-list" || name == "encap" || name == "filter-list" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "prefix-list" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "dmzlink-bw" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soft-reconfiguration" || name == "soo" || name == "unsuppress-map" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::AdditionalPaths()
    :
    disable{YType::empty, "disable"},
    receive{YType::empty, "receive"}
        ,
    send(nullptr) // presence node
{

    yang_name = "additional-paths"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| receive.is_set
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send" || name == "disable" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{

    yang_name = "send"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::Advertise()
    :
    best_external{YType::empty, "best-external"}
        ,
    additional_paths(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths>())
    , diverse_path(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath>())
{
    additional_paths->parent = this;
    diverse_path->parent = this;

    yang_name = "advertise"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::~Advertise()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return best_external.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (diverse_path !=  nullptr && diverse_path->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (diverse_path !=  nullptr && diverse_path->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "diverse-path")
    {
        if(diverse_path == nullptr)
        {
            diverse_path = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath>();
        }
        return diverse_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(additional_paths != nullptr)
    {
        _children["additional-paths"] = additional_paths;
    }

    if(diverse_path != nullptr)
    {
        _children["diverse-path"] = diverse_path;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "diverse-path" || name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::AdditionalPaths()
    :
    all(nullptr) // presence node
    , best(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best>())
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best>())
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::has_data() const
{
    if (is_presence_container) return true;
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::Best()
    :
    best_range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange>();
        ent_->parent = this;
        best_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : best_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::Best()
    :
    best_range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange>();
        ent_->parent = this;
        best_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : best_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
        ,
    group_best(nullptr) // presence node
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{

    yang_name = "group-best"; yang_parent_name = "best-range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::AdditionalPaths::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::DiversePath()
    :
    mpath{YType::empty, "mpath"}
        ,
    backup(nullptr) // presence node
{

    yang_name = "diverse-path"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::~DiversePath()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::has_data() const
{
    if (is_presence_container) return true;
    return mpath.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpath.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.yfilter)) leaf_name_data.push_back(mpath.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpath")
    {
        mpath = value;
        mpath.value_namespace = name_space;
        mpath.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpath")
    {
        mpath.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mpath")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::Backup()
    :
    mpath{YType::empty, "mpath"}
{

    yang_name = "backup"; yang_parent_name = "diverse-path"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::~Backup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::has_data() const
{
    if (is_presence_container) return true;
    return mpath.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpath.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.yfilter)) leaf_name_data.push_back(mpath.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpath")
    {
        mpath = value;
        mpath.value_namespace = name_space;
        mpath.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpath")
    {
        mpath.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Advertise::DiversePath::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpath")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::DistributeList()
    :
    inout{YType::enumeration, "inout"},
    accesslist{YType::str, "accesslist"}
{

    yang_name = "distribute-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| accesslist.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(accesslist.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (accesslist.is_set || is_set(accesslist.yfilter)) leaf_name_data.push_back(accesslist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accesslist")
    {
        accesslist = value;
        accesslist.value_namespace = name_space;
        accesslist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "accesslist")
    {
        accesslist.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "accesslist")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::Encap()
    :
    mpls{YType::empty, "mpls"},
    vxlan{YType::empty, "vxlan"}
{

    yang_name = "encap"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::~Encap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::has_data() const
{
    if (is_presence_container) return true;
    return mpls.is_set
	|| vxlan.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter)
	|| ydk::is_set(vxlan.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Encap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "vxlan")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{

    yang_name = "filter-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(as_path_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.yfilter)) leaf_name_data.push_back(as_path_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
        as_path_list.value_namespace = name_space;
        as_path_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "as-path-list")
    {
        as_path_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "as-path-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "prefix-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "prefix-list-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Neighbor()
    :
    id{YType::str, "id"},
    activate{YType::empty, "activate"},
    advertisement_interval{YType::uint16, "advertisement-interval"},
    allow_policy{YType::empty, "allow-policy"},
    dmzlink_bw{YType::empty, "dmzlink-bw"},
    next_hop_unchanged{YType::empty, "next-hop-unchanged"},
    route_reflector_client{YType::empty, "route-reflector-client"},
    soft_reconfiguration{YType::enumeration, "soft-reconfiguration"},
    soo{YType::str, "soo"},
    unsuppress_map{YType::str, "unsuppress-map"},
    weight{YType::uint16, "weight"}
        ,
    additional_paths(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths>())
    , advertise(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise>())
    , allowas_in(nullptr) // presence node
    , distribute_list(this, {"inout"})
    , encap(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap>())
    , filter_list(this, {"inout"})
    , inherit(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit>())
    , maximum_prefix(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix>())
    , next_hop_self(nullptr) // presence node
    , prefix_list(this, {"inout"})
    , remove_private_as(nullptr) // presence node
    , route_map(this, {"inout"})
    , send_community(nullptr) // presence node
    , slow_peer(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer>())
{
    additional_paths->parent = this;
    advertise->parent = this;
    encap->parent = this;
    inherit->parent = this;
    maximum_prefix->parent = this;
    slow_peer->parent = this;

    yang_name = "neighbor"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::~Neighbor()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<distribute_list.len(); index++)
    {
        if(distribute_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_data())
            return true;
    }
    return id.is_set
	|| activate.is_set
	|| advertisement_interval.is_set
	|| allow_policy.is_set
	|| dmzlink_bw.is_set
	|| next_hop_unchanged.is_set
	|| route_reflector_client.is_set
	|| soft_reconfiguration.is_set
	|| soo.is_set
	|| unsuppress_map.is_set
	|| weight.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (advertise !=  nullptr && advertise->has_data())
	|| (allowas_in !=  nullptr && allowas_in->has_data())
	|| (encap !=  nullptr && encap->has_data())
	|| (inherit !=  nullptr && inherit->has_data())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_data())
	|| (next_hop_self !=  nullptr && next_hop_self->has_data())
	|| (remove_private_as !=  nullptr && remove_private_as->has_data())
	|| (send_community !=  nullptr && send_community->has_data())
	|| (slow_peer !=  nullptr && slow_peer->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::has_operation() const
{
    for (std::size_t index=0; index<distribute_list.len(); index++)
    {
        if(distribute_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<filter_list.len(); index++)
    {
        if(filter_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.len(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<route_map.len(); index++)
    {
        if(route_map[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(id.yfilter)
	|| ydk::is_set(activate.yfilter)
	|| ydk::is_set(advertisement_interval.yfilter)
	|| ydk::is_set(allow_policy.yfilter)
	|| ydk::is_set(dmzlink_bw.yfilter)
	|| ydk::is_set(next_hop_unchanged.yfilter)
	|| ydk::is_set(route_reflector_client.yfilter)
	|| ydk::is_set(soft_reconfiguration.yfilter)
	|| ydk::is_set(soo.yfilter)
	|| ydk::is_set(unsuppress_map.yfilter)
	|| ydk::is_set(weight.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (advertise !=  nullptr && advertise->has_operation())
	|| (allowas_in !=  nullptr && allowas_in->has_operation())
	|| (encap !=  nullptr && encap->has_operation())
	|| (inherit !=  nullptr && inherit->has_operation())
	|| (maximum_prefix !=  nullptr && maximum_prefix->has_operation())
	|| (next_hop_self !=  nullptr && next_hop_self->has_operation())
	|| (remove_private_as !=  nullptr && remove_private_as->has_operation())
	|| (send_community !=  nullptr && send_community->has_operation())
	|| (slow_peer !=  nullptr && slow_peer->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "neighbor";
    ADD_KEY_TOKEN(id, "id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());
    if (activate.is_set || is_set(activate.yfilter)) leaf_name_data.push_back(activate.get_name_leafdata());
    if (advertisement_interval.is_set || is_set(advertisement_interval.yfilter)) leaf_name_data.push_back(advertisement_interval.get_name_leafdata());
    if (allow_policy.is_set || is_set(allow_policy.yfilter)) leaf_name_data.push_back(allow_policy.get_name_leafdata());
    if (dmzlink_bw.is_set || is_set(dmzlink_bw.yfilter)) leaf_name_data.push_back(dmzlink_bw.get_name_leafdata());
    if (next_hop_unchanged.is_set || is_set(next_hop_unchanged.yfilter)) leaf_name_data.push_back(next_hop_unchanged.get_name_leafdata());
    if (route_reflector_client.is_set || is_set(route_reflector_client.yfilter)) leaf_name_data.push_back(route_reflector_client.get_name_leafdata());
    if (soft_reconfiguration.is_set || is_set(soft_reconfiguration.yfilter)) leaf_name_data.push_back(soft_reconfiguration.get_name_leafdata());
    if (soo.is_set || is_set(soo.yfilter)) leaf_name_data.push_back(soo.get_name_leafdata());
    if (unsuppress_map.is_set || is_set(unsuppress_map.yfilter)) leaf_name_data.push_back(unsuppress_map.get_name_leafdata());
    if (weight.is_set || is_set(weight.yfilter)) leaf_name_data.push_back(weight.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "advertise")
    {
        if(advertise == nullptr)
        {
            advertise = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise>();
        }
        return advertise;
    }

    if(child_yang_name == "allowas-in")
    {
        if(allowas_in == nullptr)
        {
            allowas_in = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn>();
        }
        return allowas_in;
    }

    if(child_yang_name == "distribute-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList>();
        ent_->parent = this;
        distribute_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "encap")
    {
        if(encap == nullptr)
        {
            encap = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap>();
        }
        return encap;
    }

    if(child_yang_name == "filter-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList>();
        ent_->parent = this;
        filter_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "inherit")
    {
        if(inherit == nullptr)
        {
            inherit = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit>();
        }
        return inherit;
    }

    if(child_yang_name == "maximum-prefix")
    {
        if(maximum_prefix == nullptr)
        {
            maximum_prefix = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix>();
        }
        return maximum_prefix;
    }

    if(child_yang_name == "next-hop-self")
    {
        if(next_hop_self == nullptr)
        {
            next_hop_self = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf>();
        }
        return next_hop_self;
    }

    if(child_yang_name == "prefix-list")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList>();
        ent_->parent = this;
        prefix_list.append(ent_);
        return ent_;
    }

    if(child_yang_name == "remove-private-as")
    {
        if(remove_private_as == nullptr)
        {
            remove_private_as = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs>();
        }
        return remove_private_as;
    }

    if(child_yang_name == "route-map")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap>();
        ent_->parent = this;
        route_map.append(ent_);
        return ent_;
    }

    if(child_yang_name == "send-community")
    {
        if(send_community == nullptr)
        {
            send_community = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity>();
        }
        return send_community;
    }

    if(child_yang_name == "slow-peer")
    {
        if(slow_peer == nullptr)
        {
            slow_peer = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer>();
        }
        return slow_peer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(additional_paths != nullptr)
    {
        _children["additional-paths"] = additional_paths;
    }

    if(advertise != nullptr)
    {
        _children["advertise"] = advertise;
    }

    if(allowas_in != nullptr)
    {
        _children["allowas-in"] = allowas_in;
    }

    count_ = 0;
    for (auto ent_ : distribute_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(encap != nullptr)
    {
        _children["encap"] = encap;
    }

    count_ = 0;
    for (auto ent_ : filter_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(inherit != nullptr)
    {
        _children["inherit"] = inherit;
    }

    if(maximum_prefix != nullptr)
    {
        _children["maximum-prefix"] = maximum_prefix;
    }

    if(next_hop_self != nullptr)
    {
        _children["next-hop-self"] = next_hop_self;
    }

    count_ = 0;
    for (auto ent_ : prefix_list.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(remove_private_as != nullptr)
    {
        _children["remove-private-as"] = remove_private_as;
    }

    count_ = 0;
    for (auto ent_ : route_map.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    if(send_community != nullptr)
    {
        _children["send-community"] = send_community;
    }

    if(slow_peer != nullptr)
    {
        _children["slow-peer"] = slow_peer;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activate")
    {
        activate = value;
        activate.value_namespace = name_space;
        activate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval = value;
        advertisement_interval.value_namespace = name_space;
        advertisement_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "allow-policy")
    {
        allow_policy = value;
        allow_policy.value_namespace = name_space;
        allow_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw = value;
        dmzlink_bw.value_namespace = name_space;
        dmzlink_bw.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged = value;
        next_hop_unchanged.value_namespace = name_space;
        next_hop_unchanged.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client = value;
        route_reflector_client.value_namespace = name_space;
        route_reflector_client.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration = value;
        soft_reconfiguration.value_namespace = name_space;
        soft_reconfiguration.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "soo")
    {
        soo = value;
        soo.value_namespace = name_space;
        soo.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map = value;
        unsuppress_map.value_namespace = name_space;
        unsuppress_map.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "weight")
    {
        weight = value;
        weight.value_namespace = name_space;
        weight.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
    if(value_path == "activate")
    {
        activate.yfilter = yfilter;
    }
    if(value_path == "advertisement-interval")
    {
        advertisement_interval.yfilter = yfilter;
    }
    if(value_path == "allow-policy")
    {
        allow_policy.yfilter = yfilter;
    }
    if(value_path == "dmzlink-bw")
    {
        dmzlink_bw.yfilter = yfilter;
    }
    if(value_path == "next-hop-unchanged")
    {
        next_hop_unchanged.yfilter = yfilter;
    }
    if(value_path == "route-reflector-client")
    {
        route_reflector_client.yfilter = yfilter;
    }
    if(value_path == "soft-reconfiguration")
    {
        soft_reconfiguration.yfilter = yfilter;
    }
    if(value_path == "soo")
    {
        soo.yfilter = yfilter;
    }
    if(value_path == "unsuppress-map")
    {
        unsuppress_map.yfilter = yfilter;
    }
    if(value_path == "weight")
    {
        weight.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "advertise" || name == "allowas-in" || name == "distribute-list" || name == "encap" || name == "filter-list" || name == "inherit" || name == "maximum-prefix" || name == "next-hop-self" || name == "prefix-list" || name == "remove-private-as" || name == "route-map" || name == "send-community" || name == "slow-peer" || name == "id" || name == "activate" || name == "advertisement-interval" || name == "allow-policy" || name == "dmzlink-bw" || name == "next-hop-unchanged" || name == "route-reflector-client" || name == "soft-reconfiguration" || name == "soo" || name == "unsuppress-map" || name == "weight")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::AdditionalPaths()
    :
    disable{YType::empty, "disable"},
    receive{YType::empty, "receive"}
        ,
    send(nullptr) // presence node
{

    yang_name = "additional-paths"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return disable.is_set
	|| receive.is_set
	|| (send !=  nullptr && send->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disable.yfilter)
	|| ydk::is_set(receive.yfilter)
	|| (send !=  nullptr && send->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.yfilter)) leaf_name_data.push_back(disable.get_name_leafdata());
    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send>();
        }
        return send;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(send != nullptr)
    {
        _children["send"] = send;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disable")
    {
        disable = value;
        disable.value_namespace = name_space;
        disable.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disable")
    {
        disable.yfilter = yfilter;
    }
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send" || name == "disable" || name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::Send()
    :
    receive{YType::empty, "receive"}
{

    yang_name = "send"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::~Send()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::has_data() const
{
    if (is_presence_container) return true;
    return receive.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(receive.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive.is_set || is_set(receive.yfilter)) leaf_name_data.push_back(receive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "receive")
    {
        receive = value;
        receive.value_namespace = name_space;
        receive.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "receive")
    {
        receive.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AdditionalPaths::Send::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "receive")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::Advertise()
    :
    best_external{YType::empty, "best-external"}
        ,
    additional_paths(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths>())
    , diverse_path(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath>())
{
    additional_paths->parent = this;
    diverse_path->parent = this;

    yang_name = "advertise"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::~Advertise()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::has_data() const
{
    if (is_presence_container) return true;
    return best_external.is_set
	|| (additional_paths !=  nullptr && additional_paths->has_data())
	|| (diverse_path !=  nullptr && diverse_path->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best_external.yfilter)
	|| (additional_paths !=  nullptr && additional_paths->has_operation())
	|| (diverse_path !=  nullptr && diverse_path->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "advertise";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best_external.is_set || is_set(best_external.yfilter)) leaf_name_data.push_back(best_external.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "additional-paths")
    {
        if(additional_paths == nullptr)
        {
            additional_paths = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths>();
        }
        return additional_paths;
    }

    if(child_yang_name == "diverse-path")
    {
        if(diverse_path == nullptr)
        {
            diverse_path = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath>();
        }
        return diverse_path;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(additional_paths != nullptr)
    {
        _children["additional-paths"] = additional_paths;
    }

    if(diverse_path != nullptr)
    {
        _children["diverse-path"] = diverse_path;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best-external")
    {
        best_external = value;
        best_external.value_namespace = name_space;
        best_external.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best-external")
    {
        best_external.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "additional-paths" || name == "diverse-path" || name == "best-external")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::AdditionalPaths()
    :
    all(nullptr) // presence node
    , best(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best>())
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "additional-paths"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::~AdditionalPaths()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data())
	|| (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation())
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "additional-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All>();
        }
        return all;
    }

    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::All()
    :
    best(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best>())
    , group_best(nullptr) // presence node
{
    best->parent = this;

    yang_name = "all"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::has_data() const
{
    if (is_presence_container) return true;
    return (best !=  nullptr && best->has_data())
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::has_operation() const
{
    return is_set(yfilter)
	|| (best !=  nullptr && best->has_operation())
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best")
    {
        if(best == nullptr)
        {
            best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best>();
        }
        return best;
    }

    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(best != nullptr)
    {
        _children["best"] = best;
    }

    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::Best()
    :
    best_range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange>();
        ent_->parent = this;
        best_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : best_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    group_best{YType::empty, "group-best"}
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| group_best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(group_best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (group_best.is_set || is_set(group_best.yfilter)) leaf_name_data.push_back(group_best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-best")
    {
        group_best = value;
        group_best.value_namespace = name_space;
        group_best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "group-best")
    {
        group_best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "range" || name == "group-best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::GroupBest()
    :
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "all"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::All::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::Best()
    :
    best_range(this, {"range"})
{

    yang_name = "best"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::~Best()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::has_operation() const
{
    for (std::size_t index=0; index<best_range.len(); index++)
    {
        if(best_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "best-range")
    {
        auto ent_ = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange>();
        ent_->parent = this;
        best_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : best_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "best-range")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::BestRange()
    :
    range{YType::uint8, "range"},
    all{YType::empty, "all"}
        ,
    group_best(nullptr) // presence node
{

    yang_name = "best-range"; yang_parent_name = "best"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::~BestRange()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_data() const
{
    if (is_presence_container) return true;
    return range.is_set
	|| all.is_set
	|| (group_best !=  nullptr && group_best->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(range.yfilter)
	|| ydk::is_set(all.yfilter)
	|| (group_best !=  nullptr && group_best->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "best-range";
    ADD_KEY_TOKEN(range, "range");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (range.is_set || is_set(range.yfilter)) leaf_name_data.push_back(range.get_name_leafdata());
    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-best")
    {
        if(group_best == nullptr)
        {
            group_best = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest>();
        }
        return group_best;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(group_best != nullptr)
    {
        _children["group-best"] = group_best;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "range")
    {
        range = value;
        range.value_namespace = name_space;
        range.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "range")
    {
        range.yfilter = yfilter;
    }
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group-best" || name == "range" || name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::GroupBest()
    :
    all{YType::empty, "all"}
{

    yang_name = "group-best"; yang_parent_name = "best-range"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::Best::BestRange::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::GroupBest()
    :
    all{YType::empty, "all"},
    best{YType::uint8, "best"}
{

    yang_name = "group-best"; yang_parent_name = "additional-paths"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::~GroupBest()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set
	|| best.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter)
	|| ydk::is_set(best.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-best";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());
    if (best.is_set || is_set(best.yfilter)) leaf_name_data.push_back(best.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "best")
    {
        best = value;
        best.value_namespace = name_space;
        best.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
    if(value_path == "best")
    {
        best.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::AdditionalPaths::GroupBest::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all" || name == "best")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::DiversePath()
    :
    mpath{YType::empty, "mpath"}
        ,
    backup(nullptr) // presence node
{

    yang_name = "diverse-path"; yang_parent_name = "advertise"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::~DiversePath()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::has_data() const
{
    if (is_presence_container) return true;
    return mpath.is_set
	|| (backup !=  nullptr && backup->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpath.yfilter)
	|| (backup !=  nullptr && backup->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "diverse-path";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.yfilter)) leaf_name_data.push_back(mpath.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup>();
        }
        return backup;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpath")
    {
        mpath = value;
        mpath.value_namespace = name_space;
        mpath.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpath")
    {
        mpath.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "mpath")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::Backup()
    :
    mpath{YType::empty, "mpath"}
{

    yang_name = "backup"; yang_parent_name = "diverse-path"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::~Backup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::has_data() const
{
    if (is_presence_container) return true;
    return mpath.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpath.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpath.is_set || is_set(mpath.yfilter)) leaf_name_data.push_back(mpath.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpath")
    {
        mpath = value;
        mpath.value_namespace = name_space;
        mpath.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpath")
    {
        mpath.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Advertise::DiversePath::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpath")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::DistributeList()
    :
    inout{YType::enumeration, "inout"},
    accesslist{YType::str, "accesslist"}
{

    yang_name = "distribute-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::~DistributeList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| accesslist.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(accesslist.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "distribute-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (accesslist.is_set || is_set(accesslist.yfilter)) leaf_name_data.push_back(accesslist.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accesslist")
    {
        accesslist = value;
        accesslist.value_namespace = name_space;
        accesslist.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "accesslist")
    {
        accesslist.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "accesslist")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::Encap()
    :
    mpls{YType::empty, "mpls"},
    vxlan{YType::empty, "vxlan"}
{

    yang_name = "encap"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::~Encap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::has_data() const
{
    if (is_presence_container) return true;
    return mpls.is_set
	|| vxlan.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mpls.yfilter)
	|| ydk::is_set(vxlan.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "encap";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mpls.is_set || is_set(mpls.yfilter)) leaf_name_data.push_back(mpls.get_name_leafdata());
    if (vxlan.is_set || is_set(vxlan.yfilter)) leaf_name_data.push_back(vxlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mpls")
    {
        mpls = value;
        mpls.value_namespace = name_space;
        mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vxlan")
    {
        vxlan = value;
        vxlan.value_namespace = name_space;
        vxlan.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mpls")
    {
        mpls.yfilter = yfilter;
    }
    if(value_path == "vxlan")
    {
        vxlan.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Encap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls" || name == "vxlan")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::FilterList()
    :
    inout{YType::enumeration, "inout"},
    as_path_list{YType::uint16, "as-path-list"}
{

    yang_name = "filter-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::~FilterList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| as_path_list.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(as_path_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "filter-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (as_path_list.is_set || is_set(as_path_list.yfilter)) leaf_name_data.push_back(as_path_list.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "as-path-list")
    {
        as_path_list = value;
        as_path_list.value_namespace = name_space;
        as_path_list.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "as-path-list")
    {
        as_path_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "as-path-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::PrefixList()
    :
    inout{YType::enumeration, "inout"},
    prefix_list_name{YType::str, "prefix-list-name"}
{

    yang_name = "prefix-list"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::~PrefixList()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| prefix_list_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(prefix_list_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (prefix_list_name.is_set || is_set(prefix_list_name.yfilter)) leaf_name_data.push_back(prefix_list_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name = value;
        prefix_list_name.value_namespace = name_space;
        prefix_list_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "prefix-list-name")
    {
        prefix_list_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "prefix-list-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::All()
    :
    replace_as{YType::empty, "replace-as"}
{

    yang_name = "all"; yang_parent_name = "remove-private-as"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::~All()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::has_data() const
{
    if (is_presence_container) return true;
    return replace_as.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(replace_as.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "all";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (replace_as.is_set || is_set(replace_as.yfilter)) leaf_name_data.push_back(replace_as.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "replace-as")
    {
        replace_as = value;
        replace_as.value_namespace = name_space;
        replace_as.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "replace-as")
    {
        replace_as.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RemovePrivateAs::All::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "replace-as")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::RouteMap()
    :
    inout{YType::enumeration, "inout"},
    route_map_name{YType::str, "route-map-name"}
{

    yang_name = "route-map"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::~RouteMap()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::has_data() const
{
    if (is_presence_container) return true;
    return inout.is_set
	|| route_map_name.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inout.yfilter)
	|| ydk::is_set(route_map_name.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-map";
    ADD_KEY_TOKEN(inout, "inout");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inout.is_set || is_set(inout.yfilter)) leaf_name_data.push_back(inout.get_name_leafdata());
    if (route_map_name.is_set || is_set(route_map_name.yfilter)) leaf_name_data.push_back(route_map_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inout")
    {
        inout = value;
        inout.value_namespace = name_space;
        inout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route-map-name")
    {
        route_map_name = value;
        route_map_name.value_namespace = name_space;
        route_map_name.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inout")
    {
        inout.yfilter = yfilter;
    }
    if(value_path == "route-map-name")
    {
        route_map_name.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inout" || name == "route-map-name")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::SendCommunity()
    :
    send_community_where{YType::enumeration, "send-community-where"}
{

    yang_name = "send-community"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::~SendCommunity()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::has_data() const
{
    if (is_presence_container) return true;
    return send_community_where.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_community_where.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-community";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_community_where.is_set || is_set(send_community_where.yfilter)) leaf_name_data.push_back(send_community_where.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-community-where")
    {
        send_community_where = value;
        send_community_where.value_namespace = name_space;
        send_community_where.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-community-where")
    {
        send_community_where.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-community-where")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SlowPeer()
    :
    detection(nullptr) // presence node
    , split_update_group(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup>())
{
    split_update_group->parent = this;

    yang_name = "slow-peer"; yang_parent_name = "neighbor"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::~SlowPeer()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::has_data() const
{
    if (is_presence_container) return true;
    return (detection !=  nullptr && detection->has_data())
	|| (split_update_group !=  nullptr && split_update_group->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::has_operation() const
{
    return is_set(yfilter)
	|| (detection !=  nullptr && detection->has_operation())
	|| (split_update_group !=  nullptr && split_update_group->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slow-peer";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detection")
    {
        if(detection == nullptr)
        {
            detection = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection>();
        }
        return detection;
    }

    if(child_yang_name == "split-update-group")
    {
        if(split_update_group == nullptr)
        {
            split_update_group = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup>();
        }
        return split_update_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detection != nullptr)
    {
        _children["detection"] = detection;
    }

    if(split_update_group != nullptr)
    {
        _children["split-update-group"] = split_update_group;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detection" || name == "split-update-group")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::Detection()
    :
    threshold{YType::uint16, "threshold"}
{

    yang_name = "detection"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::~Detection()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::has_data() const
{
    if (is_presence_container) return true;
    return threshold.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(threshold.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detection";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::Detection::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "threshold")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::SplitUpdateGroup()
    :
    dynamic(nullptr) // presence node
{

    yang_name = "split-update-group"; yang_parent_name = "slow-peer"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::~SplitUpdateGroup()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::has_data() const
{
    if (is_presence_container) return true;
    return (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::has_operation() const
{
    return is_set(yfilter)
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "split-update-group";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic>();
        }
        return dynamic;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(dynamic != nullptr)
    {
        _children["dynamic"] = dynamic;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::Dynamic()
    :
    permanent{YType::empty, "permanent"}
{

    yang_name = "dynamic"; yang_parent_name = "split-update-group"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::~Dynamic()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_data() const
{
    if (is_presence_container) return true;
    return permanent.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(permanent.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (permanent.is_set || is_set(permanent.yfilter)) leaf_name_data.push_back(permanent.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "permanent")
    {
        permanent = value;
        permanent.value_namespace = name_space;
        permanent.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "permanent")
    {
        permanent.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SlowPeer::SplitUpdateGroup::Dynamic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "permanent")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::AllowasIn()
    :
    as_number{YType::uint8, "as-number"}
{

    yang_name = "allowas-in"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::~AllowasIn()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::has_data() const
{
    if (is_presence_container) return true;
    return as_number.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(as_number.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "allowas-in";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (as_number.is_set || is_set(as_number.yfilter)) leaf_name_data.push_back(as_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "as-number")
    {
        as_number = value;
        as_number.value_namespace = name_space;
        as_number.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "as-number")
    {
        as_number.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::AllowasIn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "as-number")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Capability()
    :
    orf(std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf>())
{
    orf->parent = this;

    yang_name = "capability"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::~Capability()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::has_data() const
{
    if (is_presence_container) return true;
    return (orf !=  nullptr && orf->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::has_operation() const
{
    return is_set(yfilter)
	|| (orf !=  nullptr && orf->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "capability";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "orf")
    {
        if(orf == nullptr)
        {
            orf = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf>();
        }
        return orf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(orf != nullptr)
    {
        _children["orf"] = orf;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "orf")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::Orf()
    :
    prefix_list{YType::enumeration, "prefix-list"}
{

    yang_name = "orf"; yang_parent_name = "capability"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::~Orf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return false;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::has_operation() const
{
    for (auto const & leaf : prefix_list.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(prefix_list.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "orf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    auto prefix_list_name_datas = prefix_list.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), prefix_list_name_datas.begin(), prefix_list_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "prefix-list")
    {
        prefix_list.append(value);
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "prefix-list")
    {
        prefix_list.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "prefix-list")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::Inherit()
    :
    peer_policy{YType::str, "peer-policy"},
    peer_session{YType::str, "peer-session"}
{

    yang_name = "inherit"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::~Inherit()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::has_data() const
{
    if (is_presence_container) return true;
    return peer_policy.is_set
	|| peer_session.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_policy.yfilter)
	|| ydk::is_set(peer_session.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "inherit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_policy.is_set || is_set(peer_policy.yfilter)) leaf_name_data.push_back(peer_policy.get_name_leafdata());
    if (peer_session.is_set || is_set(peer_session.yfilter)) leaf_name_data.push_back(peer_session.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-policy")
    {
        peer_policy = value;
        peer_policy.value_namespace = name_space;
        peer_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peer-session")
    {
        peer_session = value;
        peer_session.value_namespace = name_space;
        peer_session.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-policy")
    {
        peer_policy.yfilter = yfilter;
    }
    if(value_path == "peer-session")
    {
        peer_session.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Inherit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-policy" || name == "peer-session")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::MaximumPrefix()
    :
    max_prefix_no{YType::uint32, "max-prefix-no"},
    threshold{YType::uint8, "threshold"},
    restart{YType::uint16, "restart"},
    warning_only{YType::empty, "warning-only"}
{

    yang_name = "maximum-prefix"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; 
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::~MaximumPrefix()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::has_data() const
{
    if (is_presence_container) return true;
    return max_prefix_no.is_set
	|| threshold.is_set
	|| restart.is_set
	|| warning_only.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(max_prefix_no.yfilter)
	|| ydk::is_set(threshold.yfilter)
	|| ydk::is_set(restart.yfilter)
	|| ydk::is_set(warning_only.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "maximum-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_prefix_no.is_set || is_set(max_prefix_no.yfilter)) leaf_name_data.push_back(max_prefix_no.get_name_leafdata());
    if (threshold.is_set || is_set(threshold.yfilter)) leaf_name_data.push_back(threshold.get_name_leafdata());
    if (restart.is_set || is_set(restart.yfilter)) leaf_name_data.push_back(restart.get_name_leafdata());
    if (warning_only.is_set || is_set(warning_only.yfilter)) leaf_name_data.push_back(warning_only.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no = value;
        max_prefix_no.value_namespace = name_space;
        max_prefix_no.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "threshold")
    {
        threshold = value;
        threshold.value_namespace = name_space;
        threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "restart")
    {
        restart = value;
        restart.value_namespace = name_space;
        restart.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "warning-only")
    {
        warning_only = value;
        warning_only.value_namespace = name_space;
        warning_only.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "max-prefix-no")
    {
        max_prefix_no.yfilter = yfilter;
    }
    if(value_path == "threshold")
    {
        threshold.yfilter = yfilter;
    }
    if(value_path == "restart")
    {
        restart.yfilter = yfilter;
    }
    if(value_path == "warning-only")
    {
        warning_only.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::MaximumPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "max-prefix-no" || name == "threshold" || name == "restart" || name == "warning-only")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::NextHopSelf()
    :
    all{YType::empty, "all"}
{

    yang_name = "next-hop-self"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::~NextHopSelf()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::has_data() const
{
    if (is_presence_container) return true;
    return all.is_set;
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(all.yfilter);
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-self";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.yfilter)) leaf_name_data.push_back(all.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "all")
    {
        all = value;
        all.value_namespace = name_space;
        all.value_namespace_prefix = name_space_prefix;
    }
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "all")
    {
        all.yfilter = yfilter;
    }
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::NextHopSelf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::RemovePrivateAs()
    :
    all(nullptr) // presence node
{

    yang_name = "remove-private-as"; yang_parent_name = "l2vpn-evpn"; is_top_level_class = false; has_list_ancestor = true; is_presence_container = true;
}

Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::~RemovePrivateAs()
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::has_data() const
{
    if (is_presence_container) return true;
    return (all !=  nullptr && all->has_data());
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::has_operation() const
{
    return is_set(yfilter)
	|| (all !=  nullptr && all->has_operation());
}

std::string Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remove-private-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "all")
    {
        if(all == nullptr)
        {
            all = std::make_shared<Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::All>();
        }
        return all;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(all != nullptr)
    {
        _children["all"] = all;
    }

    return _children;
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::RemovePrivateAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "all")
        return true;
    return false;
}

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::AfName::unicast {0, "unicast"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Bgp_::AggregateTimer::DisableTimer::Y_0 {0, "0"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::FilterList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::PrefixList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::Capability::Orf::PrefixList::send {2, "send"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::FilterList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::PrefixList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::Nsap::Nsap_::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::AfName::evpn {0, "evpn"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::AfName::vpls {1, "vpls"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Bgp_::Default::RouteTarget::filter {0, "filter"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::DistributeList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::FilterList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::PrefixList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::PeerGroup::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SoftReconfiguration::inbound {0, "inbound"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::DistributeList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::FilterList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::PrefixList::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::Inout::in {0, "in"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::RouteMap::Inout::out {1, "out"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::SendCommunityWhere::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::SendCommunityWhere::extended {1, "extended"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Neighbor::SendCommunity::SendCommunityWhere::standard {2, "standard"};

const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::PrefixList::both {0, "both"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::PrefixList::receive {1, "receive"};
const Enum::YLeaf Native::Router::Bgp::Scope::Global::AddressFamily::NoVrf::L2vpn::L2vpnEvpn::Capability::Orf::PrefixList::send {2, "send"};


}
}

