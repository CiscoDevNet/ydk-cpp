
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_3.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_5.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_27.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_6.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_10.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_4.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_7.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_15.hpp"
#include "Cisco_IOS_XR_l2vpn_oper_14.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_l2vpn_oper {

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePorts()
    :
    l2fib_mroute_port(this, {})
{

    yang_name = "l2fib-mroute-ports"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::~L2fibMroutePorts()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mroute_port.len(); index++)
    {
        if(l2fib_mroute_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mroute_port.len(); index++)
    {
        if(l2fib_mroute_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mroute-port")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort>();
        ent_->parent = this;
        l2fib_mroute_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mroute_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mroute-port")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::L2fibMroutePort()
    :
    bd_name{YType::str, "bd-name"},
    xcid{YType::str, "xcid"},
    evpn_nh{YType::str, "evpn-nh"},
    source{YType::str, "source"},
    group{YType::str, "group"},
    bridge_id{YType::uint32, "bridge-id"},
    ac_interface_handle{YType::str, "ac-interface-handle"},
    is_ndf{YType::boolean, "is-ndf"},
    leaf_pointer{YType::uint32, "leaf-pointer"},
    pw_id{YType::str, "pw-id"},
    next_hop_address{YType::str, "next-hop-address"},
    isid{YType::uint32, "isid"},
    csfl{YType::uint32, "csfl"},
    sat_id{YType::uint16, "sat-id"},
    is_ole_offloaded{YType::boolean, "is-ole-offloaded"},
    is_ole_master{YType::boolean, "is-ole-master"},
    is_topo_hub_and_spoke{YType::boolean, "is-topo-hub-and-spoke"},
    is_evpn_xid{YType::boolean, "is-evpn-xid"},
    evpn_next_hop{YType::str, "evpn-next-hop"}
        ,
    forward_stats(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats>())
    , source_prefix(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix>())
    , destination_prefix(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix>())
{
    forward_stats->parent = this;
    source_prefix->parent = this;
    destination_prefix->parent = this;

    yang_name = "l2fib-mroute-port"; yang_parent_name = "l2fib-mroute-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::~L2fibMroutePort()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::has_data() const
{
    if (is_presence_container) return true;
    return bd_name.is_set
	|| xcid.is_set
	|| evpn_nh.is_set
	|| source.is_set
	|| group.is_set
	|| bridge_id.is_set
	|| ac_interface_handle.is_set
	|| is_ndf.is_set
	|| leaf_pointer.is_set
	|| pw_id.is_set
	|| next_hop_address.is_set
	|| isid.is_set
	|| csfl.is_set
	|| sat_id.is_set
	|| is_ole_offloaded.is_set
	|| is_ole_master.is_set
	|| is_topo_hub_and_spoke.is_set
	|| is_evpn_xid.is_set
	|| evpn_next_hop.is_set
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(evpn_nh.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(ac_interface_handle.yfilter)
	|| ydk::is_set(is_ndf.yfilter)
	|| ydk::is_set(leaf_pointer.yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(isid.yfilter)
	|| ydk::is_set(csfl.yfilter)
	|| ydk::is_set(sat_id.yfilter)
	|| ydk::is_set(is_ole_offloaded.yfilter)
	|| ydk::is_set(is_ole_master.yfilter)
	|| ydk::is_set(is_topo_hub_and_spoke.yfilter)
	|| ydk::is_set(is_evpn_xid.yfilter)
	|| ydk::is_set(evpn_next_hop.yfilter)
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mroute-port";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (evpn_nh.is_set || is_set(evpn_nh.yfilter)) leaf_name_data.push_back(evpn_nh.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (ac_interface_handle.is_set || is_set(ac_interface_handle.yfilter)) leaf_name_data.push_back(ac_interface_handle.get_name_leafdata());
    if (is_ndf.is_set || is_set(is_ndf.yfilter)) leaf_name_data.push_back(is_ndf.get_name_leafdata());
    if (leaf_pointer.is_set || is_set(leaf_pointer.yfilter)) leaf_name_data.push_back(leaf_pointer.get_name_leafdata());
    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (isid.is_set || is_set(isid.yfilter)) leaf_name_data.push_back(isid.get_name_leafdata());
    if (csfl.is_set || is_set(csfl.yfilter)) leaf_name_data.push_back(csfl.get_name_leafdata());
    if (sat_id.is_set || is_set(sat_id.yfilter)) leaf_name_data.push_back(sat_id.get_name_leafdata());
    if (is_ole_offloaded.is_set || is_set(is_ole_offloaded.yfilter)) leaf_name_data.push_back(is_ole_offloaded.get_name_leafdata());
    if (is_ole_master.is_set || is_set(is_ole_master.yfilter)) leaf_name_data.push_back(is_ole_master.get_name_leafdata());
    if (is_topo_hub_and_spoke.is_set || is_set(is_topo_hub_and_spoke.yfilter)) leaf_name_data.push_back(is_topo_hub_and_spoke.get_name_leafdata());
    if (is_evpn_xid.is_set || is_set(is_evpn_xid.yfilter)) leaf_name_data.push_back(is_evpn_xid.get_name_leafdata());
    if (evpn_next_hop.is_set || is_set(evpn_next_hop.yfilter)) leaf_name_data.push_back(evpn_next_hop.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix>();
        }
        return destination_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forward_stats != nullptr)
    {
        _children["forward-stats"] = forward_stats;
    }

    if(source_prefix != nullptr)
    {
        _children["source-prefix"] = source_prefix;
    }

    if(destination_prefix != nullptr)
    {
        _children["destination-prefix"] = destination_prefix;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-nh")
    {
        evpn_nh = value;
        evpn_nh.value_namespace = name_space;
        evpn_nh.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-interface-handle")
    {
        ac_interface_handle = value;
        ac_interface_handle.value_namespace = name_space;
        ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ndf")
    {
        is_ndf = value;
        is_ndf.value_namespace = name_space;
        is_ndf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "leaf-pointer")
    {
        leaf_pointer = value;
        leaf_pointer.value_namespace = name_space;
        leaf_pointer.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isid")
    {
        isid = value;
        isid.value_namespace = name_space;
        isid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "csfl")
    {
        csfl = value;
        csfl.value_namespace = name_space;
        csfl.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sat-id")
    {
        sat_id = value;
        sat_id.value_namespace = name_space;
        sat_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ole-offloaded")
    {
        is_ole_offloaded = value;
        is_ole_offloaded.value_namespace = name_space;
        is_ole_offloaded.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ole-master")
    {
        is_ole_master = value;
        is_ole_master.value_namespace = name_space;
        is_ole_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-topo-hub-and-spoke")
    {
        is_topo_hub_and_spoke = value;
        is_topo_hub_and_spoke.value_namespace = name_space;
        is_topo_hub_and_spoke.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-evpn-xid")
    {
        is_evpn_xid = value;
        is_evpn_xid.value_namespace = name_space;
        is_evpn_xid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-next-hop")
    {
        evpn_next_hop = value;
        evpn_next_hop.value_namespace = name_space;
        evpn_next_hop.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "evpn-nh")
    {
        evpn_nh.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "ac-interface-handle")
    {
        ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "is-ndf")
    {
        is_ndf.yfilter = yfilter;
    }
    if(value_path == "leaf-pointer")
    {
        leaf_pointer.yfilter = yfilter;
    }
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "isid")
    {
        isid.yfilter = yfilter;
    }
    if(value_path == "csfl")
    {
        csfl.yfilter = yfilter;
    }
    if(value_path == "sat-id")
    {
        sat_id.yfilter = yfilter;
    }
    if(value_path == "is-ole-offloaded")
    {
        is_ole_offloaded.yfilter = yfilter;
    }
    if(value_path == "is-ole-master")
    {
        is_ole_master.yfilter = yfilter;
    }
    if(value_path == "is-topo-hub-and-spoke")
    {
        is_topo_hub_and_spoke.yfilter = yfilter;
    }
    if(value_path == "is-evpn-xid")
    {
        is_evpn_xid.yfilter = yfilter;
    }
    if(value_path == "evpn-next-hop")
    {
        evpn_next_hop.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stats" || name == "source-prefix" || name == "destination-prefix" || name == "bd-name" || name == "xcid" || name == "evpn-nh" || name == "source" || name == "group" || name == "bridge-id" || name == "ac-interface-handle" || name == "is-ndf" || name == "leaf-pointer" || name == "pw-id" || name == "next-hop-address" || name == "isid" || name == "csfl" || name == "sat-id" || name == "is-ole-offloaded" || name == "is-ole-master" || name == "is-topo-hub-and-spoke" || name == "is-evpn-xid" || name == "evpn-next-hop")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::~ForwardStats()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::has_data() const
{
    if (is_presence_container) return true;
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forward_stat != nullptr)
    {
        _children["forward-stat"] = forward_stat;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mulicast(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mulicast != nullptr)
    {
        _children["mulicast"] = mulicast;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    multicast_forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
    , received_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
    , punt(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt>())
    , drop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop>())
    , multicast_core_forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
    , core_received_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
{
    multicast_forward_stat->parent = this;
    received_stat->parent = this;
    punt->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    core_received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    if (is_presence_container) return true;
    return (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (core_received_stat !=  nullptr && core_received_stat->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_forward_stat != nullptr)
    {
        _children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(received_stat != nullptr)
    {
        _children["received-stat"] = received_stat;
    }

    if(punt != nullptr)
    {
        _children["punt"] = punt;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        _children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(core_received_stat != nullptr)
    {
        _children["core-received-stat"] = core_received_stat;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-forward-stat" || name == "received-stat" || name == "punt" || name == "drop" || name == "multicast-core-forward-stat" || name == "core-received-stat")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::SourcePrefix()
    :
    proto{YType::enumeration, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::~SourcePrefix()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::DestinationPrefix()
    :
    proto{YType::enumeration, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mroute-port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::~DestinationPrefix()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMroutePorts::L2fibMroutePort::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::L2fibSummary()
    :
    xconnect_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary>())
    , next_hop_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary>())
    , l2tp_disposition_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary>())
    , bridge_domain_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary>())
    , mac_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary>())
    , queue_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary>())
    , evpn_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary>())
    , global_cfg(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg>())
    , ptree_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary>())
    , pw_group_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary>())
    , pwhe_mp_summary(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary>())
{
    xconnect_summary->parent = this;
    next_hop_summary->parent = this;
    l2tp_disposition_summary->parent = this;
    bridge_domain_summary->parent = this;
    mac_summary->parent = this;
    queue_summary->parent = this;
    evpn_summary->parent = this;
    global_cfg->parent = this;
    ptree_summary->parent = this;
    pw_group_summary->parent = this;
    pwhe_mp_summary->parent = this;

    yang_name = "l2fib-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::~L2fibSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::has_data() const
{
    if (is_presence_container) return true;
    return (xconnect_summary !=  nullptr && xconnect_summary->has_data())
	|| (next_hop_summary !=  nullptr && next_hop_summary->has_data())
	|| (l2tp_disposition_summary !=  nullptr && l2tp_disposition_summary->has_data())
	|| (bridge_domain_summary !=  nullptr && bridge_domain_summary->has_data())
	|| (mac_summary !=  nullptr && mac_summary->has_data())
	|| (queue_summary !=  nullptr && queue_summary->has_data())
	|| (evpn_summary !=  nullptr && evpn_summary->has_data())
	|| (global_cfg !=  nullptr && global_cfg->has_data())
	|| (ptree_summary !=  nullptr && ptree_summary->has_data())
	|| (pw_group_summary !=  nullptr && pw_group_summary->has_data())
	|| (pwhe_mp_summary !=  nullptr && pwhe_mp_summary->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::has_operation() const
{
    return is_set(yfilter)
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_operation())
	|| (next_hop_summary !=  nullptr && next_hop_summary->has_operation())
	|| (l2tp_disposition_summary !=  nullptr && l2tp_disposition_summary->has_operation())
	|| (bridge_domain_summary !=  nullptr && bridge_domain_summary->has_operation())
	|| (mac_summary !=  nullptr && mac_summary->has_operation())
	|| (queue_summary !=  nullptr && queue_summary->has_operation())
	|| (evpn_summary !=  nullptr && evpn_summary->has_operation())
	|| (global_cfg !=  nullptr && global_cfg->has_operation())
	|| (ptree_summary !=  nullptr && ptree_summary->has_operation())
	|| (pw_group_summary !=  nullptr && pw_group_summary->has_operation())
	|| (pwhe_mp_summary !=  nullptr && pwhe_mp_summary->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-summary")
    {
        if(xconnect_summary == nullptr)
        {
            xconnect_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary>();
        }
        return xconnect_summary;
    }

    if(child_yang_name == "next-hop-summary")
    {
        if(next_hop_summary == nullptr)
        {
            next_hop_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary>();
        }
        return next_hop_summary;
    }

    if(child_yang_name == "l2tp-disposition-summary")
    {
        if(l2tp_disposition_summary == nullptr)
        {
            l2tp_disposition_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary>();
        }
        return l2tp_disposition_summary;
    }

    if(child_yang_name == "bridge-domain-summary")
    {
        if(bridge_domain_summary == nullptr)
        {
            bridge_domain_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary>();
        }
        return bridge_domain_summary;
    }

    if(child_yang_name == "mac-summary")
    {
        if(mac_summary == nullptr)
        {
            mac_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary>();
        }
        return mac_summary;
    }

    if(child_yang_name == "queue-summary")
    {
        if(queue_summary == nullptr)
        {
            queue_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary>();
        }
        return queue_summary;
    }

    if(child_yang_name == "evpn-summary")
    {
        if(evpn_summary == nullptr)
        {
            evpn_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary>();
        }
        return evpn_summary;
    }

    if(child_yang_name == "global-cfg")
    {
        if(global_cfg == nullptr)
        {
            global_cfg = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg>();
        }
        return global_cfg;
    }

    if(child_yang_name == "ptree-summary")
    {
        if(ptree_summary == nullptr)
        {
            ptree_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary>();
        }
        return ptree_summary;
    }

    if(child_yang_name == "pw-group-summary")
    {
        if(pw_group_summary == nullptr)
        {
            pw_group_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary>();
        }
        return pw_group_summary;
    }

    if(child_yang_name == "pwhe-mp-summary")
    {
        if(pwhe_mp_summary == nullptr)
        {
            pwhe_mp_summary = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary>();
        }
        return pwhe_mp_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(xconnect_summary != nullptr)
    {
        _children["xconnect-summary"] = xconnect_summary;
    }

    if(next_hop_summary != nullptr)
    {
        _children["next-hop-summary"] = next_hop_summary;
    }

    if(l2tp_disposition_summary != nullptr)
    {
        _children["l2tp-disposition-summary"] = l2tp_disposition_summary;
    }

    if(bridge_domain_summary != nullptr)
    {
        _children["bridge-domain-summary"] = bridge_domain_summary;
    }

    if(mac_summary != nullptr)
    {
        _children["mac-summary"] = mac_summary;
    }

    if(queue_summary != nullptr)
    {
        _children["queue-summary"] = queue_summary;
    }

    if(evpn_summary != nullptr)
    {
        _children["evpn-summary"] = evpn_summary;
    }

    if(global_cfg != nullptr)
    {
        _children["global-cfg"] = global_cfg;
    }

    if(ptree_summary != nullptr)
    {
        _children["ptree-summary"] = ptree_summary;
    }

    if(pw_group_summary != nullptr)
    {
        _children["pw-group-summary"] = pw_group_summary;
    }

    if(pwhe_mp_summary != nullptr)
    {
        _children["pwhe-mp-summary"] = pwhe_mp_summary;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-summary" || name == "next-hop-summary" || name == "l2tp-disposition-summary" || name == "bridge-domain-summary" || name == "mac-summary" || name == "queue-summary" || name == "evpn-summary" || name == "global-cfg" || name == "ptree-summary" || name == "pw-group-summary" || name == "pwhe-mp-summary")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::XconnectSummary()
    :
    xconnect_count{YType::uint32, "xconnect-count"},
    xconnect_up_count{YType::uint32, "xconnect-up-count"},
    xconnect_down_count{YType::uint32, "xconnect-down-count"},
    ac_to_pw_count_mpls{YType::uint32, "ac-to-pw-count-mpls"},
    ac_to_pw_count_l2tp{YType::uint32, "ac-to-pw-count-l2tp"},
    ac_to_pw_count_l2tp_ip_v6{YType::uint32, "ac-to-pw-count-l2tp-ip-v6"},
    ac_to_pw_count_l2tpv2{YType::uint32, "ac-to-pw-count-l2tpv2"},
    ac_to_ac_count{YType::uint32, "ac-to-ac-count"},
    ac_to_unknown_count{YType::uint32, "ac-to-unknown-count"},
    mon_sess_to_pw_count{YType::uint32, "mon-sess-to-pw-count"},
    mon_sess_to_unknown_count{YType::uint32, "mon-sess-to-unknown-count"},
    ac_to_bp_count{YType::uint32, "ac-to-bp-count"},
    pw_to_bp_count{YType::uint32, "pw-to-bp-count"},
    pw_to_unknown_count{YType::uint32, "pw-to-unknown-count"},
    pbb_to_bp_count{YType::uint32, "pbb-to-bp-count"},
    pbb_to_unknown_count{YType::uint32, "pbb-to-unknown-count"},
    vni_to_bp_count{YType::uint32, "vni-to-bp-count"},
    vni_to_unknown_count{YType::uint32, "vni-to-unknown-count"},
    evpn_to_bp_count{YType::uint32, "evpn-to-bp-count"},
    evpn_to_unknown_count{YType::uint32, "evpn-to-unknown-count"},
    ac_down_count_aib{YType::uint32, "ac-down-count-aib"},
    ac_down_count_l2vpn{YType::uint32, "ac-down-count-l2vpn"},
    ac_down_count_l3fib{YType::uint32, "ac-down-count-l3fib"},
    ac_down_count_vpdn{YType::uint32, "ac-down-count-vpdn"},
    vpws_pw_invalid_xid_drop_count{YType::uint32, "vpws-pw-invalid-xid-drop-count"},
    vpls_pw_invalid_xid_drop_count{YType::uint32, "vpls-pw-invalid-xid-drop-count"},
    virtual_ac_invalid_xid_drop_count{YType::uint32, "virtual-ac-invalid-xid-drop-count"},
    pbb_invalid_xid_drop_count{YType::uint32, "pbb-invalid-xid-drop-count"},
    vni_invalid_xid_drop_count{YType::uint32, "vni-invalid-xid-drop-count"},
    evpn_invalid_xid_drop_count{YType::uint32, "evpn-invalid-xid-drop-count"},
    vpls_pw_max_exceeded_drop_cnt{YType::uint32, "vpls-pw-max-exceeded-drop-cnt"},
    bundle_ac_max_exceeded_drop_cnt{YType::uint32, "bundle-ac-max-exceeded-drop-cnt"},
    global_invalid_xid_drop_count{YType::uint32, "global-invalid-xid-drop-count"},
    p2p_count{YType::uint32, "p2p-count"},
    bp_count{YType::uint32, "bp-count"},
    pwhe_l2_if_count{YType::uint32, "pwhe-l2-if-count"}
{

    yang_name = "xconnect-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::~XconnectSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::has_data() const
{
    if (is_presence_container) return true;
    return xconnect_count.is_set
	|| xconnect_up_count.is_set
	|| xconnect_down_count.is_set
	|| ac_to_pw_count_mpls.is_set
	|| ac_to_pw_count_l2tp.is_set
	|| ac_to_pw_count_l2tp_ip_v6.is_set
	|| ac_to_pw_count_l2tpv2.is_set
	|| ac_to_ac_count.is_set
	|| ac_to_unknown_count.is_set
	|| mon_sess_to_pw_count.is_set
	|| mon_sess_to_unknown_count.is_set
	|| ac_to_bp_count.is_set
	|| pw_to_bp_count.is_set
	|| pw_to_unknown_count.is_set
	|| pbb_to_bp_count.is_set
	|| pbb_to_unknown_count.is_set
	|| vni_to_bp_count.is_set
	|| vni_to_unknown_count.is_set
	|| evpn_to_bp_count.is_set
	|| evpn_to_unknown_count.is_set
	|| ac_down_count_aib.is_set
	|| ac_down_count_l2vpn.is_set
	|| ac_down_count_l3fib.is_set
	|| ac_down_count_vpdn.is_set
	|| vpws_pw_invalid_xid_drop_count.is_set
	|| vpls_pw_invalid_xid_drop_count.is_set
	|| virtual_ac_invalid_xid_drop_count.is_set
	|| pbb_invalid_xid_drop_count.is_set
	|| vni_invalid_xid_drop_count.is_set
	|| evpn_invalid_xid_drop_count.is_set
	|| vpls_pw_max_exceeded_drop_cnt.is_set
	|| bundle_ac_max_exceeded_drop_cnt.is_set
	|| global_invalid_xid_drop_count.is_set
	|| p2p_count.is_set
	|| bp_count.is_set
	|| pwhe_l2_if_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_count.yfilter)
	|| ydk::is_set(xconnect_up_count.yfilter)
	|| ydk::is_set(xconnect_down_count.yfilter)
	|| ydk::is_set(ac_to_pw_count_mpls.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tp.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tp_ip_v6.yfilter)
	|| ydk::is_set(ac_to_pw_count_l2tpv2.yfilter)
	|| ydk::is_set(ac_to_ac_count.yfilter)
	|| ydk::is_set(ac_to_unknown_count.yfilter)
	|| ydk::is_set(mon_sess_to_pw_count.yfilter)
	|| ydk::is_set(mon_sess_to_unknown_count.yfilter)
	|| ydk::is_set(ac_to_bp_count.yfilter)
	|| ydk::is_set(pw_to_bp_count.yfilter)
	|| ydk::is_set(pw_to_unknown_count.yfilter)
	|| ydk::is_set(pbb_to_bp_count.yfilter)
	|| ydk::is_set(pbb_to_unknown_count.yfilter)
	|| ydk::is_set(vni_to_bp_count.yfilter)
	|| ydk::is_set(vni_to_unknown_count.yfilter)
	|| ydk::is_set(evpn_to_bp_count.yfilter)
	|| ydk::is_set(evpn_to_unknown_count.yfilter)
	|| ydk::is_set(ac_down_count_aib.yfilter)
	|| ydk::is_set(ac_down_count_l2vpn.yfilter)
	|| ydk::is_set(ac_down_count_l3fib.yfilter)
	|| ydk::is_set(ac_down_count_vpdn.yfilter)
	|| ydk::is_set(vpws_pw_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vpls_pw_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(virtual_ac_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(pbb_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vni_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(evpn_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(vpls_pw_max_exceeded_drop_cnt.yfilter)
	|| ydk::is_set(bundle_ac_max_exceeded_drop_cnt.yfilter)
	|| ydk::is_set(global_invalid_xid_drop_count.yfilter)
	|| ydk::is_set(p2p_count.yfilter)
	|| ydk::is_set(bp_count.yfilter)
	|| ydk::is_set(pwhe_l2_if_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_count.is_set || is_set(xconnect_count.yfilter)) leaf_name_data.push_back(xconnect_count.get_name_leafdata());
    if (xconnect_up_count.is_set || is_set(xconnect_up_count.yfilter)) leaf_name_data.push_back(xconnect_up_count.get_name_leafdata());
    if (xconnect_down_count.is_set || is_set(xconnect_down_count.yfilter)) leaf_name_data.push_back(xconnect_down_count.get_name_leafdata());
    if (ac_to_pw_count_mpls.is_set || is_set(ac_to_pw_count_mpls.yfilter)) leaf_name_data.push_back(ac_to_pw_count_mpls.get_name_leafdata());
    if (ac_to_pw_count_l2tp.is_set || is_set(ac_to_pw_count_l2tp.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tp.get_name_leafdata());
    if (ac_to_pw_count_l2tp_ip_v6.is_set || is_set(ac_to_pw_count_l2tp_ip_v6.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tp_ip_v6.get_name_leafdata());
    if (ac_to_pw_count_l2tpv2.is_set || is_set(ac_to_pw_count_l2tpv2.yfilter)) leaf_name_data.push_back(ac_to_pw_count_l2tpv2.get_name_leafdata());
    if (ac_to_ac_count.is_set || is_set(ac_to_ac_count.yfilter)) leaf_name_data.push_back(ac_to_ac_count.get_name_leafdata());
    if (ac_to_unknown_count.is_set || is_set(ac_to_unknown_count.yfilter)) leaf_name_data.push_back(ac_to_unknown_count.get_name_leafdata());
    if (mon_sess_to_pw_count.is_set || is_set(mon_sess_to_pw_count.yfilter)) leaf_name_data.push_back(mon_sess_to_pw_count.get_name_leafdata());
    if (mon_sess_to_unknown_count.is_set || is_set(mon_sess_to_unknown_count.yfilter)) leaf_name_data.push_back(mon_sess_to_unknown_count.get_name_leafdata());
    if (ac_to_bp_count.is_set || is_set(ac_to_bp_count.yfilter)) leaf_name_data.push_back(ac_to_bp_count.get_name_leafdata());
    if (pw_to_bp_count.is_set || is_set(pw_to_bp_count.yfilter)) leaf_name_data.push_back(pw_to_bp_count.get_name_leafdata());
    if (pw_to_unknown_count.is_set || is_set(pw_to_unknown_count.yfilter)) leaf_name_data.push_back(pw_to_unknown_count.get_name_leafdata());
    if (pbb_to_bp_count.is_set || is_set(pbb_to_bp_count.yfilter)) leaf_name_data.push_back(pbb_to_bp_count.get_name_leafdata());
    if (pbb_to_unknown_count.is_set || is_set(pbb_to_unknown_count.yfilter)) leaf_name_data.push_back(pbb_to_unknown_count.get_name_leafdata());
    if (vni_to_bp_count.is_set || is_set(vni_to_bp_count.yfilter)) leaf_name_data.push_back(vni_to_bp_count.get_name_leafdata());
    if (vni_to_unknown_count.is_set || is_set(vni_to_unknown_count.yfilter)) leaf_name_data.push_back(vni_to_unknown_count.get_name_leafdata());
    if (evpn_to_bp_count.is_set || is_set(evpn_to_bp_count.yfilter)) leaf_name_data.push_back(evpn_to_bp_count.get_name_leafdata());
    if (evpn_to_unknown_count.is_set || is_set(evpn_to_unknown_count.yfilter)) leaf_name_data.push_back(evpn_to_unknown_count.get_name_leafdata());
    if (ac_down_count_aib.is_set || is_set(ac_down_count_aib.yfilter)) leaf_name_data.push_back(ac_down_count_aib.get_name_leafdata());
    if (ac_down_count_l2vpn.is_set || is_set(ac_down_count_l2vpn.yfilter)) leaf_name_data.push_back(ac_down_count_l2vpn.get_name_leafdata());
    if (ac_down_count_l3fib.is_set || is_set(ac_down_count_l3fib.yfilter)) leaf_name_data.push_back(ac_down_count_l3fib.get_name_leafdata());
    if (ac_down_count_vpdn.is_set || is_set(ac_down_count_vpdn.yfilter)) leaf_name_data.push_back(ac_down_count_vpdn.get_name_leafdata());
    if (vpws_pw_invalid_xid_drop_count.is_set || is_set(vpws_pw_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vpws_pw_invalid_xid_drop_count.get_name_leafdata());
    if (vpls_pw_invalid_xid_drop_count.is_set || is_set(vpls_pw_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vpls_pw_invalid_xid_drop_count.get_name_leafdata());
    if (virtual_ac_invalid_xid_drop_count.is_set || is_set(virtual_ac_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(virtual_ac_invalid_xid_drop_count.get_name_leafdata());
    if (pbb_invalid_xid_drop_count.is_set || is_set(pbb_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(pbb_invalid_xid_drop_count.get_name_leafdata());
    if (vni_invalid_xid_drop_count.is_set || is_set(vni_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(vni_invalid_xid_drop_count.get_name_leafdata());
    if (evpn_invalid_xid_drop_count.is_set || is_set(evpn_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(evpn_invalid_xid_drop_count.get_name_leafdata());
    if (vpls_pw_max_exceeded_drop_cnt.is_set || is_set(vpls_pw_max_exceeded_drop_cnt.yfilter)) leaf_name_data.push_back(vpls_pw_max_exceeded_drop_cnt.get_name_leafdata());
    if (bundle_ac_max_exceeded_drop_cnt.is_set || is_set(bundle_ac_max_exceeded_drop_cnt.yfilter)) leaf_name_data.push_back(bundle_ac_max_exceeded_drop_cnt.get_name_leafdata());
    if (global_invalid_xid_drop_count.is_set || is_set(global_invalid_xid_drop_count.yfilter)) leaf_name_data.push_back(global_invalid_xid_drop_count.get_name_leafdata());
    if (p2p_count.is_set || is_set(p2p_count.yfilter)) leaf_name_data.push_back(p2p_count.get_name_leafdata());
    if (bp_count.is_set || is_set(bp_count.yfilter)) leaf_name_data.push_back(bp_count.get_name_leafdata());
    if (pwhe_l2_if_count.is_set || is_set(pwhe_l2_if_count.yfilter)) leaf_name_data.push_back(pwhe_l2_if_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-count")
    {
        xconnect_count = value;
        xconnect_count.value_namespace = name_space;
        xconnect_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-up-count")
    {
        xconnect_up_count = value;
        xconnect_up_count.value_namespace = name_space;
        xconnect_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-down-count")
    {
        xconnect_down_count = value;
        xconnect_down_count.value_namespace = name_space;
        xconnect_down_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-mpls")
    {
        ac_to_pw_count_mpls = value;
        ac_to_pw_count_mpls.value_namespace = name_space;
        ac_to_pw_count_mpls.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tp")
    {
        ac_to_pw_count_l2tp = value;
        ac_to_pw_count_l2tp.value_namespace = name_space;
        ac_to_pw_count_l2tp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tp-ip-v6")
    {
        ac_to_pw_count_l2tp_ip_v6 = value;
        ac_to_pw_count_l2tp_ip_v6.value_namespace = name_space;
        ac_to_pw_count_l2tp_ip_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-pw-count-l2tpv2")
    {
        ac_to_pw_count_l2tpv2 = value;
        ac_to_pw_count_l2tpv2.value_namespace = name_space;
        ac_to_pw_count_l2tpv2.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-ac-count")
    {
        ac_to_ac_count = value;
        ac_to_ac_count.value_namespace = name_space;
        ac_to_ac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-unknown-count")
    {
        ac_to_unknown_count = value;
        ac_to_unknown_count.value_namespace = name_space;
        ac_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-sess-to-pw-count")
    {
        mon_sess_to_pw_count = value;
        mon_sess_to_pw_count.value_namespace = name_space;
        mon_sess_to_pw_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mon-sess-to-unknown-count")
    {
        mon_sess_to_unknown_count = value;
        mon_sess_to_unknown_count.value_namespace = name_space;
        mon_sess_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-to-bp-count")
    {
        ac_to_bp_count = value;
        ac_to_bp_count.value_namespace = name_space;
        ac_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-to-bp-count")
    {
        pw_to_bp_count = value;
        pw_to_bp_count.value_namespace = name_space;
        pw_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-to-unknown-count")
    {
        pw_to_unknown_count = value;
        pw_to_unknown_count.value_namespace = name_space;
        pw_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-to-bp-count")
    {
        pbb_to_bp_count = value;
        pbb_to_bp_count.value_namespace = name_space;
        pbb_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-to-unknown-count")
    {
        pbb_to_unknown_count = value;
        pbb_to_unknown_count.value_namespace = name_space;
        pbb_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-to-bp-count")
    {
        vni_to_bp_count = value;
        vni_to_bp_count.value_namespace = name_space;
        vni_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-to-unknown-count")
    {
        vni_to_unknown_count = value;
        vni_to_unknown_count.value_namespace = name_space;
        vni_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-to-bp-count")
    {
        evpn_to_bp_count = value;
        evpn_to_bp_count.value_namespace = name_space;
        evpn_to_bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-to-unknown-count")
    {
        evpn_to_unknown_count = value;
        evpn_to_unknown_count.value_namespace = name_space;
        evpn_to_unknown_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-aib")
    {
        ac_down_count_aib = value;
        ac_down_count_aib.value_namespace = name_space;
        ac_down_count_aib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-l2vpn")
    {
        ac_down_count_l2vpn = value;
        ac_down_count_l2vpn.value_namespace = name_space;
        ac_down_count_l2vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-l3fib")
    {
        ac_down_count_l3fib = value;
        ac_down_count_l3fib.value_namespace = name_space;
        ac_down_count_l3fib.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ac-down-count-vpdn")
    {
        ac_down_count_vpdn = value;
        ac_down_count_vpdn.value_namespace = name_space;
        ac_down_count_vpdn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpws-pw-invalid-xid-drop-count")
    {
        vpws_pw_invalid_xid_drop_count = value;
        vpws_pw_invalid_xid_drop_count.value_namespace = name_space;
        vpws_pw_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-pw-invalid-xid-drop-count")
    {
        vpls_pw_invalid_xid_drop_count = value;
        vpls_pw_invalid_xid_drop_count.value_namespace = name_space;
        vpls_pw_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-ac-invalid-xid-drop-count")
    {
        virtual_ac_invalid_xid_drop_count = value;
        virtual_ac_invalid_xid_drop_count.value_namespace = name_space;
        virtual_ac_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pbb-invalid-xid-drop-count")
    {
        pbb_invalid_xid_drop_count = value;
        pbb_invalid_xid_drop_count.value_namespace = name_space;
        pbb_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vni-invalid-xid-drop-count")
    {
        vni_invalid_xid_drop_count = value;
        vni_invalid_xid_drop_count.value_namespace = name_space;
        vni_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-invalid-xid-drop-count")
    {
        evpn_invalid_xid_drop_count = value;
        evpn_invalid_xid_drop_count.value_namespace = name_space;
        evpn_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpls-pw-max-exceeded-drop-cnt")
    {
        vpls_pw_max_exceeded_drop_cnt = value;
        vpls_pw_max_exceeded_drop_cnt.value_namespace = name_space;
        vpls_pw_max_exceeded_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-ac-max-exceeded-drop-cnt")
    {
        bundle_ac_max_exceeded_drop_cnt = value;
        bundle_ac_max_exceeded_drop_cnt.value_namespace = name_space;
        bundle_ac_max_exceeded_drop_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "global-invalid-xid-drop-count")
    {
        global_invalid_xid_drop_count = value;
        global_invalid_xid_drop_count.value_namespace = name_space;
        global_invalid_xid_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "p2p-count")
    {
        p2p_count = value;
        p2p_count.value_namespace = name_space;
        p2p_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bp-count")
    {
        bp_count = value;
        bp_count.value_namespace = name_space;
        bp_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwhe-l2-if-count")
    {
        pwhe_l2_if_count = value;
        pwhe_l2_if_count.value_namespace = name_space;
        pwhe_l2_if_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-count")
    {
        xconnect_count.yfilter = yfilter;
    }
    if(value_path == "xconnect-up-count")
    {
        xconnect_up_count.yfilter = yfilter;
    }
    if(value_path == "xconnect-down-count")
    {
        xconnect_down_count.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-mpls")
    {
        ac_to_pw_count_mpls.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tp")
    {
        ac_to_pw_count_l2tp.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tp-ip-v6")
    {
        ac_to_pw_count_l2tp_ip_v6.yfilter = yfilter;
    }
    if(value_path == "ac-to-pw-count-l2tpv2")
    {
        ac_to_pw_count_l2tpv2.yfilter = yfilter;
    }
    if(value_path == "ac-to-ac-count")
    {
        ac_to_ac_count.yfilter = yfilter;
    }
    if(value_path == "ac-to-unknown-count")
    {
        ac_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "mon-sess-to-pw-count")
    {
        mon_sess_to_pw_count.yfilter = yfilter;
    }
    if(value_path == "mon-sess-to-unknown-count")
    {
        mon_sess_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "ac-to-bp-count")
    {
        ac_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "pw-to-bp-count")
    {
        pw_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "pw-to-unknown-count")
    {
        pw_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "pbb-to-bp-count")
    {
        pbb_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "pbb-to-unknown-count")
    {
        pbb_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "vni-to-bp-count")
    {
        vni_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "vni-to-unknown-count")
    {
        vni_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "evpn-to-bp-count")
    {
        evpn_to_bp_count.yfilter = yfilter;
    }
    if(value_path == "evpn-to-unknown-count")
    {
        evpn_to_unknown_count.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-aib")
    {
        ac_down_count_aib.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-l2vpn")
    {
        ac_down_count_l2vpn.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-l3fib")
    {
        ac_down_count_l3fib.yfilter = yfilter;
    }
    if(value_path == "ac-down-count-vpdn")
    {
        ac_down_count_vpdn.yfilter = yfilter;
    }
    if(value_path == "vpws-pw-invalid-xid-drop-count")
    {
        vpws_pw_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vpls-pw-invalid-xid-drop-count")
    {
        vpls_pw_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "virtual-ac-invalid-xid-drop-count")
    {
        virtual_ac_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "pbb-invalid-xid-drop-count")
    {
        pbb_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vni-invalid-xid-drop-count")
    {
        vni_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "evpn-invalid-xid-drop-count")
    {
        evpn_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "vpls-pw-max-exceeded-drop-cnt")
    {
        vpls_pw_max_exceeded_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "bundle-ac-max-exceeded-drop-cnt")
    {
        bundle_ac_max_exceeded_drop_cnt.yfilter = yfilter;
    }
    if(value_path == "global-invalid-xid-drop-count")
    {
        global_invalid_xid_drop_count.yfilter = yfilter;
    }
    if(value_path == "p2p-count")
    {
        p2p_count.yfilter = yfilter;
    }
    if(value_path == "bp-count")
    {
        bp_count.yfilter = yfilter;
    }
    if(value_path == "pwhe-l2-if-count")
    {
        pwhe_l2_if_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::XconnectSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-count" || name == "xconnect-up-count" || name == "xconnect-down-count" || name == "ac-to-pw-count-mpls" || name == "ac-to-pw-count-l2tp" || name == "ac-to-pw-count-l2tp-ip-v6" || name == "ac-to-pw-count-l2tpv2" || name == "ac-to-ac-count" || name == "ac-to-unknown-count" || name == "mon-sess-to-pw-count" || name == "mon-sess-to-unknown-count" || name == "ac-to-bp-count" || name == "pw-to-bp-count" || name == "pw-to-unknown-count" || name == "pbb-to-bp-count" || name == "pbb-to-unknown-count" || name == "vni-to-bp-count" || name == "vni-to-unknown-count" || name == "evpn-to-bp-count" || name == "evpn-to-unknown-count" || name == "ac-down-count-aib" || name == "ac-down-count-l2vpn" || name == "ac-down-count-l3fib" || name == "ac-down-count-vpdn" || name == "vpws-pw-invalid-xid-drop-count" || name == "vpls-pw-invalid-xid-drop-count" || name == "virtual-ac-invalid-xid-drop-count" || name == "pbb-invalid-xid-drop-count" || name == "vni-invalid-xid-drop-count" || name == "evpn-invalid-xid-drop-count" || name == "vpls-pw-max-exceeded-drop-cnt" || name == "bundle-ac-max-exceeded-drop-cnt" || name == "global-invalid-xid-drop-count" || name == "p2p-count" || name == "bp-count" || name == "pwhe-l2-if-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::NextHopSummary()
    :
    mpls_il(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl>())
    , mpls(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls>())
    , l2tp(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp>())
    , lsm(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm>())
    , p2mp_tunnels(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels>())
{
    mpls_il->parent = this;
    mpls->parent = this;
    l2tp->parent = this;
    lsm->parent = this;
    p2mp_tunnels->parent = this;

    yang_name = "next-hop-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::~NextHopSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::has_data() const
{
    if (is_presence_container) return true;
    return (mpls_il !=  nullptr && mpls_il->has_data())
	|| (mpls !=  nullptr && mpls->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (lsm !=  nullptr && lsm->has_data())
	|| (p2mp_tunnels !=  nullptr && p2mp_tunnels->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::has_operation() const
{
    return is_set(yfilter)
	|| (mpls_il !=  nullptr && mpls_il->has_operation())
	|| (mpls !=  nullptr && mpls->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (lsm !=  nullptr && lsm->has_operation())
	|| (p2mp_tunnels !=  nullptr && p2mp_tunnels->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mpls-il")
    {
        if(mpls_il == nullptr)
        {
            mpls_il = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl>();
        }
        return mpls_il;
    }

    if(child_yang_name == "mpls")
    {
        if(mpls == nullptr)
        {
            mpls = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls>();
        }
        return mpls;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "lsm")
    {
        if(lsm == nullptr)
        {
            lsm = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm>();
        }
        return lsm;
    }

    if(child_yang_name == "p2mp-tunnels")
    {
        if(p2mp_tunnels == nullptr)
        {
            p2mp_tunnels = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels>();
        }
        return p2mp_tunnels;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mpls_il != nullptr)
    {
        _children["mpls-il"] = mpls_il;
    }

    if(mpls != nullptr)
    {
        _children["mpls"] = mpls;
    }

    if(l2tp != nullptr)
    {
        _children["l2tp"] = l2tp;
    }

    if(lsm != nullptr)
    {
        _children["lsm"] = lsm;
    }

    if(p2mp_tunnels != nullptr)
    {
        _children["p2mp-tunnels"] = p2mp_tunnels;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mpls-il" || name == "mpls" || name == "l2tp" || name == "lsm" || name == "p2mp-tunnels")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::MplsIl()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "mpls-il"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::~MplsIl()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls-il";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::MplsIl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::Mpls()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "mpls"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::~Mpls()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mpls";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Mpls::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::L2tp()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "l2tp"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::~L2tp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::Lsm()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "lsm"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::~Lsm()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lsm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::Lsm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::P2mpTunnels()
    :
    next_hop_count{YType::uint32, "next-hop-count"},
    bound_next_hop_count{YType::uint32, "bound-next-hop-count"},
    unbound_next_hop_count{YType::uint32, "unbound-next-hop-count"},
    next_hop_pending_registration_count{YType::uint32, "next-hop-pending-registration-count"}
{

    yang_name = "p2mp-tunnels"; yang_parent_name = "next-hop-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::~P2mpTunnels()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_count.is_set
	|| bound_next_hop_count.is_set
	|| unbound_next_hop_count.is_set
	|| next_hop_pending_registration_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_count.yfilter)
	|| ydk::is_set(bound_next_hop_count.yfilter)
	|| ydk::is_set(unbound_next_hop_count.yfilter)
	|| ydk::is_set(next_hop_pending_registration_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "p2mp-tunnels";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_count.is_set || is_set(next_hop_count.yfilter)) leaf_name_data.push_back(next_hop_count.get_name_leafdata());
    if (bound_next_hop_count.is_set || is_set(bound_next_hop_count.yfilter)) leaf_name_data.push_back(bound_next_hop_count.get_name_leafdata());
    if (unbound_next_hop_count.is_set || is_set(unbound_next_hop_count.yfilter)) leaf_name_data.push_back(unbound_next_hop_count.get_name_leafdata());
    if (next_hop_pending_registration_count.is_set || is_set(next_hop_pending_registration_count.yfilter)) leaf_name_data.push_back(next_hop_pending_registration_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count = value;
        next_hop_count.value_namespace = name_space;
        next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count = value;
        bound_next_hop_count.value_namespace = name_space;
        bound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count = value;
        unbound_next_hop_count.value_namespace = name_space;
        unbound_next_hop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count = value;
        next_hop_pending_registration_count.value_namespace = name_space;
        next_hop_pending_registration_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-count")
    {
        next_hop_count.yfilter = yfilter;
    }
    if(value_path == "bound-next-hop-count")
    {
        bound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "unbound-next-hop-count")
    {
        unbound_next_hop_count.yfilter = yfilter;
    }
    if(value_path == "next-hop-pending-registration-count")
    {
        next_hop_pending_registration_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::NextHopSummary::P2mpTunnels::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-count" || name == "bound-next-hop-count" || name == "unbound-next-hop-count" || name == "next-hop-pending-registration-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::L2tpDispositionSummary()
    :
    l2tp_disposition_session_count{YType::uint32, "l2tp-disposition-session-count"},
    bound_l2tp_disposition_session_count{YType::uint32, "bound-l2tp-disposition-session-count"},
    unbound_l2tp_disposition_session_count{YType::uint32, "unbound-l2tp-disposition-session-count"}
{

    yang_name = "l2tp-disposition-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::~L2tpDispositionSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::has_data() const
{
    if (is_presence_container) return true;
    return l2tp_disposition_session_count.is_set
	|| bound_l2tp_disposition_session_count.is_set
	|| unbound_l2tp_disposition_session_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(l2tp_disposition_session_count.yfilter)
	|| ydk::is_set(bound_l2tp_disposition_session_count.yfilter)
	|| ydk::is_set(unbound_l2tp_disposition_session_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp-disposition-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2tp_disposition_session_count.is_set || is_set(l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(l2tp_disposition_session_count.get_name_leafdata());
    if (bound_l2tp_disposition_session_count.is_set || is_set(bound_l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(bound_l2tp_disposition_session_count.get_name_leafdata());
    if (unbound_l2tp_disposition_session_count.is_set || is_set(unbound_l2tp_disposition_session_count.yfilter)) leaf_name_data.push_back(unbound_l2tp_disposition_session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "l2tp-disposition-session-count")
    {
        l2tp_disposition_session_count = value;
        l2tp_disposition_session_count.value_namespace = name_space;
        l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bound-l2tp-disposition-session-count")
    {
        bound_l2tp_disposition_session_count = value;
        bound_l2tp_disposition_session_count.value_namespace = name_space;
        bound_l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unbound-l2tp-disposition-session-count")
    {
        unbound_l2tp_disposition_session_count = value;
        unbound_l2tp_disposition_session_count.value_namespace = name_space;
        unbound_l2tp_disposition_session_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "l2tp-disposition-session-count")
    {
        l2tp_disposition_session_count.yfilter = yfilter;
    }
    if(value_path == "bound-l2tp-disposition-session-count")
    {
        bound_l2tp_disposition_session_count.yfilter = yfilter;
    }
    if(value_path == "unbound-l2tp-disposition-session-count")
    {
        unbound_l2tp_disposition_session_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::L2tpDispositionSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2tp-disposition-session-count" || name == "bound-l2tp-disposition-session-count" || name == "unbound-l2tp-disposition-session-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::BridgeDomainSummary()
    :
    bridge_domain_count{YType::uint32, "bridge-domain-count"},
    bridge_domain_drop_count{YType::uint32, "bridge-domain-drop-count"},
    bridge_domain_with_bvi_count{YType::uint32, "bridge-domain-with-bvi-count"},
    bridge_domain_with_p2mp_enabled{YType::uint32, "bridge-domain-with-p2mp-enabled"},
    bridge_domain_with_pbbevpn_enabled{YType::uint32, "bridge-domain-with-pbbevpn-enabled"},
    bridge_domain_with_evpn_enabled{YType::uint32, "bridge-domain-with-evpn-enabled"}
{

    yang_name = "bridge-domain-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::~BridgeDomainSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::has_data() const
{
    if (is_presence_container) return true;
    return bridge_domain_count.is_set
	|| bridge_domain_drop_count.is_set
	|| bridge_domain_with_bvi_count.is_set
	|| bridge_domain_with_p2mp_enabled.is_set
	|| bridge_domain_with_pbbevpn_enabled.is_set
	|| bridge_domain_with_evpn_enabled.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_count.yfilter)
	|| ydk::is_set(bridge_domain_drop_count.yfilter)
	|| ydk::is_set(bridge_domain_with_bvi_count.yfilter)
	|| ydk::is_set(bridge_domain_with_p2mp_enabled.yfilter)
	|| ydk::is_set(bridge_domain_with_pbbevpn_enabled.yfilter)
	|| ydk::is_set(bridge_domain_with_evpn_enabled.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-domain-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_count.is_set || is_set(bridge_domain_count.yfilter)) leaf_name_data.push_back(bridge_domain_count.get_name_leafdata());
    if (bridge_domain_drop_count.is_set || is_set(bridge_domain_drop_count.yfilter)) leaf_name_data.push_back(bridge_domain_drop_count.get_name_leafdata());
    if (bridge_domain_with_bvi_count.is_set || is_set(bridge_domain_with_bvi_count.yfilter)) leaf_name_data.push_back(bridge_domain_with_bvi_count.get_name_leafdata());
    if (bridge_domain_with_p2mp_enabled.is_set || is_set(bridge_domain_with_p2mp_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_p2mp_enabled.get_name_leafdata());
    if (bridge_domain_with_pbbevpn_enabled.is_set || is_set(bridge_domain_with_pbbevpn_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_pbbevpn_enabled.get_name_leafdata());
    if (bridge_domain_with_evpn_enabled.is_set || is_set(bridge_domain_with_evpn_enabled.yfilter)) leaf_name_data.push_back(bridge_domain_with_evpn_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-count")
    {
        bridge_domain_count = value;
        bridge_domain_count.value_namespace = name_space;
        bridge_domain_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-drop-count")
    {
        bridge_domain_drop_count = value;
        bridge_domain_drop_count.value_namespace = name_space;
        bridge_domain_drop_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-bvi-count")
    {
        bridge_domain_with_bvi_count = value;
        bridge_domain_with_bvi_count.value_namespace = name_space;
        bridge_domain_with_bvi_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-p2mp-enabled")
    {
        bridge_domain_with_p2mp_enabled = value;
        bridge_domain_with_p2mp_enabled.value_namespace = name_space;
        bridge_domain_with_p2mp_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-pbbevpn-enabled")
    {
        bridge_domain_with_pbbevpn_enabled = value;
        bridge_domain_with_pbbevpn_enabled.value_namespace = name_space;
        bridge_domain_with_pbbevpn_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-with-evpn-enabled")
    {
        bridge_domain_with_evpn_enabled = value;
        bridge_domain_with_evpn_enabled.value_namespace = name_space;
        bridge_domain_with_evpn_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-count")
    {
        bridge_domain_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-drop-count")
    {
        bridge_domain_drop_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-bvi-count")
    {
        bridge_domain_with_bvi_count.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-p2mp-enabled")
    {
        bridge_domain_with_p2mp_enabled.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-pbbevpn-enabled")
    {
        bridge_domain_with_pbbevpn_enabled.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-with-evpn-enabled")
    {
        bridge_domain_with_evpn_enabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::BridgeDomainSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-count" || name == "bridge-domain-drop-count" || name == "bridge-domain-with-bvi-count" || name == "bridge-domain-with-p2mp-enabled" || name == "bridge-domain-with-pbbevpn-enabled" || name == "bridge-domain-with-evpn-enabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::MacSummary()
    :
    mac_counts_invalid{YType::boolean, "mac-counts-invalid"},
    local_mac_count{YType::uint32, "local-mac-count"},
    remote_mac_count{YType::uint32, "remote-mac-count"},
    static_mac_count{YType::uint32, "static-mac-count"},
    routed_mac_count{YType::uint32, "routed-mac-count"},
    mac_count{YType::uint32, "mac-count"},
    sbmac_count{YType::uint32, "sbmac-count"},
    bmac_count{YType::uint32, "bmac-count"}
{

    yang_name = "mac-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::~MacSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::has_data() const
{
    if (is_presence_container) return true;
    return mac_counts_invalid.is_set
	|| local_mac_count.is_set
	|| remote_mac_count.is_set
	|| static_mac_count.is_set
	|| routed_mac_count.is_set
	|| mac_count.is_set
	|| sbmac_count.is_set
	|| bmac_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_counts_invalid.yfilter)
	|| ydk::is_set(local_mac_count.yfilter)
	|| ydk::is_set(remote_mac_count.yfilter)
	|| ydk::is_set(static_mac_count.yfilter)
	|| ydk::is_set(routed_mac_count.yfilter)
	|| ydk::is_set(mac_count.yfilter)
	|| ydk::is_set(sbmac_count.yfilter)
	|| ydk::is_set(bmac_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_counts_invalid.is_set || is_set(mac_counts_invalid.yfilter)) leaf_name_data.push_back(mac_counts_invalid.get_name_leafdata());
    if (local_mac_count.is_set || is_set(local_mac_count.yfilter)) leaf_name_data.push_back(local_mac_count.get_name_leafdata());
    if (remote_mac_count.is_set || is_set(remote_mac_count.yfilter)) leaf_name_data.push_back(remote_mac_count.get_name_leafdata());
    if (static_mac_count.is_set || is_set(static_mac_count.yfilter)) leaf_name_data.push_back(static_mac_count.get_name_leafdata());
    if (routed_mac_count.is_set || is_set(routed_mac_count.yfilter)) leaf_name_data.push_back(routed_mac_count.get_name_leafdata());
    if (mac_count.is_set || is_set(mac_count.yfilter)) leaf_name_data.push_back(mac_count.get_name_leafdata());
    if (sbmac_count.is_set || is_set(sbmac_count.yfilter)) leaf_name_data.push_back(sbmac_count.get_name_leafdata());
    if (bmac_count.is_set || is_set(bmac_count.yfilter)) leaf_name_data.push_back(bmac_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-counts-invalid")
    {
        mac_counts_invalid = value;
        mac_counts_invalid.value_namespace = name_space;
        mac_counts_invalid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-mac-count")
    {
        local_mac_count = value;
        local_mac_count.value_namespace = name_space;
        local_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-mac-count")
    {
        remote_mac_count = value;
        remote_mac_count.value_namespace = name_space;
        remote_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count = value;
        static_mac_count.value_namespace = name_space;
        static_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "routed-mac-count")
    {
        routed_mac_count = value;
        routed_mac_count.value_namespace = name_space;
        routed_mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-count")
    {
        mac_count = value;
        mac_count.value_namespace = name_space;
        mac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sbmac-count")
    {
        sbmac_count = value;
        sbmac_count.value_namespace = name_space;
        sbmac_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bmac-count")
    {
        bmac_count = value;
        bmac_count.value_namespace = name_space;
        bmac_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-counts-invalid")
    {
        mac_counts_invalid.yfilter = yfilter;
    }
    if(value_path == "local-mac-count")
    {
        local_mac_count.yfilter = yfilter;
    }
    if(value_path == "remote-mac-count")
    {
        remote_mac_count.yfilter = yfilter;
    }
    if(value_path == "static-mac-count")
    {
        static_mac_count.yfilter = yfilter;
    }
    if(value_path == "routed-mac-count")
    {
        routed_mac_count.yfilter = yfilter;
    }
    if(value_path == "mac-count")
    {
        mac_count.yfilter = yfilter;
    }
    if(value_path == "sbmac-count")
    {
        sbmac_count.yfilter = yfilter;
    }
    if(value_path == "bmac-count")
    {
        bmac_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::MacSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-counts-invalid" || name == "local-mac-count" || name == "remote-mac-count" || name == "static-mac-count" || name == "routed-mac-count" || name == "mac-count" || name == "sbmac-count" || name == "bmac-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::QueueSummary()
    :
    inline_cnt{YType::uint32, "inline-cnt"},
    retry_cnt{YType::uint32, "retry-cnt"},
    update_cnt{YType::uint32, "update-cnt"},
    del_cnt{YType::uint32, "del-cnt"}
{

    yang_name = "queue-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::~QueueSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::has_data() const
{
    if (is_presence_container) return true;
    return inline_cnt.is_set
	|| retry_cnt.is_set
	|| update_cnt.is_set
	|| del_cnt.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(inline_cnt.yfilter)
	|| ydk::is_set(retry_cnt.yfilter)
	|| ydk::is_set(update_cnt.yfilter)
	|| ydk::is_set(del_cnt.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "queue-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (inline_cnt.is_set || is_set(inline_cnt.yfilter)) leaf_name_data.push_back(inline_cnt.get_name_leafdata());
    if (retry_cnt.is_set || is_set(retry_cnt.yfilter)) leaf_name_data.push_back(retry_cnt.get_name_leafdata());
    if (update_cnt.is_set || is_set(update_cnt.yfilter)) leaf_name_data.push_back(update_cnt.get_name_leafdata());
    if (del_cnt.is_set || is_set(del_cnt.yfilter)) leaf_name_data.push_back(del_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "inline-cnt")
    {
        inline_cnt = value;
        inline_cnt.value_namespace = name_space;
        inline_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry-cnt")
    {
        retry_cnt = value;
        retry_cnt.value_namespace = name_space;
        retry_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "update-cnt")
    {
        update_cnt = value;
        update_cnt.value_namespace = name_space;
        update_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "del-cnt")
    {
        del_cnt = value;
        del_cnt.value_namespace = name_space;
        del_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "inline-cnt")
    {
        inline_cnt.yfilter = yfilter;
    }
    if(value_path == "retry-cnt")
    {
        retry_cnt.yfilter = yfilter;
    }
    if(value_path == "update-cnt")
    {
        update_cnt.yfilter = yfilter;
    }
    if(value_path == "del-cnt")
    {
        del_cnt.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::QueueSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "inline-cnt" || name == "retry-cnt" || name == "update-cnt" || name == "del-cnt")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::EvpnSummary()
    :
    total_count{YType::uint32, "total-count"},
    isid_count{YType::uint32, "isid-count"},
    default_count{YType::uint32, "default-count"},
    stitching_count{YType::uint32, "stitching-count"}
{

    yang_name = "evpn-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::~EvpnSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set
	|| isid_count.is_set
	|| default_count.is_set
	|| stitching_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter)
	|| ydk::is_set(isid_count.yfilter)
	|| ydk::is_set(default_count.yfilter)
	|| ydk::is_set(stitching_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evpn-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());
    if (isid_count.is_set || is_set(isid_count.yfilter)) leaf_name_data.push_back(isid_count.get_name_leafdata());
    if (default_count.is_set || is_set(default_count.yfilter)) leaf_name_data.push_back(default_count.get_name_leafdata());
    if (stitching_count.is_set || is_set(stitching_count.yfilter)) leaf_name_data.push_back(stitching_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "isid-count")
    {
        isid_count = value;
        isid_count.value_namespace = name_space;
        isid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "default-count")
    {
        default_count = value;
        default_count.value_namespace = name_space;
        default_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stitching-count")
    {
        stitching_count = value;
        stitching_count.value_namespace = name_space;
        stitching_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
    if(value_path == "isid-count")
    {
        isid_count.yfilter = yfilter;
    }
    if(value_path == "default-count")
    {
        default_count.yfilter = yfilter;
    }
    if(value_path == "stitching-count")
    {
        stitching_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::EvpnSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count" || name == "isid-count" || name == "default-count" || name == "stitching-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::GlobalCfg()
    :
    load_balance_type{YType::enumeration, "load-balance-type"},
    evpn_imc_label_block_base{YType::uint32, "evpn-imc-label-block-base"},
    evpn_imc_label_block_size{YType::uint16, "evpn-imc-label-block-size"}
{

    yang_name = "global-cfg"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::~GlobalCfg()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::has_data() const
{
    if (is_presence_container) return true;
    return load_balance_type.is_set
	|| evpn_imc_label_block_base.is_set
	|| evpn_imc_label_block_size.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(load_balance_type.yfilter)
	|| ydk::is_set(evpn_imc_label_block_base.yfilter)
	|| ydk::is_set(evpn_imc_label_block_size.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-cfg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (load_balance_type.is_set || is_set(load_balance_type.yfilter)) leaf_name_data.push_back(load_balance_type.get_name_leafdata());
    if (evpn_imc_label_block_base.is_set || is_set(evpn_imc_label_block_base.yfilter)) leaf_name_data.push_back(evpn_imc_label_block_base.get_name_leafdata());
    if (evpn_imc_label_block_size.is_set || is_set(evpn_imc_label_block_size.yfilter)) leaf_name_data.push_back(evpn_imc_label_block_size.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "load-balance-type")
    {
        load_balance_type = value;
        load_balance_type.value_namespace = name_space;
        load_balance_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-imc-label-block-base")
    {
        evpn_imc_label_block_base = value;
        evpn_imc_label_block_base.value_namespace = name_space;
        evpn_imc_label_block_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-imc-label-block-size")
    {
        evpn_imc_label_block_size = value;
        evpn_imc_label_block_size.value_namespace = name_space;
        evpn_imc_label_block_size.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "load-balance-type")
    {
        load_balance_type.yfilter = yfilter;
    }
    if(value_path == "evpn-imc-label-block-base")
    {
        evpn_imc_label_block_base.yfilter = yfilter;
    }
    if(value_path == "evpn-imc-label-block-size")
    {
        evpn_imc_label_block_size.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::GlobalCfg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "load-balance-type" || name == "evpn-imc-label-block-base" || name == "evpn-imc-label-block-size")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::PtreeSummary()
    :
    total_ptree_count{YType::uint32, "total-ptree-count"},
    mldp_enabled_ptree_count{YType::uint32, "mldp-enabled-ptree-count"},
    lmrib_mldp_ptree_count{YType::uint32, "lmrib-mldp-ptree-count"},
    rsvp_te_enabled_ptree_count{YType::uint32, "rsvp-te-enabled-ptree-count"},
    lmrib_rsvp_te_ptree_count{YType::uint32, "lmrib-rsvp-te-ptree-count"}
{

    yang_name = "ptree-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::~PtreeSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::has_data() const
{
    if (is_presence_container) return true;
    return total_ptree_count.is_set
	|| mldp_enabled_ptree_count.is_set
	|| lmrib_mldp_ptree_count.is_set
	|| rsvp_te_enabled_ptree_count.is_set
	|| lmrib_rsvp_te_ptree_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_ptree_count.yfilter)
	|| ydk::is_set(mldp_enabled_ptree_count.yfilter)
	|| ydk::is_set(lmrib_mldp_ptree_count.yfilter)
	|| ydk::is_set(rsvp_te_enabled_ptree_count.yfilter)
	|| ydk::is_set(lmrib_rsvp_te_ptree_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ptree-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_ptree_count.is_set || is_set(total_ptree_count.yfilter)) leaf_name_data.push_back(total_ptree_count.get_name_leafdata());
    if (mldp_enabled_ptree_count.is_set || is_set(mldp_enabled_ptree_count.yfilter)) leaf_name_data.push_back(mldp_enabled_ptree_count.get_name_leafdata());
    if (lmrib_mldp_ptree_count.is_set || is_set(lmrib_mldp_ptree_count.yfilter)) leaf_name_data.push_back(lmrib_mldp_ptree_count.get_name_leafdata());
    if (rsvp_te_enabled_ptree_count.is_set || is_set(rsvp_te_enabled_ptree_count.yfilter)) leaf_name_data.push_back(rsvp_te_enabled_ptree_count.get_name_leafdata());
    if (lmrib_rsvp_te_ptree_count.is_set || is_set(lmrib_rsvp_te_ptree_count.yfilter)) leaf_name_data.push_back(lmrib_rsvp_te_ptree_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-ptree-count")
    {
        total_ptree_count = value;
        total_ptree_count.value_namespace = name_space;
        total_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mldp-enabled-ptree-count")
    {
        mldp_enabled_ptree_count = value;
        mldp_enabled_ptree_count.value_namespace = name_space;
        mldp_enabled_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-mldp-ptree-count")
    {
        lmrib_mldp_ptree_count = value;
        lmrib_mldp_ptree_count.value_namespace = name_space;
        lmrib_mldp_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rsvp-te-enabled-ptree-count")
    {
        rsvp_te_enabled_ptree_count = value;
        rsvp_te_enabled_ptree_count.value_namespace = name_space;
        rsvp_te_enabled_ptree_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lmrib-rsvp-te-ptree-count")
    {
        lmrib_rsvp_te_ptree_count = value;
        lmrib_rsvp_te_ptree_count.value_namespace = name_space;
        lmrib_rsvp_te_ptree_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-ptree-count")
    {
        total_ptree_count.yfilter = yfilter;
    }
    if(value_path == "mldp-enabled-ptree-count")
    {
        mldp_enabled_ptree_count.yfilter = yfilter;
    }
    if(value_path == "lmrib-mldp-ptree-count")
    {
        lmrib_mldp_ptree_count.yfilter = yfilter;
    }
    if(value_path == "rsvp-te-enabled-ptree-count")
    {
        rsvp_te_enabled_ptree_count.yfilter = yfilter;
    }
    if(value_path == "lmrib-rsvp-te-ptree-count")
    {
        lmrib_rsvp_te_ptree_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PtreeSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-ptree-count" || name == "mldp-enabled-ptree-count" || name == "lmrib-mldp-ptree-count" || name == "rsvp-te-enabled-ptree-count" || name == "lmrib-rsvp-te-ptree-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::PwGroupSummary()
    :
    plat_grouping_supported{YType::boolean, "plat-grouping-supported"},
    total_pw_groups{YType::uint32, "total-pw-groups"},
    pw_groups_down{YType::uint32, "pw-groups-down"}
{

    yang_name = "pw-group-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::~PwGroupSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::has_data() const
{
    if (is_presence_container) return true;
    return plat_grouping_supported.is_set
	|| total_pw_groups.is_set
	|| pw_groups_down.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(plat_grouping_supported.yfilter)
	|| ydk::is_set(total_pw_groups.yfilter)
	|| ydk::is_set(pw_groups_down.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw-group-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (plat_grouping_supported.is_set || is_set(plat_grouping_supported.yfilter)) leaf_name_data.push_back(plat_grouping_supported.get_name_leafdata());
    if (total_pw_groups.is_set || is_set(total_pw_groups.yfilter)) leaf_name_data.push_back(total_pw_groups.get_name_leafdata());
    if (pw_groups_down.is_set || is_set(pw_groups_down.yfilter)) leaf_name_data.push_back(pw_groups_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "plat-grouping-supported")
    {
        plat_grouping_supported = value;
        plat_grouping_supported.value_namespace = name_space;
        plat_grouping_supported.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pw-groups")
    {
        total_pw_groups = value;
        total_pw_groups.value_namespace = name_space;
        total_pw_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-groups-down")
    {
        pw_groups_down = value;
        pw_groups_down.value_namespace = name_space;
        pw_groups_down.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "plat-grouping-supported")
    {
        plat_grouping_supported.yfilter = yfilter;
    }
    if(value_path == "total-pw-groups")
    {
        total_pw_groups.yfilter = yfilter;
    }
    if(value_path == "pw-groups-down")
    {
        pw_groups_down.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PwGroupSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "plat-grouping-supported" || name == "total-pw-groups" || name == "pw-groups-down")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::PwheMpSummary()
    :
    total_count{YType::uint32, "total-count"}
{

    yang_name = "pwhe-mp-summary"; yang_parent_name = "l2fib-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::~PwheMpSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::has_data() const
{
    if (is_presence_container) return true;
    return total_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwhe-mp-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total_count.is_set || is_set(total_count.yfilter)) leaf_name_data.push_back(total_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total-count")
    {
        total_count = value;
        total_count.value_namespace = name_space;
        total_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total-count")
    {
        total_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibSummary::PwheMpSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total-count")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeers()
    :
    l2fib_nve_peer(this, {})
{

    yang_name = "l2fib-nve-peers"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibNvePeers::~L2fibNvePeers()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibNvePeers::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_nve_peer.len(); index++)
    {
        if(l2fib_nve_peer[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibNvePeers::has_operation() const
{
    for (std::size_t index=0; index<l2fib_nve_peer.len(); index++)
    {
        if(l2fib_nve_peer[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibNvePeers::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-nve-peers";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibNvePeers::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibNvePeers::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-nve-peer")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer>();
        ent_->parent = this;
        l2fib_nve_peer.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibNvePeers::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_nve_peer.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibNvePeers::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibNvePeers::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibNvePeers::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-nve-peer")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::L2fibNvePeer()
    :
    xc_uint_id{YType::str, "xc-uint-id"},
    vniid{YType::str, "vniid"},
    vtep_address{YType::str, "vtep-address"},
    nve_if{YType::str, "nve-if"},
    vn_iid{YType::uint32, "vn-iid"},
    vte_pip{YType::str, "vte-pip"}
{

    yang_name = "l2fib-nve-peer"; yang_parent_name = "l2fib-nve-peers"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::~L2fibNvePeer()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::has_data() const
{
    if (is_presence_container) return true;
    return xc_uint_id.is_set
	|| vniid.is_set
	|| vtep_address.is_set
	|| nve_if.is_set
	|| vn_iid.is_set
	|| vte_pip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xc_uint_id.yfilter)
	|| ydk::is_set(vniid.yfilter)
	|| ydk::is_set(vtep_address.yfilter)
	|| ydk::is_set(nve_if.yfilter)
	|| ydk::is_set(vn_iid.yfilter)
	|| ydk::is_set(vte_pip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-nve-peer";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xc_uint_id.is_set || is_set(xc_uint_id.yfilter)) leaf_name_data.push_back(xc_uint_id.get_name_leafdata());
    if (vniid.is_set || is_set(vniid.yfilter)) leaf_name_data.push_back(vniid.get_name_leafdata());
    if (vtep_address.is_set || is_set(vtep_address.yfilter)) leaf_name_data.push_back(vtep_address.get_name_leafdata());
    if (nve_if.is_set || is_set(nve_if.yfilter)) leaf_name_data.push_back(nve_if.get_name_leafdata());
    if (vn_iid.is_set || is_set(vn_iid.yfilter)) leaf_name_data.push_back(vn_iid.get_name_leafdata());
    if (vte_pip.is_set || is_set(vte_pip.yfilter)) leaf_name_data.push_back(vte_pip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xc-uint-id")
    {
        xc_uint_id = value;
        xc_uint_id.value_namespace = name_space;
        xc_uint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vniid")
    {
        vniid = value;
        vniid.value_namespace = name_space;
        vniid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vtep-address")
    {
        vtep_address = value;
        vtep_address.value_namespace = name_space;
        vtep_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nve-if")
    {
        nve_if = value;
        nve_if.value_namespace = name_space;
        nve_if.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vn-iid")
    {
        vn_iid = value;
        vn_iid.value_namespace = name_space;
        vn_iid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vte-pip")
    {
        vte_pip = value;
        vte_pip.value_namespace = name_space;
        vte_pip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xc-uint-id")
    {
        xc_uint_id.yfilter = yfilter;
    }
    if(value_path == "vniid")
    {
        vniid.yfilter = yfilter;
    }
    if(value_path == "vtep-address")
    {
        vtep_address.yfilter = yfilter;
    }
    if(value_path == "nve-if")
    {
        nve_if.yfilter = yfilter;
    }
    if(value_path == "vn-iid")
    {
        vn_iid.yfilter = yfilter;
    }
    if(value_path == "vte-pip")
    {
        vte_pip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibNvePeers::L2fibNvePeer::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xc-uint-id" || name == "vniid" || name == "vtep-address" || name == "nve-if" || name == "vn-iid" || name == "vte-pip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrps()
    :
    l2fib_mmrp(this, {})
{

    yang_name = "l2fib-mmrps"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::~L2fibMmrps()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_mmrp.len(); index++)
    {
        if(l2fib_mmrp[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::has_operation() const
{
    for (std::size_t index=0; index<l2fib_mmrp.len(); index++)
    {
        if(l2fib_mmrp[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrps";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-mmrp")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp>();
        ent_->parent = this;
        l2fib_mmrp.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_mmrp.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-mmrp")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::L2fibMmrp()
    :
    bd_name{YType::str, "bd-name"},
    source{YType::str, "source"},
    group{YType::str, "group"},
    bridge_id{YType::uint32, "bridge-id"},
    xid_count{YType::uint16, "xid-count"},
    platform_data_length{YType::uint8, "platform-data-length"},
    platform_data{YType::str, "platform-data"},
    hardware_information{YType::str, "hardware-information"},
    bridge_domain_name{YType::str, "bridge-domain-name"}
        ,
    source_prefix(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix>())
    , destination_prefix(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix>())
    , forward_stats(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats>())
    , irb_info(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo>())
{
    source_prefix->parent = this;
    destination_prefix->parent = this;
    forward_stats->parent = this;
    irb_info->parent = this;

    yang_name = "l2fib-mmrp"; yang_parent_name = "l2fib-mmrps"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::~L2fibMmrp()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::has_data() const
{
    if (is_presence_container) return true;
    return bd_name.is_set
	|| source.is_set
	|| group.is_set
	|| bridge_id.is_set
	|| xid_count.is_set
	|| platform_data_length.is_set
	|| platform_data.is_set
	|| hardware_information.is_set
	|| bridge_domain_name.is_set
	|| (source_prefix !=  nullptr && source_prefix->has_data())
	|| (destination_prefix !=  nullptr && destination_prefix->has_data())
	|| (forward_stats !=  nullptr && forward_stats->has_data())
	|| (irb_info !=  nullptr && irb_info->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| ydk::is_set(source.yfilter)
	|| ydk::is_set(group.yfilter)
	|| ydk::is_set(bridge_id.yfilter)
	|| ydk::is_set(xid_count.yfilter)
	|| ydk::is_set(platform_data_length.yfilter)
	|| ydk::is_set(platform_data.yfilter)
	|| ydk::is_set(hardware_information.yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| (source_prefix !=  nullptr && source_prefix->has_operation())
	|| (destination_prefix !=  nullptr && destination_prefix->has_operation())
	|| (forward_stats !=  nullptr && forward_stats->has_operation())
	|| (irb_info !=  nullptr && irb_info->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-mmrp";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());
    if (source.is_set || is_set(source.yfilter)) leaf_name_data.push_back(source.get_name_leafdata());
    if (group.is_set || is_set(group.yfilter)) leaf_name_data.push_back(group.get_name_leafdata());
    if (bridge_id.is_set || is_set(bridge_id.yfilter)) leaf_name_data.push_back(bridge_id.get_name_leafdata());
    if (xid_count.is_set || is_set(xid_count.yfilter)) leaf_name_data.push_back(xid_count.get_name_leafdata());
    if (platform_data_length.is_set || is_set(platform_data_length.yfilter)) leaf_name_data.push_back(platform_data_length.get_name_leafdata());
    if (platform_data.is_set || is_set(platform_data.yfilter)) leaf_name_data.push_back(platform_data.get_name_leafdata());
    if (hardware_information.is_set || is_set(hardware_information.yfilter)) leaf_name_data.push_back(hardware_information.get_name_leafdata());
    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-prefix")
    {
        if(source_prefix == nullptr)
        {
            source_prefix = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix>();
        }
        return source_prefix;
    }

    if(child_yang_name == "destination-prefix")
    {
        if(destination_prefix == nullptr)
        {
            destination_prefix = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix>();
        }
        return destination_prefix;
    }

    if(child_yang_name == "forward-stats")
    {
        if(forward_stats == nullptr)
        {
            forward_stats = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats>();
        }
        return forward_stats;
    }

    if(child_yang_name == "irb-info")
    {
        if(irb_info == nullptr)
        {
            irb_info = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo>();
        }
        return irb_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(source_prefix != nullptr)
    {
        _children["source-prefix"] = source_prefix;
    }

    if(destination_prefix != nullptr)
    {
        _children["destination-prefix"] = destination_prefix;
    }

    if(forward_stats != nullptr)
    {
        _children["forward-stats"] = forward_stats;
    }

    if(irb_info != nullptr)
    {
        _children["irb-info"] = irb_info;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source")
    {
        source = value;
        source.value_namespace = name_space;
        source.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group")
    {
        group = value;
        group.value_namespace = name_space;
        group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-id")
    {
        bridge_id = value;
        bridge_id.value_namespace = name_space;
        bridge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xid-count")
    {
        xid_count = value;
        xid_count.value_namespace = name_space;
        xid_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length = value;
        platform_data_length.value_namespace = name_space;
        platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "platform-data")
    {
        platform_data = value;
        platform_data.value_namespace = name_space;
        platform_data.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hardware-information")
    {
        hardware_information = value;
        hardware_information.value_namespace = name_space;
        hardware_information.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
    if(value_path == "source")
    {
        source.yfilter = yfilter;
    }
    if(value_path == "group")
    {
        group.yfilter = yfilter;
    }
    if(value_path == "bridge-id")
    {
        bridge_id.yfilter = yfilter;
    }
    if(value_path == "xid-count")
    {
        xid_count.yfilter = yfilter;
    }
    if(value_path == "platform-data-length")
    {
        platform_data_length.yfilter = yfilter;
    }
    if(value_path == "platform-data")
    {
        platform_data.yfilter = yfilter;
    }
    if(value_path == "hardware-information")
    {
        hardware_information.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "source-prefix" || name == "destination-prefix" || name == "forward-stats" || name == "irb-info" || name == "bd-name" || name == "source" || name == "group" || name == "bridge-id" || name == "xid-count" || name == "platform-data-length" || name == "platform-data" || name == "hardware-information" || name == "bridge-domain-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::SourcePrefix()
    :
    proto{YType::enumeration, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "source-prefix"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::~SourcePrefix()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::SourcePrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::DestinationPrefix()
    :
    proto{YType::enumeration, "proto"},
    prefix_length{YType::uint16, "prefix-length"},
    prefix{YType::str, "prefix"}
{

    yang_name = "destination-prefix"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::~DestinationPrefix()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::has_data() const
{
    if (is_presence_container) return true;
    return proto.is_set
	|| prefix_length.is_set
	|| prefix.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(proto.yfilter)
	|| ydk::is_set(prefix_length.yfilter)
	|| ydk::is_set(prefix.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-prefix";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (proto.is_set || is_set(proto.yfilter)) leaf_name_data.push_back(proto.get_name_leafdata());
    if (prefix_length.is_set || is_set(prefix_length.yfilter)) leaf_name_data.push_back(prefix_length.get_name_leafdata());
    if (prefix.is_set || is_set(prefix.yfilter)) leaf_name_data.push_back(prefix.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "proto")
    {
        proto = value;
        proto.value_namespace = name_space;
        proto.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix-length")
    {
        prefix_length = value;
        prefix_length.value_namespace = name_space;
        prefix_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "prefix")
    {
        prefix = value;
        prefix.value_namespace = name_space;
        prefix.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "proto")
    {
        proto.yfilter = yfilter;
    }
    if(value_path == "prefix-length")
    {
        prefix_length.yfilter = yfilter;
    }
    if(value_path == "prefix")
    {
        prefix.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::DestinationPrefix::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "proto" || name == "prefix-length" || name == "prefix")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStats()
    :
    forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat>())
{
    forward_stat->parent = this;

    yang_name = "forward-stats"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::~ForwardStats()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::has_data() const
{
    if (is_presence_container) return true;
    return (forward_stat !=  nullptr && forward_stat->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::has_operation() const
{
    return is_set(yfilter)
	|| (forward_stat !=  nullptr && forward_stat->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "forward-stat")
    {
        if(forward_stat == nullptr)
        {
            forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat>();
        }
        return forward_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(forward_stat != nullptr)
    {
        _children["forward-stat"] = forward_stat;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "forward-stat")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::ForwardStat()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    mulicast(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast>())
{
    mulicast->parent = this;

    yang_name = "forward-stat"; yang_parent_name = "forward-stats"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::~ForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (mulicast !=  nullptr && mulicast->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (mulicast !=  nullptr && mulicast->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mulicast")
    {
        if(mulicast == nullptr)
        {
            mulicast = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast>();
        }
        return mulicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mulicast != nullptr)
    {
        _children["mulicast"] = mulicast;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mulicast" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Mulicast()
    :
    multicast_forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>())
    , received_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat>())
    , punt(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt>())
    , drop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop>())
    , multicast_core_forward_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>())
    , core_received_stat(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>())
{
    multicast_forward_stat->parent = this;
    received_stat->parent = this;
    punt->parent = this;
    drop->parent = this;
    multicast_core_forward_stat->parent = this;
    core_received_stat->parent = this;

    yang_name = "mulicast"; yang_parent_name = "forward-stat"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::~Mulicast()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::has_data() const
{
    if (is_presence_container) return true;
    return (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_data())
	|| (received_stat !=  nullptr && received_stat->has_data())
	|| (punt !=  nullptr && punt->has_data())
	|| (drop !=  nullptr && drop->has_data())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_data())
	|| (core_received_stat !=  nullptr && core_received_stat->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::has_operation() const
{
    return is_set(yfilter)
	|| (multicast_forward_stat !=  nullptr && multicast_forward_stat->has_operation())
	|| (received_stat !=  nullptr && received_stat->has_operation())
	|| (punt !=  nullptr && punt->has_operation())
	|| (drop !=  nullptr && drop->has_operation())
	|| (multicast_core_forward_stat !=  nullptr && multicast_core_forward_stat->has_operation())
	|| (core_received_stat !=  nullptr && core_received_stat->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mulicast";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast-forward-stat")
    {
        if(multicast_forward_stat == nullptr)
        {
            multicast_forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat>();
        }
        return multicast_forward_stat;
    }

    if(child_yang_name == "received-stat")
    {
        if(received_stat == nullptr)
        {
            received_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat>();
        }
        return received_stat;
    }

    if(child_yang_name == "punt")
    {
        if(punt == nullptr)
        {
            punt = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt>();
        }
        return punt;
    }

    if(child_yang_name == "drop")
    {
        if(drop == nullptr)
        {
            drop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop>();
        }
        return drop;
    }

    if(child_yang_name == "multicast-core-forward-stat")
    {
        if(multicast_core_forward_stat == nullptr)
        {
            multicast_core_forward_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat>();
        }
        return multicast_core_forward_stat;
    }

    if(child_yang_name == "core-received-stat")
    {
        if(core_received_stat == nullptr)
        {
            core_received_stat = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat>();
        }
        return core_received_stat;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(multicast_forward_stat != nullptr)
    {
        _children["multicast-forward-stat"] = multicast_forward_stat;
    }

    if(received_stat != nullptr)
    {
        _children["received-stat"] = received_stat;
    }

    if(punt != nullptr)
    {
        _children["punt"] = punt;
    }

    if(drop != nullptr)
    {
        _children["drop"] = drop;
    }

    if(multicast_core_forward_stat != nullptr)
    {
        _children["multicast-core-forward-stat"] = multicast_core_forward_stat;
    }

    if(core_received_stat != nullptr)
    {
        _children["core-received-stat"] = core_received_stat;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "multicast-forward-stat" || name == "received-stat" || name == "punt" || name == "drop" || name == "multicast-core-forward-stat" || name == "core-received-stat")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::MulticastForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::~MulticastForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::ReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::~ReceivedStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::ReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::Punt()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "punt"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::~Punt()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "punt";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Punt::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::Drop()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "drop"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::~Drop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "drop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::Drop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::MulticastCoreForwardStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "multicast-core-forward-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::~MulticastCoreForwardStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast-core-forward-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::MulticastCoreForwardStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::CoreReceivedStat()
    :
    packets{YType::uint64, "packets"},
    bytes{YType::uint64, "bytes"}
{

    yang_name = "core-received-stat"; yang_parent_name = "mulicast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::~CoreReceivedStat()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_data() const
{
    if (is_presence_container) return true;
    return packets.is_set
	|| bytes.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(packets.yfilter)
	|| ydk::is_set(bytes.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "core-received-stat";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (packets.is_set || is_set(packets.yfilter)) leaf_name_data.push_back(packets.get_name_leafdata());
    if (bytes.is_set || is_set(bytes.yfilter)) leaf_name_data.push_back(bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "packets")
    {
        packets = value;
        packets.value_namespace = name_space;
        packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bytes")
    {
        bytes = value;
        bytes.value_namespace = name_space;
        bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "packets")
    {
        packets.yfilter = yfilter;
    }
    if(value_path == "bytes")
    {
        bytes.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::ForwardStats::ForwardStat::Mulicast::CoreReceivedStat::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "packets" || name == "bytes")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::IrbInfo()
    :
    mxid_ac_interface_handle{YType::str, "mxid-ac-interface-handle"},
    mxid_pw_id{YType::uint32, "mxid-pw-id"},
    mxid_next_hop_address{YType::str, "mxid-next-hop-address"},
    irb_plat_data_len{YType::uint16, "irb-plat-data-len"},
    irb_plat_data{YType::uint32, "irb-plat-data"}
{

    yang_name = "irb-info"; yang_parent_name = "l2fib-mmrp"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::~IrbInfo()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::has_data() const
{
    if (is_presence_container) return true;
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return mxid_ac_interface_handle.is_set
	|| mxid_pw_id.is_set
	|| mxid_next_hop_address.is_set
	|| irb_plat_data_len.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::has_operation() const
{
    for (auto const & leaf : irb_plat_data.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(mxid_ac_interface_handle.yfilter)
	|| ydk::is_set(mxid_pw_id.yfilter)
	|| ydk::is_set(mxid_next_hop_address.yfilter)
	|| ydk::is_set(irb_plat_data_len.yfilter)
	|| ydk::is_set(irb_plat_data.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "irb-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mxid_ac_interface_handle.is_set || is_set(mxid_ac_interface_handle.yfilter)) leaf_name_data.push_back(mxid_ac_interface_handle.get_name_leafdata());
    if (mxid_pw_id.is_set || is_set(mxid_pw_id.yfilter)) leaf_name_data.push_back(mxid_pw_id.get_name_leafdata());
    if (mxid_next_hop_address.is_set || is_set(mxid_next_hop_address.yfilter)) leaf_name_data.push_back(mxid_next_hop_address.get_name_leafdata());
    if (irb_plat_data_len.is_set || is_set(irb_plat_data_len.yfilter)) leaf_name_data.push_back(irb_plat_data_len.get_name_leafdata());

    auto irb_plat_data_name_datas = irb_plat_data.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), irb_plat_data_name_datas.begin(), irb_plat_data_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle = value;
        mxid_ac_interface_handle.value_namespace = name_space;
        mxid_ac_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id = value;
        mxid_pw_id.value_namespace = name_space;
        mxid_pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address = value;
        mxid_next_hop_address.value_namespace = name_space;
        mxid_next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len = value;
        irb_plat_data_len.value_namespace = name_space;
        irb_plat_data_len.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.append(value);
    }
}

void L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mxid-ac-interface-handle")
    {
        mxid_ac_interface_handle.yfilter = yfilter;
    }
    if(value_path == "mxid-pw-id")
    {
        mxid_pw_id.yfilter = yfilter;
    }
    if(value_path == "mxid-next-hop-address")
    {
        mxid_next_hop_address.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data-len")
    {
        irb_plat_data_len.yfilter = yfilter;
    }
    if(value_path == "irb-plat-data")
    {
        irb_plat_data.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibMmrps::L2fibMmrp::IrbInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mxid-ac-interface-handle" || name == "mxid-pw-id" || name == "mxid-next-hop-address" || name == "irb-plat-data-len" || name == "irb-plat-data")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6macs()
    :
    l2fib_evpn_ip6mac(this, {})
{

    yang_name = "l2fib-evpn-ip6macs"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::~L2fibEvpnIp6macs()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_evpn_ip6mac.len(); index++)
    {
        if(l2fib_evpn_ip6mac[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_ip6mac.len(); index++)
    {
        if(l2fib_evpn_ip6mac[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip6macs";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-ip6mac")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac>();
        ent_->parent = this;
        l2fib_evpn_ip6mac.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_evpn_ip6mac.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-ip6mac")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::L2fibEvpnIp6mac()
    :
    bdid{YType::uint32, "bdid"},
    ip_address{YType::str, "ip-address"},
    is_local{YType::boolean, "is-local"},
    mac_address{YType::str, "mac-address"},
    bdid_xr{YType::uint32, "bdid-xr"},
    mac_address_xr{YType::str, "mac-address-xr"},
    arp_nd_sync_pending{YType::boolean, "arp-nd-sync-pending"},
    arp_nd_probe_pending{YType::boolean, "arp-nd-probe-pending"},
    arp_nd_delete_pending{YType::boolean, "arp-nd-delete-pending"},
    is_local_xr{YType::boolean, "is-local-xr"}
        ,
    ip_address_xr(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr>())
{
    ip_address_xr->parent = this;

    yang_name = "l2fib-evpn-ip6mac"; yang_parent_name = "l2fib-evpn-ip6macs"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::~L2fibEvpnIp6mac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::has_data() const
{
    if (is_presence_container) return true;
    return bdid.is_set
	|| ip_address.is_set
	|| is_local.is_set
	|| mac_address.is_set
	|| bdid_xr.is_set
	|| mac_address_xr.is_set
	|| arp_nd_sync_pending.is_set
	|| arp_nd_probe_pending.is_set
	|| arp_nd_delete_pending.is_set
	|| is_local_xr.is_set
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bdid.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(is_local.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(bdid_xr.yfilter)
	|| ydk::is_set(mac_address_xr.yfilter)
	|| ydk::is_set(arp_nd_sync_pending.yfilter)
	|| ydk::is_set(arp_nd_probe_pending.yfilter)
	|| ydk::is_set(arp_nd_delete_pending.yfilter)
	|| ydk::is_set(is_local_xr.yfilter)
	|| (ip_address_xr !=  nullptr && ip_address_xr->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-ip6mac";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bdid.is_set || is_set(bdid.yfilter)) leaf_name_data.push_back(bdid.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_local.is_set || is_set(is_local.yfilter)) leaf_name_data.push_back(is_local.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (bdid_xr.is_set || is_set(bdid_xr.yfilter)) leaf_name_data.push_back(bdid_xr.get_name_leafdata());
    if (mac_address_xr.is_set || is_set(mac_address_xr.yfilter)) leaf_name_data.push_back(mac_address_xr.get_name_leafdata());
    if (arp_nd_sync_pending.is_set || is_set(arp_nd_sync_pending.yfilter)) leaf_name_data.push_back(arp_nd_sync_pending.get_name_leafdata());
    if (arp_nd_probe_pending.is_set || is_set(arp_nd_probe_pending.yfilter)) leaf_name_data.push_back(arp_nd_probe_pending.get_name_leafdata());
    if (arp_nd_delete_pending.is_set || is_set(arp_nd_delete_pending.yfilter)) leaf_name_data.push_back(arp_nd_delete_pending.get_name_leafdata());
    if (is_local_xr.is_set || is_set(is_local_xr.yfilter)) leaf_name_data.push_back(is_local_xr.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-address-xr")
    {
        if(ip_address_xr == nullptr)
        {
            ip_address_xr = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr>();
        }
        return ip_address_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ip_address_xr != nullptr)
    {
        _children["ip-address-xr"] = ip_address_xr;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bdid")
    {
        bdid = value;
        bdid.value_namespace = name_space;
        bdid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local")
    {
        is_local = value;
        is_local.value_namespace = name_space;
        is_local.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr = value;
        bdid_xr.value_namespace = name_space;
        bdid_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr = value;
        mac_address_xr.value_namespace = name_space;
        mac_address_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending = value;
        arp_nd_sync_pending.value_namespace = name_space;
        arp_nd_sync_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending = value;
        arp_nd_probe_pending.value_namespace = name_space;
        arp_nd_probe_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending = value;
        arp_nd_delete_pending.value_namespace = name_space;
        arp_nd_delete_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr = value;
        is_local_xr.value_namespace = name_space;
        is_local_xr.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bdid")
    {
        bdid.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "is-local")
    {
        is_local.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "bdid-xr")
    {
        bdid_xr.yfilter = yfilter;
    }
    if(value_path == "mac-address-xr")
    {
        mac_address_xr.yfilter = yfilter;
    }
    if(value_path == "arp-nd-sync-pending")
    {
        arp_nd_sync_pending.yfilter = yfilter;
    }
    if(value_path == "arp-nd-probe-pending")
    {
        arp_nd_probe_pending.yfilter = yfilter;
    }
    if(value_path == "arp-nd-delete-pending")
    {
        arp_nd_delete_pending.yfilter = yfilter;
    }
    if(value_path == "is-local-xr")
    {
        is_local_xr.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-address-xr" || name == "bdid" || name == "ip-address" || name == "is-local" || name == "mac-address" || name == "bdid-xr" || name == "mac-address-xr" || name == "arp-nd-sync-pending" || name == "arp-nd-probe-pending" || name == "arp-nd-delete-pending" || name == "is-local-xr")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::IpAddressXr()
    :
    addr_type{YType::enumeration, "addr-type"},
    ip{YType::str, "ip"}
{

    yang_name = "ip-address-xr"; yang_parent_name = "l2fib-evpn-ip6mac"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::~IpAddressXr()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::has_data() const
{
    if (is_presence_container) return true;
    return addr_type.is_set
	|| ip.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(addr_type.yfilter)
	|| ydk::is_set(ip.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-address-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (addr_type.is_set || is_set(addr_type.yfilter)) leaf_name_data.push_back(addr_type.get_name_leafdata());
    if (ip.is_set || is_set(ip.yfilter)) leaf_name_data.push_back(ip.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "addr-type")
    {
        addr_type = value;
        addr_type.value_namespace = name_space;
        addr_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip")
    {
        ip = value;
        ip.value_namespace = name_space;
        ip.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "addr-type")
    {
        addr_type.yfilter = yfilter;
    }
    if(value_path == "ip")
    {
        ip.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnIp6macs::L2fibEvpnIp6mac::IpAddressXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "addr-type" || name == "ip")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgresses()
    :
    l2fib_pwhe_main_port_hardware_egress(this, {"interface_name"})
{

    yang_name = "l2fib-pwhe-main-port-hardware-egresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::~L2fibPwheMainPortHardwareEgresses()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_pwhe_main_port_hardware_egress.len(); index++)
    {
        if(l2fib_pwhe_main_port_hardware_egress[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::has_operation() const
{
    for (std::size_t index=0; index<l2fib_pwhe_main_port_hardware_egress.len(); index++)
    {
        if(l2fib_pwhe_main_port_hardware_egress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-port-hardware-egresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-pwhe-main-port-hardware-egress")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress>();
        ent_->parent = this;
        l2fib_pwhe_main_port_hardware_egress.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_pwhe_main_port_hardware_egress.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-pwhe-main-port-hardware-egress")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::L2fibPwheMainPortHardwareEgress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_type{YType::uint32, "pseudo-wire-type"},
    generic_interface_list_id{YType::uint32, "generic-interface-list-id"},
    internal_label{YType::uint32, "internal-label"},
    remote_label{YType::uint32, "remote-label"},
    control_word_enabled{YType::boolean, "control-word-enabled"}
{

    yang_name = "l2fib-pwhe-main-port-hardware-egress"; yang_parent_name = "l2fib-pwhe-main-port-hardware-egresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::~L2fibPwheMainPortHardwareEgress()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_valid.is_set
	|| next_hop_address.is_set
	|| pseudo_wire_type.is_set
	|| generic_interface_list_id.is_set
	|| internal_label.is_set
	|| remote_label.is_set
	|| control_word_enabled.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_type.yfilter)
	|| ydk::is_set(generic_interface_list_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(control_word_enabled.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-port-hardware-egress";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_type.is_set || is_set(pseudo_wire_type.yfilter)) leaf_name_data.push_back(pseudo_wire_type.get_name_leafdata());
    if (generic_interface_list_id.is_set || is_set(generic_interface_list_id.yfilter)) leaf_name_data.push_back(generic_interface_list_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (control_word_enabled.is_set || is_set(control_word_enabled.yfilter)) leaf_name_data.push_back(control_word_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type = value;
        pseudo_wire_type.value_namespace = name_space;
        pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id = value;
        generic_interface_list_id.value_namespace = name_space;
        generic_interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled = value;
        control_word_enabled.value_namespace = name_space;
        control_word_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareEgresses::L2fibPwheMainPortHardwareEgress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-valid" || name == "next-hop-address" || name == "pseudo-wire-type" || name == "generic-interface-list-id" || name == "internal-label" || name == "remote-label" || name == "control-word-enabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummaries()
    :
    l2fib_dhcp_binding_summary(this, {"xcid"})
{

    yang_name = "l2fib-dhcp-binding-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::~L2fibDhcpBindingSummaries()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_dhcp_binding_summary.len(); index++)
    {
        if(l2fib_dhcp_binding_summary[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::has_operation() const
{
    for (std::size_t index=0; index<l2fib_dhcp_binding_summary.len(); index++)
    {
        if(l2fib_dhcp_binding_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-dhcp-binding-summary")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary>();
        ent_->parent = this;
        l2fib_dhcp_binding_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_dhcp_binding_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-dhcp-binding-summary")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::L2fibDhcpBindingSummary()
    :
    xcid{YType::str, "xcid"},
    bindings{YType::uint32, "bindings"}
        ,
    port(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port>())
{
    port->parent = this;

    yang_name = "l2fib-dhcp-binding-summary"; yang_parent_name = "l2fib-dhcp-binding-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::~L2fibDhcpBindingSummary()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::has_data() const
{
    if (is_presence_container) return true;
    return xcid.is_set
	|| bindings.is_set
	|| (port !=  nullptr && port->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(bindings.yfilter)
	|| (port !=  nullptr && port->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-dhcp-binding-summary";
    ADD_KEY_TOKEN(xcid, "xcid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (bindings.is_set || is_set(bindings.yfilter)) leaf_name_data.push_back(bindings.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "port")
    {
        if(port == nullptr)
        {
            port = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port>();
        }
        return port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(port != nullptr)
    {
        _children["port"] = port;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bindings")
    {
        bindings = value;
        bindings.value_namespace = name_space;
        bindings.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "bindings")
    {
        bindings.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port" || name == "xcid" || name == "bindings")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Port()
    :
    data_type{YType::enumeration, "data-type"}
        ,
    ac(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac>())
    , pw(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw>())
{
    ac->parent = this;
    pw->parent = this;

    yang_name = "port"; yang_parent_name = "l2fib-dhcp-binding-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::~Port()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::has_data() const
{
    if (is_presence_container) return true;
    return data_type.is_set
	|| (ac !=  nullptr && ac->has_data())
	|| (pw !=  nullptr && pw->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(data_type.yfilter)
	|| (ac !=  nullptr && ac->has_operation())
	|| (pw !=  nullptr && pw->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (data_type.is_set || is_set(data_type.yfilter)) leaf_name_data.push_back(data_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ac")
    {
        if(ac == nullptr)
        {
            ac = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac>();
        }
        return ac;
    }

    if(child_yang_name == "pw")
    {
        if(pw == nullptr)
        {
            pw = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw>();
        }
        return pw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ac != nullptr)
    {
        _children["ac"] = ac;
    }

    if(pw != nullptr)
    {
        _children["pw"] = pw;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "data-type")
    {
        data_type = value;
        data_type.value_namespace = name_space;
        data_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "data-type")
    {
        data_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ac" || name == "pw" || name == "data-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::Ac()
    :
    interface_name{YType::str, "interface-name"},
    vsp_vlan{YType::uint16, "vsp-vlan"}
{

    yang_name = "ac"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::~Ac()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| vsp_vlan.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vsp_vlan.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ac";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vsp_vlan.is_set || is_set(vsp_vlan.yfilter)) leaf_name_data.push_back(vsp_vlan.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vsp-vlan")
    {
        vsp_vlan = value;
        vsp_vlan.value_namespace = name_space;
        vsp_vlan.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vsp-vlan")
    {
        vsp_vlan.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Ac::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "vsp-vlan")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::Pw()
    :
    pw_id{YType::uint64, "pw-id"},
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_id_type{YType::enumeration, "pseudo-wire-id-type"}
{

    yang_name = "pw"; yang_parent_name = "port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::~Pw()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::has_data() const
{
    if (is_presence_container) return true;
    return pw_id.is_set
	|| next_hop_address.is_set
	|| pseudo_wire_id_type.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_id.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_id_type.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pw";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_id.is_set || is_set(pw_id.yfilter)) leaf_name_data.push_back(pw_id.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_id_type.is_set || is_set(pseudo_wire_id_type.yfilter)) leaf_name_data.push_back(pseudo_wire_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-id")
    {
        pw_id = value;
        pw_id.value_namespace = name_space;
        pw_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type = value;
        pseudo_wire_id_type.value_namespace = name_space;
        pseudo_wire_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-id")
    {
        pw_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-id-type")
    {
        pseudo_wire_id_type.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibDhcpBindingSummaries::L2fibDhcpBindingSummary::Port::Pw::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-id" || name == "next-hop-address" || name == "pseudo-wire-id-type")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngresses()
    :
    l2fib_pwhe_main_port_hardware_ingress(this, {"interface_name"})
{

    yang_name = "l2fib-pwhe-main-port-hardware-ingresses"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::~L2fibPwheMainPortHardwareIngresses()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_pwhe_main_port_hardware_ingress.len(); index++)
    {
        if(l2fib_pwhe_main_port_hardware_ingress[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::has_operation() const
{
    for (std::size_t index=0; index<l2fib_pwhe_main_port_hardware_ingress.len(); index++)
    {
        if(l2fib_pwhe_main_port_hardware_ingress[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-port-hardware-ingresses";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-pwhe-main-port-hardware-ingress")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress>();
        ent_->parent = this;
        l2fib_pwhe_main_port_hardware_ingress.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_pwhe_main_port_hardware_ingress.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-pwhe-main-port-hardware-ingress")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::L2fibPwheMainPortHardwareIngress()
    :
    interface_name{YType::str, "interface-name"},
    next_hop_valid{YType::boolean, "next-hop-valid"},
    next_hop_address{YType::str, "next-hop-address"},
    pseudo_wire_type{YType::uint32, "pseudo-wire-type"},
    generic_interface_list_id{YType::uint32, "generic-interface-list-id"},
    internal_label{YType::uint32, "internal-label"},
    remote_label{YType::uint32, "remote-label"},
    control_word_enabled{YType::boolean, "control-word-enabled"}
{

    yang_name = "l2fib-pwhe-main-port-hardware-ingress"; yang_parent_name = "l2fib-pwhe-main-port-hardware-ingresses"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::~L2fibPwheMainPortHardwareIngress()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| next_hop_valid.is_set
	|| next_hop_address.is_set
	|| pseudo_wire_type.is_set
	|| generic_interface_list_id.is_set
	|| internal_label.is_set
	|| remote_label.is_set
	|| control_word_enabled.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(pseudo_wire_type.yfilter)
	|| ydk::is_set(generic_interface_list_id.yfilter)
	|| ydk::is_set(internal_label.yfilter)
	|| ydk::is_set(remote_label.yfilter)
	|| ydk::is_set(control_word_enabled.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-pwhe-main-port-hardware-ingress";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());
    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (pseudo_wire_type.is_set || is_set(pseudo_wire_type.yfilter)) leaf_name_data.push_back(pseudo_wire_type.get_name_leafdata());
    if (generic_interface_list_id.is_set || is_set(generic_interface_list_id.yfilter)) leaf_name_data.push_back(generic_interface_list_id.get_name_leafdata());
    if (internal_label.is_set || is_set(internal_label.yfilter)) leaf_name_data.push_back(internal_label.get_name_leafdata());
    if (remote_label.is_set || is_set(remote_label.yfilter)) leaf_name_data.push_back(remote_label.get_name_leafdata());
    if (control_word_enabled.is_set || is_set(control_word_enabled.yfilter)) leaf_name_data.push_back(control_word_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type = value;
        pseudo_wire_type.value_namespace = name_space;
        pseudo_wire_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id = value;
        generic_interface_list_id.value_namespace = name_space;
        generic_interface_list_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-label")
    {
        internal_label = value;
        internal_label.value_namespace = name_space;
        internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-label")
    {
        remote_label = value;
        remote_label.value_namespace = name_space;
        remote_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled = value;
        control_word_enabled.value_namespace = name_space;
        control_word_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "pseudo-wire-type")
    {
        pseudo_wire_type.yfilter = yfilter;
    }
    if(value_path == "generic-interface-list-id")
    {
        generic_interface_list_id.yfilter = yfilter;
    }
    if(value_path == "internal-label")
    {
        internal_label.yfilter = yfilter;
    }
    if(value_path == "remote-label")
    {
        remote_label.yfilter = yfilter;
    }
    if(value_path == "control-word-enabled")
    {
        control_word_enabled.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibPwheMainPortHardwareIngresses::L2fibPwheMainPortHardwareIngress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "next-hop-valid" || name == "next-hop-address" || name == "pseudo-wire-type" || name == "generic-interface-list-id" || name == "internal-label" || name == "remote-label" || name == "control-word-enabled")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCasts()
    :
    l2fib_evpn_incl_m_cast(this, {"bd_name"})
{

    yang_name = "l2fib-evpn-incl-m-casts"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::~L2fibEvpnInclMCasts()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast.len(); index++)
    {
        if(l2fib_evpn_incl_m_cast[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast.len(); index++)
    {
        if(l2fib_evpn_incl_m_cast[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-casts";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast>();
        ent_->parent = this;
        l2fib_evpn_incl_m_cast.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_evpn_incl_m_cast.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCast()
    :
    bd_name{YType::str, "bd-name"}
        ,
    mcast_replication_list(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList>())
    , l2fib_evpn_incl_m_cast_oles(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles>())
{
    mcast_replication_list->parent = this;
    l2fib_evpn_incl_m_cast_oles->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast"; yang_parent_name = "l2fib-evpn-incl-m-casts"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::~L2fibEvpnInclMCast()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::has_data() const
{
    if (is_presence_container) return true;
    return bd_name.is_set
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_data())
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bd_name.yfilter)
	|| (mcast_replication_list !=  nullptr && mcast_replication_list->has_operation())
	|| (l2fib_evpn_incl_m_cast_oles !=  nullptr && l2fib_evpn_incl_m_cast_oles->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast";
    ADD_KEY_TOKEN(bd_name, "bd-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bd_name.is_set || is_set(bd_name.yfilter)) leaf_name_data.push_back(bd_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-replication-list")
    {
        if(mcast_replication_list == nullptr)
        {
            mcast_replication_list = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList>();
        }
        return mcast_replication_list;
    }

    if(child_yang_name == "l2fib-evpn-incl-m-cast-oles")
    {
        if(l2fib_evpn_incl_m_cast_oles == nullptr)
        {
            l2fib_evpn_incl_m_cast_oles = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles>();
        }
        return l2fib_evpn_incl_m_cast_oles;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcast_replication_list != nullptr)
    {
        _children["mcast-replication-list"] = mcast_replication_list;
    }

    if(l2fib_evpn_incl_m_cast_oles != nullptr)
    {
        _children["l2fib-evpn-incl-m-cast-oles"] = l2fib_evpn_incl_m_cast_oles;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bd-name")
    {
        bd_name = value;
        bd_name.value_namespace = name_space;
        bd_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bd-name")
    {
        bd_name.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-replication-list" || name == "l2fib-evpn-incl-m-cast-oles" || name == "bd-name")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::McastReplicationList()
    :
    bridge_domain_name{YType::str, "bridge-domain-name"},
    bridge_domain_id{YType::uint32, "bridge-domain-id"},
    xcid{YType::uint32, "xcid"},
    is_bound{YType::boolean, "is-bound"}
{

    yang_name = "mcast-replication-list"; yang_parent_name = "l2fib-evpn-incl-m-cast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::~McastReplicationList()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::has_data() const
{
    if (is_presence_container) return true;
    return bridge_domain_name.is_set
	|| bridge_domain_id.is_set
	|| xcid.is_set
	|| is_bound.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_domain_name.yfilter)
	|| ydk::is_set(bridge_domain_id.yfilter)
	|| ydk::is_set(xcid.yfilter)
	|| ydk::is_set(is_bound.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-replication-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_domain_name.is_set || is_set(bridge_domain_name.yfilter)) leaf_name_data.push_back(bridge_domain_name.get_name_leafdata());
    if (bridge_domain_id.is_set || is_set(bridge_domain_id.yfilter)) leaf_name_data.push_back(bridge_domain_id.get_name_leafdata());
    if (xcid.is_set || is_set(xcid.yfilter)) leaf_name_data.push_back(xcid.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name = value;
        bridge_domain_name.value_namespace = name_space;
        bridge_domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id = value;
        bridge_domain_id.value_namespace = name_space;
        bridge_domain_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xcid")
    {
        xcid = value;
        xcid.value_namespace = name_space;
        xcid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-domain-name")
    {
        bridge_domain_name.yfilter = yfilter;
    }
    if(value_path == "bridge-domain-id")
    {
        bridge_domain_id.yfilter = yfilter;
    }
    if(value_path == "xcid")
    {
        xcid.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::McastReplicationList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-domain-name" || name == "bridge-domain-id" || name == "xcid" || name == "is-bound")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOles()
    :
    l2fib_evpn_incl_m_cast_ole(this, {"next_hop_address"})
{

    yang_name = "l2fib-evpn-incl-m-cast-oles"; yang_parent_name = "l2fib-evpn-incl-m-cast"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::~L2fibEvpnInclMCastOles()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.len(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::has_operation() const
{
    for (std::size_t index=0; index<l2fib_evpn_incl_m_cast_ole.len(); index++)
    {
        if(l2fib_evpn_incl_m_cast_ole[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-oles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2fib-evpn-incl-m-cast-ole")
    {
        auto ent_ = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle>();
        ent_->parent = this;
        l2fib_evpn_incl_m_cast_ole.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : l2fib_evpn_incl_m_cast_ole.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2fib-evpn-incl-m-cast-ole")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::L2fibEvpnInclMCastOle()
    :
    next_hop_address{YType::str, "next-hop-address"},
    is_bound{YType::boolean, "is-bound"},
    is_etree_leaf{YType::boolean, "is-etree-leaf"},
    next_hop_valid{YType::boolean, "next-hop-valid"}
        ,
    mcast_ole(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle>())
    , next_hop(std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop>())
{
    mcast_ole->parent = this;
    next_hop->parent = this;

    yang_name = "l2fib-evpn-incl-m-cast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-oles"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::~L2fibEvpnInclMCastOle()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| is_bound.is_set
	|| is_etree_leaf.is_set
	|| next_hop_valid.is_set
	|| (mcast_ole !=  nullptr && mcast_ole->has_data())
	|| (next_hop !=  nullptr && next_hop->has_data());
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(is_bound.yfilter)
	|| ydk::is_set(is_etree_leaf.yfilter)
	|| ydk::is_set(next_hop_valid.yfilter)
	|| (mcast_ole !=  nullptr && mcast_ole->has_operation())
	|| (next_hop !=  nullptr && next_hop->has_operation());
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2fib-evpn-incl-m-cast-ole";
    ADD_KEY_TOKEN(next_hop_address, "next-hop-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (is_bound.is_set || is_set(is_bound.yfilter)) leaf_name_data.push_back(is_bound.get_name_leafdata());
    if (is_etree_leaf.is_set || is_set(is_etree_leaf.yfilter)) leaf_name_data.push_back(is_etree_leaf.get_name_leafdata());
    if (next_hop_valid.is_set || is_set(next_hop_valid.yfilter)) leaf_name_data.push_back(next_hop_valid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mcast-ole")
    {
        if(mcast_ole == nullptr)
        {
            mcast_ole = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle>();
        }
        return mcast_ole;
    }

    if(child_yang_name == "next-hop")
    {
        if(next_hop == nullptr)
        {
            next_hop = std::make_shared<L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop>();
        }
        return next_hop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mcast_ole != nullptr)
    {
        _children["mcast-ole"] = mcast_ole;
    }

    if(next_hop != nullptr)
    {
        _children["next-hop"] = next_hop;
    }

    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-bound")
    {
        is_bound = value;
        is_bound.value_namespace = name_space;
        is_bound.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-etree-leaf")
    {
        is_etree_leaf = value;
        is_etree_leaf.value_namespace = name_space;
        is_etree_leaf.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid = value;
        next_hop_valid.value_namespace = name_space;
        next_hop_valid.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "is-bound")
    {
        is_bound.yfilter = yfilter;
    }
    if(value_path == "is-etree-leaf")
    {
        is_etree_leaf.yfilter = yfilter;
    }
    if(value_path == "next-hop-valid")
    {
        next_hop_valid.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mcast-ole" || name == "next-hop" || name == "next-hop-address" || name == "is-bound" || name == "is-etree-leaf" || name == "next-hop-valid")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::McastOle()
    :
    tunnel_endpoint_id{YType::uint32, "tunnel-endpoint-id"},
    next_hop_ipv6_addr{YType::str, "next-hop-ipv6-addr"},
    mcast_label{YType::uint32, "mcast-label"},
    mcast_encapsulation{YType::uint32, "mcast-encapsulation"}
{

    yang_name = "mcast-ole"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::~McastOle()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::has_data() const
{
    if (is_presence_container) return true;
    return tunnel_endpoint_id.is_set
	|| next_hop_ipv6_addr.is_set
	|| mcast_label.is_set
	|| mcast_encapsulation.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(tunnel_endpoint_id.yfilter)
	|| ydk::is_set(next_hop_ipv6_addr.yfilter)
	|| ydk::is_set(mcast_label.yfilter)
	|| ydk::is_set(mcast_encapsulation.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mcast-ole";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tunnel_endpoint_id.is_set || is_set(tunnel_endpoint_id.yfilter)) leaf_name_data.push_back(tunnel_endpoint_id.get_name_leafdata());
    if (next_hop_ipv6_addr.is_set || is_set(next_hop_ipv6_addr.yfilter)) leaf_name_data.push_back(next_hop_ipv6_addr.get_name_leafdata());
    if (mcast_label.is_set || is_set(mcast_label.yfilter)) leaf_name_data.push_back(mcast_label.get_name_leafdata());
    if (mcast_encapsulation.is_set || is_set(mcast_encapsulation.yfilter)) leaf_name_data.push_back(mcast_encapsulation.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id = value;
        tunnel_endpoint_id.value_namespace = name_space;
        tunnel_endpoint_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr = value;
        next_hop_ipv6_addr.value_namespace = name_space;
        next_hop_ipv6_addr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-label")
    {
        mcast_label = value;
        mcast_label.value_namespace = name_space;
        mcast_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mcast-encapsulation")
    {
        mcast_encapsulation = value;
        mcast_encapsulation.value_namespace = name_space;
        mcast_encapsulation.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "tunnel-endpoint-id")
    {
        tunnel_endpoint_id.yfilter = yfilter;
    }
    if(value_path == "next-hop-ipv6-addr")
    {
        next_hop_ipv6_addr.yfilter = yfilter;
    }
    if(value_path == "mcast-label")
    {
        mcast_label.yfilter = yfilter;
    }
    if(value_path == "mcast-encapsulation")
    {
        mcast_encapsulation.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::McastOle::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-endpoint-id" || name == "next-hop-ipv6-addr" || name == "mcast-label" || name == "mcast-encapsulation")
        return true;
    return false;
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::NextHop()
    :
    next_hop_address{YType::str, "next-hop-address"},
    next_hop_address_v6{YType::str, "next-hop-address-v6"},
    next_hop_internal_label{YType::uint32, "next-hop-internal-label"},
    ecd_plaformt_data_valid{YType::boolean, "ecd-plaformt-data-valid"},
    ecd_platform_data_length{YType::uint32, "ecd-platform-data-length"},
    children_count{YType::uint32, "children-count"}
{

    yang_name = "next-hop"; yang_parent_name = "l2fib-evpn-incl-m-cast-ole"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::~NextHop()
{
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::has_data() const
{
    if (is_presence_container) return true;
    return next_hop_address.is_set
	|| next_hop_address_v6.is_set
	|| next_hop_internal_label.is_set
	|| ecd_plaformt_data_valid.is_set
	|| ecd_platform_data_length.is_set
	|| children_count.is_set;
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(next_hop_address.yfilter)
	|| ydk::is_set(next_hop_address_v6.yfilter)
	|| ydk::is_set(next_hop_internal_label.yfilter)
	|| ydk::is_set(ecd_plaformt_data_valid.yfilter)
	|| ydk::is_set(ecd_platform_data_length.yfilter)
	|| ydk::is_set(children_count.yfilter);
}

std::string L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "next-hop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (next_hop_address.is_set || is_set(next_hop_address.yfilter)) leaf_name_data.push_back(next_hop_address.get_name_leafdata());
    if (next_hop_address_v6.is_set || is_set(next_hop_address_v6.yfilter)) leaf_name_data.push_back(next_hop_address_v6.get_name_leafdata());
    if (next_hop_internal_label.is_set || is_set(next_hop_internal_label.yfilter)) leaf_name_data.push_back(next_hop_internal_label.get_name_leafdata());
    if (ecd_plaformt_data_valid.is_set || is_set(ecd_plaformt_data_valid.yfilter)) leaf_name_data.push_back(ecd_plaformt_data_valid.get_name_leafdata());
    if (ecd_platform_data_length.is_set || is_set(ecd_platform_data_length.yfilter)) leaf_name_data.push_back(ecd_platform_data_length.get_name_leafdata());
    if (children_count.is_set || is_set(children_count.yfilter)) leaf_name_data.push_back(children_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address = value;
        next_hop_address.value_namespace = name_space;
        next_hop_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6 = value;
        next_hop_address_v6.value_namespace = name_space;
        next_hop_address_v6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label = value;
        next_hop_internal_label.value_namespace = name_space;
        next_hop_internal_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid = value;
        ecd_plaformt_data_valid.value_namespace = name_space;
        ecd_plaformt_data_valid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length = value;
        ecd_platform_data_length.value_namespace = name_space;
        ecd_platform_data_length.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "children-count")
    {
        children_count = value;
        children_count.value_namespace = name_space;
        children_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "next-hop-address")
    {
        next_hop_address.yfilter = yfilter;
    }
    if(value_path == "next-hop-address-v6")
    {
        next_hop_address_v6.yfilter = yfilter;
    }
    if(value_path == "next-hop-internal-label")
    {
        next_hop_internal_label.yfilter = yfilter;
    }
    if(value_path == "ecd-plaformt-data-valid")
    {
        ecd_plaformt_data_valid.yfilter = yfilter;
    }
    if(value_path == "ecd-platform-data-length")
    {
        ecd_platform_data_length.yfilter = yfilter;
    }
    if(value_path == "children-count")
    {
        children_count.yfilter = yfilter;
    }
}

bool L2vpnForwarding::Nodes::Node::L2fibEvpnInclMCasts::L2fibEvpnInclMCast::L2fibEvpnInclMCastOles::L2fibEvpnInclMCastOle::NextHop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "next-hop-address" || name == "next-hop-address-v6" || name == "next-hop-internal-label" || name == "ecd-plaformt-data-valid" || name == "ecd-platform-data-length" || name == "children-count")
        return true;
    return false;
}

L2vpnv2::L2vpnv2()
    :
    standby(std::make_shared<L2vpnv2::Standby>())
    , active(std::make_shared<L2vpnv2::Active>())
    , nodes(std::make_shared<L2vpnv2::Nodes>())
{
    standby->parent = this;
    active->parent = this;
    nodes->parent = this;

    yang_name = "l2vpnv2"; yang_parent_name = "Cisco-IOS-XR-l2vpn-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

L2vpnv2::~L2vpnv2()
{
}

bool L2vpnv2::has_data() const
{
    if (is_presence_container) return true;
    return (standby !=  nullptr && standby->has_data())
	|| (active !=  nullptr && active->has_data())
	|| (nodes !=  nullptr && nodes->has_data());
}

bool L2vpnv2::has_operation() const
{
    return is_set(yfilter)
	|| (standby !=  nullptr && standby->has_operation())
	|| (active !=  nullptr && active->has_operation())
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string L2vpnv2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<L2vpnv2::Standby>();
        }
        return standby;
    }

    if(child_yang_name == "active")
    {
        if(active == nullptr)
        {
            active = std::make_shared<L2vpnv2::Active>();
        }
        return active;
    }

    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<L2vpnv2::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(standby != nullptr)
    {
        _children["standby"] = standby;
    }

    if(active != nullptr)
    {
        _children["active"] = active;
    }

    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void L2vpnv2::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> L2vpnv2::clone_ptr() const
{
    return std::make_shared<L2vpnv2>();
}

std::string L2vpnv2::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string L2vpnv2::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function L2vpnv2::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> L2vpnv2::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool L2vpnv2::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "standby" || name == "active" || name == "nodes")
        return true;
    return false;
}

L2vpnv2::Standby::Standby()
    :
    discoveries(std::make_shared<L2vpnv2::Standby::Discoveries>())
    , flexible_xconnect_service_summary(std::make_shared<L2vpnv2::Standby::FlexibleXconnectServiceSummary>())
    , main_interfaces(std::make_shared<L2vpnv2::Standby::MainInterfaces>())
    , iccp_sm(std::make_shared<L2vpnv2::Standby::IccpSm>())
    , bridge_summary(std::make_shared<L2vpnv2::Standby::BridgeSummary>())
    , nsr(std::make_shared<L2vpnv2::Standby::Nsr>())
    , preferred_paths(std::make_shared<L2vpnv2::Standby::PreferredPaths>())
    , pseudowire_headend(std::make_shared<L2vpnv2::Standby::PseudowireHeadend>())
    , global_settings(std::make_shared<L2vpnv2::Standby::GlobalSettings>())
    , pwr(std::make_shared<L2vpnv2::Standby::Pwr>())
    , xconnect_mp2mp_ce2ces(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces>())
    , xconnects(std::make_shared<L2vpnv2::Standby::Xconnects>())
    , xconnect_groups(std::make_shared<L2vpnv2::Standby::XconnectGroups>())
    , xconnect_mp2mps(std::make_shared<L2vpnv2::Standby::XconnectMp2mps>())
    , indexes(std::make_shared<L2vpnv2::Standby::Indexes>())
    , xconnect_summary(std::make_shared<L2vpnv2::Standby::XconnectSummary>())
    , proc_fsm(std::make_shared<L2vpnv2::Standby::ProcFsm>())
    , mstp_ports(std::make_shared<L2vpnv2::Standby::MstpPorts>())
    , generic_interface_list_details(std::make_shared<L2vpnv2::Standby::GenericInterfaceListDetails>())
    , l2vpn_resource_state(std::make_shared<L2vpnv2::Standby::L2vpnResourceState>())
    , bridge_domains(std::make_shared<L2vpnv2::Standby::BridgeDomains>())
    , discovery_summary(std::make_shared<L2vpnv2::Standby::DiscoverySummary>())
    , g8032(std::make_shared<L2vpnv2::Standby::G8032>())
    , pseudowire_classes(std::make_shared<L2vpnv2::Standby::PseudowireClasses>())
    , l2vpn_collaborators(std::make_shared<L2vpnv2::Standby::L2vpnCollaborators>())
    , mvrp(std::make_shared<L2vpnv2::Standby::Mvrp>())
    , generic_interface_lists(std::make_shared<L2vpnv2::Standby::GenericInterfaceLists>())
    , mstp_vlans(std::make_shared<L2vpnv2::Standby::MstpVlans>())
    , l2vpn_pbb_bsa(std::make_shared<L2vpnv2::Standby::L2vpnPbbBsa>())
    , flexible_xconnect_services(std::make_shared<L2vpnv2::Standby::FlexibleXconnectServices>())
    , xconnect_brief(std::make_shared<L2vpnv2::Standby::XconnectBrief>())
{
    discoveries->parent = this;
    flexible_xconnect_service_summary->parent = this;
    main_interfaces->parent = this;
    iccp_sm->parent = this;
    bridge_summary->parent = this;
    nsr->parent = this;
    preferred_paths->parent = this;
    pseudowire_headend->parent = this;
    global_settings->parent = this;
    pwr->parent = this;
    xconnect_mp2mp_ce2ces->parent = this;
    xconnects->parent = this;
    xconnect_groups->parent = this;
    xconnect_mp2mps->parent = this;
    indexes->parent = this;
    xconnect_summary->parent = this;
    proc_fsm->parent = this;
    mstp_ports->parent = this;
    generic_interface_list_details->parent = this;
    l2vpn_resource_state->parent = this;
    bridge_domains->parent = this;
    discovery_summary->parent = this;
    g8032->parent = this;
    pseudowire_classes->parent = this;
    l2vpn_collaborators->parent = this;
    mvrp->parent = this;
    generic_interface_lists->parent = this;
    mstp_vlans->parent = this;
    l2vpn_pbb_bsa->parent = this;
    flexible_xconnect_services->parent = this;
    xconnect_brief->parent = this;

    yang_name = "standby"; yang_parent_name = "l2vpnv2"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::~Standby()
{
}

bool L2vpnv2::Standby::has_data() const
{
    if (is_presence_container) return true;
    return (discoveries !=  nullptr && discoveries->has_data())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_data())
	|| (main_interfaces !=  nullptr && main_interfaces->has_data())
	|| (iccp_sm !=  nullptr && iccp_sm->has_data())
	|| (bridge_summary !=  nullptr && bridge_summary->has_data())
	|| (nsr !=  nullptr && nsr->has_data())
	|| (preferred_paths !=  nullptr && preferred_paths->has_data())
	|| (pseudowire_headend !=  nullptr && pseudowire_headend->has_data())
	|| (global_settings !=  nullptr && global_settings->has_data())
	|| (pwr !=  nullptr && pwr->has_data())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_data())
	|| (xconnects !=  nullptr && xconnects->has_data())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_data())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_data())
	|| (indexes !=  nullptr && indexes->has_data())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_data())
	|| (proc_fsm !=  nullptr && proc_fsm->has_data())
	|| (mstp_ports !=  nullptr && mstp_ports->has_data())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_data())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_data())
	|| (bridge_domains !=  nullptr && bridge_domains->has_data())
	|| (discovery_summary !=  nullptr && discovery_summary->has_data())
	|| (g8032 !=  nullptr && g8032->has_data())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_data())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_data())
	|| (mvrp !=  nullptr && mvrp->has_data())
	|| (generic_interface_lists !=  nullptr && generic_interface_lists->has_data())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_data())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_data())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_data())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_data());
}

bool L2vpnv2::Standby::has_operation() const
{
    return is_set(yfilter)
	|| (discoveries !=  nullptr && discoveries->has_operation())
	|| (flexible_xconnect_service_summary !=  nullptr && flexible_xconnect_service_summary->has_operation())
	|| (main_interfaces !=  nullptr && main_interfaces->has_operation())
	|| (iccp_sm !=  nullptr && iccp_sm->has_operation())
	|| (bridge_summary !=  nullptr && bridge_summary->has_operation())
	|| (nsr !=  nullptr && nsr->has_operation())
	|| (preferred_paths !=  nullptr && preferred_paths->has_operation())
	|| (pseudowire_headend !=  nullptr && pseudowire_headend->has_operation())
	|| (global_settings !=  nullptr && global_settings->has_operation())
	|| (pwr !=  nullptr && pwr->has_operation())
	|| (xconnect_mp2mp_ce2ces !=  nullptr && xconnect_mp2mp_ce2ces->has_operation())
	|| (xconnects !=  nullptr && xconnects->has_operation())
	|| (xconnect_groups !=  nullptr && xconnect_groups->has_operation())
	|| (xconnect_mp2mps !=  nullptr && xconnect_mp2mps->has_operation())
	|| (indexes !=  nullptr && indexes->has_operation())
	|| (xconnect_summary !=  nullptr && xconnect_summary->has_operation())
	|| (proc_fsm !=  nullptr && proc_fsm->has_operation())
	|| (mstp_ports !=  nullptr && mstp_ports->has_operation())
	|| (generic_interface_list_details !=  nullptr && generic_interface_list_details->has_operation())
	|| (l2vpn_resource_state !=  nullptr && l2vpn_resource_state->has_operation())
	|| (bridge_domains !=  nullptr && bridge_domains->has_operation())
	|| (discovery_summary !=  nullptr && discovery_summary->has_operation())
	|| (g8032 !=  nullptr && g8032->has_operation())
	|| (pseudowire_classes !=  nullptr && pseudowire_classes->has_operation())
	|| (l2vpn_collaborators !=  nullptr && l2vpn_collaborators->has_operation())
	|| (mvrp !=  nullptr && mvrp->has_operation())
	|| (generic_interface_lists !=  nullptr && generic_interface_lists->has_operation())
	|| (mstp_vlans !=  nullptr && mstp_vlans->has_operation())
	|| (l2vpn_pbb_bsa !=  nullptr && l2vpn_pbb_bsa->has_operation())
	|| (flexible_xconnect_services !=  nullptr && flexible_xconnect_services->has_operation())
	|| (xconnect_brief !=  nullptr && xconnect_brief->has_operation());
}

std::string L2vpnv2::Standby::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discoveries")
    {
        if(discoveries == nullptr)
        {
            discoveries = std::make_shared<L2vpnv2::Standby::Discoveries>();
        }
        return discoveries;
    }

    if(child_yang_name == "flexible-xconnect-service-summary")
    {
        if(flexible_xconnect_service_summary == nullptr)
        {
            flexible_xconnect_service_summary = std::make_shared<L2vpnv2::Standby::FlexibleXconnectServiceSummary>();
        }
        return flexible_xconnect_service_summary;
    }

    if(child_yang_name == "main-interfaces")
    {
        if(main_interfaces == nullptr)
        {
            main_interfaces = std::make_shared<L2vpnv2::Standby::MainInterfaces>();
        }
        return main_interfaces;
    }

    if(child_yang_name == "iccp-sm")
    {
        if(iccp_sm == nullptr)
        {
            iccp_sm = std::make_shared<L2vpnv2::Standby::IccpSm>();
        }
        return iccp_sm;
    }

    if(child_yang_name == "bridge-summary")
    {
        if(bridge_summary == nullptr)
        {
            bridge_summary = std::make_shared<L2vpnv2::Standby::BridgeSummary>();
        }
        return bridge_summary;
    }

    if(child_yang_name == "nsr")
    {
        if(nsr == nullptr)
        {
            nsr = std::make_shared<L2vpnv2::Standby::Nsr>();
        }
        return nsr;
    }

    if(child_yang_name == "preferred-paths")
    {
        if(preferred_paths == nullptr)
        {
            preferred_paths = std::make_shared<L2vpnv2::Standby::PreferredPaths>();
        }
        return preferred_paths;
    }

    if(child_yang_name == "pseudowire-headend")
    {
        if(pseudowire_headend == nullptr)
        {
            pseudowire_headend = std::make_shared<L2vpnv2::Standby::PseudowireHeadend>();
        }
        return pseudowire_headend;
    }

    if(child_yang_name == "global-settings")
    {
        if(global_settings == nullptr)
        {
            global_settings = std::make_shared<L2vpnv2::Standby::GlobalSettings>();
        }
        return global_settings;
    }

    if(child_yang_name == "pwr")
    {
        if(pwr == nullptr)
        {
            pwr = std::make_shared<L2vpnv2::Standby::Pwr>();
        }
        return pwr;
    }

    if(child_yang_name == "xconnect-mp2mp-ce2ces")
    {
        if(xconnect_mp2mp_ce2ces == nullptr)
        {
            xconnect_mp2mp_ce2ces = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces>();
        }
        return xconnect_mp2mp_ce2ces;
    }

    if(child_yang_name == "xconnects")
    {
        if(xconnects == nullptr)
        {
            xconnects = std::make_shared<L2vpnv2::Standby::Xconnects>();
        }
        return xconnects;
    }

    if(child_yang_name == "xconnect-groups")
    {
        if(xconnect_groups == nullptr)
        {
            xconnect_groups = std::make_shared<L2vpnv2::Standby::XconnectGroups>();
        }
        return xconnect_groups;
    }

    if(child_yang_name == "xconnect-mp2mps")
    {
        if(xconnect_mp2mps == nullptr)
        {
            xconnect_mp2mps = std::make_shared<L2vpnv2::Standby::XconnectMp2mps>();
        }
        return xconnect_mp2mps;
    }

    if(child_yang_name == "indexes")
    {
        if(indexes == nullptr)
        {
            indexes = std::make_shared<L2vpnv2::Standby::Indexes>();
        }
        return indexes;
    }

    if(child_yang_name == "xconnect-summary")
    {
        if(xconnect_summary == nullptr)
        {
            xconnect_summary = std::make_shared<L2vpnv2::Standby::XconnectSummary>();
        }
        return xconnect_summary;
    }

    if(child_yang_name == "proc-fsm")
    {
        if(proc_fsm == nullptr)
        {
            proc_fsm = std::make_shared<L2vpnv2::Standby::ProcFsm>();
        }
        return proc_fsm;
    }

    if(child_yang_name == "mstp-ports")
    {
        if(mstp_ports == nullptr)
        {
            mstp_ports = std::make_shared<L2vpnv2::Standby::MstpPorts>();
        }
        return mstp_ports;
    }

    if(child_yang_name == "generic-interface-list-details")
    {
        if(generic_interface_list_details == nullptr)
        {
            generic_interface_list_details = std::make_shared<L2vpnv2::Standby::GenericInterfaceListDetails>();
        }
        return generic_interface_list_details;
    }

    if(child_yang_name == "l2vpn-resource-state")
    {
        if(l2vpn_resource_state == nullptr)
        {
            l2vpn_resource_state = std::make_shared<L2vpnv2::Standby::L2vpnResourceState>();
        }
        return l2vpn_resource_state;
    }

    if(child_yang_name == "bridge-domains")
    {
        if(bridge_domains == nullptr)
        {
            bridge_domains = std::make_shared<L2vpnv2::Standby::BridgeDomains>();
        }
        return bridge_domains;
    }

    if(child_yang_name == "discovery-summary")
    {
        if(discovery_summary == nullptr)
        {
            discovery_summary = std::make_shared<L2vpnv2::Standby::DiscoverySummary>();
        }
        return discovery_summary;
    }

    if(child_yang_name == "g8032")
    {
        if(g8032 == nullptr)
        {
            g8032 = std::make_shared<L2vpnv2::Standby::G8032>();
        }
        return g8032;
    }

    if(child_yang_name == "pseudowire-classes")
    {
        if(pseudowire_classes == nullptr)
        {
            pseudowire_classes = std::make_shared<L2vpnv2::Standby::PseudowireClasses>();
        }
        return pseudowire_classes;
    }

    if(child_yang_name == "l2vpn-collaborators")
    {
        if(l2vpn_collaborators == nullptr)
        {
            l2vpn_collaborators = std::make_shared<L2vpnv2::Standby::L2vpnCollaborators>();
        }
        return l2vpn_collaborators;
    }

    if(child_yang_name == "mvrp")
    {
        if(mvrp == nullptr)
        {
            mvrp = std::make_shared<L2vpnv2::Standby::Mvrp>();
        }
        return mvrp;
    }

    if(child_yang_name == "generic-interface-lists")
    {
        if(generic_interface_lists == nullptr)
        {
            generic_interface_lists = std::make_shared<L2vpnv2::Standby::GenericInterfaceLists>();
        }
        return generic_interface_lists;
    }

    if(child_yang_name == "mstp-vlans")
    {
        if(mstp_vlans == nullptr)
        {
            mstp_vlans = std::make_shared<L2vpnv2::Standby::MstpVlans>();
        }
        return mstp_vlans;
    }

    if(child_yang_name == "l2vpn-pbb-bsa")
    {
        if(l2vpn_pbb_bsa == nullptr)
        {
            l2vpn_pbb_bsa = std::make_shared<L2vpnv2::Standby::L2vpnPbbBsa>();
        }
        return l2vpn_pbb_bsa;
    }

    if(child_yang_name == "flexible-xconnect-services")
    {
        if(flexible_xconnect_services == nullptr)
        {
            flexible_xconnect_services = std::make_shared<L2vpnv2::Standby::FlexibleXconnectServices>();
        }
        return flexible_xconnect_services;
    }

    if(child_yang_name == "xconnect-brief")
    {
        if(xconnect_brief == nullptr)
        {
            xconnect_brief = std::make_shared<L2vpnv2::Standby::XconnectBrief>();
        }
        return xconnect_brief;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(discoveries != nullptr)
    {
        _children["discoveries"] = discoveries;
    }

    if(flexible_xconnect_service_summary != nullptr)
    {
        _children["flexible-xconnect-service-summary"] = flexible_xconnect_service_summary;
    }

    if(main_interfaces != nullptr)
    {
        _children["main-interfaces"] = main_interfaces;
    }

    if(iccp_sm != nullptr)
    {
        _children["iccp-sm"] = iccp_sm;
    }

    if(bridge_summary != nullptr)
    {
        _children["bridge-summary"] = bridge_summary;
    }

    if(nsr != nullptr)
    {
        _children["nsr"] = nsr;
    }

    if(preferred_paths != nullptr)
    {
        _children["preferred-paths"] = preferred_paths;
    }

    if(pseudowire_headend != nullptr)
    {
        _children["pseudowire-headend"] = pseudowire_headend;
    }

    if(global_settings != nullptr)
    {
        _children["global-settings"] = global_settings;
    }

    if(pwr != nullptr)
    {
        _children["pwr"] = pwr;
    }

    if(xconnect_mp2mp_ce2ces != nullptr)
    {
        _children["xconnect-mp2mp-ce2ces"] = xconnect_mp2mp_ce2ces;
    }

    if(xconnects != nullptr)
    {
        _children["xconnects"] = xconnects;
    }

    if(xconnect_groups != nullptr)
    {
        _children["xconnect-groups"] = xconnect_groups;
    }

    if(xconnect_mp2mps != nullptr)
    {
        _children["xconnect-mp2mps"] = xconnect_mp2mps;
    }

    if(indexes != nullptr)
    {
        _children["indexes"] = indexes;
    }

    if(xconnect_summary != nullptr)
    {
        _children["xconnect-summary"] = xconnect_summary;
    }

    if(proc_fsm != nullptr)
    {
        _children["proc-fsm"] = proc_fsm;
    }

    if(mstp_ports != nullptr)
    {
        _children["mstp-ports"] = mstp_ports;
    }

    if(generic_interface_list_details != nullptr)
    {
        _children["generic-interface-list-details"] = generic_interface_list_details;
    }

    if(l2vpn_resource_state != nullptr)
    {
        _children["l2vpn-resource-state"] = l2vpn_resource_state;
    }

    if(bridge_domains != nullptr)
    {
        _children["bridge-domains"] = bridge_domains;
    }

    if(discovery_summary != nullptr)
    {
        _children["discovery-summary"] = discovery_summary;
    }

    if(g8032 != nullptr)
    {
        _children["g8032"] = g8032;
    }

    if(pseudowire_classes != nullptr)
    {
        _children["pseudowire-classes"] = pseudowire_classes;
    }

    if(l2vpn_collaborators != nullptr)
    {
        _children["l2vpn-collaborators"] = l2vpn_collaborators;
    }

    if(mvrp != nullptr)
    {
        _children["mvrp"] = mvrp;
    }

    if(generic_interface_lists != nullptr)
    {
        _children["generic-interface-lists"] = generic_interface_lists;
    }

    if(mstp_vlans != nullptr)
    {
        _children["mstp-vlans"] = mstp_vlans;
    }

    if(l2vpn_pbb_bsa != nullptr)
    {
        _children["l2vpn-pbb-bsa"] = l2vpn_pbb_bsa;
    }

    if(flexible_xconnect_services != nullptr)
    {
        _children["flexible-xconnect-services"] = flexible_xconnect_services;
    }

    if(xconnect_brief != nullptr)
    {
        _children["xconnect-brief"] = xconnect_brief;
    }

    return _children;
}

void L2vpnv2::Standby::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discoveries" || name == "flexible-xconnect-service-summary" || name == "main-interfaces" || name == "iccp-sm" || name == "bridge-summary" || name == "nsr" || name == "preferred-paths" || name == "pseudowire-headend" || name == "global-settings" || name == "pwr" || name == "xconnect-mp2mp-ce2ces" || name == "xconnects" || name == "xconnect-groups" || name == "xconnect-mp2mps" || name == "indexes" || name == "xconnect-summary" || name == "proc-fsm" || name == "mstp-ports" || name == "generic-interface-list-details" || name == "l2vpn-resource-state" || name == "bridge-domains" || name == "discovery-summary" || name == "g8032" || name == "pseudowire-classes" || name == "l2vpn-collaborators" || name == "mvrp" || name == "generic-interface-lists" || name == "mstp-vlans" || name == "l2vpn-pbb-bsa" || name == "flexible-xconnect-services" || name == "xconnect-brief")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discoveries()
    :
    discovery(this, {})
{

    yang_name = "discoveries"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::~Discoveries()
{
}

bool L2vpnv2::Standby::Discoveries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<discovery.len(); index++)
    {
        if(discovery[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::Discoveries::has_operation() const
{
    for (std::size_t index=0; index<discovery.len(); index++)
    {
        if(discovery[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::Discoveries::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discoveries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "discovery")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery>();
        ent_->parent = this;
        discovery.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : discovery.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::Discoveries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::Discoveries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "discovery")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::Discovery()
    :
    service_name{YType::enumeration, "service-name"},
    group_name{YType::str, "group-name"},
    vpn_name{YType::str, "vpn-name"},
    mtu_mismatch_ignore{YType::boolean, "mtu-mismatch-ignore"},
    number_vpn{YType::uint32, "number-vpn"},
    vpn_id{YType::uint32, "vpn-id"},
    service_name_xr{YType::str, "service-name-xr"},
    group_name_xr{YType::str, "group-name-xr"},
    vpn_name_xr{YType::str, "vpn-name-xr"},
    is_service_connected{YType::boolean, "is-service-connected"}
        ,
    signalling_info(std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo>())
{
    signalling_info->parent = this;

    yang_name = "discovery"; yang_parent_name = "discoveries"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::~Discovery()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set
	|| group_name.is_set
	|| vpn_name.is_set
	|| mtu_mismatch_ignore.is_set
	|| number_vpn.is_set
	|| vpn_id.is_set
	|| service_name_xr.is_set
	|| group_name_xr.is_set
	|| vpn_name_xr.is_set
	|| is_service_connected.is_set
	|| (signalling_info !=  nullptr && signalling_info->has_data());
}

bool L2vpnv2::Standby::Discoveries::Discovery::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(vpn_name.yfilter)
	|| ydk::is_set(mtu_mismatch_ignore.yfilter)
	|| ydk::is_set(number_vpn.yfilter)
	|| ydk::is_set(vpn_id.yfilter)
	|| ydk::is_set(service_name_xr.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(vpn_name_xr.yfilter)
	|| ydk::is_set(is_service_connected.yfilter)
	|| (signalling_info !=  nullptr && signalling_info->has_operation());
}

std::string L2vpnv2::Standby::Discoveries::Discovery::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "discovery";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (vpn_name.is_set || is_set(vpn_name.yfilter)) leaf_name_data.push_back(vpn_name.get_name_leafdata());
    if (mtu_mismatch_ignore.is_set || is_set(mtu_mismatch_ignore.yfilter)) leaf_name_data.push_back(mtu_mismatch_ignore.get_name_leafdata());
    if (number_vpn.is_set || is_set(number_vpn.yfilter)) leaf_name_data.push_back(number_vpn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());
    if (service_name_xr.is_set || is_set(service_name_xr.yfilter)) leaf_name_data.push_back(service_name_xr.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (vpn_name_xr.is_set || is_set(vpn_name_xr.yfilter)) leaf_name_data.push_back(vpn_name_xr.get_name_leafdata());
    if (is_service_connected.is_set || is_set(is_service_connected.yfilter)) leaf_name_data.push_back(is_service_connected.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "signalling-info")
    {
        if(signalling_info == nullptr)
        {
            signalling_info = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo>();
        }
        return signalling_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(signalling_info != nullptr)
    {
        _children["signalling-info"] = signalling_info;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-name")
    {
        vpn_name = value;
        vpn_name.value_namespace = name_space;
        vpn_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore = value;
        mtu_mismatch_ignore.value_namespace = name_space;
        mtu_mismatch_ignore.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-vpn")
    {
        number_vpn = value;
        number_vpn.value_namespace = name_space;
        number_vpn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr = value;
        service_name_xr.value_namespace = name_space;
        service_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr = value;
        vpn_name_xr.value_namespace = name_space;
        vpn_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected = value;
        is_service_connected.value_namespace = name_space;
        is_service_connected.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "vpn-name")
    {
        vpn_name.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatch-ignore")
    {
        mtu_mismatch_ignore.yfilter = yfilter;
    }
    if(value_path == "number-vpn")
    {
        number_vpn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
    if(value_path == "service-name-xr")
    {
        service_name_xr.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "vpn-name-xr")
    {
        vpn_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-service-connected")
    {
        is_service_connected.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "signalling-info" || name == "service-name" || name == "group-name" || name == "vpn-name" || name == "mtu-mismatch-ignore" || name == "number-vpn" || name == "vpn-id" || name == "service-name-xr" || name == "group-name-xr" || name == "vpn-name-xr" || name == "is-service-connected")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::SignallingInfo()
    :
    ad_signalling_method{YType::enumeration, "ad-signalling-method"}
        ,
    bgp_sig_info(std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo>())
    , ldp_sig_info(std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo>())
{
    bgp_sig_info->parent = this;
    ldp_sig_info->parent = this;

    yang_name = "signalling-info"; yang_parent_name = "discovery"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::~SignallingInfo()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::has_data() const
{
    if (is_presence_container) return true;
    return ad_signalling_method.is_set
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_data())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_data());
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ad_signalling_method.yfilter)
	|| (bgp_sig_info !=  nullptr && bgp_sig_info->has_operation())
	|| (ldp_sig_info !=  nullptr && ldp_sig_info->has_operation());
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "signalling-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ad_signalling_method.is_set || is_set(ad_signalling_method.yfilter)) leaf_name_data.push_back(ad_signalling_method.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bgp-sig-info")
    {
        if(bgp_sig_info == nullptr)
        {
            bgp_sig_info = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo>();
        }
        return bgp_sig_info;
    }

    if(child_yang_name == "ldp-sig-info")
    {
        if(ldp_sig_info == nullptr)
        {
            ldp_sig_info = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo>();
        }
        return ldp_sig_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(bgp_sig_info != nullptr)
    {
        _children["bgp-sig-info"] = bgp_sig_info;
    }

    if(ldp_sig_info != nullptr)
    {
        _children["ldp-sig-info"] = ldp_sig_info;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method = value;
        ad_signalling_method.value_namespace = name_space;
        ad_signalling_method.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ad-signalling-method")
    {
        ad_signalling_method.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bgp-sig-info" || name == "ldp-sig-info" || name == "ad-signalling-method")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::BgpSigInfo()
    :
    number_edges{YType::uint32, "number-edges"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
        ,
    edge(this, {})
    , redge(this, {})
{

    yang_name = "bgp-sig-info"; yang_parent_name = "signalling-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::~BgpSigInfo()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<edge.len(); index++)
    {
        if(edge[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<redge.len(); index++)
    {
        if(redge[index]->has_data())
            return true;
    }
    return number_edges.is_set
	|| number_remote_edges.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<edge.len(); index++)
    {
        if(edge[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<redge.len(); index++)
    {
        if(redge[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(number_edges.yfilter)
	|| ydk::is_set(number_remote_edges.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bgp-sig-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_edges.is_set || is_set(number_edges.yfilter)) leaf_name_data.push_back(number_edges.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.yfilter)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "edge")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge>();
        ent_->parent = this;
        edge.append(ent_);
        return ent_;
    }

    if(child_yang_name == "redge")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge>();
        ent_->parent = this;
        redge.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : edge.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : redge.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-edges")
    {
        number_edges = value;
        number_edges.value_namespace = name_space;
        number_edges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
        number_remote_edges.value_namespace = name_space;
        number_remote_edges.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-edges")
    {
        number_edges.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "edge" || name == "redge" || name == "number-edges" || name == "number-remote-edges")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::Edge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
        ,
    label_block(this, {})
{

    yang_name = "edge"; yang_parent_name = "bgp-sig-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::~Edge()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_block.len(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_operation() const
{
    for (std::size_t index=0; index<label_block.len(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(label_count.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "edge";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock>();
        ent_->parent = this;
        label_block.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_block.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-block" || name == "edge-id" || name == "label-count")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::LabelBlock()
    :
    label_time_created{YType::uint32, "label-time-created"},
    label_base{YType::uint32, "label-base"},
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    label_error{YType::enumeration, "label-error"}
        ,
    status_vector(this, {})
{

    yang_name = "label-block"; yang_parent_name = "edge"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::~LabelBlock()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<status_vector.len(); index++)
    {
        if(status_vector[index]->has_data())
            return true;
    }
    return label_time_created.is_set
	|| label_base.is_set
	|| block_offset.is_set
	|| block_size.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set
	|| label_error.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_operation() const
{
    for (std::size_t index=0; index<status_vector.len(); index++)
    {
        if(status_vector[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_time_created.yfilter)
	|| ydk::is_set(label_base.yfilter)
	|| ydk::is_set(block_offset.yfilter)
	|| ydk::is_set(block_size.yfilter)
	|| ydk::is_set(local_edge_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label_error.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/edge/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_time_created.is_set || is_set(label_time_created.yfilter)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.yfilter)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (block_offset.is_set || is_set(block_offset.yfilter)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.yfilter)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.yfilter)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.yfilter)) leaf_name_data.push_back(label_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-vector")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector>();
        ent_->parent = this;
        status_vector.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : status_vector.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-time-created")
    {
        label_time_created = value;
        label_time_created.value_namespace = name_space;
        label_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-base")
    {
        label_base = value;
        label_base.value_namespace = name_space;
        label_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-offset")
    {
        block_offset = value;
        block_offset.value_namespace = name_space;
        block_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-size")
    {
        block_size = value;
        block_size.value_namespace = name_space;
        block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
        local_edge_id.value_namespace = name_space;
        local_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error")
    {
        label_error = value;
        label_error.value_namespace = name_space;
        label_error.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-time-created")
    {
        label_time_created.yfilter = yfilter;
    }
    if(value_path == "label-base")
    {
        label_base.yfilter = yfilter;
    }
    if(value_path == "block-offset")
    {
        block_offset.yfilter = yfilter;
    }
    if(value_path == "block-size")
    {
        block_size.yfilter = yfilter;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label-error")
    {
        label_error.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-vector" || name == "label-time-created" || name == "label-base" || name == "block-offset" || name == "block-size" || name == "local-edge-id" || name == "next-hop" || name == "label-error")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::StatusVector()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "status-vector"; yang_parent_name = "label-block"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::~StatusVector()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/edge/label-block/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-vector";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Edge::LabelBlock::StatusVector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::Redge()
    :
    edge_id{YType::uint32, "edge-id"},
    label_count{YType::uint32, "label-count"}
        ,
    label_block(this, {})
{

    yang_name = "redge"; yang_parent_name = "bgp-sig-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::~Redge()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<label_block.len(); index++)
    {
        if(label_block[index]->has_data())
            return true;
    }
    return edge_id.is_set
	|| label_count.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_operation() const
{
    for (std::size_t index=0; index<label_block.len(); index++)
    {
        if(label_block[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(edge_id.yfilter)
	|| ydk::is_set(label_count.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redge";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (edge_id.is_set || is_set(edge_id.yfilter)) leaf_name_data.push_back(edge_id.get_name_leafdata());
    if (label_count.is_set || is_set(label_count.yfilter)) leaf_name_data.push_back(label_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "label-block")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock>();
        ent_->parent = this;
        label_block.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : label_block.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "edge-id")
    {
        edge_id = value;
        edge_id.value_namespace = name_space;
        edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-count")
    {
        label_count = value;
        label_count.value_namespace = name_space;
        label_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "edge-id")
    {
        edge_id.yfilter = yfilter;
    }
    if(value_path == "label-count")
    {
        label_count.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "label-block" || name == "edge-id" || name == "label-count")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::LabelBlock()
    :
    label_time_created{YType::uint32, "label-time-created"},
    label_base{YType::uint32, "label-base"},
    block_offset{YType::uint32, "block-offset"},
    block_size{YType::uint32, "block-size"},
    local_edge_id{YType::uint32, "local-edge-id"},
    next_hop{YType::str, "next-hop"},
    label_error{YType::enumeration, "label-error"}
        ,
    status_vector(this, {})
{

    yang_name = "label-block"; yang_parent_name = "redge"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::~LabelBlock()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<status_vector.len(); index++)
    {
        if(status_vector[index]->has_data())
            return true;
    }
    return label_time_created.is_set
	|| label_base.is_set
	|| block_offset.is_set
	|| block_size.is_set
	|| local_edge_id.is_set
	|| next_hop.is_set
	|| label_error.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_operation() const
{
    for (std::size_t index=0; index<status_vector.len(); index++)
    {
        if(status_vector[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(label_time_created.yfilter)
	|| ydk::is_set(label_base.yfilter)
	|| ydk::is_set(block_offset.yfilter)
	|| ydk::is_set(block_size.yfilter)
	|| ydk::is_set(local_edge_id.yfilter)
	|| ydk::is_set(next_hop.yfilter)
	|| ydk::is_set(label_error.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/redge/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "label-block";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (label_time_created.is_set || is_set(label_time_created.yfilter)) leaf_name_data.push_back(label_time_created.get_name_leafdata());
    if (label_base.is_set || is_set(label_base.yfilter)) leaf_name_data.push_back(label_base.get_name_leafdata());
    if (block_offset.is_set || is_set(block_offset.yfilter)) leaf_name_data.push_back(block_offset.get_name_leafdata());
    if (block_size.is_set || is_set(block_size.yfilter)) leaf_name_data.push_back(block_size.get_name_leafdata());
    if (local_edge_id.is_set || is_set(local_edge_id.yfilter)) leaf_name_data.push_back(local_edge_id.get_name_leafdata());
    if (next_hop.is_set || is_set(next_hop.yfilter)) leaf_name_data.push_back(next_hop.get_name_leafdata());
    if (label_error.is_set || is_set(label_error.yfilter)) leaf_name_data.push_back(label_error.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "status-vector")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector>();
        ent_->parent = this;
        status_vector.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : status_vector.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "label-time-created")
    {
        label_time_created = value;
        label_time_created.value_namespace = name_space;
        label_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-base")
    {
        label_base = value;
        label_base.value_namespace = name_space;
        label_base.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-offset")
    {
        block_offset = value;
        block_offset.value_namespace = name_space;
        block_offset.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "block-size")
    {
        block_size = value;
        block_size.value_namespace = name_space;
        block_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id = value;
        local_edge_id.value_namespace = name_space;
        local_edge_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-hop")
    {
        next_hop = value;
        next_hop.value_namespace = name_space;
        next_hop.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label-error")
    {
        label_error = value;
        label_error.value_namespace = name_space;
        label_error.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "label-time-created")
    {
        label_time_created.yfilter = yfilter;
    }
    if(value_path == "label-base")
    {
        label_base.yfilter = yfilter;
    }
    if(value_path == "block-offset")
    {
        block_offset.yfilter = yfilter;
    }
    if(value_path == "block-size")
    {
        block_size.yfilter = yfilter;
    }
    if(value_path == "local-edge-id")
    {
        local_edge_id.yfilter = yfilter;
    }
    if(value_path == "next-hop")
    {
        next_hop.yfilter = yfilter;
    }
    if(value_path == "label-error")
    {
        label_error.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "status-vector" || name == "label-time-created" || name == "label-base" || name == "block-offset" || name == "block-size" || name == "local-edge-id" || name == "next-hop" || name == "label-error")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::StatusVector()
    :
    entry{YType::uint8, "entry"}
{

    yang_name = "status-vector"; yang_parent_name = "label-block"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::~StatusVector()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/bgp-sig-info/redge/label-block/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "status-vector";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::BgpSigInfo::Redge::LabelBlock::StatusVector::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LdpSigInfo()
    :
    local_l2_router_id{YType::str, "local-l2-router-id"},
    number_remote_edges{YType::uint32, "number-remote-edges"}
        ,
    local_vpls_id(std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>())
    , remote_nlri(this, {})
{
    local_vpls_id->parent = this;

    yang_name = "ldp-sig-info"; yang_parent_name = "signalling-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::~LdpSigInfo()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<remote_nlri.len(); index++)
    {
        if(remote_nlri[index]->has_data())
            return true;
    }
    return local_l2_router_id.is_set
	|| number_remote_edges.is_set
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_data());
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_operation() const
{
    for (std::size_t index=0; index<remote_nlri.len(); index++)
    {
        if(remote_nlri[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(local_l2_router_id.yfilter)
	|| ydk::is_set(number_remote_edges.yfilter)
	|| (local_vpls_id !=  nullptr && local_vpls_id->has_operation());
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ldp-sig-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_l2_router_id.is_set || is_set(local_l2_router_id.yfilter)) leaf_name_data.push_back(local_l2_router_id.get_name_leafdata());
    if (number_remote_edges.is_set || is_set(number_remote_edges.yfilter)) leaf_name_data.push_back(number_remote_edges.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-vpls-id")
    {
        if(local_vpls_id == nullptr)
        {
            local_vpls_id = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId>();
        }
        return local_vpls_id;
    }

    if(child_yang_name == "remote-nlri")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri>();
        ent_->parent = this;
        remote_nlri.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_vpls_id != nullptr)
    {
        _children["local-vpls-id"] = local_vpls_id;
    }

    count_ = 0;
    for (auto ent_ : remote_nlri.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id = value;
        local_l2_router_id.value_namespace = name_space;
        local_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges = value;
        number_remote_edges.value_namespace = name_space;
        number_remote_edges.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-l2-router-id")
    {
        local_l2_router_id.yfilter = yfilter;
    }
    if(value_path == "number-remote-edges")
    {
        number_remote_edges.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-vpls-id" || name == "remote-nlri" || name == "local-l2-router-id" || name == "number-remote-edges")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::LocalVplsId()
    :
    vpls_id_type{YType::enumeration, "vpls-id-type"}
        ,
    auto_(std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto>())
    , two_byte_as(std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>())
    , v4_addr(std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "local-vpls-id"; yang_parent_name = "ldp-sig-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::~LocalVplsId()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_data() const
{
    if (is_presence_container) return true;
    return vpls_id_type.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vpls_id_type.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-vpls-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vpls_id_type.is_set || is_set(vpls_id_type.yfilter)) leaf_name_data.push_back(vpls_id_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type = value;
        vpls_id_type.value_namespace = name_space;
        vpls_id_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vpls-id-type")
    {
        vpls_id_type.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "v4-addr" || name == "vpls-id-type")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::Auto()
    :
    asn{YType::uint16, "asn"},
    vpn_id{YType::uint32, "vpn-id"}
{

    yang_name = "auto"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::~Auto()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::has_data() const
{
    if (is_presence_container) return true;
    return asn.is_set
	|| vpn_id.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(asn.yfilter)
	|| ydk::is_set(vpn_id.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (asn.is_set || is_set(asn.yfilter)) leaf_name_data.push_back(asn.get_name_leafdata());
    if (vpn_id.is_set || is_set(vpn_id.yfilter)) leaf_name_data.push_back(vpn_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "asn")
    {
        asn = value;
        asn.value_namespace = name_space;
        asn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vpn-id")
    {
        vpn_id = value;
        vpn_id.value_namespace = name_space;
        vpn_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "asn")
    {
        asn.yfilter = yfilter;
    }
    if(value_path == "vpn-id")
    {
        vpn_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "asn" || name == "vpn-id")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::~TwoByteAs()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "local-vpls-id"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::~V4Addr()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/local-vpls-id/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::LocalVplsId::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::RemoteNlri()
    :
    nlri_time_created{YType::uint32, "nlri-time-created"},
    local_address{YType::str, "local-address"},
    remote_address{YType::str, "remote-address"},
    remote_l2_router_id{YType::str, "remote-l2-router-id"}
{

    yang_name = "remote-nlri"; yang_parent_name = "ldp-sig-info"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::~RemoteNlri()
{
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_data() const
{
    if (is_presence_container) return true;
    return nlri_time_created.is_set
	|| local_address.is_set
	|| remote_address.is_set
	|| remote_l2_router_id.is_set;
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nlri_time_created.yfilter)
	|| ydk::is_set(local_address.yfilter)
	|| ydk::is_set(remote_address.yfilter)
	|| ydk::is_set(remote_l2_router_id.yfilter);
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/discoveries/discovery/signalling-info/ldp-sig-info/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-nlri";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nlri_time_created.is_set || is_set(nlri_time_created.yfilter)) leaf_name_data.push_back(nlri_time_created.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.yfilter)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (remote_address.is_set || is_set(remote_address.yfilter)) leaf_name_data.push_back(remote_address.get_name_leafdata());
    if (remote_l2_router_id.is_set || is_set(remote_l2_router_id.yfilter)) leaf_name_data.push_back(remote_l2_router_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nlri-time-created")
    {
        nlri_time_created = value;
        nlri_time_created.value_namespace = name_space;
        nlri_time_created.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-address")
    {
        local_address = value;
        local_address.value_namespace = name_space;
        local_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-address")
    {
        remote_address = value;
        remote_address.value_namespace = name_space;
        remote_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id = value;
        remote_l2_router_id.value_namespace = name_space;
        remote_l2_router_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nlri-time-created")
    {
        nlri_time_created.yfilter = yfilter;
    }
    if(value_path == "local-address")
    {
        local_address.yfilter = yfilter;
    }
    if(value_path == "remote-address")
    {
        remote_address.yfilter = yfilter;
    }
    if(value_path == "remote-l2-router-id")
    {
        remote_l2_router_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Discoveries::Discovery::SignallingInfo::LdpSigInfo::RemoteNlri::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nlri-time-created" || name == "local-address" || name == "remote-address" || name == "remote-l2-router-id")
        return true;
    return false;
}

L2vpnv2::Standby::FlexibleXconnectServiceSummary::FlexibleXconnectServiceSummary()
    :
    number_fxc{YType::uint32, "number-fxc"},
    number_fxc_up{YType::uint32, "number-fxc-up"},
    number_fxc_down{YType::uint32, "number-fxc-down"}
{

    yang_name = "flexible-xconnect-service-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::FlexibleXconnectServiceSummary::~FlexibleXconnectServiceSummary()
{
}

bool L2vpnv2::Standby::FlexibleXconnectServiceSummary::has_data() const
{
    if (is_presence_container) return true;
    return number_fxc.is_set
	|| number_fxc_up.is_set
	|| number_fxc_down.is_set;
}

bool L2vpnv2::Standby::FlexibleXconnectServiceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_fxc.yfilter)
	|| ydk::is_set(number_fxc_up.yfilter)
	|| ydk::is_set(number_fxc_down.yfilter);
}

std::string L2vpnv2::Standby::FlexibleXconnectServiceSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::FlexibleXconnectServiceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "flexible-xconnect-service-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::FlexibleXconnectServiceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_fxc.is_set || is_set(number_fxc.yfilter)) leaf_name_data.push_back(number_fxc.get_name_leafdata());
    if (number_fxc_up.is_set || is_set(number_fxc_up.yfilter)) leaf_name_data.push_back(number_fxc_up.get_name_leafdata());
    if (number_fxc_down.is_set || is_set(number_fxc_down.yfilter)) leaf_name_data.push_back(number_fxc_down.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::FlexibleXconnectServiceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::FlexibleXconnectServiceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::FlexibleXconnectServiceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-fxc")
    {
        number_fxc = value;
        number_fxc.value_namespace = name_space;
        number_fxc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up = value;
        number_fxc_up.value_namespace = name_space;
        number_fxc_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down = value;
        number_fxc_down.value_namespace = name_space;
        number_fxc_down.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::FlexibleXconnectServiceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-fxc")
    {
        number_fxc.yfilter = yfilter;
    }
    if(value_path == "number-fxc-up")
    {
        number_fxc_up.yfilter = yfilter;
    }
    if(value_path == "number-fxc-down")
    {
        number_fxc_down.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::FlexibleXconnectServiceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-fxc" || name == "number-fxc-up" || name == "number-fxc-down")
        return true;
    return false;
}

L2vpnv2::Standby::MainInterfaces::MainInterfaces()
    :
    main_interface(this, {"interface_name"})
{

    yang_name = "main-interfaces"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::MainInterfaces::~MainInterfaces()
{
}

bool L2vpnv2::Standby::MainInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<main_interface.len(); index++)
    {
        if(main_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::MainInterfaces::has_operation() const
{
    for (std::size_t index=0; index<main_interface.len(); index++)
    {
        if(main_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::MainInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::MainInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::MainInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::MainInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface>();
        ent_->parent = this;
        main_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::MainInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : main_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::MainInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::MainInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::MainInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface")
        return true;
    return false;
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterface()
    :
    interface_name{YType::str, "interface-name"}
        ,
    main_interface_instances(std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances>())
    , main_interface_info(std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo>())
{
    main_interface_instances->parent = this;
    main_interface_info->parent = this;

    yang_name = "main-interface"; yang_parent_name = "main-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::MainInterfaces::MainInterface::~MainInterface()
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_data())
	|| (main_interface_info !=  nullptr && main_interface_info->has_data());
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (main_interface_instances !=  nullptr && main_interface_instances->has_operation())
	|| (main_interface_info !=  nullptr && main_interface_info->has_operation());
}

std::string L2vpnv2::Standby::MainInterfaces::MainInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/main-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::MainInterfaces::MainInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::MainInterfaces::MainInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::MainInterfaces::MainInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instances")
    {
        if(main_interface_instances == nullptr)
        {
            main_interface_instances = std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances>();
        }
        return main_interface_instances;
    }

    if(child_yang_name == "main-interface-info")
    {
        if(main_interface_info == nullptr)
        {
            main_interface_info = std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo>();
        }
        return main_interface_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::MainInterfaces::MainInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main_interface_instances != nullptr)
    {
        _children["main-interface-instances"] = main_interface_instances;
    }

    if(main_interface_info != nullptr)
    {
        _children["main-interface-info"] = main_interface_info;
    }

    return _children;
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instances" || name == "main-interface-info" || name == "interface-name")
        return true;
    return false;
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstances()
    :
    main_interface_instance(this, {"instance"})
{

    yang_name = "main-interface-instances"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::~MainInterfaceInstances()
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<main_interface_instance.len(); index++)
    {
        if(main_interface_instance[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance.len(); index++)
    {
        if(main_interface_instance[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instances";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance>();
        ent_->parent = this;
        main_interface_instance.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : main_interface_instance.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance")
        return true;
    return false;
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstance()
    :
    instance{YType::uint32, "instance"}
        ,
    main_interface_instance_info(std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>())
    , main_interface_instance_bridge_ports(std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>())
{
    main_interface_instance_info->parent = this;
    main_interface_instance_bridge_ports->parent = this;

    yang_name = "main-interface-instance"; yang_parent_name = "main-interface-instances"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::~MainInterfaceInstance()
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_data() const
{
    if (is_presence_container) return true;
    return instance.is_set
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_data())
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_data());
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(instance.yfilter)
	|| (main_interface_instance_info !=  nullptr && main_interface_instance_info->has_operation())
	|| (main_interface_instance_bridge_ports !=  nullptr && main_interface_instance_bridge_ports->has_operation());
}

std::string L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance";
    ADD_KEY_TOKEN(instance, "instance");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (instance.is_set || is_set(instance.yfilter)) leaf_name_data.push_back(instance.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-info")
    {
        if(main_interface_instance_info == nullptr)
        {
            main_interface_instance_info = std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo>();
        }
        return main_interface_instance_info;
    }

    if(child_yang_name == "main-interface-instance-bridge-ports")
    {
        if(main_interface_instance_bridge_ports == nullptr)
        {
            main_interface_instance_bridge_ports = std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts>();
        }
        return main_interface_instance_bridge_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(main_interface_instance_info != nullptr)
    {
        _children["main-interface-instance-info"] = main_interface_instance_info;
    }

    if(main_interface_instance_bridge_ports != nullptr)
    {
        _children["main-interface-instance-bridge-ports"] = main_interface_instance_bridge_ports;
    }

    return _children;
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "instance")
    {
        instance = value;
        instance.value_namespace = name_space;
        instance.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "instance")
    {
        instance.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-info" || name == "main-interface-instance-bridge-ports" || name == "instance")
        return true;
    return false;
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::MainInterfaceInstanceInfo()
    :
    configured_instance{YType::uint32, "configured-instance"},
    flush_count{YType::uint32, "flush-count"},
    interface_count{YType::uint32, "interface-count"},
    instance_flags{YType::uint32, "instance-flags"},
    instance_id{YType::uint32, "instance-id"},
    instance_state{YType::enumeration, "instance-state"}
{

    yang_name = "main-interface-instance-info"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::~MainInterfaceInstanceInfo()
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_data() const
{
    if (is_presence_container) return true;
    return configured_instance.is_set
	|| flush_count.is_set
	|| interface_count.is_set
	|| instance_flags.is_set
	|| instance_id.is_set
	|| instance_state.is_set;
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(configured_instance.yfilter)
	|| ydk::is_set(flush_count.yfilter)
	|| ydk::is_set(interface_count.yfilter)
	|| ydk::is_set(instance_flags.yfilter)
	|| ydk::is_set(instance_id.yfilter)
	|| ydk::is_set(instance_state.yfilter);
}

std::string L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (configured_instance.is_set || is_set(configured_instance.yfilter)) leaf_name_data.push_back(configured_instance.get_name_leafdata());
    if (flush_count.is_set || is_set(flush_count.yfilter)) leaf_name_data.push_back(flush_count.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());
    if (instance_flags.is_set || is_set(instance_flags.yfilter)) leaf_name_data.push_back(instance_flags.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());
    if (instance_state.is_set || is_set(instance_state.yfilter)) leaf_name_data.push_back(instance_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "configured-instance")
    {
        configured_instance = value;
        configured_instance.value_namespace = name_space;
        configured_instance.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flush-count")
    {
        flush_count = value;
        flush_count.value_namespace = name_space;
        flush_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-flags")
    {
        instance_flags = value;
        instance_flags.value_namespace = name_space;
        instance_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-state")
    {
        instance_state = value;
        instance_state.value_namespace = name_space;
        instance_state.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "configured-instance")
    {
        configured_instance.yfilter = yfilter;
    }
    if(value_path == "flush-count")
    {
        flush_count.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
    if(value_path == "instance-flags")
    {
        instance_flags.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
    if(value_path == "instance-state")
    {
        instance_state.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "configured-instance" || name == "flush-count" || name == "interface-count" || name == "instance-flags" || name == "instance-id" || name == "instance-state")
        return true;
    return false;
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePorts()
    :
    main_interface_instance_bridge_port(this, {"bridge_port"})
{

    yang_name = "main-interface-instance-bridge-ports"; yang_parent_name = "main-interface-instance"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::~MainInterfaceInstanceBridgePorts()
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<main_interface_instance_bridge_port.len(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_operation() const
{
    for (std::size_t index=0; index<main_interface_instance_bridge_port.len(); index++)
    {
        if(main_interface_instance_bridge_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "main-interface-instance-bridge-port")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort>();
        ent_->parent = this;
        main_interface_instance_bridge_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : main_interface_instance_bridge_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-instance-bridge-port")
        return true;
    return false;
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::MainInterfaceInstanceBridgePort()
    :
    bridge_port{YType::str, "bridge-port"},
    bridge_port_xr{YType::str, "bridge-port-xr"},
    instance_id{YType::uint32, "instance-id"}
{

    yang_name = "main-interface-instance-bridge-port"; yang_parent_name = "main-interface-instance-bridge-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::~MainInterfaceInstanceBridgePort()
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_data() const
{
    if (is_presence_container) return true;
    return bridge_port.is_set
	|| bridge_port_xr.is_set
	|| instance_id.is_set;
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bridge_port.yfilter)
	|| ydk::is_set(bridge_port_xr.yfilter)
	|| ydk::is_set(instance_id.yfilter);
}

std::string L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-instance-bridge-port";
    ADD_KEY_TOKEN(bridge_port, "bridge-port");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bridge_port.is_set || is_set(bridge_port.yfilter)) leaf_name_data.push_back(bridge_port.get_name_leafdata());
    if (bridge_port_xr.is_set || is_set(bridge_port_xr.yfilter)) leaf_name_data.push_back(bridge_port_xr.get_name_leafdata());
    if (instance_id.is_set || is_set(instance_id.yfilter)) leaf_name_data.push_back(instance_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bridge-port")
    {
        bridge_port = value;
        bridge_port.value_namespace = name_space;
        bridge_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr = value;
        bridge_port_xr.value_namespace = name_space;
        bridge_port_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "instance-id")
    {
        instance_id = value;
        instance_id.value_namespace = name_space;
        instance_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bridge-port")
    {
        bridge_port.yfilter = yfilter;
    }
    if(value_path == "bridge-port-xr")
    {
        bridge_port_xr.yfilter = yfilter;
    }
    if(value_path == "instance-id")
    {
        instance_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInstances::MainInterfaceInstance::MainInterfaceInstanceBridgePorts::MainInterfaceInstanceBridgePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bridge-port" || name == "bridge-port-xr" || name == "instance-id")
        return true;
    return false;
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::MainInterfaceInfo()
    :
    main_interface_handle{YType::str, "main-interface-handle"},
    protected_{YType::enumeration, "protected"},
    interface_count{YType::uint32, "interface-count"}
{

    yang_name = "main-interface-info"; yang_parent_name = "main-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::~MainInterfaceInfo()
{
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::has_data() const
{
    if (is_presence_container) return true;
    return main_interface_handle.is_set
	|| protected_.is_set
	|| interface_count.is_set;
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(main_interface_handle.yfilter)
	|| ydk::is_set(protected_.yfilter)
	|| ydk::is_set(interface_count.yfilter);
}

std::string L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-interface-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (main_interface_handle.is_set || is_set(main_interface_handle.yfilter)) leaf_name_data.push_back(main_interface_handle.get_name_leafdata());
    if (protected_.is_set || is_set(protected_.yfilter)) leaf_name_data.push_back(protected_.get_name_leafdata());
    if (interface_count.is_set || is_set(interface_count.yfilter)) leaf_name_data.push_back(interface_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "main-interface-handle")
    {
        main_interface_handle = value;
        main_interface_handle.value_namespace = name_space;
        main_interface_handle.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "protected")
    {
        protected_ = value;
        protected_.value_namespace = name_space;
        protected_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-count")
    {
        interface_count = value;
        interface_count.value_namespace = name_space;
        interface_count.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "main-interface-handle")
    {
        main_interface_handle.yfilter = yfilter;
    }
    if(value_path == "protected")
    {
        protected_.yfilter = yfilter;
    }
    if(value_path == "interface-count")
    {
        interface_count.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::MainInterfaces::MainInterface::MainInterfaceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "main-interface-handle" || name == "protected" || name == "interface-count")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpSm()
    :
    iccp_sm_summary(std::make_shared<L2vpnv2::Standby::IccpSm::IccpSmSummary>())
    , iccp_groups(std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups>())
{
    iccp_sm_summary->parent = this;
    iccp_groups->parent = this;

    yang_name = "iccp-sm"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::IccpSm::~IccpSm()
{
}

bool L2vpnv2::Standby::IccpSm::has_data() const
{
    if (is_presence_container) return true;
    return (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_data())
	|| (iccp_groups !=  nullptr && iccp_groups->has_data());
}

bool L2vpnv2::Standby::IccpSm::has_operation() const
{
    return is_set(yfilter)
	|| (iccp_sm_summary !=  nullptr && iccp_sm_summary->has_operation())
	|| (iccp_groups !=  nullptr && iccp_groups->has_operation());
}

std::string L2vpnv2::Standby::IccpSm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::IccpSm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-sm-summary")
    {
        if(iccp_sm_summary == nullptr)
        {
            iccp_sm_summary = std::make_shared<L2vpnv2::Standby::IccpSm::IccpSmSummary>();
        }
        return iccp_sm_summary;
    }

    if(child_yang_name == "iccp-groups")
    {
        if(iccp_groups == nullptr)
        {
            iccp_groups = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups>();
        }
        return iccp_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iccp_sm_summary != nullptr)
    {
        _children["iccp-sm-summary"] = iccp_sm_summary;
    }

    if(iccp_groups != nullptr)
    {
        _children["iccp-groups"] = iccp_groups;
    }

    return _children;
}

void L2vpnv2::Standby::IccpSm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::IccpSm::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::IccpSm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-sm-summary" || name == "iccp-groups")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpSmSummary::IccpSmSummary()
    :
    groups{YType::uint32, "groups"},
    unresolved_groups{YType::uint32, "unresolved-groups"},
    provisioned_groups{YType::uint32, "provisioned-groups"},
    connecting_groups{YType::uint32, "connecting-groups"},
    connected_groups{YType::uint32, "connected-groups"},
    synchronizing_groups{YType::uint32, "synchronizing-groups"},
    synchronized_groups{YType::uint32, "synchronized-groups"},
    ports{YType::uint32, "ports"},
    operational_ports{YType::uint32, "operational-ports"},
    failed_ports{YType::uint32, "failed-ports"},
    unknown_ports{YType::uint32, "unknown-ports"},
    unconfigured_ports{YType::uint32, "unconfigured-ports"},
    unsynchronized_ports{YType::uint32, "unsynchronized-ports"},
    reverting_ports{YType::uint32, "reverting-ports"}
{

    yang_name = "iccp-sm-summary"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::IccpSm::IccpSmSummary::~IccpSmSummary()
{
}

bool L2vpnv2::Standby::IccpSm::IccpSmSummary::has_data() const
{
    if (is_presence_container) return true;
    return groups.is_set
	|| unresolved_groups.is_set
	|| provisioned_groups.is_set
	|| connecting_groups.is_set
	|| connected_groups.is_set
	|| synchronizing_groups.is_set
	|| synchronized_groups.is_set
	|| ports.is_set
	|| operational_ports.is_set
	|| failed_ports.is_set
	|| unknown_ports.is_set
	|| unconfigured_ports.is_set
	|| unsynchronized_ports.is_set
	|| reverting_ports.is_set;
}

bool L2vpnv2::Standby::IccpSm::IccpSmSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(unresolved_groups.yfilter)
	|| ydk::is_set(provisioned_groups.yfilter)
	|| ydk::is_set(connecting_groups.yfilter)
	|| ydk::is_set(connected_groups.yfilter)
	|| ydk::is_set(synchronizing_groups.yfilter)
	|| ydk::is_set(synchronized_groups.yfilter)
	|| ydk::is_set(ports.yfilter)
	|| ydk::is_set(operational_ports.yfilter)
	|| ydk::is_set(failed_ports.yfilter)
	|| ydk::is_set(unknown_ports.yfilter)
	|| ydk::is_set(unconfigured_ports.yfilter)
	|| ydk::is_set(unsynchronized_ports.yfilter)
	|| ydk::is_set(reverting_ports.yfilter);
}

std::string L2vpnv2::Standby::IccpSm::IccpSmSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/iccp-sm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::IccpSm::IccpSmSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-sm-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpSmSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (unresolved_groups.is_set || is_set(unresolved_groups.yfilter)) leaf_name_data.push_back(unresolved_groups.get_name_leafdata());
    if (provisioned_groups.is_set || is_set(provisioned_groups.yfilter)) leaf_name_data.push_back(provisioned_groups.get_name_leafdata());
    if (connecting_groups.is_set || is_set(connecting_groups.yfilter)) leaf_name_data.push_back(connecting_groups.get_name_leafdata());
    if (connected_groups.is_set || is_set(connected_groups.yfilter)) leaf_name_data.push_back(connected_groups.get_name_leafdata());
    if (synchronizing_groups.is_set || is_set(synchronizing_groups.yfilter)) leaf_name_data.push_back(synchronizing_groups.get_name_leafdata());
    if (synchronized_groups.is_set || is_set(synchronized_groups.yfilter)) leaf_name_data.push_back(synchronized_groups.get_name_leafdata());
    if (ports.is_set || is_set(ports.yfilter)) leaf_name_data.push_back(ports.get_name_leafdata());
    if (operational_ports.is_set || is_set(operational_ports.yfilter)) leaf_name_data.push_back(operational_ports.get_name_leafdata());
    if (failed_ports.is_set || is_set(failed_ports.yfilter)) leaf_name_data.push_back(failed_ports.get_name_leafdata());
    if (unknown_ports.is_set || is_set(unknown_ports.yfilter)) leaf_name_data.push_back(unknown_ports.get_name_leafdata());
    if (unconfigured_ports.is_set || is_set(unconfigured_ports.yfilter)) leaf_name_data.push_back(unconfigured_ports.get_name_leafdata());
    if (unsynchronized_ports.is_set || is_set(unsynchronized_ports.yfilter)) leaf_name_data.push_back(unsynchronized_ports.get_name_leafdata());
    if (reverting_ports.is_set || is_set(reverting_ports.yfilter)) leaf_name_data.push_back(reverting_ports.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpSmSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpSmSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpSmSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups = value;
        unresolved_groups.value_namespace = name_space;
        unresolved_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups = value;
        provisioned_groups.value_namespace = name_space;
        provisioned_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups = value;
        connecting_groups.value_namespace = name_space;
        connecting_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-groups")
    {
        connected_groups = value;
        connected_groups.value_namespace = name_space;
        connected_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups = value;
        synchronizing_groups.value_namespace = name_space;
        synchronizing_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups = value;
        synchronized_groups.value_namespace = name_space;
        synchronized_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ports")
    {
        ports = value;
        ports.value_namespace = name_space;
        ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "operational-ports")
    {
        operational_ports = value;
        operational_ports.value_namespace = name_space;
        operational_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failed-ports")
    {
        failed_ports = value;
        failed_ports.value_namespace = name_space;
        failed_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports = value;
        unknown_ports.value_namespace = name_space;
        unknown_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports = value;
        unconfigured_ports.value_namespace = name_space;
        unconfigured_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports = value;
        unsynchronized_ports.value_namespace = name_space;
        unsynchronized_ports.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports = value;
        reverting_ports.value_namespace = name_space;
        reverting_ports.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpSmSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "unresolved-groups")
    {
        unresolved_groups.yfilter = yfilter;
    }
    if(value_path == "provisioned-groups")
    {
        provisioned_groups.yfilter = yfilter;
    }
    if(value_path == "connecting-groups")
    {
        connecting_groups.yfilter = yfilter;
    }
    if(value_path == "connected-groups")
    {
        connected_groups.yfilter = yfilter;
    }
    if(value_path == "synchronizing-groups")
    {
        synchronizing_groups.yfilter = yfilter;
    }
    if(value_path == "synchronized-groups")
    {
        synchronized_groups.yfilter = yfilter;
    }
    if(value_path == "ports")
    {
        ports.yfilter = yfilter;
    }
    if(value_path == "operational-ports")
    {
        operational_ports.yfilter = yfilter;
    }
    if(value_path == "failed-ports")
    {
        failed_ports.yfilter = yfilter;
    }
    if(value_path == "unknown-ports")
    {
        unknown_ports.yfilter = yfilter;
    }
    if(value_path == "unconfigured-ports")
    {
        unconfigured_ports.yfilter = yfilter;
    }
    if(value_path == "unsynchronized-ports")
    {
        unsynchronized_ports.yfilter = yfilter;
    }
    if(value_path == "reverting-ports")
    {
        reverting_ports.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpSmSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "unresolved-groups" || name == "provisioned-groups" || name == "connecting-groups" || name == "connected-groups" || name == "synchronizing-groups" || name == "synchronized-groups" || name == "ports" || name == "operational-ports" || name == "failed-ports" || name == "unknown-ports" || name == "unconfigured-ports" || name == "unsynchronized-ports" || name == "reverting-ports")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroups()
    :
    iccp_group(this, {"group_id"})
{

    yang_name = "iccp-groups"; yang_parent_name = "iccp-sm"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::~IccpGroups()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iccp_group.len(); index++)
    {
        if(iccp_group[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::has_operation() const
{
    for (std::size_t index=0; index<iccp_group.len(); index++)
    {
        if(iccp_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/iccp-sm/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup>();
        ent_->parent = this;
        iccp_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iccp_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::IccpSm::IccpGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroup()
    :
    group_id{YType::uint32, "group-id"}
        ,
    iccp_group_info(std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>())
    , iccp_ports(std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts>())
{
    iccp_group_info->parent = this;
    iccp_ports->parent = this;

    yang_name = "iccp-group"; yang_parent_name = "iccp-groups"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::~IccpGroup()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::has_data() const
{
    if (is_presence_container) return true;
    return group_id.is_set
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_data())
	|| (iccp_ports !=  nullptr && iccp_ports->has_data());
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| (iccp_group_info !=  nullptr && iccp_group_info->has_operation())
	|| (iccp_ports !=  nullptr && iccp_ports->has_operation());
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/iccp-sm/iccp-groups/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group";
    ADD_KEY_TOKEN(group_id, "group-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-group-info")
    {
        if(iccp_group_info == nullptr)
        {
            iccp_group_info = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo>();
        }
        return iccp_group_info;
    }

    if(child_yang_name == "iccp-ports")
    {
        if(iccp_ports == nullptr)
        {
            iccp_ports = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts>();
        }
        return iccp_ports;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iccp_group_info != nullptr)
    {
        _children["iccp-group-info"] = iccp_group_info;
    }

    if(iccp_ports != nullptr)
    {
        _children["iccp-ports"] = iccp_ports;
    }

    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-group-info" || name == "iccp-ports" || name == "group-id")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::IccpGroupInfo()
    :
    group_id{YType::uint32, "group-id"},
    local_node_id{YType::uint8, "local-node-id"},
    remote_node_id{YType::uint8, "remote-node-id"},
    state{YType::enumeration, "state"},
    iccp_transport_up{YType::boolean, "iccp-transport-up"},
    iccp_member_up{YType::boolean, "iccp-member-up"}
        ,
    ports(this, {})
{

    yang_name = "iccp-group-info"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::~IccpGroupInfo()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ports.len(); index++)
    {
        if(ports[index]->has_data())
            return true;
    }
    return group_id.is_set
	|| local_node_id.is_set
	|| remote_node_id.is_set
	|| state.is_set
	|| iccp_transport_up.is_set
	|| iccp_member_up.is_set;
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_operation() const
{
    for (std::size_t index=0; index<ports.len(); index++)
    {
        if(ports[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_id.yfilter)
	|| ydk::is_set(local_node_id.yfilter)
	|| ydk::is_set(remote_node_id.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(iccp_transport_up.yfilter)
	|| ydk::is_set(iccp_member_up.yfilter);
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-group-info";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.yfilter)) leaf_name_data.push_back(group_id.get_name_leafdata());
    if (local_node_id.is_set || is_set(local_node_id.yfilter)) leaf_name_data.push_back(local_node_id.get_name_leafdata());
    if (remote_node_id.is_set || is_set(remote_node_id.yfilter)) leaf_name_data.push_back(remote_node_id.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (iccp_transport_up.is_set || is_set(iccp_transport_up.yfilter)) leaf_name_data.push_back(iccp_transport_up.get_name_leafdata());
    if (iccp_member_up.is_set || is_set(iccp_member_up.yfilter)) leaf_name_data.push_back(iccp_member_up.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ports")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports>();
        ent_->parent = this;
        ports.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ports.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-id")
    {
        group_id = value;
        group_id.value_namespace = name_space;
        group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-node-id")
    {
        local_node_id = value;
        local_node_id.value_namespace = name_space;
        local_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id = value;
        remote_node_id.value_namespace = name_space;
        remote_node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up = value;
        iccp_transport_up.value_namespace = name_space;
        iccp_transport_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up = value;
        iccp_member_up.value_namespace = name_space;
        iccp_member_up.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-id")
    {
        group_id.yfilter = yfilter;
    }
    if(value_path == "local-node-id")
    {
        local_node_id.yfilter = yfilter;
    }
    if(value_path == "remote-node-id")
    {
        remote_node_id.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "iccp-transport-up")
    {
        iccp_transport_up.yfilter = yfilter;
    }
    if(value_path == "iccp-member-up")
    {
        iccp_member_up.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ports" || name == "group-id" || name == "local-node-id" || name == "remote-node-id" || name == "state" || name == "iccp-transport-up" || name == "iccp-member-up")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::Ports()
    :
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
        ,
    local_port(std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>())
    , remote_port(std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "ports"; yang_parent_name = "iccp-group-info"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::~Ports()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ports";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_port != nullptr)
    {
        _children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        _children["remote-port"] = remote_port;
    }

    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::LocalPort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "local-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::~LocalPort()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_data() const
{
    if (is_presence_container) return true;
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::RemotePort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "remote-port"; yang_parent_name = "ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::~RemotePort()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_data() const
{
    if (is_presence_container) return true;
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpGroupInfo::Ports::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPorts()
    :
    iccp_port(this, {"interface"})
{

    yang_name = "iccp-ports"; yang_parent_name = "iccp-group"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::~IccpPorts()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<iccp_port.len(); index++)
    {
        if(iccp_port[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_operation() const
{
    for (std::size_t index=0; index<iccp_port.len(); index++)
    {
        if(iccp_port[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-ports";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iccp-port")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort>();
        ent_->parent = this;
        iccp_port.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : iccp_port.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iccp-port")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::IccpPort()
    :
    interface{YType::str, "interface"},
    interface_name{YType::str, "interface-name"},
    mac_flush_tcn{YType::boolean, "mac-flush-tcn"}
        ,
    local_port(std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>())
    , remote_port(std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>())
{
    local_port->parent = this;
    remote_port->parent = this;

    yang_name = "iccp-port"; yang_parent_name = "iccp-ports"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::~IccpPort()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_data() const
{
    if (is_presence_container) return true;
    return interface.is_set
	|| interface_name.is_set
	|| mac_flush_tcn.is_set
	|| (local_port !=  nullptr && local_port->has_data())
	|| (remote_port !=  nullptr && remote_port->has_data());
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(mac_flush_tcn.yfilter)
	|| (local_port !=  nullptr && local_port->has_operation())
	|| (remote_port !=  nullptr && remote_port->has_operation());
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iccp-port";
    ADD_KEY_TOKEN(interface, "interface");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (mac_flush_tcn.is_set || is_set(mac_flush_tcn.yfilter)) leaf_name_data.push_back(mac_flush_tcn.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-port")
    {
        if(local_port == nullptr)
        {
            local_port = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort>();
        }
        return local_port;
    }

    if(child_yang_name == "remote-port")
    {
        if(remote_port == nullptr)
        {
            remote_port = std::make_shared<L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort>();
        }
        return remote_port;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(local_port != nullptr)
    {
        _children["local-port"] = local_port;
    }

    if(remote_port != nullptr)
    {
        _children["remote-port"] = remote_port;
    }

    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn = value;
        mac_flush_tcn.value_namespace = name_space;
        mac_flush_tcn.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "mac-flush-tcn")
    {
        mac_flush_tcn.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-port" || name == "remote-port" || name == "interface" || name == "interface-name" || name == "mac-flush-tcn")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::LocalPort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "local-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::~LocalPort()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_data() const
{
    if (is_presence_container) return true;
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::LocalPort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::RemotePort()
    :
    port_state{YType::enumeration, "port-state"},
    port_fail_code{YType::uint8, "port-fail-code"},
    fsm_state{YType::uint8, "fsm-state"},
    vlan_state{YType::uint8, "vlan-state"},
    vlan_vector{YType::str, "vlan-vector"},
    reversion_time{YType::uint32, "reversion-time"},
    reversion_time_remaining{YType::uint32, "reversion-time-remaining"}
{

    yang_name = "remote-port"; yang_parent_name = "iccp-port"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::~RemotePort()
{
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_data() const
{
    if (is_presence_container) return true;
    return port_state.is_set
	|| port_fail_code.is_set
	|| fsm_state.is_set
	|| vlan_state.is_set
	|| vlan_vector.is_set
	|| reversion_time.is_set
	|| reversion_time_remaining.is_set;
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port_state.yfilter)
	|| ydk::is_set(port_fail_code.yfilter)
	|| ydk::is_set(fsm_state.yfilter)
	|| ydk::is_set(vlan_state.yfilter)
	|| ydk::is_set(vlan_vector.yfilter)
	|| ydk::is_set(reversion_time.yfilter)
	|| ydk::is_set(reversion_time_remaining.yfilter);
}

std::string L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-port";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_state.is_set || is_set(port_state.yfilter)) leaf_name_data.push_back(port_state.get_name_leafdata());
    if (port_fail_code.is_set || is_set(port_fail_code.yfilter)) leaf_name_data.push_back(port_fail_code.get_name_leafdata());
    if (fsm_state.is_set || is_set(fsm_state.yfilter)) leaf_name_data.push_back(fsm_state.get_name_leafdata());
    if (vlan_state.is_set || is_set(vlan_state.yfilter)) leaf_name_data.push_back(vlan_state.get_name_leafdata());
    if (vlan_vector.is_set || is_set(vlan_vector.yfilter)) leaf_name_data.push_back(vlan_vector.get_name_leafdata());
    if (reversion_time.is_set || is_set(reversion_time.yfilter)) leaf_name_data.push_back(reversion_time.get_name_leafdata());
    if (reversion_time_remaining.is_set || is_set(reversion_time_remaining.yfilter)) leaf_name_data.push_back(reversion_time_remaining.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port-state")
    {
        port_state = value;
        port_state.value_namespace = name_space;
        port_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code = value;
        port_fail_code.value_namespace = name_space;
        port_fail_code.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fsm-state")
    {
        fsm_state = value;
        fsm_state.value_namespace = name_space;
        fsm_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-state")
    {
        vlan_state = value;
        vlan_state.value_namespace = name_space;
        vlan_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector = value;
        vlan_vector.value_namespace = name_space;
        vlan_vector.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time")
    {
        reversion_time = value;
        reversion_time.value_namespace = name_space;
        reversion_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining = value;
        reversion_time_remaining.value_namespace = name_space;
        reversion_time_remaining.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port-state")
    {
        port_state.yfilter = yfilter;
    }
    if(value_path == "port-fail-code")
    {
        port_fail_code.yfilter = yfilter;
    }
    if(value_path == "fsm-state")
    {
        fsm_state.yfilter = yfilter;
    }
    if(value_path == "vlan-state")
    {
        vlan_state.yfilter = yfilter;
    }
    if(value_path == "vlan-vector")
    {
        vlan_vector.yfilter = yfilter;
    }
    if(value_path == "reversion-time")
    {
        reversion_time.yfilter = yfilter;
    }
    if(value_path == "reversion-time-remaining")
    {
        reversion_time_remaining.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::IccpSm::IccpGroups::IccpGroup::IccpPorts::IccpPort::RemotePort::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "port-state" || name == "port-fail-code" || name == "fsm-state" || name == "vlan-state" || name == "vlan-vector" || name == "reversion-time" || name == "reversion-time-remaining")
        return true;
    return false;
}

L2vpnv2::Standby::BridgeSummary::BridgeSummary()
    :
    number_groups{YType::uint32, "number-groups"},
    number_vlan_switches{YType::uint32, "number-vlan-switches"},
    number_bridge_domains{YType::uint32, "number-bridge-domains"},
    number_bridge_domains_up{YType::uint32, "number-bridge-domains-up"},
    number_bridge_domains_shut{YType::uint32, "number-bridge-domains-shut"},
    number_default_bridge_doamins{YType::uint32, "number-default-bridge-doamins"},
    number_pbb_edge{YType::uint32, "number-pbb-edge"},
    number_pbb_core{YType::uint32, "number-pbb-core"},
    number_p2mp{YType::uint32, "number-p2mp"},
    number_p2mp_up{YType::uint32, "number-p2mp-up"},
    number_p2mp_down{YType::uint32, "number-p2mp-down"},
    number_a_cs{YType::uint32, "number-a-cs"},
    number_a_cs_up{YType::uint32, "number-a-cs-up"},
    number_a_cs_down{YType::uint32, "number-a-cs-down"},
    number_pseudowires{YType::uint32, "number-pseudowires"},
    number_p_ws_up{YType::uint32, "number-p-ws-up"},
    number_p_ws_down{YType::uint32, "number-p-ws-down"},
    standby_pseudowires{YType::uint32, "standby-pseudowires"},
    num_vn_is{YType::uint32, "num-vn-is"},
    num_vn_is_up{YType::uint32, "num-vn-is-up"},
    num_vn_is_down{YType::uint32, "num-vn-is-down"},
    num_vn_is_unresolved{YType::uint32, "num-vn-is-unresolved"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    partially_programmed_bridges{YType::uint32, "partially-programmed-bridges"},
    partially_programmed_pseudowires{YType::uint32, "partially-programmed-pseudowires"},
    partially_programmed_a_cs{YType::uint32, "partially-programmed-a-cs"}
{

    yang_name = "bridge-summary"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::BridgeSummary::~BridgeSummary()
{
}

bool L2vpnv2::Standby::BridgeSummary::has_data() const
{
    if (is_presence_container) return true;
    return number_groups.is_set
	|| number_vlan_switches.is_set
	|| number_bridge_domains.is_set
	|| number_bridge_domains_up.is_set
	|| number_bridge_domains_shut.is_set
	|| number_default_bridge_doamins.is_set
	|| number_pbb_edge.is_set
	|| number_pbb_core.is_set
	|| number_p2mp.is_set
	|| number_p2mp_up.is_set
	|| number_p2mp_down.is_set
	|| number_a_cs.is_set
	|| number_a_cs_up.is_set
	|| number_a_cs_down.is_set
	|| number_pseudowires.is_set
	|| number_p_ws_up.is_set
	|| number_p_ws_down.is_set
	|| standby_pseudowires.is_set
	|| num_vn_is.is_set
	|| num_vn_is_up.is_set
	|| num_vn_is_down.is_set
	|| num_vn_is_unresolved.is_set
	|| out_of_memory_state.is_set
	|| partially_programmed_bridges.is_set
	|| partially_programmed_pseudowires.is_set
	|| partially_programmed_a_cs.is_set;
}

bool L2vpnv2::Standby::BridgeSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(number_groups.yfilter)
	|| ydk::is_set(number_vlan_switches.yfilter)
	|| ydk::is_set(number_bridge_domains.yfilter)
	|| ydk::is_set(number_bridge_domains_up.yfilter)
	|| ydk::is_set(number_bridge_domains_shut.yfilter)
	|| ydk::is_set(number_default_bridge_doamins.yfilter)
	|| ydk::is_set(number_pbb_edge.yfilter)
	|| ydk::is_set(number_pbb_core.yfilter)
	|| ydk::is_set(number_p2mp.yfilter)
	|| ydk::is_set(number_p2mp_up.yfilter)
	|| ydk::is_set(number_p2mp_down.yfilter)
	|| ydk::is_set(number_a_cs.yfilter)
	|| ydk::is_set(number_a_cs_up.yfilter)
	|| ydk::is_set(number_a_cs_down.yfilter)
	|| ydk::is_set(number_pseudowires.yfilter)
	|| ydk::is_set(number_p_ws_up.yfilter)
	|| ydk::is_set(number_p_ws_down.yfilter)
	|| ydk::is_set(standby_pseudowires.yfilter)
	|| ydk::is_set(num_vn_is.yfilter)
	|| ydk::is_set(num_vn_is_up.yfilter)
	|| ydk::is_set(num_vn_is_down.yfilter)
	|| ydk::is_set(num_vn_is_unresolved.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(partially_programmed_bridges.yfilter)
	|| ydk::is_set(partially_programmed_pseudowires.yfilter)
	|| ydk::is_set(partially_programmed_a_cs.yfilter);
}

std::string L2vpnv2::Standby::BridgeSummary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::BridgeSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bridge-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::BridgeSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number_groups.is_set || is_set(number_groups.yfilter)) leaf_name_data.push_back(number_groups.get_name_leafdata());
    if (number_vlan_switches.is_set || is_set(number_vlan_switches.yfilter)) leaf_name_data.push_back(number_vlan_switches.get_name_leafdata());
    if (number_bridge_domains.is_set || is_set(number_bridge_domains.yfilter)) leaf_name_data.push_back(number_bridge_domains.get_name_leafdata());
    if (number_bridge_domains_up.is_set || is_set(number_bridge_domains_up.yfilter)) leaf_name_data.push_back(number_bridge_domains_up.get_name_leafdata());
    if (number_bridge_domains_shut.is_set || is_set(number_bridge_domains_shut.yfilter)) leaf_name_data.push_back(number_bridge_domains_shut.get_name_leafdata());
    if (number_default_bridge_doamins.is_set || is_set(number_default_bridge_doamins.yfilter)) leaf_name_data.push_back(number_default_bridge_doamins.get_name_leafdata());
    if (number_pbb_edge.is_set || is_set(number_pbb_edge.yfilter)) leaf_name_data.push_back(number_pbb_edge.get_name_leafdata());
    if (number_pbb_core.is_set || is_set(number_pbb_core.yfilter)) leaf_name_data.push_back(number_pbb_core.get_name_leafdata());
    if (number_p2mp.is_set || is_set(number_p2mp.yfilter)) leaf_name_data.push_back(number_p2mp.get_name_leafdata());
    if (number_p2mp_up.is_set || is_set(number_p2mp_up.yfilter)) leaf_name_data.push_back(number_p2mp_up.get_name_leafdata());
    if (number_p2mp_down.is_set || is_set(number_p2mp_down.yfilter)) leaf_name_data.push_back(number_p2mp_down.get_name_leafdata());
    if (number_a_cs.is_set || is_set(number_a_cs.yfilter)) leaf_name_data.push_back(number_a_cs.get_name_leafdata());
    if (number_a_cs_up.is_set || is_set(number_a_cs_up.yfilter)) leaf_name_data.push_back(number_a_cs_up.get_name_leafdata());
    if (number_a_cs_down.is_set || is_set(number_a_cs_down.yfilter)) leaf_name_data.push_back(number_a_cs_down.get_name_leafdata());
    if (number_pseudowires.is_set || is_set(number_pseudowires.yfilter)) leaf_name_data.push_back(number_pseudowires.get_name_leafdata());
    if (number_p_ws_up.is_set || is_set(number_p_ws_up.yfilter)) leaf_name_data.push_back(number_p_ws_up.get_name_leafdata());
    if (number_p_ws_down.is_set || is_set(number_p_ws_down.yfilter)) leaf_name_data.push_back(number_p_ws_down.get_name_leafdata());
    if (standby_pseudowires.is_set || is_set(standby_pseudowires.yfilter)) leaf_name_data.push_back(standby_pseudowires.get_name_leafdata());
    if (num_vn_is.is_set || is_set(num_vn_is.yfilter)) leaf_name_data.push_back(num_vn_is.get_name_leafdata());
    if (num_vn_is_up.is_set || is_set(num_vn_is_up.yfilter)) leaf_name_data.push_back(num_vn_is_up.get_name_leafdata());
    if (num_vn_is_down.is_set || is_set(num_vn_is_down.yfilter)) leaf_name_data.push_back(num_vn_is_down.get_name_leafdata());
    if (num_vn_is_unresolved.is_set || is_set(num_vn_is_unresolved.yfilter)) leaf_name_data.push_back(num_vn_is_unresolved.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (partially_programmed_bridges.is_set || is_set(partially_programmed_bridges.yfilter)) leaf_name_data.push_back(partially_programmed_bridges.get_name_leafdata());
    if (partially_programmed_pseudowires.is_set || is_set(partially_programmed_pseudowires.yfilter)) leaf_name_data.push_back(partially_programmed_pseudowires.get_name_leafdata());
    if (partially_programmed_a_cs.is_set || is_set(partially_programmed_a_cs.yfilter)) leaf_name_data.push_back(partially_programmed_a_cs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::BridgeSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::BridgeSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::BridgeSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "number-groups")
    {
        number_groups = value;
        number_groups.value_namespace = name_space;
        number_groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-vlan-switches")
    {
        number_vlan_switches = value;
        number_vlan_switches.value_namespace = name_space;
        number_vlan_switches.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains = value;
        number_bridge_domains.value_namespace = name_space;
        number_bridge_domains.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up = value;
        number_bridge_domains_up.value_namespace = name_space;
        number_bridge_domains_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut = value;
        number_bridge_domains_shut.value_namespace = name_space;
        number_bridge_domains_shut.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins = value;
        number_default_bridge_doamins.value_namespace = name_space;
        number_default_bridge_doamins.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge = value;
        number_pbb_edge.value_namespace = name_space;
        number_pbb_edge.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core = value;
        number_pbb_core.value_namespace = name_space;
        number_pbb_core.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp = value;
        number_p2mp.value_namespace = name_space;
        number_p2mp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up = value;
        number_p2mp_up.value_namespace = name_space;
        number_p2mp_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down = value;
        number_p2mp_down.value_namespace = name_space;
        number_p2mp_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs = value;
        number_a_cs.value_namespace = name_space;
        number_a_cs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up = value;
        number_a_cs_up.value_namespace = name_space;
        number_a_cs_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-a-cs-down")
    {
        number_a_cs_down = value;
        number_a_cs_down.value_namespace = name_space;
        number_a_cs_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires = value;
        number_pseudowires.value_namespace = name_space;
        number_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up = value;
        number_p_ws_up.value_namespace = name_space;
        number_p_ws_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-p-ws-down")
    {
        number_p_ws_down = value;
        number_p_ws_down.value_namespace = name_space;
        number_p_ws_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires = value;
        standby_pseudowires.value_namespace = name_space;
        standby_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is")
    {
        num_vn_is = value;
        num_vn_is.value_namespace = name_space;
        num_vn_is.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up = value;
        num_vn_is_up.value_namespace = name_space;
        num_vn_is_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down = value;
        num_vn_is_down.value_namespace = name_space;
        num_vn_is_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved = value;
        num_vn_is_unresolved.value_namespace = name_space;
        num_vn_is_unresolved.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges = value;
        partially_programmed_bridges.value_namespace = name_space;
        partially_programmed_bridges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires = value;
        partially_programmed_pseudowires.value_namespace = name_space;
        partially_programmed_pseudowires.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs = value;
        partially_programmed_a_cs.value_namespace = name_space;
        partially_programmed_a_cs.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::BridgeSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "number-groups")
    {
        number_groups.yfilter = yfilter;
    }
    if(value_path == "number-vlan-switches")
    {
        number_vlan_switches.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains")
    {
        number_bridge_domains.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains-up")
    {
        number_bridge_domains_up.yfilter = yfilter;
    }
    if(value_path == "number-bridge-domains-shut")
    {
        number_bridge_domains_shut.yfilter = yfilter;
    }
    if(value_path == "number-default-bridge-doamins")
    {
        number_default_bridge_doamins.yfilter = yfilter;
    }
    if(value_path == "number-pbb-edge")
    {
        number_pbb_edge.yfilter = yfilter;
    }
    if(value_path == "number-pbb-core")
    {
        number_pbb_core.yfilter = yfilter;
    }
    if(value_path == "number-p2mp")
    {
        number_p2mp.yfilter = yfilter;
    }
    if(value_path == "number-p2mp-up")
    {
        number_p2mp_up.yfilter = yfilter;
    }
    if(value_path == "number-p2mp-down")
    {
        number_p2mp_down.yfilter = yfilter;
    }
    if(value_path == "number-a-cs")
    {
        number_a_cs.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-up")
    {
        number_a_cs_up.yfilter = yfilter;
    }
    if(value_path == "number-a-cs-down")
    {
        number_a_cs_down.yfilter = yfilter;
    }
    if(value_path == "number-pseudowires")
    {
        number_pseudowires.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-up")
    {
        number_p_ws_up.yfilter = yfilter;
    }
    if(value_path == "number-p-ws-down")
    {
        number_p_ws_down.yfilter = yfilter;
    }
    if(value_path == "standby-pseudowires")
    {
        standby_pseudowires.yfilter = yfilter;
    }
    if(value_path == "num-vn-is")
    {
        num_vn_is.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-up")
    {
        num_vn_is_up.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-down")
    {
        num_vn_is_down.yfilter = yfilter;
    }
    if(value_path == "num-vn-is-unresolved")
    {
        num_vn_is_unresolved.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-bridges")
    {
        partially_programmed_bridges.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-pseudowires")
    {
        partially_programmed_pseudowires.yfilter = yfilter;
    }
    if(value_path == "partially-programmed-a-cs")
    {
        partially_programmed_a_cs.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::BridgeSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "number-groups" || name == "number-vlan-switches" || name == "number-bridge-domains" || name == "number-bridge-domains-up" || name == "number-bridge-domains-shut" || name == "number-default-bridge-doamins" || name == "number-pbb-edge" || name == "number-pbb-core" || name == "number-p2mp" || name == "number-p2mp-up" || name == "number-p2mp-down" || name == "number-a-cs" || name == "number-a-cs-up" || name == "number-a-cs-down" || name == "number-pseudowires" || name == "number-p-ws-up" || name == "number-p-ws-down" || name == "standby-pseudowires" || name == "num-vn-is" || name == "num-vn-is-up" || name == "num-vn-is-down" || name == "num-vn-is-unresolved" || name == "out-of-memory-state" || name == "partially-programmed-bridges" || name == "partially-programmed-pseudowires" || name == "partially-programmed-a-cs")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::Nsr()
    :
    ha_role{YType::uint8, "ha-role"},
    issu_role{YType::uint8, "issu-role"},
    sync_flags{YType::uint32, "sync-flags"},
    sw_install_in_progress{YType::boolean, "sw-install-in-progress"}
        ,
    failover_status(std::make_shared<L2vpnv2::Standby::Nsr::FailoverStatus>())
    , nsr_status(std::make_shared<L2vpnv2::Standby::Nsr::NsrStatus>())
    , issu_status(std::make_shared<L2vpnv2::Standby::Nsr::IssuStatus>())
    , xid_info(this, {})
    , report_card(this, {})
{
    failover_status->parent = this;
    nsr_status->parent = this;
    issu_status->parent = this;

    yang_name = "nsr"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::~Nsr()
{
}

bool L2vpnv2::Standby::Nsr::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xid_info.len(); index++)
    {
        if(xid_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<report_card.len(); index++)
    {
        if(report_card[index]->has_data())
            return true;
    }
    return ha_role.is_set
	|| issu_role.is_set
	|| sync_flags.is_set
	|| sw_install_in_progress.is_set
	|| (failover_status !=  nullptr && failover_status->has_data())
	|| (nsr_status !=  nullptr && nsr_status->has_data())
	|| (issu_status !=  nullptr && issu_status->has_data());
}

bool L2vpnv2::Standby::Nsr::has_operation() const
{
    for (std::size_t index=0; index<xid_info.len(); index++)
    {
        if(xid_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<report_card.len(); index++)
    {
        if(report_card[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(ha_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(sync_flags.yfilter)
	|| ydk::is_set(sw_install_in_progress.yfilter)
	|| (failover_status !=  nullptr && failover_status->has_operation())
	|| (nsr_status !=  nullptr && nsr_status->has_operation())
	|| (issu_status !=  nullptr && issu_status->has_operation());
}

std::string L2vpnv2::Standby::Nsr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ha_role.is_set || is_set(ha_role.yfilter)) leaf_name_data.push_back(ha_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (sync_flags.is_set || is_set(sync_flags.yfilter)) leaf_name_data.push_back(sync_flags.get_name_leafdata());
    if (sw_install_in_progress.is_set || is_set(sw_install_in_progress.yfilter)) leaf_name_data.push_back(sw_install_in_progress.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failover-status")
    {
        if(failover_status == nullptr)
        {
            failover_status = std::make_shared<L2vpnv2::Standby::Nsr::FailoverStatus>();
        }
        return failover_status;
    }

    if(child_yang_name == "nsr-status")
    {
        if(nsr_status == nullptr)
        {
            nsr_status = std::make_shared<L2vpnv2::Standby::Nsr::NsrStatus>();
        }
        return nsr_status;
    }

    if(child_yang_name == "issu-status")
    {
        if(issu_status == nullptr)
        {
            issu_status = std::make_shared<L2vpnv2::Standby::Nsr::IssuStatus>();
        }
        return issu_status;
    }

    if(child_yang_name == "xid-info")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Nsr::XidInfo>();
        ent_->parent = this;
        xid_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "report-card")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::Nsr::ReportCard>();
        ent_->parent = this;
        report_card.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(failover_status != nullptr)
    {
        _children["failover-status"] = failover_status;
    }

    if(nsr_status != nullptr)
    {
        _children["nsr-status"] = nsr_status;
    }

    if(issu_status != nullptr)
    {
        _children["issu-status"] = issu_status;
    }

    count_ = 0;
    for (auto ent_ : xid_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : report_card.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::Nsr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ha-role")
    {
        ha_role = value;
        ha_role.value_namespace = name_space;
        ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sync-flags")
    {
        sync_flags = value;
        sync_flags.value_namespace = name_space;
        sync_flags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress = value;
        sw_install_in_progress.value_namespace = name_space;
        sw_install_in_progress.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ha-role")
    {
        ha_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "sync-flags")
    {
        sync_flags.yfilter = yfilter;
    }
    if(value_path == "sw-install-in-progress")
    {
        sw_install_in_progress.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "failover-status" || name == "nsr-status" || name == "issu-status" || name == "xid-info" || name == "report-card" || name == "ha-role" || name == "issu-role" || name == "sync-flags" || name == "sw-install-in-progress")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::FailoverStatus::FailoverStatus()
    :
    triggered_time{YType::uint32, "triggered-time"},
    start_time{YType::uint32, "start-time"},
    master_time{YType::uint32, "master-time"}
{

    yang_name = "failover-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::FailoverStatus::~FailoverStatus()
{
}

bool L2vpnv2::Standby::Nsr::FailoverStatus::has_data() const
{
    if (is_presence_container) return true;
    return triggered_time.is_set
	|| start_time.is_set
	|| master_time.is_set;
}

bool L2vpnv2::Standby::Nsr::FailoverStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(triggered_time.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(master_time.yfilter);
}

std::string L2vpnv2::Standby::Nsr::FailoverStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::FailoverStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failover-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::FailoverStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (triggered_time.is_set || is_set(triggered_time.yfilter)) leaf_name_data.push_back(triggered_time.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (master_time.is_set || is_set(master_time.yfilter)) leaf_name_data.push_back(master_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::FailoverStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::FailoverStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Nsr::FailoverStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "triggered-time")
    {
        triggered_time = value;
        triggered_time.value_namespace = name_space;
        triggered_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "master-time")
    {
        master_time = value;
        master_time.value_namespace = name_space;
        master_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::FailoverStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "triggered-time")
    {
        triggered_time.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "master-time")
    {
        master_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::FailoverStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "triggered-time" || name == "start-time" || name == "master-time")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::NsrStatus::NsrStatus()
    :
    nsr_role{YType::uint8, "nsr-role"},
    issu_role{YType::uint8, "issu-role"}
        ,
    idt_status(std::make_shared<L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus>())
    , previ_ous_idt_status(std::make_shared<L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "nsr-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::NsrStatus::~NsrStatus()
{
}

bool L2vpnv2::Standby::Nsr::NsrStatus::has_data() const
{
    if (is_presence_container) return true;
    return nsr_role.is_set
	|| issu_role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2vpnv2::Standby::Nsr::NsrStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2vpnv2::Standby::Nsr::NsrStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::NsrStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nsr-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::NsrStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_role.is_set || is_set(nsr_role.yfilter)) leaf_name_data.push_back(nsr_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::NsrStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::NsrStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        _children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return _children;
}

void L2vpnv2::Standby::Nsr::NsrStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-role")
    {
        nsr_role = value;
        nsr_role.value_namespace = name_space;
        nsr_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::NsrStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-role")
    {
        nsr_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::NsrStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "nsr-role" || name == "issu-role")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::~IdtStatus()
{
}

bool L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::NsrStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "nsr-status"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/nsr-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::NsrStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::IssuStatus::IssuStatus()
    :
    nsr_role{YType::uint8, "nsr-role"},
    issu_role{YType::uint8, "issu-role"}
        ,
    idt_status(std::make_shared<L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus>())
    , previ_ous_idt_status(std::make_shared<L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus>())
{
    idt_status->parent = this;
    previ_ous_idt_status->parent = this;

    yang_name = "issu-status"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::IssuStatus::~IssuStatus()
{
}

bool L2vpnv2::Standby::Nsr::IssuStatus::has_data() const
{
    if (is_presence_container) return true;
    return nsr_role.is_set
	|| issu_role.is_set
	|| (idt_status !=  nullptr && idt_status->has_data())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_data());
}

bool L2vpnv2::Standby::Nsr::IssuStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nsr_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| (idt_status !=  nullptr && idt_status->has_operation())
	|| (previ_ous_idt_status !=  nullptr && previ_ous_idt_status->has_operation());
}

std::string L2vpnv2::Standby::Nsr::IssuStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::IssuStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "issu-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::IssuStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nsr_role.is_set || is_set(nsr_role.yfilter)) leaf_name_data.push_back(nsr_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::IssuStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "idt-status")
    {
        if(idt_status == nullptr)
        {
            idt_status = std::make_shared<L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus>();
        }
        return idt_status;
    }

    if(child_yang_name == "previ-ous-idt-status")
    {
        if(previ_ous_idt_status == nullptr)
        {
            previ_ous_idt_status = std::make_shared<L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus>();
        }
        return previ_ous_idt_status;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::IssuStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(idt_status != nullptr)
    {
        _children["idt-status"] = idt_status;
    }

    if(previ_ous_idt_status != nullptr)
    {
        _children["previ-ous-idt-status"] = previ_ous_idt_status;
    }

    return _children;
}

void L2vpnv2::Standby::Nsr::IssuStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nsr-role")
    {
        nsr_role = value;
        nsr_role.value_namespace = name_space;
        nsr_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::IssuStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nsr-role")
    {
        nsr_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::IssuStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "idt-status" || name == "previ-ous-idt-status" || name == "nsr-role" || name == "issu-role")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::IdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::~IdtStatus()
{
}

bool L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::IssuStatus::IdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::PreviOusIdtStatus()
    :
    sync_status{YType::enumeration, "sync-status"},
    not_ready_reason{YType::enumeration, "not-ready-reason"},
    idt_start_time{YType::uint32, "idt-start-time"},
    idt_end_time{YType::uint32, "idt-end-time"},
    declare_time{YType::uint32, "declare-time"},
    withdraw_time{YType::uint32, "withdraw-time"}
{

    yang_name = "previ-ous-idt-status"; yang_parent_name = "issu-status"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::~PreviOusIdtStatus()
{
}

bool L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::has_data() const
{
    if (is_presence_container) return true;
    return sync_status.is_set
	|| not_ready_reason.is_set
	|| idt_start_time.is_set
	|| idt_end_time.is_set
	|| declare_time.is_set
	|| withdraw_time.is_set;
}

bool L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_status.yfilter)
	|| ydk::is_set(not_ready_reason.yfilter)
	|| ydk::is_set(idt_start_time.yfilter)
	|| ydk::is_set(idt_end_time.yfilter)
	|| ydk::is_set(declare_time.yfilter)
	|| ydk::is_set(withdraw_time.yfilter);
}

std::string L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/issu-status/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "previ-ous-idt-status";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_status.is_set || is_set(sync_status.yfilter)) leaf_name_data.push_back(sync_status.get_name_leafdata());
    if (not_ready_reason.is_set || is_set(not_ready_reason.yfilter)) leaf_name_data.push_back(not_ready_reason.get_name_leafdata());
    if (idt_start_time.is_set || is_set(idt_start_time.yfilter)) leaf_name_data.push_back(idt_start_time.get_name_leafdata());
    if (idt_end_time.is_set || is_set(idt_end_time.yfilter)) leaf_name_data.push_back(idt_end_time.get_name_leafdata());
    if (declare_time.is_set || is_set(declare_time.yfilter)) leaf_name_data.push_back(declare_time.get_name_leafdata());
    if (withdraw_time.is_set || is_set(withdraw_time.yfilter)) leaf_name_data.push_back(withdraw_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-status")
    {
        sync_status = value;
        sync_status.value_namespace = name_space;
        sync_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason = value;
        not_ready_reason.value_namespace = name_space;
        not_ready_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time = value;
        idt_start_time.value_namespace = name_space;
        idt_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time = value;
        idt_end_time.value_namespace = name_space;
        idt_end_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "declare-time")
    {
        declare_time = value;
        declare_time.value_namespace = name_space;
        declare_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time = value;
        withdraw_time.value_namespace = name_space;
        withdraw_time.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-status")
    {
        sync_status.yfilter = yfilter;
    }
    if(value_path == "not-ready-reason")
    {
        not_ready_reason.yfilter = yfilter;
    }
    if(value_path == "idt-start-time")
    {
        idt_start_time.yfilter = yfilter;
    }
    if(value_path == "idt-end-time")
    {
        idt_end_time.yfilter = yfilter;
    }
    if(value_path == "declare-time")
    {
        declare_time.yfilter = yfilter;
    }
    if(value_path == "withdraw-time")
    {
        withdraw_time.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::IssuStatus::PreviOusIdtStatus::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sync-status" || name == "not-ready-reason" || name == "idt-start-time" || name == "idt-end-time" || name == "declare-time" || name == "withdraw-time")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::XidInfo::XidInfo()
    :
    app_type{YType::enumeration, "app-type"},
    sent_ids{YType::uint32, "sent-ids"}
{

    yang_name = "xid-info"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::XidInfo::~XidInfo()
{
}

bool L2vpnv2::Standby::Nsr::XidInfo::has_data() const
{
    if (is_presence_container) return true;
    return app_type.is_set
	|| sent_ids.is_set;
}

bool L2vpnv2::Standby::Nsr::XidInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(app_type.yfilter)
	|| ydk::is_set(sent_ids.yfilter);
}

std::string L2vpnv2::Standby::Nsr::XidInfo::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::XidInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xid-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::XidInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (app_type.is_set || is_set(app_type.yfilter)) leaf_name_data.push_back(app_type.get_name_leafdata());
    if (sent_ids.is_set || is_set(sent_ids.yfilter)) leaf_name_data.push_back(sent_ids.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::XidInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::XidInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Nsr::XidInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "app-type")
    {
        app_type = value;
        app_type.value_namespace = name_space;
        app_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-ids")
    {
        sent_ids = value;
        sent_ids.value_namespace = name_space;
        sent_ids.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::XidInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "app-type")
    {
        app_type.yfilter = yfilter;
    }
    if(value_path == "sent-ids")
    {
        sent_ids.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::XidInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "app-type" || name == "sent-ids")
        return true;
    return false;
}

L2vpnv2::Standby::Nsr::ReportCard::ReportCard()
    :
    collaborator_is_connected{YType::boolean, "collaborator-is-connected"},
    connection_change_time{YType::uint32, "connection-change-time"},
    collaborator_idt_done{YType::boolean, "collaborator-idt-done"},
    idt_time{YType::uint32, "idt-time"},
    collaborator_skipped{YType::boolean, "collaborator-skipped"},
    expect_idt{YType::boolean, "expect-idt"}
{

    yang_name = "report-card"; yang_parent_name = "nsr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Nsr::ReportCard::~ReportCard()
{
}

bool L2vpnv2::Standby::Nsr::ReportCard::has_data() const
{
    if (is_presence_container) return true;
    return collaborator_is_connected.is_set
	|| connection_change_time.is_set
	|| collaborator_idt_done.is_set
	|| idt_time.is_set
	|| collaborator_skipped.is_set
	|| expect_idt.is_set;
}

bool L2vpnv2::Standby::Nsr::ReportCard::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(collaborator_is_connected.yfilter)
	|| ydk::is_set(connection_change_time.yfilter)
	|| ydk::is_set(collaborator_idt_done.yfilter)
	|| ydk::is_set(idt_time.yfilter)
	|| ydk::is_set(collaborator_skipped.yfilter)
	|| ydk::is_set(expect_idt.yfilter);
}

std::string L2vpnv2::Standby::Nsr::ReportCard::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/nsr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Nsr::ReportCard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "report-card";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Nsr::ReportCard::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (collaborator_is_connected.is_set || is_set(collaborator_is_connected.yfilter)) leaf_name_data.push_back(collaborator_is_connected.get_name_leafdata());
    if (connection_change_time.is_set || is_set(connection_change_time.yfilter)) leaf_name_data.push_back(connection_change_time.get_name_leafdata());
    if (collaborator_idt_done.is_set || is_set(collaborator_idt_done.yfilter)) leaf_name_data.push_back(collaborator_idt_done.get_name_leafdata());
    if (idt_time.is_set || is_set(idt_time.yfilter)) leaf_name_data.push_back(idt_time.get_name_leafdata());
    if (collaborator_skipped.is_set || is_set(collaborator_skipped.yfilter)) leaf_name_data.push_back(collaborator_skipped.get_name_leafdata());
    if (expect_idt.is_set || is_set(expect_idt.yfilter)) leaf_name_data.push_back(expect_idt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Nsr::ReportCard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Nsr::ReportCard::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Nsr::ReportCard::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected = value;
        collaborator_is_connected.value_namespace = name_space;
        collaborator_is_connected.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time = value;
        connection_change_time.value_namespace = name_space;
        connection_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done = value;
        collaborator_idt_done.value_namespace = name_space;
        collaborator_idt_done.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idt-time")
    {
        idt_time = value;
        idt_time.value_namespace = name_space;
        idt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped = value;
        collaborator_skipped.value_namespace = name_space;
        collaborator_skipped.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "expect-idt")
    {
        expect_idt = value;
        expect_idt.value_namespace = name_space;
        expect_idt.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Nsr::ReportCard::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "collaborator-is-connected")
    {
        collaborator_is_connected.yfilter = yfilter;
    }
    if(value_path == "connection-change-time")
    {
        connection_change_time.yfilter = yfilter;
    }
    if(value_path == "collaborator-idt-done")
    {
        collaborator_idt_done.yfilter = yfilter;
    }
    if(value_path == "idt-time")
    {
        idt_time.yfilter = yfilter;
    }
    if(value_path == "collaborator-skipped")
    {
        collaborator_skipped.yfilter = yfilter;
    }
    if(value_path == "expect-idt")
    {
        expect_idt.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Nsr::ReportCard::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "collaborator-is-connected" || name == "connection-change-time" || name == "collaborator-idt-done" || name == "idt-time" || name == "collaborator-skipped" || name == "expect-idt")
        return true;
    return false;
}

L2vpnv2::Standby::PreferredPaths::PreferredPaths()
    :
    preferred_path(this, {})
{

    yang_name = "preferred-paths"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::PreferredPaths::~PreferredPaths()
{
}

bool L2vpnv2::Standby::PreferredPaths::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<preferred_path.len(); index++)
    {
        if(preferred_path[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::PreferredPaths::has_operation() const
{
    for (std::size_t index=0; index<preferred_path.len(); index++)
    {
        if(preferred_path[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::PreferredPaths::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::PreferredPaths::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-paths";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PreferredPaths::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PreferredPaths::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "preferred-path")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::PreferredPaths::PreferredPath>();
        ent_->parent = this;
        preferred_path.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PreferredPaths::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : preferred_path.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::PreferredPaths::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::PreferredPaths::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::PreferredPaths::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "preferred-path")
        return true;
    return false;
}

L2vpnv2::Standby::PreferredPaths::PreferredPath::PreferredPath()
    :
    preferred_type{YType::enumeration, "preferred-type"},
    interface_name{YType::str, "interface-name"},
    type{YType::enumeration, "type"},
    interface_name_xr{YType::str, "interface-name-xr"},
    total_bandwidth{YType::uint32, "total-bandwidth"},
    available_bandwidth{YType::uint32, "available-bandwidth"},
    reserved_bandwidth{YType::uint32, "reserved-bandwidth"}
        ,
    virtual_circuit(this, {})
{

    yang_name = "preferred-path"; yang_parent_name = "preferred-paths"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::PreferredPaths::PreferredPath::~PreferredPath()
{
}

bool L2vpnv2::Standby::PreferredPaths::PreferredPath::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<virtual_circuit.len(); index++)
    {
        if(virtual_circuit[index]->has_data())
            return true;
    }
    return preferred_type.is_set
	|| interface_name.is_set
	|| type.is_set
	|| interface_name_xr.is_set
	|| total_bandwidth.is_set
	|| available_bandwidth.is_set
	|| reserved_bandwidth.is_set;
}

bool L2vpnv2::Standby::PreferredPaths::PreferredPath::has_operation() const
{
    for (std::size_t index=0; index<virtual_circuit.len(); index++)
    {
        if(virtual_circuit[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(preferred_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(type.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(total_bandwidth.yfilter)
	|| ydk::is_set(available_bandwidth.yfilter)
	|| ydk::is_set(reserved_bandwidth.yfilter);
}

std::string L2vpnv2::Standby::PreferredPaths::PreferredPath::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/preferred-paths/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::PreferredPaths::PreferredPath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "preferred-path";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PreferredPaths::PreferredPath::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (preferred_type.is_set || is_set(preferred_type.yfilter)) leaf_name_data.push_back(preferred_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (total_bandwidth.is_set || is_set(total_bandwidth.yfilter)) leaf_name_data.push_back(total_bandwidth.get_name_leafdata());
    if (available_bandwidth.is_set || is_set(available_bandwidth.yfilter)) leaf_name_data.push_back(available_bandwidth.get_name_leafdata());
    if (reserved_bandwidth.is_set || is_set(reserved_bandwidth.yfilter)) leaf_name_data.push_back(reserved_bandwidth.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PreferredPaths::PreferredPath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "virtual-circuit")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit>();
        ent_->parent = this;
        virtual_circuit.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PreferredPaths::PreferredPath::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : virtual_circuit.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::PreferredPaths::PreferredPath::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "preferred-type")
    {
        preferred_type = value;
        preferred_type.value_namespace = name_space;
        preferred_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth = value;
        total_bandwidth.value_namespace = name_space;
        total_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth = value;
        available_bandwidth.value_namespace = name_space;
        available_bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth = value;
        reserved_bandwidth.value_namespace = name_space;
        reserved_bandwidth.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::PreferredPaths::PreferredPath::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "preferred-type")
    {
        preferred_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "total-bandwidth")
    {
        total_bandwidth.yfilter = yfilter;
    }
    if(value_path == "available-bandwidth")
    {
        available_bandwidth.yfilter = yfilter;
    }
    if(value_path == "reserved-bandwidth")
    {
        reserved_bandwidth.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::PreferredPaths::PreferredPath::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "virtual-circuit" || name == "preferred-type" || name == "interface-name" || name == "type" || name == "interface-name-xr" || name == "total-bandwidth" || name == "available-bandwidth" || name == "reserved-bandwidth")
        return true;
    return false;
}

L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::VirtualCircuit()
    :
    peer_id{YType::str, "peer-id"},
    source_address{YType::str, "source-address"},
    pwid_type{YType::enumeration, "pwid-type"},
    pwid{YType::uint64, "pwid"},
    fe_ctype{YType::enumeration, "fe-ctype"}
{

    yang_name = "virtual-circuit"; yang_parent_name = "preferred-path"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::~VirtualCircuit()
{
}

bool L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::has_data() const
{
    if (is_presence_container) return true;
    return peer_id.is_set
	|| source_address.is_set
	|| pwid_type.is_set
	|| pwid.is_set
	|| fe_ctype.is_set;
}

bool L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(peer_id.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(pwid_type.yfilter)
	|| ydk::is_set(pwid.yfilter)
	|| ydk::is_set(fe_ctype.yfilter);
}

std::string L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/preferred-paths/preferred-path/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-circuit";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (peer_id.is_set || is_set(peer_id.yfilter)) leaf_name_data.push_back(peer_id.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (pwid_type.is_set || is_set(pwid_type.yfilter)) leaf_name_data.push_back(pwid_type.get_name_leafdata());
    if (pwid.is_set || is_set(pwid.yfilter)) leaf_name_data.push_back(pwid.get_name_leafdata());
    if (fe_ctype.is_set || is_set(fe_ctype.yfilter)) leaf_name_data.push_back(fe_ctype.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "peer-id")
    {
        peer_id = value;
        peer_id.value_namespace = name_space;
        peer_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid-type")
    {
        pwid_type = value;
        pwid_type.value_namespace = name_space;
        pwid_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pwid")
    {
        pwid = value;
        pwid.value_namespace = name_space;
        pwid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype = value;
        fe_ctype.value_namespace = name_space;
        fe_ctype.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "peer-id")
    {
        peer_id.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "pwid-type")
    {
        pwid_type.yfilter = yfilter;
    }
    if(value_path == "pwid")
    {
        pwid.yfilter = yfilter;
    }
    if(value_path == "fe-ctype")
    {
        fe_ctype.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::PreferredPaths::PreferredPath::VirtualCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "peer-id" || name == "source-address" || name == "pwid-type" || name == "pwid" || name == "fe-ctype")
        return true;
    return false;
}

L2vpnv2::Standby::PseudowireHeadend::PseudowireHeadend()
    :
    detail_interfaces(std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces>())
    , summary(std::make_shared<L2vpnv2::Standby::PseudowireHeadend::Summary>())
{
    detail_interfaces->parent = this;
    summary->parent = this;

    yang_name = "pseudowire-headend"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::PseudowireHeadend::~PseudowireHeadend()
{
}

bool L2vpnv2::Standby::PseudowireHeadend::has_data() const
{
    if (is_presence_container) return true;
    return (detail_interfaces !=  nullptr && detail_interfaces->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool L2vpnv2::Standby::PseudowireHeadend::has_operation() const
{
    return is_set(yfilter)
	|| (detail_interfaces !=  nullptr && detail_interfaces->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2vpnv2::Standby::PseudowireHeadend::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::PseudowireHeadend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pseudowire-headend";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PseudowireHeadend::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PseudowireHeadend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-interfaces")
    {
        if(detail_interfaces == nullptr)
        {
            detail_interfaces = std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces>();
        }
        return detail_interfaces;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2vpnv2::Standby::PseudowireHeadend::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PseudowireHeadend::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(detail_interfaces != nullptr)
    {
        _children["detail-interfaces"] = detail_interfaces;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void L2vpnv2::Standby::PseudowireHeadend::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::PseudowireHeadend::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::PseudowireHeadend::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-interfaces" || name == "summary")
        return true;
    return false;
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterfaces()
    :
    detail_interface(this, {"interface_name"})
{

    yang_name = "detail-interfaces"; yang_parent_name = "pseudowire-headend"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::~DetailInterfaces()
{
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<detail_interface.len(); index++)
    {
        if(detail_interface[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::has_operation() const
{
    for (std::size_t index=0; index<detail_interface.len(); index++)
    {
        if(detail_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pseudowire-headend/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "detail-interface")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface>();
        ent_->parent = this;
        detail_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : detail_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "detail-interface")
        return true;
    return false;
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::DetailInterface()
    :
    interface_name{YType::str, "interface-name"},
    interface_state{YType::enumeration, "interface-state"},
    admin_state{YType::enumeration, "admin-state"},
    mtu{YType::uint32, "mtu"},
    bandwidth{YType::uint32, "bandwidth"},
    label{YType::uint32, "label"},
    l2_overhead{YType::uint32, "l2-overhead"},
    vctype{YType::uint32, "vctype"},
    control_word{YType::boolean, "control-word"}
        ,
    l2_address(std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address>())
    , generic_interface_list(std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList>())
{
    l2_address->parent = this;
    generic_interface_list->parent = this;

    yang_name = "detail-interface"; yang_parent_name = "detail-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::~DetailInterface()
{
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface_state.is_set
	|| admin_state.is_set
	|| mtu.is_set
	|| bandwidth.is_set
	|| label.is_set
	|| l2_overhead.is_set
	|| vctype.is_set
	|| control_word.is_set
	|| (l2_address !=  nullptr && l2_address->has_data())
	|| (generic_interface_list !=  nullptr && generic_interface_list->has_data());
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(admin_state.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(bandwidth.yfilter)
	|| ydk::is_set(label.yfilter)
	|| ydk::is_set(l2_overhead.yfilter)
	|| ydk::is_set(vctype.yfilter)
	|| ydk::is_set(control_word.yfilter)
	|| (l2_address !=  nullptr && l2_address->has_operation())
	|| (generic_interface_list !=  nullptr && generic_interface_list->has_operation());
}

std::string L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pseudowire-headend/detail-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "detail-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (admin_state.is_set || is_set(admin_state.yfilter)) leaf_name_data.push_back(admin_state.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (bandwidth.is_set || is_set(bandwidth.yfilter)) leaf_name_data.push_back(bandwidth.get_name_leafdata());
    if (label.is_set || is_set(label.yfilter)) leaf_name_data.push_back(label.get_name_leafdata());
    if (l2_overhead.is_set || is_set(l2_overhead.yfilter)) leaf_name_data.push_back(l2_overhead.get_name_leafdata());
    if (vctype.is_set || is_set(vctype.yfilter)) leaf_name_data.push_back(vctype.get_name_leafdata());
    if (control_word.is_set || is_set(control_word.yfilter)) leaf_name_data.push_back(control_word.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "l2-address")
    {
        if(l2_address == nullptr)
        {
            l2_address = std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address>();
        }
        return l2_address;
    }

    if(child_yang_name == "generic-interface-list")
    {
        if(generic_interface_list == nullptr)
        {
            generic_interface_list = std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList>();
        }
        return generic_interface_list;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(l2_address != nullptr)
    {
        _children["l2-address"] = l2_address;
    }

    if(generic_interface_list != nullptr)
    {
        _children["generic-interface-list"] = generic_interface_list;
    }

    return _children;
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-state")
    {
        admin_state = value;
        admin_state.value_namespace = name_space;
        admin_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bandwidth")
    {
        bandwidth = value;
        bandwidth.value_namespace = name_space;
        bandwidth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "label")
    {
        label = value;
        label.value_namespace = name_space;
        label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead = value;
        l2_overhead.value_namespace = name_space;
        l2_overhead.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vctype")
    {
        vctype = value;
        vctype.value_namespace = name_space;
        vctype.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word")
    {
        control_word = value;
        control_word.value_namespace = name_space;
        control_word.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "admin-state")
    {
        admin_state.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "bandwidth")
    {
        bandwidth.yfilter = yfilter;
    }
    if(value_path == "label")
    {
        label.yfilter = yfilter;
    }
    if(value_path == "l2-overhead")
    {
        l2_overhead.yfilter = yfilter;
    }
    if(value_path == "vctype")
    {
        vctype.yfilter = yfilter;
    }
    if(value_path == "control-word")
    {
        control_word.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "l2-address" || name == "generic-interface-list" || name == "interface-name" || name == "interface-state" || name == "admin-state" || name == "mtu" || name == "bandwidth" || name == "label" || name == "l2-overhead" || name == "vctype" || name == "control-word")
        return true;
    return false;
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::L2Address()
    :
    interface_type{YType::enumeration, "interface-type"}
        ,
    mac_address(std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress>())
{
    mac_address->parent = this;

    yang_name = "l2-address"; yang_parent_name = "detail-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::~L2Address()
{
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::has_data() const
{
    if (is_presence_container) return true;
    return interface_type.is_set
	|| (mac_address !=  nullptr && mac_address->has_data());
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| (mac_address !=  nullptr && mac_address->has_operation());
}

std::string L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-address")
    {
        if(mac_address == nullptr)
        {
            mac_address = std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress>();
        }
        return mac_address;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(mac_address != nullptr)
    {
        _children["mac-address"] = mac_address;
    }

    return _children;
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address" || name == "interface-type")
        return true;
    return false;
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::MacAddress()
    :
    mac_address{YType::str, "mac-address"}
{

    yang_name = "mac-address"; yang_parent_name = "l2-address"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::~MacAddress()
{
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set;
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter);
}

std::string L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::L2Address::MacAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-address")
        return true;
    return false;
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::GenericInterfaceList()
    :
    generic_interface_list_name{YType::str, "generic-interface-list-name"},
    id{YType::uint32, "id"}
        ,
    interface_detail(this, {})
{

    yang_name = "generic-interface-list"; yang_parent_name = "detail-interface"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::~GenericInterfaceList()
{
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_data())
            return true;
    }
    return generic_interface_list_name.is_set
	|| id.is_set;
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::has_operation() const
{
    for (std::size_t index=0; index<interface_detail.len(); index++)
    {
        if(interface_detail[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(generic_interface_list_name.yfilter)
	|| ydk::is_set(id.yfilter);
}

std::string L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "generic-interface-list";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (generic_interface_list_name.is_set || is_set(generic_interface_list_name.yfilter)) leaf_name_data.push_back(generic_interface_list_name.get_name_leafdata());
    if (id.is_set || is_set(id.yfilter)) leaf_name_data.push_back(id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-detail")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail>();
        ent_->parent = this;
        interface_detail.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_detail.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name = value;
        generic_interface_list_name.value_namespace = name_space;
        generic_interface_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "id")
    {
        id = value;
        id.value_namespace = name_space;
        id.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "generic-interface-list-name")
    {
        generic_interface_list_name.yfilter = yfilter;
    }
    if(value_path == "id")
    {
        id.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-detail" || name == "generic-interface-list-name" || name == "id")
        return true;
    return false;
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::InterfaceDetail()
    :
    interface_name{YType::str, "interface-name"},
    bundle_interface_name{YType::str, "bundle-interface-name"},
    interface_state{YType::enumeration, "interface-state"},
    replicate_state{YType::enumeration, "replicate-state"},
    misconfigured{YType::boolean, "misconfigured"}
{

    yang_name = "interface-detail"; yang_parent_name = "generic-interface-list"; is_top_level_class = false; has_list_ancestor = true; 
}

L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::~InterfaceDetail()
{
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| bundle_interface_name.is_set
	|| interface_state.is_set
	|| replicate_state.is_set
	|| misconfigured.is_set;
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(bundle_interface_name.yfilter)
	|| ydk::is_set(interface_state.yfilter)
	|| ydk::is_set(replicate_state.yfilter)
	|| ydk::is_set(misconfigured.yfilter);
}

std::string L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-detail";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (bundle_interface_name.is_set || is_set(bundle_interface_name.yfilter)) leaf_name_data.push_back(bundle_interface_name.get_name_leafdata());
    if (interface_state.is_set || is_set(interface_state.yfilter)) leaf_name_data.push_back(interface_state.get_name_leafdata());
    if (replicate_state.is_set || is_set(replicate_state.yfilter)) leaf_name_data.push_back(replicate_state.get_name_leafdata());
    if (misconfigured.is_set || is_set(misconfigured.yfilter)) leaf_name_data.push_back(misconfigured.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name = value;
        bundle_interface_name.value_namespace = name_space;
        bundle_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-state")
    {
        interface_state = value;
        interface_state.value_namespace = name_space;
        interface_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "replicate-state")
    {
        replicate_state = value;
        replicate_state.value_namespace = name_space;
        replicate_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "misconfigured")
    {
        misconfigured = value;
        misconfigured.value_namespace = name_space;
        misconfigured.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "bundle-interface-name")
    {
        bundle_interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-state")
    {
        interface_state.yfilter = yfilter;
    }
    if(value_path == "replicate-state")
    {
        replicate_state.yfilter = yfilter;
    }
    if(value_path == "misconfigured")
    {
        misconfigured.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::PseudowireHeadend::DetailInterfaces::DetailInterface::GenericInterfaceList::InterfaceDetail::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "bundle-interface-name" || name == "interface-state" || name == "replicate-state" || name == "misconfigured")
        return true;
    return false;
}

L2vpnv2::Standby::PseudowireHeadend::Summary::Summary()
    :
    interfaces{YType::uint32, "interfaces"},
    up_interfaces{YType::uint32, "up-interfaces"},
    down_interfaces{YType::uint32, "down-interfaces"},
    admin_down_interfaces{YType::uint32, "admin-down-interfaces"},
    psuedowire_ether_interfaces{YType::uint32, "psuedowire-ether-interfaces"},
    up_psuedowire_ether_interfaces{YType::uint32, "up-psuedowire-ether-interfaces"},
    down_pseudowire_ether_interfaces{YType::uint32, "down-pseudowire-ether-interfaces"},
    admin_down_pseudowire_ether_interfaces{YType::uint32, "admin-down-pseudowire-ether-interfaces"},
    pseudowire_iw_interfaces{YType::uint32, "pseudowire-iw-interfaces"},
    up_pseudowire_iw_interfaces{YType::uint32, "up-pseudowire-iw-interfaces"},
    down_pseudowire_iw_interfaces{YType::uint32, "down-pseudowire-iw-interfaces"},
    admin_down_pseudowire_iw_interfaces{YType::uint32, "admin-down-pseudowire-iw-interfaces"}
{

    yang_name = "summary"; yang_parent_name = "pseudowire-headend"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::PseudowireHeadend::Summary::~Summary()
{
}

bool L2vpnv2::Standby::PseudowireHeadend::Summary::has_data() const
{
    if (is_presence_container) return true;
    return interfaces.is_set
	|| up_interfaces.is_set
	|| down_interfaces.is_set
	|| admin_down_interfaces.is_set
	|| psuedowire_ether_interfaces.is_set
	|| up_psuedowire_ether_interfaces.is_set
	|| down_pseudowire_ether_interfaces.is_set
	|| admin_down_pseudowire_ether_interfaces.is_set
	|| pseudowire_iw_interfaces.is_set
	|| up_pseudowire_iw_interfaces.is_set
	|| down_pseudowire_iw_interfaces.is_set
	|| admin_down_pseudowire_iw_interfaces.is_set;
}

bool L2vpnv2::Standby::PseudowireHeadend::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interfaces.yfilter)
	|| ydk::is_set(up_interfaces.yfilter)
	|| ydk::is_set(down_interfaces.yfilter)
	|| ydk::is_set(admin_down_interfaces.yfilter)
	|| ydk::is_set(psuedowire_ether_interfaces.yfilter)
	|| ydk::is_set(up_psuedowire_ether_interfaces.yfilter)
	|| ydk::is_set(down_pseudowire_ether_interfaces.yfilter)
	|| ydk::is_set(admin_down_pseudowire_ether_interfaces.yfilter)
	|| ydk::is_set(pseudowire_iw_interfaces.yfilter)
	|| ydk::is_set(up_pseudowire_iw_interfaces.yfilter)
	|| ydk::is_set(down_pseudowire_iw_interfaces.yfilter)
	|| ydk::is_set(admin_down_pseudowire_iw_interfaces.yfilter);
}

std::string L2vpnv2::Standby::PseudowireHeadend::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pseudowire-headend/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::PseudowireHeadend::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::PseudowireHeadend::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interfaces.is_set || is_set(interfaces.yfilter)) leaf_name_data.push_back(interfaces.get_name_leafdata());
    if (up_interfaces.is_set || is_set(up_interfaces.yfilter)) leaf_name_data.push_back(up_interfaces.get_name_leafdata());
    if (down_interfaces.is_set || is_set(down_interfaces.yfilter)) leaf_name_data.push_back(down_interfaces.get_name_leafdata());
    if (admin_down_interfaces.is_set || is_set(admin_down_interfaces.yfilter)) leaf_name_data.push_back(admin_down_interfaces.get_name_leafdata());
    if (psuedowire_ether_interfaces.is_set || is_set(psuedowire_ether_interfaces.yfilter)) leaf_name_data.push_back(psuedowire_ether_interfaces.get_name_leafdata());
    if (up_psuedowire_ether_interfaces.is_set || is_set(up_psuedowire_ether_interfaces.yfilter)) leaf_name_data.push_back(up_psuedowire_ether_interfaces.get_name_leafdata());
    if (down_pseudowire_ether_interfaces.is_set || is_set(down_pseudowire_ether_interfaces.yfilter)) leaf_name_data.push_back(down_pseudowire_ether_interfaces.get_name_leafdata());
    if (admin_down_pseudowire_ether_interfaces.is_set || is_set(admin_down_pseudowire_ether_interfaces.yfilter)) leaf_name_data.push_back(admin_down_pseudowire_ether_interfaces.get_name_leafdata());
    if (pseudowire_iw_interfaces.is_set || is_set(pseudowire_iw_interfaces.yfilter)) leaf_name_data.push_back(pseudowire_iw_interfaces.get_name_leafdata());
    if (up_pseudowire_iw_interfaces.is_set || is_set(up_pseudowire_iw_interfaces.yfilter)) leaf_name_data.push_back(up_pseudowire_iw_interfaces.get_name_leafdata());
    if (down_pseudowire_iw_interfaces.is_set || is_set(down_pseudowire_iw_interfaces.yfilter)) leaf_name_data.push_back(down_pseudowire_iw_interfaces.get_name_leafdata());
    if (admin_down_pseudowire_iw_interfaces.is_set || is_set(admin_down_pseudowire_iw_interfaces.yfilter)) leaf_name_data.push_back(admin_down_pseudowire_iw_interfaces.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::PseudowireHeadend::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::PseudowireHeadend::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::PseudowireHeadend::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interfaces")
    {
        interfaces = value;
        interfaces.value_namespace = name_space;
        interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-interfaces")
    {
        up_interfaces = value;
        up_interfaces.value_namespace = name_space;
        up_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-interfaces")
    {
        down_interfaces = value;
        down_interfaces.value_namespace = name_space;
        down_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-interfaces")
    {
        admin_down_interfaces = value;
        admin_down_interfaces.value_namespace = name_space;
        admin_down_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "psuedowire-ether-interfaces")
    {
        psuedowire_ether_interfaces = value;
        psuedowire_ether_interfaces.value_namespace = name_space;
        psuedowire_ether_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-psuedowire-ether-interfaces")
    {
        up_psuedowire_ether_interfaces = value;
        up_psuedowire_ether_interfaces.value_namespace = name_space;
        up_psuedowire_ether_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-pseudowire-ether-interfaces")
    {
        down_pseudowire_ether_interfaces = value;
        down_pseudowire_ether_interfaces.value_namespace = name_space;
        down_pseudowire_ether_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-pseudowire-ether-interfaces")
    {
        admin_down_pseudowire_ether_interfaces = value;
        admin_down_pseudowire_ether_interfaces.value_namespace = name_space;
        admin_down_pseudowire_ether_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pseudowire-iw-interfaces")
    {
        pseudowire_iw_interfaces = value;
        pseudowire_iw_interfaces.value_namespace = name_space;
        pseudowire_iw_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "up-pseudowire-iw-interfaces")
    {
        up_pseudowire_iw_interfaces = value;
        up_pseudowire_iw_interfaces.value_namespace = name_space;
        up_pseudowire_iw_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "down-pseudowire-iw-interfaces")
    {
        down_pseudowire_iw_interfaces = value;
        down_pseudowire_iw_interfaces.value_namespace = name_space;
        down_pseudowire_iw_interfaces.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-down-pseudowire-iw-interfaces")
    {
        admin_down_pseudowire_iw_interfaces = value;
        admin_down_pseudowire_iw_interfaces.value_namespace = name_space;
        admin_down_pseudowire_iw_interfaces.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::PseudowireHeadend::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interfaces")
    {
        interfaces.yfilter = yfilter;
    }
    if(value_path == "up-interfaces")
    {
        up_interfaces.yfilter = yfilter;
    }
    if(value_path == "down-interfaces")
    {
        down_interfaces.yfilter = yfilter;
    }
    if(value_path == "admin-down-interfaces")
    {
        admin_down_interfaces.yfilter = yfilter;
    }
    if(value_path == "psuedowire-ether-interfaces")
    {
        psuedowire_ether_interfaces.yfilter = yfilter;
    }
    if(value_path == "up-psuedowire-ether-interfaces")
    {
        up_psuedowire_ether_interfaces.yfilter = yfilter;
    }
    if(value_path == "down-pseudowire-ether-interfaces")
    {
        down_pseudowire_ether_interfaces.yfilter = yfilter;
    }
    if(value_path == "admin-down-pseudowire-ether-interfaces")
    {
        admin_down_pseudowire_ether_interfaces.yfilter = yfilter;
    }
    if(value_path == "pseudowire-iw-interfaces")
    {
        pseudowire_iw_interfaces.yfilter = yfilter;
    }
    if(value_path == "up-pseudowire-iw-interfaces")
    {
        up_pseudowire_iw_interfaces.yfilter = yfilter;
    }
    if(value_path == "down-pseudowire-iw-interfaces")
    {
        down_pseudowire_iw_interfaces.yfilter = yfilter;
    }
    if(value_path == "admin-down-pseudowire-iw-interfaces")
    {
        admin_down_pseudowire_iw_interfaces.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::PseudowireHeadend::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interfaces" || name == "up-interfaces" || name == "down-interfaces" || name == "admin-down-interfaces" || name == "psuedowire-ether-interfaces" || name == "up-psuedowire-ether-interfaces" || name == "down-pseudowire-ether-interfaces" || name == "admin-down-pseudowire-ether-interfaces" || name == "pseudowire-iw-interfaces" || name == "up-pseudowire-iw-interfaces" || name == "down-pseudowire-iw-interfaces" || name == "admin-down-pseudowire-iw-interfaces")
        return true;
    return false;
}

L2vpnv2::Standby::GlobalSettings::GlobalSettings()
    :
    pw_grouping_enabled{YType::boolean, "pw-grouping-enabled"},
    pw_status_enabled{YType::boolean, "pw-status-enabled"},
    logging_pw_enabled{YType::boolean, "logging-pw-enabled"},
    logging_bd_enabled{YType::boolean, "logging-bd-enabled"},
    logging_vfi_enabled{YType::boolean, "logging-vfi-enabled"},
    logging_nsr_enabled{YType::boolean, "logging-nsr-enabled"},
    logging_df_election_enabled{YType::boolean, "logging-df-election-enabled"},
    tcn_propagation_enabled{YType::boolean, "tcn-propagation-enabled"},
    pw_oam_refresh_transmit_time{YType::uint32, "pw-oam-refresh-transmit-time"},
    ha_role{YType::str, "ha-role"},
    issu_role{YType::str, "issu-role"},
    process_fsm{YType::str, "process-fsm"},
    going_active{YType::boolean, "going-active"}
{

    yang_name = "global-settings"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::GlobalSettings::~GlobalSettings()
{
}

bool L2vpnv2::Standby::GlobalSettings::has_data() const
{
    if (is_presence_container) return true;
    return pw_grouping_enabled.is_set
	|| pw_status_enabled.is_set
	|| logging_pw_enabled.is_set
	|| logging_bd_enabled.is_set
	|| logging_vfi_enabled.is_set
	|| logging_nsr_enabled.is_set
	|| logging_df_election_enabled.is_set
	|| tcn_propagation_enabled.is_set
	|| pw_oam_refresh_transmit_time.is_set
	|| ha_role.is_set
	|| issu_role.is_set
	|| process_fsm.is_set
	|| going_active.is_set;
}

bool L2vpnv2::Standby::GlobalSettings::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(pw_grouping_enabled.yfilter)
	|| ydk::is_set(pw_status_enabled.yfilter)
	|| ydk::is_set(logging_pw_enabled.yfilter)
	|| ydk::is_set(logging_bd_enabled.yfilter)
	|| ydk::is_set(logging_vfi_enabled.yfilter)
	|| ydk::is_set(logging_nsr_enabled.yfilter)
	|| ydk::is_set(logging_df_election_enabled.yfilter)
	|| ydk::is_set(tcn_propagation_enabled.yfilter)
	|| ydk::is_set(pw_oam_refresh_transmit_time.yfilter)
	|| ydk::is_set(ha_role.yfilter)
	|| ydk::is_set(issu_role.yfilter)
	|| ydk::is_set(process_fsm.yfilter)
	|| ydk::is_set(going_active.yfilter);
}

std::string L2vpnv2::Standby::GlobalSettings::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::GlobalSettings::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-settings";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::GlobalSettings::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pw_grouping_enabled.is_set || is_set(pw_grouping_enabled.yfilter)) leaf_name_data.push_back(pw_grouping_enabled.get_name_leafdata());
    if (pw_status_enabled.is_set || is_set(pw_status_enabled.yfilter)) leaf_name_data.push_back(pw_status_enabled.get_name_leafdata());
    if (logging_pw_enabled.is_set || is_set(logging_pw_enabled.yfilter)) leaf_name_data.push_back(logging_pw_enabled.get_name_leafdata());
    if (logging_bd_enabled.is_set || is_set(logging_bd_enabled.yfilter)) leaf_name_data.push_back(logging_bd_enabled.get_name_leafdata());
    if (logging_vfi_enabled.is_set || is_set(logging_vfi_enabled.yfilter)) leaf_name_data.push_back(logging_vfi_enabled.get_name_leafdata());
    if (logging_nsr_enabled.is_set || is_set(logging_nsr_enabled.yfilter)) leaf_name_data.push_back(logging_nsr_enabled.get_name_leafdata());
    if (logging_df_election_enabled.is_set || is_set(logging_df_election_enabled.yfilter)) leaf_name_data.push_back(logging_df_election_enabled.get_name_leafdata());
    if (tcn_propagation_enabled.is_set || is_set(tcn_propagation_enabled.yfilter)) leaf_name_data.push_back(tcn_propagation_enabled.get_name_leafdata());
    if (pw_oam_refresh_transmit_time.is_set || is_set(pw_oam_refresh_transmit_time.yfilter)) leaf_name_data.push_back(pw_oam_refresh_transmit_time.get_name_leafdata());
    if (ha_role.is_set || is_set(ha_role.yfilter)) leaf_name_data.push_back(ha_role.get_name_leafdata());
    if (issu_role.is_set || is_set(issu_role.yfilter)) leaf_name_data.push_back(issu_role.get_name_leafdata());
    if (process_fsm.is_set || is_set(process_fsm.yfilter)) leaf_name_data.push_back(process_fsm.get_name_leafdata());
    if (going_active.is_set || is_set(going_active.yfilter)) leaf_name_data.push_back(going_active.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::GlobalSettings::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::GlobalSettings::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::GlobalSettings::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled = value;
        pw_grouping_enabled.value_namespace = name_space;
        pw_grouping_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled = value;
        pw_status_enabled.value_namespace = name_space;
        pw_status_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled = value;
        logging_pw_enabled.value_namespace = name_space;
        logging_pw_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled = value;
        logging_bd_enabled.value_namespace = name_space;
        logging_bd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled = value;
        logging_vfi_enabled.value_namespace = name_space;
        logging_vfi_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled = value;
        logging_nsr_enabled.value_namespace = name_space;
        logging_nsr_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled = value;
        logging_df_election_enabled.value_namespace = name_space;
        logging_df_election_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled = value;
        tcn_propagation_enabled.value_namespace = name_space;
        tcn_propagation_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time = value;
        pw_oam_refresh_transmit_time.value_namespace = name_space;
        pw_oam_refresh_transmit_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ha-role")
    {
        ha_role = value;
        ha_role.value_namespace = name_space;
        ha_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "issu-role")
    {
        issu_role = value;
        issu_role.value_namespace = name_space;
        issu_role.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "process-fsm")
    {
        process_fsm = value;
        process_fsm.value_namespace = name_space;
        process_fsm.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "going-active")
    {
        going_active = value;
        going_active.value_namespace = name_space;
        going_active.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::GlobalSettings::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "pw-grouping-enabled")
    {
        pw_grouping_enabled.yfilter = yfilter;
    }
    if(value_path == "pw-status-enabled")
    {
        pw_status_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-pw-enabled")
    {
        logging_pw_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-bd-enabled")
    {
        logging_bd_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-vfi-enabled")
    {
        logging_vfi_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-nsr-enabled")
    {
        logging_nsr_enabled.yfilter = yfilter;
    }
    if(value_path == "logging-df-election-enabled")
    {
        logging_df_election_enabled.yfilter = yfilter;
    }
    if(value_path == "tcn-propagation-enabled")
    {
        tcn_propagation_enabled.yfilter = yfilter;
    }
    if(value_path == "pw-oam-refresh-transmit-time")
    {
        pw_oam_refresh_transmit_time.yfilter = yfilter;
    }
    if(value_path == "ha-role")
    {
        ha_role.yfilter = yfilter;
    }
    if(value_path == "issu-role")
    {
        issu_role.yfilter = yfilter;
    }
    if(value_path == "process-fsm")
    {
        process_fsm.yfilter = yfilter;
    }
    if(value_path == "going-active")
    {
        going_active.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::GlobalSettings::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pw-grouping-enabled" || name == "pw-status-enabled" || name == "logging-pw-enabled" || name == "logging-bd-enabled" || name == "logging-vfi-enabled" || name == "logging-nsr-enabled" || name == "logging-df-election-enabled" || name == "tcn-propagation-enabled" || name == "pw-oam-refresh-transmit-time" || name == "ha-role" || name == "issu-role" || name == "process-fsm" || name == "going-active")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Pwr()
    :
    summary(std::make_shared<L2vpnv2::Standby::Pwr::Summary>())
{
    summary->parent = this;

    yang_name = "pwr"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::~Pwr()
{
}

bool L2vpnv2::Standby::Pwr::has_data() const
{
    if (is_presence_container) return true;
    return (summary !=  nullptr && summary->has_data());
}

bool L2vpnv2::Standby::Pwr::has_operation() const
{
    return is_set(yfilter)
	|| (summary !=  nullptr && summary->has_operation());
}

std::string L2vpnv2::Standby::Pwr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pwr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<L2vpnv2::Standby::Pwr::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void L2vpnv2::Standby::Pwr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::Pwr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::Pwr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "summary")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::Summary()
    :
    bgp_router_id{YType::str, "bgp-router-id"},
    cfg_router_id{YType::str, "cfg-router-id"},
    bgp_as{YType::uint32, "bgp-as"},
    cfg_global_id{YType::uint32, "cfg-global-id"},
    l2vpn_has_bgp_eod{YType::boolean, "l2vpn-has-bgp-eod"}
        ,
    rd_auto(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto>())
    , rd_configured(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured>())
{
    rd_auto->parent = this;
    rd_configured->parent = this;

    yang_name = "summary"; yang_parent_name = "pwr"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::~Summary()
{
}

bool L2vpnv2::Standby::Pwr::Summary::has_data() const
{
    if (is_presence_container) return true;
    return bgp_router_id.is_set
	|| cfg_router_id.is_set
	|| bgp_as.is_set
	|| cfg_global_id.is_set
	|| l2vpn_has_bgp_eod.is_set
	|| (rd_auto !=  nullptr && rd_auto->has_data())
	|| (rd_configured !=  nullptr && rd_configured->has_data());
}

bool L2vpnv2::Standby::Pwr::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(bgp_router_id.yfilter)
	|| ydk::is_set(cfg_router_id.yfilter)
	|| ydk::is_set(bgp_as.yfilter)
	|| ydk::is_set(cfg_global_id.yfilter)
	|| ydk::is_set(l2vpn_has_bgp_eod.yfilter)
	|| (rd_auto !=  nullptr && rd_auto->has_operation())
	|| (rd_configured !=  nullptr && rd_configured->has_operation());
}

std::string L2vpnv2::Standby::Pwr::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bgp_router_id.is_set || is_set(bgp_router_id.yfilter)) leaf_name_data.push_back(bgp_router_id.get_name_leafdata());
    if (cfg_router_id.is_set || is_set(cfg_router_id.yfilter)) leaf_name_data.push_back(cfg_router_id.get_name_leafdata());
    if (bgp_as.is_set || is_set(bgp_as.yfilter)) leaf_name_data.push_back(bgp_as.get_name_leafdata());
    if (cfg_global_id.is_set || is_set(cfg_global_id.yfilter)) leaf_name_data.push_back(cfg_global_id.get_name_leafdata());
    if (l2vpn_has_bgp_eod.is_set || is_set(l2vpn_has_bgp_eod.yfilter)) leaf_name_data.push_back(l2vpn_has_bgp_eod.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rd-auto")
    {
        if(rd_auto == nullptr)
        {
            rd_auto = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto>();
        }
        return rd_auto;
    }

    if(child_yang_name == "rd-configured")
    {
        if(rd_configured == nullptr)
        {
            rd_configured = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured>();
        }
        return rd_configured;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(rd_auto != nullptr)
    {
        _children["rd-auto"] = rd_auto;
    }

    if(rd_configured != nullptr)
    {
        _children["rd-configured"] = rd_configured;
    }

    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "bgp-router-id")
    {
        bgp_router_id = value;
        bgp_router_id.value_namespace = name_space;
        bgp_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id = value;
        cfg_router_id.value_namespace = name_space;
        cfg_router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bgp-as")
    {
        bgp_as = value;
        bgp_as.value_namespace = name_space;
        bgp_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id = value;
        cfg_global_id.value_namespace = name_space;
        cfg_global_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod = value;
        l2vpn_has_bgp_eod.value_namespace = name_space;
        l2vpn_has_bgp_eod.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "bgp-router-id")
    {
        bgp_router_id.yfilter = yfilter;
    }
    if(value_path == "cfg-router-id")
    {
        cfg_router_id.yfilter = yfilter;
    }
    if(value_path == "bgp-as")
    {
        bgp_as.yfilter = yfilter;
    }
    if(value_path == "cfg-global-id")
    {
        cfg_global_id.yfilter = yfilter;
    }
    if(value_path == "l2vpn-has-bgp-eod")
    {
        l2vpn_has_bgp_eod.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rd-auto" || name == "rd-configured" || name == "bgp-router-id" || name == "cfg-router-id" || name == "bgp-as" || name == "cfg-global-id" || name == "l2vpn-has-bgp-eod")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::RdAuto()
    :
    rd{YType::enumeration, "rd"}
        ,
    auto_(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto>())
    , two_byte_as(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs>())
    , four_byte_as(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs>())
    , v4_addr(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-auto"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::~RdAuto()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::has_data() const
{
    if (is_presence_container) return true;
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdAuto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdAuto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdAuto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::~Auto()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::~TwoByteAs()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::~FourByteAs()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-auto"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::~V4Addr()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-auto/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdAuto::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::RdConfigured()
    :
    rd{YType::enumeration, "rd"}
        ,
    auto_(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto>())
    , two_byte_as(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs>())
    , four_byte_as(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs>())
    , v4_addr(std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr>())
{
    auto_->parent = this;
    two_byte_as->parent = this;
    four_byte_as->parent = this;
    v4_addr->parent = this;

    yang_name = "rd-configured"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::~RdConfigured()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::has_data() const
{
    if (is_presence_container) return true;
    return rd.is_set
	|| (auto_ !=  nullptr && auto_->has_data())
	|| (two_byte_as !=  nullptr && two_byte_as->has_data())
	|| (four_byte_as !=  nullptr && four_byte_as->has_data())
	|| (v4_addr !=  nullptr && v4_addr->has_data());
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(rd.yfilter)
	|| (auto_ !=  nullptr && auto_->has_operation())
	|| (two_byte_as !=  nullptr && two_byte_as->has_operation())
	|| (four_byte_as !=  nullptr && four_byte_as->has_operation())
	|| (v4_addr !=  nullptr && v4_addr->has_operation());
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rd-configured";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdConfigured::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rd.is_set || is_set(rd.yfilter)) leaf_name_data.push_back(rd.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdConfigured::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto")
    {
        if(auto_ == nullptr)
        {
            auto_ = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto>();
        }
        return auto_;
    }

    if(child_yang_name == "two-byte-as")
    {
        if(two_byte_as == nullptr)
        {
            two_byte_as = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs>();
        }
        return two_byte_as;
    }

    if(child_yang_name == "four-byte-as")
    {
        if(four_byte_as == nullptr)
        {
            four_byte_as = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs>();
        }
        return four_byte_as;
    }

    if(child_yang_name == "v4-addr")
    {
        if(v4_addr == nullptr)
        {
            v4_addr = std::make_shared<L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr>();
        }
        return v4_addr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdConfigured::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(auto_ != nullptr)
    {
        _children["auto"] = auto_;
    }

    if(two_byte_as != nullptr)
    {
        _children["two-byte-as"] = two_byte_as;
    }

    if(four_byte_as != nullptr)
    {
        _children["four-byte-as"] = four_byte_as;
    }

    if(v4_addr != nullptr)
    {
        _children["v4-addr"] = v4_addr;
    }

    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "rd")
    {
        rd = value;
        rd.value_namespace = name_space;
        rd.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "rd")
    {
        rd.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "auto" || name == "two-byte-as" || name == "four-byte-as" || name == "v4-addr" || name == "rd")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::Auto()
    :
    router_id{YType::str, "router-id"},
    auto_index{YType::uint16, "auto-index"}
{

    yang_name = "auto"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::~Auto()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::has_data() const
{
    if (is_presence_container) return true;
    return router_id.is_set
	|| auto_index.is_set;
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(router_id.yfilter)
	|| ydk::is_set(auto_index.yfilter);
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (router_id.is_set || is_set(router_id.yfilter)) leaf_name_data.push_back(router_id.get_name_leafdata());
    if (auto_index.is_set || is_set(auto_index.yfilter)) leaf_name_data.push_back(auto_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "router-id")
    {
        router_id = value;
        router_id.value_namespace = name_space;
        router_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auto-index")
    {
        auto_index = value;
        auto_index.value_namespace = name_space;
        auto_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "router-id")
    {
        router_id.yfilter = yfilter;
    }
    if(value_path == "auto-index")
    {
        auto_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::Auto::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "router-id" || name == "auto-index")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::TwoByteAs()
    :
    two_byte_as{YType::uint16, "two-byte-as"},
    four_byte_index{YType::uint32, "four-byte-index"}
{

    yang_name = "two-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::~TwoByteAs()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::has_data() const
{
    if (is_presence_container) return true;
    return two_byte_as.is_set
	|| four_byte_index.is_set;
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(two_byte_as.yfilter)
	|| ydk::is_set(four_byte_index.yfilter);
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "two-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (two_byte_as.is_set || is_set(two_byte_as.yfilter)) leaf_name_data.push_back(two_byte_as.get_name_leafdata());
    if (four_byte_index.is_set || is_set(four_byte_index.yfilter)) leaf_name_data.push_back(four_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as = value;
        two_byte_as.value_namespace = name_space;
        two_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index = value;
        four_byte_index.value_namespace = name_space;
        four_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "two-byte-as")
    {
        two_byte_as.yfilter = yfilter;
    }
    if(value_path == "four-byte-index")
    {
        four_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::TwoByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "two-byte-as" || name == "four-byte-index")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::FourByteAs()
    :
    four_byte_as{YType::uint32, "four-byte-as"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "four-byte-as"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::~FourByteAs()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::has_data() const
{
    if (is_presence_container) return true;
    return four_byte_as.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(four_byte_as.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "four-byte-as";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (four_byte_as.is_set || is_set(four_byte_as.yfilter)) leaf_name_data.push_back(four_byte_as.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as = value;
        four_byte_as.value_namespace = name_space;
        four_byte_as.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "four-byte-as")
    {
        four_byte_as.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::FourByteAs::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "four-byte-as" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::V4Addr()
    :
    ipv4_address{YType::str, "ipv4-address"},
    two_byte_index{YType::uint16, "two-byte-index"}
{

    yang_name = "v4-addr"; yang_parent_name = "rd-configured"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::~V4Addr()
{
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_address.is_set
	|| two_byte_index.is_set;
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_address.yfilter)
	|| ydk::is_set(two_byte_index.yfilter);
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/pwr/summary/rd-configured/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v4-addr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_address.is_set || is_set(ipv4_address.yfilter)) leaf_name_data.push_back(ipv4_address.get_name_leafdata());
    if (two_byte_index.is_set || is_set(two_byte_index.yfilter)) leaf_name_data.push_back(two_byte_index.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address = value;
        ipv4_address.value_namespace = name_space;
        ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index = value;
        two_byte_index.value_namespace = name_space;
        two_byte_index.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-address")
    {
        ipv4_address.yfilter = yfilter;
    }
    if(value_path == "two-byte-index")
    {
        two_byte_index.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::Pwr::Summary::RdConfigured::V4Addr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address" || name == "two-byte-index")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ces()
    :
    xconnect_mp2mp_ce2ce(this, {})
{

    yang_name = "xconnect-mp2mp-ce2ces"; yang_parent_name = "standby"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::~XconnectMp2mpCe2ces()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.len(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_data())
            return true;
    }
    return false;
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::has_operation() const
{
    for (std::size_t index=0; index<xconnect_mp2mp_ce2ce.len(); index++)
    {
        if(xconnect_mp2mp_ce2ce[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "xconnect-mp2mp-ce2ce")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce>();
        ent_->parent = this;
        xconnect_mp2mp_ce2ce.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : xconnect_mp2mp_ce2ce.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-mp2mp-ce2ce")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::XconnectMp2mpCe2ce()
    :
    group_name{YType::str, "group-name"},
    mp2_mp_name{YType::str, "mp2-mp-name"},
    local_ceid{YType::uint32, "local-ceid"},
    remote_ceid{YType::uint32, "remote-ceid"},
    group_name_xr{YType::str, "group-name-xr"},
    xconnect_name_xr{YType::str, "xconnect-name-xr"},
    number_of_backup_p_ws{YType::uint32, "number-of-backup-p-ws"},
    state{YType::enumeration, "state"},
    interworking{YType::enumeration, "interworking"},
    diag_mask{YType::uint32, "diag-mask"},
    description{YType::str, "description"},
    is_mp2mp{YType::boolean, "is-mp2mp"}
        ,
    backup(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup>())
    , segment1(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Segment1>())
    , segment2(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Segment2>())
    , ce2ce(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Ce2ce>())
    , backup_segment(this, {})
{
    backup->parent = this;
    segment1->parent = this;
    segment2->parent = this;
    ce2ce->parent = this;

    yang_name = "xconnect-mp2mp-ce2ce"; yang_parent_name = "xconnect-mp2mp-ce2ces"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::~XconnectMp2mpCe2ce()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<backup_segment.len(); index++)
    {
        if(backup_segment[index]->has_data())
            return true;
    }
    return group_name.is_set
	|| mp2_mp_name.is_set
	|| local_ceid.is_set
	|| remote_ceid.is_set
	|| group_name_xr.is_set
	|| xconnect_name_xr.is_set
	|| number_of_backup_p_ws.is_set
	|| state.is_set
	|| interworking.is_set
	|| diag_mask.is_set
	|| description.is_set
	|| is_mp2mp.is_set
	|| (backup !=  nullptr && backup->has_data())
	|| (segment1 !=  nullptr && segment1->has_data())
	|| (segment2 !=  nullptr && segment2->has_data())
	|| (ce2ce !=  nullptr && ce2ce->has_data());
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::has_operation() const
{
    for (std::size_t index=0; index<backup_segment.len(); index++)
    {
        if(backup_segment[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(group_name.yfilter)
	|| ydk::is_set(mp2_mp_name.yfilter)
	|| ydk::is_set(local_ceid.yfilter)
	|| ydk::is_set(remote_ceid.yfilter)
	|| ydk::is_set(group_name_xr.yfilter)
	|| ydk::is_set(xconnect_name_xr.yfilter)
	|| ydk::is_set(number_of_backup_p_ws.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(diag_mask.yfilter)
	|| ydk::is_set(description.yfilter)
	|| ydk::is_set(is_mp2mp.yfilter)
	|| (backup !=  nullptr && backup->has_operation())
	|| (segment1 !=  nullptr && segment1->has_operation())
	|| (segment2 !=  nullptr && segment2->has_operation())
	|| (ce2ce !=  nullptr && ce2ce->has_operation());
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "xconnect-mp2mp-ce2ce";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.yfilter)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (mp2_mp_name.is_set || is_set(mp2_mp_name.yfilter)) leaf_name_data.push_back(mp2_mp_name.get_name_leafdata());
    if (local_ceid.is_set || is_set(local_ceid.yfilter)) leaf_name_data.push_back(local_ceid.get_name_leafdata());
    if (remote_ceid.is_set || is_set(remote_ceid.yfilter)) leaf_name_data.push_back(remote_ceid.get_name_leafdata());
    if (group_name_xr.is_set || is_set(group_name_xr.yfilter)) leaf_name_data.push_back(group_name_xr.get_name_leafdata());
    if (xconnect_name_xr.is_set || is_set(xconnect_name_xr.yfilter)) leaf_name_data.push_back(xconnect_name_xr.get_name_leafdata());
    if (number_of_backup_p_ws.is_set || is_set(number_of_backup_p_ws.yfilter)) leaf_name_data.push_back(number_of_backup_p_ws.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (diag_mask.is_set || is_set(diag_mask.yfilter)) leaf_name_data.push_back(diag_mask.get_name_leafdata());
    if (description.is_set || is_set(description.yfilter)) leaf_name_data.push_back(description.get_name_leafdata());
    if (is_mp2mp.is_set || is_set(is_mp2mp.yfilter)) leaf_name_data.push_back(is_mp2mp.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "backup")
    {
        if(backup == nullptr)
        {
            backup = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup>();
        }
        return backup;
    }

    if(child_yang_name == "segment1")
    {
        if(segment1 == nullptr)
        {
            segment1 = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Segment1>();
        }
        return segment1;
    }

    if(child_yang_name == "segment2")
    {
        if(segment2 == nullptr)
        {
            segment2 = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Segment2>();
        }
        return segment2;
    }

    if(child_yang_name == "ce2ce")
    {
        if(ce2ce == nullptr)
        {
            ce2ce = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Ce2ce>();
        }
        return ce2ce;
    }

    if(child_yang_name == "backup-segment")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::BackupSegment>();
        ent_->parent = this;
        backup_segment.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(backup != nullptr)
    {
        _children["backup"] = backup;
    }

    if(segment1 != nullptr)
    {
        _children["segment1"] = segment1;
    }

    if(segment2 != nullptr)
    {
        _children["segment2"] = segment2;
    }

    if(ce2ce != nullptr)
    {
        _children["ce2ce"] = ce2ce;
    }

    count_ = 0;
    for (auto ent_ : backup_segment.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "group-name")
    {
        group_name = value;
        group_name.value_namespace = name_space;
        group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name = value;
        mp2_mp_name.value_namespace = name_space;
        mp2_mp_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-ceid")
    {
        local_ceid = value;
        local_ceid.value_namespace = name_space;
        local_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid = value;
        remote_ceid.value_namespace = name_space;
        remote_ceid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr = value;
        group_name_xr.value_namespace = name_space;
        group_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr = value;
        xconnect_name_xr.value_namespace = name_space;
        xconnect_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws = value;
        number_of_backup_p_ws.value_namespace = name_space;
        number_of_backup_p_ws.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "diag-mask")
    {
        diag_mask = value;
        diag_mask.value_namespace = name_space;
        diag_mask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "description")
    {
        description = value;
        description.value_namespace = name_space;
        description.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp = value;
        is_mp2mp.value_namespace = name_space;
        is_mp2mp.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "group-name")
    {
        group_name.yfilter = yfilter;
    }
    if(value_path == "mp2-mp-name")
    {
        mp2_mp_name.yfilter = yfilter;
    }
    if(value_path == "local-ceid")
    {
        local_ceid.yfilter = yfilter;
    }
    if(value_path == "remote-ceid")
    {
        remote_ceid.yfilter = yfilter;
    }
    if(value_path == "group-name-xr")
    {
        group_name_xr.yfilter = yfilter;
    }
    if(value_path == "xconnect-name-xr")
    {
        xconnect_name_xr.yfilter = yfilter;
    }
    if(value_path == "number-of-backup-p-ws")
    {
        number_of_backup_p_ws.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "diag-mask")
    {
        diag_mask.yfilter = yfilter;
    }
    if(value_path == "description")
    {
        description.yfilter = yfilter;
    }
    if(value_path == "is-mp2mp")
    {
        is_mp2mp.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "backup" || name == "segment1" || name == "segment2" || name == "ce2ce" || name == "backup-segment" || name == "group-name" || name == "mp2-mp-name" || name == "local-ceid" || name == "remote-ceid" || name == "group-name-xr" || name == "xconnect-name-xr" || name == "number-of-backup-p-ws" || name == "state" || name == "interworking" || name == "diag-mask" || name == "description" || name == "is-mp2mp")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::Backup()
    :
    segment_type{YType::enumeration, "segment-type"}
        ,
    attachment_circuit(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit>())
    , pseudo_wire(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::PseudoWire>())
{
    attachment_circuit->parent = this;
    pseudo_wire->parent = this;

    yang_name = "backup"; yang_parent_name = "xconnect-mp2mp-ce2ce"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::~Backup()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::has_data() const
{
    if (is_presence_container) return true;
    return segment_type.is_set
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_data())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_data());
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(segment_type.yfilter)
	|| (attachment_circuit !=  nullptr && attachment_circuit->has_operation())
	|| (pseudo_wire !=  nullptr && pseudo_wire->has_operation());
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "backup";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (segment_type.is_set || is_set(segment_type.yfilter)) leaf_name_data.push_back(segment_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attachment-circuit")
    {
        if(attachment_circuit == nullptr)
        {
            attachment_circuit = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit>();
        }
        return attachment_circuit;
    }

    if(child_yang_name == "pseudo-wire")
    {
        if(pseudo_wire == nullptr)
        {
            pseudo_wire = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::PseudoWire>();
        }
        return pseudo_wire;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(attachment_circuit != nullptr)
    {
        _children["attachment-circuit"] = attachment_circuit;
    }

    if(pseudo_wire != nullptr)
    {
        _children["pseudo-wire"] = pseudo_wire;
    }

    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "segment-type")
    {
        segment_type = value;
        segment_type.value_namespace = name_space;
        segment_type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "segment-type")
    {
        segment_type.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "attachment-circuit" || name == "pseudo-wire" || name == "segment-type")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::AttachmentCircuit()
    :
    state{YType::enumeration, "state"},
    msti{YType::str, "msti"},
    internal_ms_ti{YType::str, "internal-ms-ti"},
    node_id{YType::str, "node-id"},
    xconnect_id{YType::uint32, "xconnect-id"},
    ms_ti_mismatch{YType::boolean, "ms-ti-mismatch"},
    mtu_mismatched{YType::boolean, "mtu-mismatched"},
    tdm_media_mismatched{YType::boolean, "tdm-media-mismatched"},
    bvi_mac_conflict{YType::boolean, "bvi-mac-conflict"},
    bvi_no_port_up{YType::boolean, "bvi-no-port-up"},
    control_word_mismatched{YType::boolean, "control-word-mismatched"},
    encapsulation_mismatched{YType::boolean, "encapsulation-mismatched"},
    encapsulation_error{YType::str, "encapsulation-error"},
    interworking{YType::enumeration, "interworking"},
    out_of_memory_state{YType::uint32, "out-of-memory-state"},
    msti_mismatch_down{YType::boolean, "msti-mismatch-down"},
    mac_limit_oper_down{YType::boolean, "mac-limit-oper-down"},
    redundancy_group_id{YType::uint32, "redundancy-group-id"},
    redundancy_group_state{YType::enumeration, "redundancy-group-state"},
    redundancy_object_id{YType::uint64, "redundancy-object-id"},
    is_ac_partially_programmed{YType::boolean, "is-ac-partially-programmed"},
    evpn_internal_label{YType::uint32, "evpn-internal-label"}
        ,
    interface(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface>())
    , statistics(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics>())
    , l2vpn_protection(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::L2vpnProtection>())
{
    interface->parent = this;
    statistics->parent = this;
    l2vpn_protection->parent = this;

    yang_name = "attachment-circuit"; yang_parent_name = "backup"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::~AttachmentCircuit()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| msti.is_set
	|| internal_ms_ti.is_set
	|| node_id.is_set
	|| xconnect_id.is_set
	|| ms_ti_mismatch.is_set
	|| mtu_mismatched.is_set
	|| tdm_media_mismatched.is_set
	|| bvi_mac_conflict.is_set
	|| bvi_no_port_up.is_set
	|| control_word_mismatched.is_set
	|| encapsulation_mismatched.is_set
	|| encapsulation_error.is_set
	|| interworking.is_set
	|| out_of_memory_state.is_set
	|| msti_mismatch_down.is_set
	|| mac_limit_oper_down.is_set
	|| redundancy_group_id.is_set
	|| redundancy_group_state.is_set
	|| redundancy_object_id.is_set
	|| is_ac_partially_programmed.is_set
	|| evpn_internal_label.is_set
	|| (interface !=  nullptr && interface->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_data());
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(msti.yfilter)
	|| ydk::is_set(internal_ms_ti.yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| ydk::is_set(xconnect_id.yfilter)
	|| ydk::is_set(ms_ti_mismatch.yfilter)
	|| ydk::is_set(mtu_mismatched.yfilter)
	|| ydk::is_set(tdm_media_mismatched.yfilter)
	|| ydk::is_set(bvi_mac_conflict.yfilter)
	|| ydk::is_set(bvi_no_port_up.yfilter)
	|| ydk::is_set(control_word_mismatched.yfilter)
	|| ydk::is_set(encapsulation_mismatched.yfilter)
	|| ydk::is_set(encapsulation_error.yfilter)
	|| ydk::is_set(interworking.yfilter)
	|| ydk::is_set(out_of_memory_state.yfilter)
	|| ydk::is_set(msti_mismatch_down.yfilter)
	|| ydk::is_set(mac_limit_oper_down.yfilter)
	|| ydk::is_set(redundancy_group_id.yfilter)
	|| ydk::is_set(redundancy_group_state.yfilter)
	|| ydk::is_set(redundancy_object_id.yfilter)
	|| ydk::is_set(is_ac_partially_programmed.yfilter)
	|| ydk::is_set(evpn_internal_label.yfilter)
	|| (interface !=  nullptr && interface->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (l2vpn_protection !=  nullptr && l2vpn_protection->has_operation());
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/backup/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attachment-circuit";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (msti.is_set || is_set(msti.yfilter)) leaf_name_data.push_back(msti.get_name_leafdata());
    if (internal_ms_ti.is_set || is_set(internal_ms_ti.yfilter)) leaf_name_data.push_back(internal_ms_ti.get_name_leafdata());
    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.yfilter)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());
    if (ms_ti_mismatch.is_set || is_set(ms_ti_mismatch.yfilter)) leaf_name_data.push_back(ms_ti_mismatch.get_name_leafdata());
    if (mtu_mismatched.is_set || is_set(mtu_mismatched.yfilter)) leaf_name_data.push_back(mtu_mismatched.get_name_leafdata());
    if (tdm_media_mismatched.is_set || is_set(tdm_media_mismatched.yfilter)) leaf_name_data.push_back(tdm_media_mismatched.get_name_leafdata());
    if (bvi_mac_conflict.is_set || is_set(bvi_mac_conflict.yfilter)) leaf_name_data.push_back(bvi_mac_conflict.get_name_leafdata());
    if (bvi_no_port_up.is_set || is_set(bvi_no_port_up.yfilter)) leaf_name_data.push_back(bvi_no_port_up.get_name_leafdata());
    if (control_word_mismatched.is_set || is_set(control_word_mismatched.yfilter)) leaf_name_data.push_back(control_word_mismatched.get_name_leafdata());
    if (encapsulation_mismatched.is_set || is_set(encapsulation_mismatched.yfilter)) leaf_name_data.push_back(encapsulation_mismatched.get_name_leafdata());
    if (encapsulation_error.is_set || is_set(encapsulation_error.yfilter)) leaf_name_data.push_back(encapsulation_error.get_name_leafdata());
    if (interworking.is_set || is_set(interworking.yfilter)) leaf_name_data.push_back(interworking.get_name_leafdata());
    if (out_of_memory_state.is_set || is_set(out_of_memory_state.yfilter)) leaf_name_data.push_back(out_of_memory_state.get_name_leafdata());
    if (msti_mismatch_down.is_set || is_set(msti_mismatch_down.yfilter)) leaf_name_data.push_back(msti_mismatch_down.get_name_leafdata());
    if (mac_limit_oper_down.is_set || is_set(mac_limit_oper_down.yfilter)) leaf_name_data.push_back(mac_limit_oper_down.get_name_leafdata());
    if (redundancy_group_id.is_set || is_set(redundancy_group_id.yfilter)) leaf_name_data.push_back(redundancy_group_id.get_name_leafdata());
    if (redundancy_group_state.is_set || is_set(redundancy_group_state.yfilter)) leaf_name_data.push_back(redundancy_group_state.get_name_leafdata());
    if (redundancy_object_id.is_set || is_set(redundancy_object_id.yfilter)) leaf_name_data.push_back(redundancy_object_id.get_name_leafdata());
    if (is_ac_partially_programmed.is_set || is_set(is_ac_partially_programmed.yfilter)) leaf_name_data.push_back(is_ac_partially_programmed.get_name_leafdata());
    if (evpn_internal_label.is_set || is_set(evpn_internal_label.yfilter)) leaf_name_data.push_back(evpn_internal_label.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        if(interface == nullptr)
        {
            interface = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface>();
        }
        return interface;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "l2vpn-protection")
    {
        if(l2vpn_protection == nullptr)
        {
            l2vpn_protection = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::L2vpnProtection>();
        }
        return l2vpn_protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(interface != nullptr)
    {
        _children["interface"] = interface;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    if(l2vpn_protection != nullptr)
    {
        _children["l2vpn-protection"] = l2vpn_protection;
    }

    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti")
    {
        msti = value;
        msti.value_namespace = name_space;
        msti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti = value;
        internal_ms_ti.value_namespace = name_space;
        internal_ms_ti.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
        xconnect_id.value_namespace = name_space;
        xconnect_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch = value;
        ms_ti_mismatch.value_namespace = name_space;
        ms_ti_mismatch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched = value;
        mtu_mismatched.value_namespace = name_space;
        mtu_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched = value;
        tdm_media_mismatched.value_namespace = name_space;
        tdm_media_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict = value;
        bvi_mac_conflict.value_namespace = name_space;
        bvi_mac_conflict.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up = value;
        bvi_no_port_up.value_namespace = name_space;
        bvi_no_port_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched = value;
        control_word_mismatched.value_namespace = name_space;
        control_word_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched = value;
        encapsulation_mismatched.value_namespace = name_space;
        encapsulation_mismatched.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error = value;
        encapsulation_error.value_namespace = name_space;
        encapsulation_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interworking")
    {
        interworking = value;
        interworking.value_namespace = name_space;
        interworking.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state = value;
        out_of_memory_state.value_namespace = name_space;
        out_of_memory_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down = value;
        msti_mismatch_down.value_namespace = name_space;
        msti_mismatch_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down = value;
        mac_limit_oper_down.value_namespace = name_space;
        mac_limit_oper_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id = value;
        redundancy_group_id.value_namespace = name_space;
        redundancy_group_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state = value;
        redundancy_group_state.value_namespace = name_space;
        redundancy_group_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id = value;
        redundancy_object_id.value_namespace = name_space;
        redundancy_object_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed = value;
        is_ac_partially_programmed.value_namespace = name_space;
        is_ac_partially_programmed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label = value;
        evpn_internal_label.value_namespace = name_space;
        evpn_internal_label.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "msti")
    {
        msti.yfilter = yfilter;
    }
    if(value_path == "internal-ms-ti")
    {
        internal_ms_ti.yfilter = yfilter;
    }
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id.yfilter = yfilter;
    }
    if(value_path == "ms-ti-mismatch")
    {
        ms_ti_mismatch.yfilter = yfilter;
    }
    if(value_path == "mtu-mismatched")
    {
        mtu_mismatched.yfilter = yfilter;
    }
    if(value_path == "tdm-media-mismatched")
    {
        tdm_media_mismatched.yfilter = yfilter;
    }
    if(value_path == "bvi-mac-conflict")
    {
        bvi_mac_conflict.yfilter = yfilter;
    }
    if(value_path == "bvi-no-port-up")
    {
        bvi_no_port_up.yfilter = yfilter;
    }
    if(value_path == "control-word-mismatched")
    {
        control_word_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-mismatched")
    {
        encapsulation_mismatched.yfilter = yfilter;
    }
    if(value_path == "encapsulation-error")
    {
        encapsulation_error.yfilter = yfilter;
    }
    if(value_path == "interworking")
    {
        interworking.yfilter = yfilter;
    }
    if(value_path == "out-of-memory-state")
    {
        out_of_memory_state.yfilter = yfilter;
    }
    if(value_path == "msti-mismatch-down")
    {
        msti_mismatch_down.yfilter = yfilter;
    }
    if(value_path == "mac-limit-oper-down")
    {
        mac_limit_oper_down.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-id")
    {
        redundancy_group_id.yfilter = yfilter;
    }
    if(value_path == "redundancy-group-state")
    {
        redundancy_group_state.yfilter = yfilter;
    }
    if(value_path == "redundancy-object-id")
    {
        redundancy_object_id.yfilter = yfilter;
    }
    if(value_path == "is-ac-partially-programmed")
    {
        is_ac_partially_programmed.yfilter = yfilter;
    }
    if(value_path == "evpn-internal-label")
    {
        evpn_internal_label.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface" || name == "statistics" || name == "l2vpn-protection" || name == "state" || name == "msti" || name == "internal-ms-ti" || name == "node-id" || name == "xconnect-id" || name == "ms-ti-mismatch" || name == "mtu-mismatched" || name == "tdm-media-mismatched" || name == "bvi-mac-conflict" || name == "bvi-no-port-up" || name == "control-word-mismatched" || name == "encapsulation-mismatched" || name == "encapsulation-error" || name == "interworking" || name == "out-of-memory-state" || name == "msti-mismatch-down" || name == "mac-limit-oper-down" || name == "redundancy-group-id" || name == "redundancy-group-state" || name == "redundancy-object-id" || name == "is-ac-partially-programmed" || name == "evpn-internal-label")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Interface()
    :
    name{YType::str, "name"},
    mtu{YType::uint32, "mtu"},
    payload_bytes{YType::uint16, "payload-bytes"}
        ,
    parameters(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters>())
{
    parameters->parent = this;

    yang_name = "interface"; yang_parent_name = "attachment-circuit"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::~Interface()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::has_data() const
{
    if (is_presence_container) return true;
    return name.is_set
	|| mtu.is_set
	|| payload_bytes.is_set
	|| (parameters !=  nullptr && parameters->has_data());
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(name.yfilter)
	|| ydk::is_set(mtu.yfilter)
	|| ydk::is_set(payload_bytes.yfilter)
	|| (parameters !=  nullptr && parameters->has_operation());
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/backup/attachment-circuit/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.yfilter)) leaf_name_data.push_back(name.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.yfilter)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (payload_bytes.is_set || is_set(payload_bytes.yfilter)) leaf_name_data.push_back(payload_bytes.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "parameters")
    {
        if(parameters == nullptr)
        {
            parameters = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters>();
        }
        return parameters;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(parameters != nullptr)
    {
        _children["parameters"] = parameters;
    }

    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "name")
    {
        name = value;
        name.value_namespace = name_space;
        name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mtu")
    {
        mtu = value;
        mtu.value_namespace = name_space;
        mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes = value;
        payload_bytes.value_namespace = name_space;
        payload_bytes.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "name")
    {
        name.yfilter = yfilter;
    }
    if(value_path == "mtu")
    {
        mtu.yfilter = yfilter;
    }
    if(value_path == "payload-bytes")
    {
        payload_bytes.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "parameters" || name == "name" || name == "mtu" || name == "payload-bytes")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Parameters()
    :
    type{YType::enumeration, "type"}
        ,
    ethernet(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>())
    , vlan(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan>())
    , tdm(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm>())
    , atm(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Atm>())
    , fr(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Fr>())
    , pseudowire_ether(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>())
    , pseudowire_iw(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>())
{
    ethernet->parent = this;
    vlan->parent = this;
    tdm->parent = this;
    atm->parent = this;
    fr->parent = this;
    pseudowire_ether->parent = this;
    pseudowire_iw->parent = this;

    yang_name = "parameters"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::~Parameters()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::has_data() const
{
    if (is_presence_container) return true;
    return type.is_set
	|| (ethernet !=  nullptr && ethernet->has_data())
	|| (vlan !=  nullptr && vlan->has_data())
	|| (tdm !=  nullptr && tdm->has_data())
	|| (atm !=  nullptr && atm->has_data())
	|| (fr !=  nullptr && fr->has_data())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_data())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_data());
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(type.yfilter)
	|| (ethernet !=  nullptr && ethernet->has_operation())
	|| (vlan !=  nullptr && vlan->has_operation())
	|| (tdm !=  nullptr && tdm->has_operation())
	|| (atm !=  nullptr && atm->has_operation())
	|| (fr !=  nullptr && fr->has_operation())
	|| (pseudowire_ether !=  nullptr && pseudowire_ether->has_operation())
	|| (pseudowire_iw !=  nullptr && pseudowire_iw->has_operation());
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/backup/attachment-circuit/interface/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "parameters";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.yfilter)) leaf_name_data.push_back(type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ethernet")
    {
        if(ethernet == nullptr)
        {
            ethernet = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet>();
        }
        return ethernet;
    }

    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan>();
        }
        return vlan;
    }

    if(child_yang_name == "tdm")
    {
        if(tdm == nullptr)
        {
            tdm = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm>();
        }
        return tdm;
    }

    if(child_yang_name == "atm")
    {
        if(atm == nullptr)
        {
            atm = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Atm>();
        }
        return atm;
    }

    if(child_yang_name == "fr")
    {
        if(fr == nullptr)
        {
            fr = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Fr>();
        }
        return fr;
    }

    if(child_yang_name == "pseudowire-ether")
    {
        if(pseudowire_ether == nullptr)
        {
            pseudowire_ether = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireEther>();
        }
        return pseudowire_ether;
    }

    if(child_yang_name == "pseudowire-iw")
    {
        if(pseudowire_iw == nullptr)
        {
            pseudowire_iw = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::PseudowireIw>();
        }
        return pseudowire_iw;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ethernet != nullptr)
    {
        _children["ethernet"] = ethernet;
    }

    if(vlan != nullptr)
    {
        _children["vlan"] = vlan;
    }

    if(tdm != nullptr)
    {
        _children["tdm"] = tdm;
    }

    if(atm != nullptr)
    {
        _children["atm"] = atm;
    }

    if(fr != nullptr)
    {
        _children["fr"] = fr;
    }

    if(pseudowire_ether != nullptr)
    {
        _children["pseudowire-ether"] = pseudowire_ether;
    }

    if(pseudowire_iw != nullptr)
    {
        _children["pseudowire-iw"] = pseudowire_iw;
    }

    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "type")
    {
        type = value;
        type.value_namespace = name_space;
        type.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "type")
    {
        type.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ethernet" || name == "vlan" || name == "tdm" || name == "atm" || name == "fr" || name == "pseudowire-ether" || name == "pseudowire-iw" || name == "type")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::Ethernet()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"}
{

    yang_name = "ethernet"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::~Ethernet()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_data() const
{
    if (is_presence_container) return true;
    return xconnect_tags.is_set;
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter);
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ethernet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Ethernet::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "xconnect-tags")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::Vlan()
    :
    xconnect_tags{YType::uint8, "xconnect-tags"},
    vlan_rewrite_tag{YType::uint16, "vlan-rewrite-tag"},
    simple_efp{YType::uint8, "simple-efp"},
    encapsulation_type{YType::uint8, "encapsulation-type"},
    outer_tag{YType::uint16, "outer-tag"}
        ,
    rewrite_tag(this, {})
    , vlan_range(this, {})
{

    yang_name = "vlan"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::~Vlan()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<rewrite_tag.len(); index++)
    {
        if(rewrite_tag[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_data())
            return true;
    }
    return xconnect_tags.is_set
	|| vlan_rewrite_tag.is_set
	|| simple_efp.is_set
	|| encapsulation_type.is_set
	|| outer_tag.is_set;
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_operation() const
{
    for (std::size_t index=0; index<rewrite_tag.len(); index++)
    {
        if(rewrite_tag[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<vlan_range.len(); index++)
    {
        if(vlan_range[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(xconnect_tags.yfilter)
	|| ydk::is_set(vlan_rewrite_tag.yfilter)
	|| ydk::is_set(simple_efp.yfilter)
	|| ydk::is_set(encapsulation_type.yfilter)
	|| ydk::is_set(outer_tag.yfilter);
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (xconnect_tags.is_set || is_set(xconnect_tags.yfilter)) leaf_name_data.push_back(xconnect_tags.get_name_leafdata());
    if (vlan_rewrite_tag.is_set || is_set(vlan_rewrite_tag.yfilter)) leaf_name_data.push_back(vlan_rewrite_tag.get_name_leafdata());
    if (simple_efp.is_set || is_set(simple_efp.yfilter)) leaf_name_data.push_back(simple_efp.get_name_leafdata());
    if (encapsulation_type.is_set || is_set(encapsulation_type.yfilter)) leaf_name_data.push_back(encapsulation_type.get_name_leafdata());
    if (outer_tag.is_set || is_set(outer_tag.yfilter)) leaf_name_data.push_back(outer_tag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "rewrite-tag")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag>();
        ent_->parent = this;
        rewrite_tag.append(ent_);
        return ent_;
    }

    if(child_yang_name == "vlan-range")
    {
        auto ent_ = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange>();
        ent_->parent = this;
        vlan_range.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : rewrite_tag.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : vlan_range.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags = value;
        xconnect_tags.value_namespace = name_space;
        xconnect_tags.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag = value;
        vlan_rewrite_tag.value_namespace = name_space;
        vlan_rewrite_tag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "simple-efp")
    {
        simple_efp = value;
        simple_efp.value_namespace = name_space;
        simple_efp.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type = value;
        encapsulation_type.value_namespace = name_space;
        encapsulation_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "outer-tag")
    {
        outer_tag = value;
        outer_tag.value_namespace = name_space;
        outer_tag.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "xconnect-tags")
    {
        xconnect_tags.yfilter = yfilter;
    }
    if(value_path == "vlan-rewrite-tag")
    {
        vlan_rewrite_tag.yfilter = yfilter;
    }
    if(value_path == "simple-efp")
    {
        simple_efp.yfilter = yfilter;
    }
    if(value_path == "encapsulation-type")
    {
        encapsulation_type.yfilter = yfilter;
    }
    if(value_path == "outer-tag")
    {
        outer_tag.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "rewrite-tag" || name == "vlan-range" || name == "xconnect-tags" || name == "vlan-rewrite-tag" || name == "simple-efp" || name == "encapsulation-type" || name == "outer-tag")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::RewriteTag()
    :
    entry{YType::uint16, "entry"}
{

    yang_name = "rewrite-tag"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::~RewriteTag()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_data() const
{
    if (is_presence_container) return true;
    return entry.is_set;
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(entry.yfilter);
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/backup/attachment-circuit/interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "rewrite-tag";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (entry.is_set || is_set(entry.yfilter)) leaf_name_data.push_back(entry.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "entry")
    {
        entry = value;
        entry.value_namespace = name_space;
        entry.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "entry")
    {
        entry.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::RewriteTag::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "entry")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::VlanRange()
    :
    lower{YType::uint16, "lower"},
    upper{YType::uint16, "upper"}
{

    yang_name = "vlan-range"; yang_parent_name = "vlan"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::~VlanRange()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_data() const
{
    if (is_presence_container) return true;
    return lower.is_set
	|| upper.is_set;
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(lower.yfilter)
	|| ydk::is_set(upper.yfilter);
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/backup/attachment-circuit/interface/parameters/vlan/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan-range";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lower.is_set || is_set(lower.yfilter)) leaf_name_data.push_back(lower.get_name_leafdata());
    if (upper.is_set || is_set(upper.yfilter)) leaf_name_data.push_back(upper.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "lower")
    {
        lower = value;
        lower.value_namespace = name_space;
        lower.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upper")
    {
        upper = value;
        upper.value_namespace = name_space;
        upper.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "lower")
    {
        lower.yfilter = yfilter;
    }
    if(value_path == "upper")
    {
        upper.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Vlan::VlanRange::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "lower" || name == "upper")
        return true;
    return false;
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::Tdm()
    :
    timeslot_group{YType::str, "timeslot-group"},
    timeslot_rate{YType::uint8, "timeslot-rate"},
    tdm_mode{YType::enumeration, "tdm-mode"}
        ,
    tdm_options(std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>())
{
    tdm_options->parent = this;

    yang_name = "tdm"; yang_parent_name = "parameters"; is_top_level_class = false; has_list_ancestor = false; 
}

L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::~Tdm()
{
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_data() const
{
    if (is_presence_container) return true;
    return timeslot_group.is_set
	|| timeslot_rate.is_set
	|| tdm_mode.is_set
	|| (tdm_options !=  nullptr && tdm_options->has_data());
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(timeslot_group.yfilter)
	|| ydk::is_set(timeslot_rate.yfilter)
	|| ydk::is_set(tdm_mode.yfilter)
	|| (tdm_options !=  nullptr && tdm_options->has_operation());
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-l2vpn-oper:l2vpnv2/standby/xconnect-mp2mp-ce2ces/xconnect-mp2mp-ce2ce/backup/attachment-circuit/interface/parameters/" << get_segment_path();
    return path_buffer.str();
}

std::string L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tdm";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeslot_group.is_set || is_set(timeslot_group.yfilter)) leaf_name_data.push_back(timeslot_group.get_name_leafdata());
    if (timeslot_rate.is_set || is_set(timeslot_rate.yfilter)) leaf_name_data.push_back(timeslot_rate.get_name_leafdata());
    if (tdm_mode.is_set || is_set(tdm_mode.yfilter)) leaf_name_data.push_back(tdm_mode.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tdm-options")
    {
        if(tdm_options == nullptr)
        {
            tdm_options = std::make_shared<L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::TdmOptions>();
        }
        return tdm_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tdm_options != nullptr)
    {
        _children["tdm-options"] = tdm_options;
    }

    return _children;
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group = value;
        timeslot_group.value_namespace = name_space;
        timeslot_group.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate = value;
        timeslot_rate.value_namespace = name_space;
        timeslot_rate.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode = value;
        tdm_mode.value_namespace = name_space;
        tdm_mode.value_namespace_prefix = name_space_prefix;
    }
}

void L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "timeslot-group")
    {
        timeslot_group.yfilter = yfilter;
    }
    if(value_path == "timeslot-rate")
    {
        timeslot_rate.yfilter = yfilter;
    }
    if(value_path == "tdm-mode")
    {
        tdm_mode.yfilter = yfilter;
    }
}

bool L2vpnv2::Standby::XconnectMp2mpCe2ces::XconnectMp2mpCe2ce::Backup::AttachmentCircuit::Interface::Parameters::Tdm::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tdm-options" || name == "timeslot-group" || name == "timeslot-rate" || name == "tdm-mode")
        return true;
    return false;
}


}
}

