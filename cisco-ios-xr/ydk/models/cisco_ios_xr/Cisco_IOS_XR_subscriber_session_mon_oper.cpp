
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_subscriber_session_mon_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_subscriber_session_mon_oper {

SessionMon::SessionMon()
    :
    nodes(std::make_shared<SessionMon::Nodes>())
{
    nodes->parent = this;
    children["nodes"] = nodes;

    yang_name = "session-mon"; yang_parent_name = "Cisco-IOS-XR-subscriber-session-mon-oper";
}

SessionMon::~SessionMon()
{
}

bool SessionMon::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool SessionMon::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string SessionMon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-subscriber-session-mon-oper:session-mon";

    return path_buffer.str();

}

EntityPath SessionMon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor != nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor has to be nullptr for top-level node"});
    }

    path_buffer << get_segment_path();
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionMon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            children["nodes"] = nodes;
        }
        else
        {
            nodes = std::make_shared<SessionMon::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes;
        }
        return children.at("nodes");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionMon::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes;
        }
    }

    return children;
}

void SessionMon::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> SessionMon::clone_ptr() const
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

SessionMon::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "session-mon";
}

SessionMon::Nodes::~Nodes()
{
}

bool SessionMon::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool SessionMon::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionMon::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath SessionMon::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-session-mon-oper:session-mon/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionMon::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SessionMon::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionMon::Nodes::get_children()
{
    for (auto const & c : node)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SessionMon::Nodes::set_value(const std::string & value_path, std::string value)
{
}

SessionMon::Nodes::Node::Node()
    :
    node_id{YType::str, "node-id"}
    	,
    interface_all_statistics(std::make_shared<SessionMon::Nodes::Node::InterfaceAllStatistics>())
	,license_statistics(std::make_shared<SessionMon::Nodes::Node::LicenseStatistics>())
	,session_mon_statistics(std::make_shared<SessionMon::Nodes::Node::SessionMonStatistics>())
{
    interface_all_statistics->parent = this;
    children["interface-all-statistics"] = interface_all_statistics;

    license_statistics->parent = this;
    children["license-statistics"] = license_statistics;

    session_mon_statistics->parent = this;
    children["session-mon-statistics"] = session_mon_statistics;

    yang_name = "node"; yang_parent_name = "nodes";
}

SessionMon::Nodes::Node::~Node()
{
}

bool SessionMon::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| (interface_all_statistics !=  nullptr && interface_all_statistics->has_data())
	|| (license_statistics !=  nullptr && license_statistics->has_data())
	|| (session_mon_statistics !=  nullptr && session_mon_statistics->has_data());
}

bool SessionMon::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| (interface_all_statistics !=  nullptr && interface_all_statistics->has_operation())
	|| (license_statistics !=  nullptr && license_statistics->has_operation())
	|| (session_mon_statistics !=  nullptr && session_mon_statistics->has_operation());
}

std::string SessionMon::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id <<"']";

    return path_buffer.str();

}

EntityPath SessionMon::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-subscriber-session-mon-oper:session-mon/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionMon::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-all-statistics")
    {
        if(interface_all_statistics != nullptr)
        {
            children["interface-all-statistics"] = interface_all_statistics;
        }
        else
        {
            interface_all_statistics = std::make_shared<SessionMon::Nodes::Node::InterfaceAllStatistics>();
            interface_all_statistics->parent = this;
            children["interface-all-statistics"] = interface_all_statistics;
        }
        return children.at("interface-all-statistics");
    }

    if(child_yang_name == "license-statistics")
    {
        if(license_statistics != nullptr)
        {
            children["license-statistics"] = license_statistics;
        }
        else
        {
            license_statistics = std::make_shared<SessionMon::Nodes::Node::LicenseStatistics>();
            license_statistics->parent = this;
            children["license-statistics"] = license_statistics;
        }
        return children.at("license-statistics");
    }

    if(child_yang_name == "session-mon-statistics")
    {
        if(session_mon_statistics != nullptr)
        {
            children["session-mon-statistics"] = session_mon_statistics;
        }
        else
        {
            session_mon_statistics = std::make_shared<SessionMon::Nodes::Node::SessionMonStatistics>();
            session_mon_statistics->parent = this;
            children["session-mon-statistics"] = session_mon_statistics;
        }
        return children.at("session-mon-statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionMon::Nodes::Node::get_children()
{
    if(children.find("interface-all-statistics") == children.end())
    {
        if(interface_all_statistics != nullptr)
        {
            children["interface-all-statistics"] = interface_all_statistics;
        }
    }

    if(children.find("license-statistics") == children.end())
    {
        if(license_statistics != nullptr)
        {
            children["license-statistics"] = license_statistics;
        }
    }

    if(children.find("session-mon-statistics") == children.end())
    {
        if(session_mon_statistics != nullptr)
        {
            children["session-mon-statistics"] = session_mon_statistics;
        }
    }

    return children;
}

void SessionMon::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
}

SessionMon::Nodes::Node::SessionMonStatistics::SessionMonStatistics()
    :
    active_sessions{YType::uint32, "active-sessions"},
    dhcp_ds{YType::uint32, "dhcp-ds"},
    dhcpv4{YType::uint32, "dhcpv4"},
    dhcpv6{YType::uint32, "dhcpv6"},
    ippkt{YType::uint32, "ippkt"},
    peak_active_sessions{YType::uint32, "peak-active-sessions"},
    peak_standby_sessions{YType::uint32, "peak-standby-sessions"},
    pppoe{YType::uint32, "pppoe"},
    pppoe_ds{YType::uint32, "pppoe-ds"},
    standby_sessions{YType::uint32, "standby-sessions"},
    total{YType::uint32, "total"}
{
    yang_name = "session-mon-statistics"; yang_parent_name = "node";
}

SessionMon::Nodes::Node::SessionMonStatistics::~SessionMonStatistics()
{
}

bool SessionMon::Nodes::Node::SessionMonStatistics::has_data() const
{
    return active_sessions.is_set
	|| dhcp_ds.is_set
	|| dhcpv4.is_set
	|| dhcpv6.is_set
	|| ippkt.is_set
	|| peak_active_sessions.is_set
	|| peak_standby_sessions.is_set
	|| pppoe.is_set
	|| pppoe_ds.is_set
	|| standby_sessions.is_set
	|| total.is_set;
}

bool SessionMon::Nodes::Node::SessionMonStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(dhcp_ds.operation)
	|| is_set(dhcpv4.operation)
	|| is_set(dhcpv6.operation)
	|| is_set(ippkt.operation)
	|| is_set(peak_active_sessions.operation)
	|| is_set(peak_standby_sessions.operation)
	|| is_set(pppoe.operation)
	|| is_set(pppoe_ds.operation)
	|| is_set(standby_sessions.operation)
	|| is_set(total.operation);
}

std::string SessionMon::Nodes::Node::SessionMonStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-mon-statistics";

    return path_buffer.str();

}

EntityPath SessionMon::Nodes::Node::SessionMonStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionMonStatistics' in Cisco_IOS_XR_subscriber_session_mon_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (dhcp_ds.is_set || is_set(dhcp_ds.operation)) leaf_name_data.push_back(dhcp_ds.get_name_leafdata());
    if (dhcpv4.is_set || is_set(dhcpv4.operation)) leaf_name_data.push_back(dhcpv4.get_name_leafdata());
    if (dhcpv6.is_set || is_set(dhcpv6.operation)) leaf_name_data.push_back(dhcpv6.get_name_leafdata());
    if (ippkt.is_set || is_set(ippkt.operation)) leaf_name_data.push_back(ippkt.get_name_leafdata());
    if (peak_active_sessions.is_set || is_set(peak_active_sessions.operation)) leaf_name_data.push_back(peak_active_sessions.get_name_leafdata());
    if (peak_standby_sessions.is_set || is_set(peak_standby_sessions.operation)) leaf_name_data.push_back(peak_standby_sessions.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.operation)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pppoe_ds.is_set || is_set(pppoe_ds.operation)) leaf_name_data.push_back(pppoe_ds.get_name_leafdata());
    if (standby_sessions.is_set || is_set(standby_sessions.operation)) leaf_name_data.push_back(standby_sessions.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionMon::Nodes::Node::SessionMonStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SessionMon::Nodes::Node::SessionMonStatistics::get_children()
{
    return children;
}

void SessionMon::Nodes::Node::SessionMonStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds = value;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4 = value;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6 = value;
    }
    if(value_path == "ippkt")
    {
        ippkt = value;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions = value;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions = value;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds = value;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistics()
{
    yang_name = "interface-all-statistics"; yang_parent_name = "node";
}

SessionMon::Nodes::Node::InterfaceAllStatistics::~InterfaceAllStatistics()
{
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::has_data() const
{
    for (std::size_t index=0; index<interface_all_statistic.size(); index++)
    {
        if(interface_all_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::has_operation() const
{
    for (std::size_t index=0; index<interface_all_statistic.size(); index++)
    {
        if(interface_all_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string SessionMon::Nodes::Node::InterfaceAllStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-all-statistics";

    return path_buffer.str();

}

EntityPath SessionMon::Nodes::Node::InterfaceAllStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAllStatistics' in Cisco_IOS_XR_subscriber_session_mon_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionMon::Nodes::Node::InterfaceAllStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface-all-statistic")
    {
        for(auto const & c : interface_all_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic>();
        c->parent = this;
        interface_all_statistic.push_back(std::move(c));
        children[segment_path] = interface_all_statistic.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & SessionMon::Nodes::Node::InterfaceAllStatistics::get_children()
{
    for (auto const & c : interface_all_statistic)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void SessionMon::Nodes::Node::InterfaceAllStatistics::set_value(const std::string & value_path, std::string value)
{
}

SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::InterfaceAllStatistic()
    :
    interface_name{YType::str, "interface-name"},
    active_sessions{YType::uint32, "active-sessions"},
    dhcp_ds{YType::uint32, "dhcp-ds"},
    dhcpv4{YType::uint32, "dhcpv4"},
    dhcpv6{YType::uint32, "dhcpv6"},
    ippkt{YType::uint32, "ippkt"},
    peak_active_sessions{YType::uint32, "peak-active-sessions"},
    peak_standby_sessions{YType::uint32, "peak-standby-sessions"},
    pppoe{YType::uint32, "pppoe"},
    pppoe_ds{YType::uint32, "pppoe-ds"},
    standby_sessions{YType::uint32, "standby-sessions"},
    total{YType::uint32, "total"}
{
    yang_name = "interface-all-statistic"; yang_parent_name = "interface-all-statistics";
}

SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::~InterfaceAllStatistic()
{
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::has_data() const
{
    return interface_name.is_set
	|| active_sessions.is_set
	|| dhcp_ds.is_set
	|| dhcpv4.is_set
	|| dhcpv6.is_set
	|| ippkt.is_set
	|| peak_active_sessions.is_set
	|| peak_standby_sessions.is_set
	|| pppoe.is_set
	|| pppoe_ds.is_set
	|| standby_sessions.is_set
	|| total.is_set;
}

bool SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(active_sessions.operation)
	|| is_set(dhcp_ds.operation)
	|| is_set(dhcpv4.operation)
	|| is_set(dhcpv6.operation)
	|| is_set(ippkt.operation)
	|| is_set(peak_active_sessions.operation)
	|| is_set(peak_standby_sessions.operation)
	|| is_set(pppoe.operation)
	|| is_set(pppoe_ds.operation)
	|| is_set(standby_sessions.operation)
	|| is_set(total.operation);
}

std::string SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-all-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceAllStatistic' in Cisco_IOS_XR_subscriber_session_mon_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (dhcp_ds.is_set || is_set(dhcp_ds.operation)) leaf_name_data.push_back(dhcp_ds.get_name_leafdata());
    if (dhcpv4.is_set || is_set(dhcpv4.operation)) leaf_name_data.push_back(dhcpv4.get_name_leafdata());
    if (dhcpv6.is_set || is_set(dhcpv6.operation)) leaf_name_data.push_back(dhcpv6.get_name_leafdata());
    if (ippkt.is_set || is_set(ippkt.operation)) leaf_name_data.push_back(ippkt.get_name_leafdata());
    if (peak_active_sessions.is_set || is_set(peak_active_sessions.operation)) leaf_name_data.push_back(peak_active_sessions.get_name_leafdata());
    if (peak_standby_sessions.is_set || is_set(peak_standby_sessions.operation)) leaf_name_data.push_back(peak_standby_sessions.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.operation)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pppoe_ds.is_set || is_set(pppoe_ds.operation)) leaf_name_data.push_back(pppoe_ds.get_name_leafdata());
    if (standby_sessions.is_set || is_set(standby_sessions.operation)) leaf_name_data.push_back(standby_sessions.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::get_children()
{
    return children;
}

void SessionMon::Nodes::Node::InterfaceAllStatistics::InterfaceAllStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds = value;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4 = value;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6 = value;
    }
    if(value_path == "ippkt")
    {
        ippkt = value;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions = value;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions = value;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds = value;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

SessionMon::Nodes::Node::LicenseStatistics::LicenseStatistics()
    :
    active_sessions{YType::uint32, "active-sessions"},
    dhcp_ds{YType::uint32, "dhcp-ds"},
    dhcpv4{YType::uint32, "dhcpv4"},
    dhcpv6{YType::uint32, "dhcpv6"},
    ippkt{YType::uint32, "ippkt"},
    peak_active_sessions{YType::uint32, "peak-active-sessions"},
    peak_standby_sessions{YType::uint32, "peak-standby-sessions"},
    pppoe{YType::uint32, "pppoe"},
    pppoe_ds{YType::uint32, "pppoe-ds"},
    standby_sessions{YType::uint32, "standby-sessions"},
    total{YType::uint32, "total"}
{
    yang_name = "license-statistics"; yang_parent_name = "node";
}

SessionMon::Nodes::Node::LicenseStatistics::~LicenseStatistics()
{
}

bool SessionMon::Nodes::Node::LicenseStatistics::has_data() const
{
    return active_sessions.is_set
	|| dhcp_ds.is_set
	|| dhcpv4.is_set
	|| dhcpv6.is_set
	|| ippkt.is_set
	|| peak_active_sessions.is_set
	|| peak_standby_sessions.is_set
	|| pppoe.is_set
	|| pppoe_ds.is_set
	|| standby_sessions.is_set
	|| total.is_set;
}

bool SessionMon::Nodes::Node::LicenseStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(dhcp_ds.operation)
	|| is_set(dhcpv4.operation)
	|| is_set(dhcpv6.operation)
	|| is_set(ippkt.operation)
	|| is_set(peak_active_sessions.operation)
	|| is_set(peak_standby_sessions.operation)
	|| is_set(pppoe.operation)
	|| is_set(pppoe_ds.operation)
	|| is_set(standby_sessions.operation)
	|| is_set(total.operation);
}

std::string SessionMon::Nodes::Node::LicenseStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "license-statistics";

    return path_buffer.str();

}

EntityPath SessionMon::Nodes::Node::LicenseStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LicenseStatistics' in Cisco_IOS_XR_subscriber_session_mon_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (dhcp_ds.is_set || is_set(dhcp_ds.operation)) leaf_name_data.push_back(dhcp_ds.get_name_leafdata());
    if (dhcpv4.is_set || is_set(dhcpv4.operation)) leaf_name_data.push_back(dhcpv4.get_name_leafdata());
    if (dhcpv6.is_set || is_set(dhcpv6.operation)) leaf_name_data.push_back(dhcpv6.get_name_leafdata());
    if (ippkt.is_set || is_set(ippkt.operation)) leaf_name_data.push_back(ippkt.get_name_leafdata());
    if (peak_active_sessions.is_set || is_set(peak_active_sessions.operation)) leaf_name_data.push_back(peak_active_sessions.get_name_leafdata());
    if (peak_standby_sessions.is_set || is_set(peak_standby_sessions.operation)) leaf_name_data.push_back(peak_standby_sessions.get_name_leafdata());
    if (pppoe.is_set || is_set(pppoe.operation)) leaf_name_data.push_back(pppoe.get_name_leafdata());
    if (pppoe_ds.is_set || is_set(pppoe_ds.operation)) leaf_name_data.push_back(pppoe_ds.get_name_leafdata());
    if (standby_sessions.is_set || is_set(standby_sessions.operation)) leaf_name_data.push_back(standby_sessions.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> SessionMon::Nodes::Node::LicenseStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & SessionMon::Nodes::Node::LicenseStatistics::get_children()
{
    return children;
}

void SessionMon::Nodes::Node::LicenseStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "dhcp-ds")
    {
        dhcp_ds = value;
    }
    if(value_path == "dhcpv4")
    {
        dhcpv4 = value;
    }
    if(value_path == "dhcpv6")
    {
        dhcpv6 = value;
    }
    if(value_path == "ippkt")
    {
        ippkt = value;
    }
    if(value_path == "peak-active-sessions")
    {
        peak_active_sessions = value;
    }
    if(value_path == "peak-standby-sessions")
    {
        peak_standby_sessions = value;
    }
    if(value_path == "pppoe")
    {
        pppoe = value;
    }
    if(value_path == "pppoe-ds")
    {
        pppoe_ds = value;
    }
    if(value_path == "standby-sessions")
    {
        standby_sessions = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}


}
}

