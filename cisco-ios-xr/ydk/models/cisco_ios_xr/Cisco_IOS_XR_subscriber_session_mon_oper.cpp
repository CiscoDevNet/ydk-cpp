
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_session_mon_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_subscriber_session_mon_oper {

SessionMon::SessionMon()
    :
    nodes(std::make_shared<SessionMon::Nodes>())
{
    nodes->parent = this;

    yang_name = "session-mon"; yang_parent_name = "Cisco-IOS-XR-subscriber-session-mon-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

SessionMon::~SessionMon()
{
}

bool SessionMon::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool SessionMon::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SessionMon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-session-mon-oper:session-mon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionMon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionMon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<SessionMon::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionMon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void SessionMon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionMon::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> SessionMon::clone_ptr() const
{
    return std::make_shared<SessionMon>();
}

std::string SessionMon::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string SessionMon::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function SessionMon::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> SessionMon::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool SessionMon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

SessionMon::Nodes::Nodes()
    :
    node(this, {"node_id"})
{

    yang_name = "nodes"; yang_parent_name = "session-mon"; is_top_level_class = false; has_list_ancestor = false; 
}

SessionMon::Nodes::~Nodes()
{
}

bool SessionMon::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SessionMon::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionMon::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-session-mon-oper:session-mon/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionMon::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionMon::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionMon::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<SessionMon::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionMon::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : node.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SessionMon::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionMon::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionMon::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

SessionMon::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
        ,
    session_mon_statistics(std::make_shared<SessionMon::Nodes::Node::SessionMonStatistics>())
    , interface_all_statistics(std::make_shared<SessionMon::Nodes::Node::InterfaceAllStatistics>())
    , license_statistics(std::make_shared<SessionMon::Nodes::Node::LicenseStatistics>())
{
    session_mon_statistics->parent = this;
    interface_all_statistics->parent = this;
    license_statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

SessionMon::Nodes::Node::~Node()
{
}

bool SessionMon::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_id.is_set
	|| (session_mon_statistics !=  nullptr && session_mon_statistics->has_data())
	|| (interface_all_statistics !=  nullptr && interface_all_statistics->has_data())
	|| (license_statistics !=  nullptr && license_statistics->has_data());
}

bool SessionMon::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_id.yfilter)
	|| (session_mon_statistics !=  nullptr && session_mon_statistics->has_operation())
	|| (interface_all_statistics !=  nullptr && interface_all_statistics->has_operation())
	|| (license_statistics !=  nullptr && license_statistics->has_operation());
}

std::string SessionMon::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-session-mon-oper:session-mon/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string SessionMon::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_id, "node-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionMon::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.yfilter)) leaf_name_data.push_back(node_id.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionMon::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session-mon-statistics")
    {
        if(session_mon_statistics == nullptr)
        {
            session_mon_statistics = std::make_shared<SessionMon::Nodes::Node::SessionMonStatistics>();
        }
        return session_mon_statistics;
    }

    if(child_yang_name == "interface-all-statistics")
    {
        if(interface_all_statistics == nullptr)
        {
            interface_all_statistics = std::make_shared<SessionMon::Nodes::Node::InterfaceAllStatistics>();
        }
        return interface_all_statistics;
    }

    if(child_yang_name == "license-statistics")
    {
        if(license_statistics == nullptr)
        {
            license_statistics = std::make_shared<SessionMon::Nodes::Node::LicenseStatistics>();
        }
        return license_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionMon::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session_mon_statistics != nullptr)
    {
        _children["session-mon-statistics"] = session_mon_statistics;
    }

    if(interface_all_statistics != nullptr)
    {
        _children["interface-all-statistics"] = interface_all_statistics;
    }

    if(license_statistics != nullptr)
    {
        _children["license-statistics"] = license_statistics;
    }

    return _children;
}

void SessionMon::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-id")
    {
        node_id = value;
        node_id.value_namespace = name_space;
        node_id.value_namespace_prefix = name_space_prefix;
    }
}

void SessionMon::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-id")
    {
        node_id.yfilter = yfilter;
    }
}

bool SessionMon::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-mon-statistics" || name == "interface-all-statistics" || name == "license-statistics" || name == "node-id")
        return true;
    return false;
}

SessionMon::Nodes::Node::SessionMonStatistics::SessionMonStatistics()
    :
    total{YType::uint32, "total"},
    pppoe{YType::uint32, "pppoe"},
    pppoe_ds{YType::uint32, "pppoe-ds"},
    dhcpv4{YType::uint32, "dhcpv4"},
    dhcpv6{YType::uint32, "dhcpv6"},
    dhcp_ds{YType::uint32, "dhcp-ds"},
    ippkt{YType::uint32, "ippkt"},
    active_sessions{YType::uint32, "active-sessions"},
    standby_sessions{YType::uint32, "standby-sessions"},
    peak_active_sessions{YType::uint32, "peak-active-sessions"},
    peak_standby_sessions{YType::uint32, "peak-standby-sessions"},
    peak_start_time{YType::uint32, "peak-start-time"},
    timeout_value{YType::uint32, "timeout-value"}
{

    yang_name = "session-mon-statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionMon::Nodes::Node::SessionMonStatistics::~SessionMonStatistics()
{
}

bool SessionMon::Nodes::Node::SessionMonStatistics::has_data() const
{
    if (is_presence_container) return true;
    return total.is_set
	|| pppoe.is_set
	|| pppoe_ds.is_set
	|| dhcpv4.is_set
	|| dhcpv6.is_set
	|| dhcp_ds.is_set
	|| ippkt.is_set
	|| active_sessions.is_set
	|| standby_sessions.is_set
	|| peak_active_sessions.is_set
	|| peak_standby_sessions.is_set
	|| peak_start_time.is_set
	|| timeout_value.is_set;
}

bool SessionMon::Nodes::Node::SessionMonStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(pppoe.yfilter)
	|| ydk::is_set(pppoe_ds.yfilter)
	|| ydk::is_set(dhcpv4.yfilter)
	|| ydk::is_set(dhcpv6.yfilter)
	|| ydk::is_set(dhcp_ds.yfilter)
	|| ydk::is_set(ippkt.yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(standby_sessions.yfilter)
	|| ydk::is_set(peak_active_sessions.yfilter)
	|| ydk::is_set(peak_standby_sessions.yfilter)
	|| ydk::is_set(peak_start_time.yfilter)
	|| ydk::is_set(timeout_value.yfilter);
}

std::string SessionMon::Nodes::Node::SessionMonStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-mon-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionMon::Nodes::Node::SessionMonStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.yfilter)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pppoe_ds.is_set || is_set(pppoe_ds.yfilter)) leaf_name_data.push_back(pppoe_ds.get_name_leafdata());
    if (dhcpv4.is_set || is_set(dhcpv4.yfilter)) leaf_name_data.push_back(dhcpv4.get_name_leafdata());
    if (dhcpv6.is_set || is_set(dhcpv6.yfilter)) leaf_name_data.push_back(dhcpv6.get_name_leafdata());
    if (dhcp_ds.is_set || is_set(dhcp_ds.yfilter)) leaf_name_data.push_back(dhcp_ds.get_name_leafdata());
    if (ippkt.is_set || is_set(ippkt.yfilter)) leaf_name_data.push_back(ippkt.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (standby_sessions.is_set || is_set(standby_sessions.yfilter)) leaf_name_data.push_back(standby_sessions.get_name_leafdata());
    if (peak_active_sessions.is_set || is_set(peak_active_sessions.yfilter)) leaf_name_data.push_back(peak_active_sessions.get_name_leafdata());
    if (peak_standby_sessions.is_set || is_set(peak_standby_sessions.yfilter)) leaf_name_data.push_back(peak_standby_sessions.get_name_leafdata());
    if (peak_start_time.is_set || is_set(peak_start_time.yfilter)) leaf_name_data.push_back(peak_start_time.get_name_leafdata());
    if (timeout_value.is_set || is_set(timeout_value.yfilter)) leaf_name_data.push_back(timeout_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionMon::Nodes::Node::SessionMonStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionMon::Nodes::Node::SessionMonStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionMon::Nodes::Node::SessionMonStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
        pppoe.value_namespace = name_space;
        pppoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds = value;
        pppoe_ds.value_namespace = name_space;
        pppoe_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4 = value;
        dhcpv4.value_namespace = name_space;
        dhcpv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6 = value;
        dhcpv6.value_namespace = name_space;
        dhcpv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds = value;
        dhcp_ds.value_namespace = name_space;
        dhcp_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ippkt")
    {
        ippkt = value;
        ippkt.value_namespace = name_space;
        ippkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions = value;
        standby_sessions.value_namespace = name_space;
        standby_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions = value;
        peak_active_sessions.value_namespace = name_space;
        peak_active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions = value;
        peak_standby_sessions.value_namespace = name_space;
        peak_standby_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-start-time")
    {
        peak_start_time = value;
        peak_start_time.value_namespace = name_space;
        peak_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-value")
    {
        timeout_value = value;
        timeout_value.value_namespace = name_space;
        timeout_value.value_namespace_prefix = name_space_prefix;
    }
}

void SessionMon::Nodes::Node::SessionMonStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "pppoe")
    {
        pppoe.yfilter = yfilter;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds.yfilter = yfilter;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4.yfilter = yfilter;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6.yfilter = yfilter;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds.yfilter = yfilter;
    }
    if(value_path == "ippkt")
    {
        ippkt.yfilter = yfilter;
    }
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-start-time")
    {
        peak_start_time.yfilter = yfilter;
    }
    if(value_path == "timeout-value")
    {
        timeout_value.yfilter = yfilter;
    }
}

bool SessionMon::Nodes::Node::SessionMonStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "pppoe" || name == "pppoe-ds" || name == "dhcpv4" || name == "dhcpv6" || name == "dhcp-ds" || name == "ippkt" || name == "active-sessions" || name == "standby-sessions" || name == "peak-active-sessions" || name == "peak-standby-sessions" || name == "peak-start-time" || name == "timeout-value")
        return true;
    return false;
}

SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistics()
    :
    interface_all_statistic(this, {"interface_name"})
{

    yang_name = "interface-all-statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionMon::Nodes::Node::InterfaceAllStatistics::~InterfaceAllStatistics()
{
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_all_statistic.len(); index++)
    {
        if(interface_all_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_all_statistic.len(); index++)
    {
        if(interface_all_statistic[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string SessionMon::Nodes::Node::InterfaceAllStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-all-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionMon::Nodes::Node::InterfaceAllStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionMon::Nodes::Node::InterfaceAllStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-all-statistic")
    {
        auto ent_ = std::make_shared<SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic>();
        ent_->parent = this;
        interface_all_statistic.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionMon::Nodes::Node::InterfaceAllStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_all_statistic.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void SessionMon::Nodes::Node::InterfaceAllStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void SessionMon::Nodes::Node::InterfaceAllStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-all-statistic")
        return true;
    return false;
}

SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::InterfaceAllStatistic()
    :
    interface_name{YType::str, "interface-name"},
    total{YType::uint32, "total"},
    pppoe{YType::uint32, "pppoe"},
    pppoe_ds{YType::uint32, "pppoe-ds"},
    dhcpv4{YType::uint32, "dhcpv4"},
    dhcpv6{YType::uint32, "dhcpv6"},
    dhcp_ds{YType::uint32, "dhcp-ds"},
    ippkt{YType::uint32, "ippkt"},
    active_sessions{YType::uint32, "active-sessions"},
    standby_sessions{YType::uint32, "standby-sessions"},
    peak_active_sessions{YType::uint32, "peak-active-sessions"},
    peak_standby_sessions{YType::uint32, "peak-standby-sessions"},
    peak_start_time{YType::uint32, "peak-start-time"},
    timeout_value{YType::uint32, "timeout-value"}
{

    yang_name = "interface-all-statistic"; yang_parent_name = "interface-all-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::~InterfaceAllStatistic()
{
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| total.is_set
	|| pppoe.is_set
	|| pppoe_ds.is_set
	|| dhcpv4.is_set
	|| dhcpv6.is_set
	|| dhcp_ds.is_set
	|| ippkt.is_set
	|| active_sessions.is_set
	|| standby_sessions.is_set
	|| peak_active_sessions.is_set
	|| peak_standby_sessions.is_set
	|| peak_start_time.is_set
	|| timeout_value.is_set;
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(pppoe.yfilter)
	|| ydk::is_set(pppoe_ds.yfilter)
	|| ydk::is_set(dhcpv4.yfilter)
	|| ydk::is_set(dhcpv6.yfilter)
	|| ydk::is_set(dhcp_ds.yfilter)
	|| ydk::is_set(ippkt.yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(standby_sessions.yfilter)
	|| ydk::is_set(peak_active_sessions.yfilter)
	|| ydk::is_set(peak_standby_sessions.yfilter)
	|| ydk::is_set(peak_start_time.yfilter)
	|| ydk::is_set(timeout_value.yfilter);
}

std::string SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-all-statistic";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.yfilter)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pppoe_ds.is_set || is_set(pppoe_ds.yfilter)) leaf_name_data.push_back(pppoe_ds.get_name_leafdata());
    if (dhcpv4.is_set || is_set(dhcpv4.yfilter)) leaf_name_data.push_back(dhcpv4.get_name_leafdata());
    if (dhcpv6.is_set || is_set(dhcpv6.yfilter)) leaf_name_data.push_back(dhcpv6.get_name_leafdata());
    if (dhcp_ds.is_set || is_set(dhcp_ds.yfilter)) leaf_name_data.push_back(dhcp_ds.get_name_leafdata());
    if (ippkt.is_set || is_set(ippkt.yfilter)) leaf_name_data.push_back(ippkt.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (standby_sessions.is_set || is_set(standby_sessions.yfilter)) leaf_name_data.push_back(standby_sessions.get_name_leafdata());
    if (peak_active_sessions.is_set || is_set(peak_active_sessions.yfilter)) leaf_name_data.push_back(peak_active_sessions.get_name_leafdata());
    if (peak_standby_sessions.is_set || is_set(peak_standby_sessions.yfilter)) leaf_name_data.push_back(peak_standby_sessions.get_name_leafdata());
    if (peak_start_time.is_set || is_set(peak_start_time.yfilter)) leaf_name_data.push_back(peak_start_time.get_name_leafdata());
    if (timeout_value.is_set || is_set(timeout_value.yfilter)) leaf_name_data.push_back(timeout_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
        pppoe.value_namespace = name_space;
        pppoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds = value;
        pppoe_ds.value_namespace = name_space;
        pppoe_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4 = value;
        dhcpv4.value_namespace = name_space;
        dhcpv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6 = value;
        dhcpv6.value_namespace = name_space;
        dhcpv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds = value;
        dhcp_ds.value_namespace = name_space;
        dhcp_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ippkt")
    {
        ippkt = value;
        ippkt.value_namespace = name_space;
        ippkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions = value;
        standby_sessions.value_namespace = name_space;
        standby_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions = value;
        peak_active_sessions.value_namespace = name_space;
        peak_active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions = value;
        peak_standby_sessions.value_namespace = name_space;
        peak_standby_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-start-time")
    {
        peak_start_time = value;
        peak_start_time.value_namespace = name_space;
        peak_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-value")
    {
        timeout_value = value;
        timeout_value.value_namespace = name_space;
        timeout_value.value_namespace_prefix = name_space_prefix;
    }
}

void SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "pppoe")
    {
        pppoe.yfilter = yfilter;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds.yfilter = yfilter;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4.yfilter = yfilter;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6.yfilter = yfilter;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds.yfilter = yfilter;
    }
    if(value_path == "ippkt")
    {
        ippkt.yfilter = yfilter;
    }
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-start-time")
    {
        peak_start_time.yfilter = yfilter;
    }
    if(value_path == "timeout-value")
    {
        timeout_value.yfilter = yfilter;
    }
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "total" || name == "pppoe" || name == "pppoe-ds" || name == "dhcpv4" || name == "dhcpv6" || name == "dhcp-ds" || name == "ippkt" || name == "active-sessions" || name == "standby-sessions" || name == "peak-active-sessions" || name == "peak-standby-sessions" || name == "peak-start-time" || name == "timeout-value")
        return true;
    return false;
}

SessionMon::Nodes::Node::LicenseStatistics::LicenseStatistics()
    :
    total{YType::uint32, "total"},
    pppoe{YType::uint32, "pppoe"},
    pppoe_ds{YType::uint32, "pppoe-ds"},
    dhcpv4{YType::uint32, "dhcpv4"},
    dhcpv6{YType::uint32, "dhcpv6"},
    dhcp_ds{YType::uint32, "dhcp-ds"},
    ippkt{YType::uint32, "ippkt"},
    active_sessions{YType::uint32, "active-sessions"},
    standby_sessions{YType::uint32, "standby-sessions"},
    peak_active_sessions{YType::uint32, "peak-active-sessions"},
    peak_standby_sessions{YType::uint32, "peak-standby-sessions"},
    peak_start_time{YType::uint32, "peak-start-time"},
    timeout_value{YType::uint32, "timeout-value"}
{

    yang_name = "license-statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

SessionMon::Nodes::Node::LicenseStatistics::~LicenseStatistics()
{
}

bool SessionMon::Nodes::Node::LicenseStatistics::has_data() const
{
    if (is_presence_container) return true;
    return total.is_set
	|| pppoe.is_set
	|| pppoe_ds.is_set
	|| dhcpv4.is_set
	|| dhcpv6.is_set
	|| dhcp_ds.is_set
	|| ippkt.is_set
	|| active_sessions.is_set
	|| standby_sessions.is_set
	|| peak_active_sessions.is_set
	|| peak_standby_sessions.is_set
	|| peak_start_time.is_set
	|| timeout_value.is_set;
}

bool SessionMon::Nodes::Node::LicenseStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(total.yfilter)
	|| ydk::is_set(pppoe.yfilter)
	|| ydk::is_set(pppoe_ds.yfilter)
	|| ydk::is_set(dhcpv4.yfilter)
	|| ydk::is_set(dhcpv6.yfilter)
	|| ydk::is_set(dhcp_ds.yfilter)
	|| ydk::is_set(ippkt.yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(standby_sessions.yfilter)
	|| ydk::is_set(peak_active_sessions.yfilter)
	|| ydk::is_set(peak_standby_sessions.yfilter)
	|| ydk::is_set(peak_start_time.yfilter)
	|| ydk::is_set(timeout_value.yfilter);
}

std::string SessionMon::Nodes::Node::LicenseStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > SessionMon::Nodes::Node::LicenseStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.yfilter)) leaf_name_data.push_back(total.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.yfilter)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pppoe_ds.is_set || is_set(pppoe_ds.yfilter)) leaf_name_data.push_back(pppoe_ds.get_name_leafdata());
    if (dhcpv4.is_set || is_set(dhcpv4.yfilter)) leaf_name_data.push_back(dhcpv4.get_name_leafdata());
    if (dhcpv6.is_set || is_set(dhcpv6.yfilter)) leaf_name_data.push_back(dhcpv6.get_name_leafdata());
    if (dhcp_ds.is_set || is_set(dhcp_ds.yfilter)) leaf_name_data.push_back(dhcp_ds.get_name_leafdata());
    if (ippkt.is_set || is_set(ippkt.yfilter)) leaf_name_data.push_back(ippkt.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (standby_sessions.is_set || is_set(standby_sessions.yfilter)) leaf_name_data.push_back(standby_sessions.get_name_leafdata());
    if (peak_active_sessions.is_set || is_set(peak_active_sessions.yfilter)) leaf_name_data.push_back(peak_active_sessions.get_name_leafdata());
    if (peak_standby_sessions.is_set || is_set(peak_standby_sessions.yfilter)) leaf_name_data.push_back(peak_standby_sessions.get_name_leafdata());
    if (peak_start_time.is_set || is_set(peak_start_time.yfilter)) leaf_name_data.push_back(peak_start_time.get_name_leafdata());
    if (timeout_value.is_set || is_set(timeout_value.yfilter)) leaf_name_data.push_back(timeout_value.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> SessionMon::Nodes::Node::LicenseStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> SessionMon::Nodes::Node::LicenseStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void SessionMon::Nodes::Node::LicenseStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "total")
    {
        total = value;
        total.value_namespace = name_space;
        total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
        pppoe.value_namespace = name_space;
        pppoe.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds = value;
        pppoe_ds.value_namespace = name_space;
        pppoe_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4 = value;
        dhcpv4.value_namespace = name_space;
        dhcpv4.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6 = value;
        dhcpv6.value_namespace = name_space;
        dhcpv6.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds = value;
        dhcp_ds.value_namespace = name_space;
        dhcp_ds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ippkt")
    {
        ippkt = value;
        ippkt.value_namespace = name_space;
        ippkt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions = value;
        standby_sessions.value_namespace = name_space;
        standby_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions = value;
        peak_active_sessions.value_namespace = name_space;
        peak_active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions = value;
        peak_standby_sessions.value_namespace = name_space;
        peak_standby_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "peak-start-time")
    {
        peak_start_time = value;
        peak_start_time.value_namespace = name_space;
        peak_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeout-value")
    {
        timeout_value = value;
        timeout_value.value_namespace = name_space;
        timeout_value.value_namespace_prefix = name_space_prefix;
    }
}

void SessionMon::Nodes::Node::LicenseStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "total")
    {
        total.yfilter = yfilter;
    }
    if(value_path == "pppoe")
    {
        pppoe.yfilter = yfilter;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds.yfilter = yfilter;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4.yfilter = yfilter;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6.yfilter = yfilter;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds.yfilter = yfilter;
    }
    if(value_path == "ippkt")
    {
        ippkt.yfilter = yfilter;
    }
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions.yfilter = yfilter;
    }
    if(value_path == "peak-start-time")
    {
        peak_start_time.yfilter = yfilter;
    }
    if(value_path == "timeout-value")
    {
        timeout_value.yfilter = yfilter;
    }
}

bool SessionMon::Nodes::Node::LicenseStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "total" || name == "pppoe" || name == "pppoe-ds" || name == "dhcpv4" || name == "dhcpv6" || name == "dhcp-ds" || name == "ippkt" || name == "active-sessions" || name == "standby-sessions" || name == "peak-active-sessions" || name == "peak-standby-sessions" || name == "peak-start-time" || name == "timeout-value")
        return true;
    return false;
}


}
}

