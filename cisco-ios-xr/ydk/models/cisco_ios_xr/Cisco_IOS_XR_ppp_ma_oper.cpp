
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ppp_ma_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ppp_ma_oper {

Ppp::Ppp()
    :
    nodes(std::make_shared<Ppp::Nodes>())
{
    nodes->parent = this;

    yang_name = "ppp"; yang_parent_name = "Cisco-IOS-XR-ppp-ma-oper";
}

Ppp::~Ppp()
{
}

bool Ppp::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Ppp::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ppp-ma-oper:ppp";

    return path_buffer.str();

}

const EntityPath Ppp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Ppp::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Ppp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Ppp::clone_ptr() const
{
    return std::make_shared<Ppp>();
}

std::string Ppp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Ppp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Ppp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Ppp::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "ppp";
}

Ppp::Nodes::~Nodes()
{
}

bool Ppp::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Ppp::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ppp::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ppp-ma-oper:ppp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        for(auto const & c : node)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    node_interface_statistics(std::make_shared<Ppp::Nodes::Node::NodeInterfaceStatistics>())
	,node_interfaces(std::make_shared<Ppp::Nodes::Node::NodeInterfaces>())
	,sso_alerts(std::make_shared<Ppp::Nodes::Node::SsoAlerts>())
	,sso_groups(std::make_shared<Ppp::Nodes::Node::SsoGroups>())
	,sso_summary(std::make_shared<Ppp::Nodes::Node::SsoSummary>())
	,statistics(std::make_shared<Ppp::Nodes::Node::Statistics>())
	,summary(std::make_shared<Ppp::Nodes::Node::Summary>())
{
    node_interface_statistics->parent = this;

    node_interfaces->parent = this;

    sso_alerts->parent = this;

    sso_groups->parent = this;

    sso_summary->parent = this;

    statistics->parent = this;

    summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Ppp::Nodes::Node::~Node()
{
}

bool Ppp::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (node_interface_statistics !=  nullptr && node_interface_statistics->has_data())
	|| (node_interfaces !=  nullptr && node_interfaces->has_data())
	|| (sso_alerts !=  nullptr && sso_alerts->has_data())
	|| (sso_groups !=  nullptr && sso_groups->has_data())
	|| (sso_summary !=  nullptr && sso_summary->has_data())
	|| (statistics !=  nullptr && statistics->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Ppp::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (node_interface_statistics !=  nullptr && node_interface_statistics->has_operation())
	|| (node_interfaces !=  nullptr && node_interfaces->has_operation())
	|| (sso_alerts !=  nullptr && sso_alerts->has_operation())
	|| (sso_groups !=  nullptr && sso_groups->has_operation())
	|| (sso_summary !=  nullptr && sso_summary->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Ppp::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ppp-ma-oper:ppp/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface-statistics")
    {
        if(node_interface_statistics == nullptr)
        {
            node_interface_statistics = std::make_shared<Ppp::Nodes::Node::NodeInterfaceStatistics>();
        }
        return node_interface_statistics;
    }

    if(child_yang_name == "node-interfaces")
    {
        if(node_interfaces == nullptr)
        {
            node_interfaces = std::make_shared<Ppp::Nodes::Node::NodeInterfaces>();
        }
        return node_interfaces;
    }

    if(child_yang_name == "sso-alerts")
    {
        if(sso_alerts == nullptr)
        {
            sso_alerts = std::make_shared<Ppp::Nodes::Node::SsoAlerts>();
        }
        return sso_alerts;
    }

    if(child_yang_name == "sso-groups")
    {
        if(sso_groups == nullptr)
        {
            sso_groups = std::make_shared<Ppp::Nodes::Node::SsoGroups>();
        }
        return sso_groups;
    }

    if(child_yang_name == "sso-summary")
    {
        if(sso_summary == nullptr)
        {
            sso_summary = std::make_shared<Ppp::Nodes::Node::SsoSummary>();
        }
        return sso_summary;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Ppp::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Ppp::Nodes::Node::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(node_interface_statistics != nullptr)
    {
        children["node-interface-statistics"] = node_interface_statistics;
    }

    if(node_interfaces != nullptr)
    {
        children["node-interfaces"] = node_interfaces;
    }

    if(sso_alerts != nullptr)
    {
        children["sso-alerts"] = sso_alerts;
    }

    if(sso_groups != nullptr)
    {
        children["sso-groups"] = sso_groups;
    }

    if(sso_summary != nullptr)
    {
        children["sso-summary"] = sso_summary;
    }

    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    return children;
}

void Ppp::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Ppp::Nodes::Node::Statistics::Statistics()
    :
    authentication_statistics(std::make_shared<Ppp::Nodes::Node::Statistics::AuthenticationStatistics>())
	,lcp_statistics(std::make_shared<Ppp::Nodes::Node::Statistics::LcpStatistics>())
{
    authentication_statistics->parent = this;

    lcp_statistics->parent = this;

    yang_name = "statistics"; yang_parent_name = "node";
}

Ppp::Nodes::Node::Statistics::~Statistics()
{
}

bool Ppp::Nodes::Node::Statistics::has_data() const
{
    for (std::size_t index=0; index<ncp_statistics_array.size(); index++)
    {
        if(ncp_statistics_array[index]->has_data())
            return true;
    }
    return (authentication_statistics !=  nullptr && authentication_statistics->has_data())
	|| (lcp_statistics !=  nullptr && lcp_statistics->has_data());
}

bool Ppp::Nodes::Node::Statistics::has_operation() const
{
    for (std::size_t index=0; index<ncp_statistics_array.size(); index++)
    {
        if(ncp_statistics_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_operation())
	|| (lcp_statistics !=  nullptr && lcp_statistics->has_operation());
}

std::string Ppp::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-statistics")
    {
        if(authentication_statistics == nullptr)
        {
            authentication_statistics = std::make_shared<Ppp::Nodes::Node::Statistics::AuthenticationStatistics>();
        }
        return authentication_statistics;
    }

    if(child_yang_name == "lcp-statistics")
    {
        if(lcp_statistics == nullptr)
        {
            lcp_statistics = std::make_shared<Ppp::Nodes::Node::Statistics::LcpStatistics>();
        }
        return lcp_statistics;
    }

    if(child_yang_name == "ncp-statistics-array")
    {
        for(auto const & c : ncp_statistics_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::Statistics::NcpStatisticsArray>();
        c->parent = this;
        ncp_statistics_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_statistics != nullptr)
    {
        children["authentication-statistics"] = authentication_statistics;
    }

    if(lcp_statistics != nullptr)
    {
        children["lcp-statistics"] = lcp_statistics;
    }

    for (auto const & c : ncp_statistics_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::Statistics::LcpStatistics::LcpStatistics()
    :
    code_rej_rcvd{YType::uint64, "code-rej-rcvd"},
    code_rej_sent{YType::uint64, "code-rej-sent"},
    conf_ack_rcvd{YType::uint64, "conf-ack-rcvd"},
    conf_ack_sent{YType::uint64, "conf-ack-sent"},
    conf_nak_rcvd{YType::uint64, "conf-nak-rcvd"},
    conf_nak_sent{YType::uint64, "conf-nak-sent"},
    conf_rej_rcvd{YType::uint64, "conf-rej-rcvd"},
    conf_rej_sent{YType::uint64, "conf-rej-sent"},
    conf_req_rcvd{YType::uint64, "conf-req-rcvd"},
    conf_req_sent{YType::uint64, "conf-req-sent"},
    disc_req_rcvd{YType::uint64, "disc-req-rcvd"},
    disc_req_sent{YType::uint64, "disc-req-sent"},
    echo_rep_rcvd{YType::uint64, "echo-rep-rcvd"},
    echo_rep_sent{YType::uint64, "echo-rep-sent"},
    echo_req_rcvd{YType::uint64, "echo-req-rcvd"},
    echo_req_sent{YType::uint64, "echo-req-sent"},
    link_error{YType::uint64, "link-error"},
    link_up{YType::uint64, "link-up"},
    proto_rej_rcvd{YType::uint64, "proto-rej-rcvd"},
    proto_rej_sent{YType::uint64, "proto-rej-sent"},
    term_ack_rcvd{YType::uint64, "term-ack-rcvd"},
    term_ack_sent{YType::uint64, "term-ack-sent"},
    term_req_rcvd{YType::uint64, "term-req-rcvd"},
    term_req_sent{YType::uint64, "term-req-sent"}
{
    yang_name = "lcp-statistics"; yang_parent_name = "statistics";
}

Ppp::Nodes::Node::Statistics::LcpStatistics::~LcpStatistics()
{
}

bool Ppp::Nodes::Node::Statistics::LcpStatistics::has_data() const
{
    return code_rej_rcvd.is_set
	|| code_rej_sent.is_set
	|| conf_ack_rcvd.is_set
	|| conf_ack_sent.is_set
	|| conf_nak_rcvd.is_set
	|| conf_nak_sent.is_set
	|| conf_rej_rcvd.is_set
	|| conf_rej_sent.is_set
	|| conf_req_rcvd.is_set
	|| conf_req_sent.is_set
	|| disc_req_rcvd.is_set
	|| disc_req_sent.is_set
	|| echo_rep_rcvd.is_set
	|| echo_rep_sent.is_set
	|| echo_req_rcvd.is_set
	|| echo_req_sent.is_set
	|| link_error.is_set
	|| link_up.is_set
	|| proto_rej_rcvd.is_set
	|| proto_rej_sent.is_set
	|| term_ack_rcvd.is_set
	|| term_ack_sent.is_set
	|| term_req_rcvd.is_set
	|| term_req_sent.is_set;
}

bool Ppp::Nodes::Node::Statistics::LcpStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(code_rej_rcvd.operation)
	|| is_set(code_rej_sent.operation)
	|| is_set(conf_ack_rcvd.operation)
	|| is_set(conf_ack_sent.operation)
	|| is_set(conf_nak_rcvd.operation)
	|| is_set(conf_nak_sent.operation)
	|| is_set(conf_rej_rcvd.operation)
	|| is_set(conf_rej_sent.operation)
	|| is_set(conf_req_rcvd.operation)
	|| is_set(conf_req_sent.operation)
	|| is_set(disc_req_rcvd.operation)
	|| is_set(disc_req_sent.operation)
	|| is_set(echo_rep_rcvd.operation)
	|| is_set(echo_rep_sent.operation)
	|| is_set(echo_req_rcvd.operation)
	|| is_set(echo_req_sent.operation)
	|| is_set(link_error.operation)
	|| is_set(link_up.operation)
	|| is_set(proto_rej_rcvd.operation)
	|| is_set(proto_rej_sent.operation)
	|| is_set(term_ack_rcvd.operation)
	|| is_set(term_ack_sent.operation)
	|| is_set(term_req_rcvd.operation)
	|| is_set(term_req_sent.operation);
}

std::string Ppp::Nodes::Node::Statistics::LcpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp-statistics";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Statistics::LcpStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcpStatistics' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (code_rej_rcvd.is_set || is_set(code_rej_rcvd.operation)) leaf_name_data.push_back(code_rej_rcvd.get_name_leafdata());
    if (code_rej_sent.is_set || is_set(code_rej_sent.operation)) leaf_name_data.push_back(code_rej_sent.get_name_leafdata());
    if (conf_ack_rcvd.is_set || is_set(conf_ack_rcvd.operation)) leaf_name_data.push_back(conf_ack_rcvd.get_name_leafdata());
    if (conf_ack_sent.is_set || is_set(conf_ack_sent.operation)) leaf_name_data.push_back(conf_ack_sent.get_name_leafdata());
    if (conf_nak_rcvd.is_set || is_set(conf_nak_rcvd.operation)) leaf_name_data.push_back(conf_nak_rcvd.get_name_leafdata());
    if (conf_nak_sent.is_set || is_set(conf_nak_sent.operation)) leaf_name_data.push_back(conf_nak_sent.get_name_leafdata());
    if (conf_rej_rcvd.is_set || is_set(conf_rej_rcvd.operation)) leaf_name_data.push_back(conf_rej_rcvd.get_name_leafdata());
    if (conf_rej_sent.is_set || is_set(conf_rej_sent.operation)) leaf_name_data.push_back(conf_rej_sent.get_name_leafdata());
    if (conf_req_rcvd.is_set || is_set(conf_req_rcvd.operation)) leaf_name_data.push_back(conf_req_rcvd.get_name_leafdata());
    if (conf_req_sent.is_set || is_set(conf_req_sent.operation)) leaf_name_data.push_back(conf_req_sent.get_name_leafdata());
    if (disc_req_rcvd.is_set || is_set(disc_req_rcvd.operation)) leaf_name_data.push_back(disc_req_rcvd.get_name_leafdata());
    if (disc_req_sent.is_set || is_set(disc_req_sent.operation)) leaf_name_data.push_back(disc_req_sent.get_name_leafdata());
    if (echo_rep_rcvd.is_set || is_set(echo_rep_rcvd.operation)) leaf_name_data.push_back(echo_rep_rcvd.get_name_leafdata());
    if (echo_rep_sent.is_set || is_set(echo_rep_sent.operation)) leaf_name_data.push_back(echo_rep_sent.get_name_leafdata());
    if (echo_req_rcvd.is_set || is_set(echo_req_rcvd.operation)) leaf_name_data.push_back(echo_req_rcvd.get_name_leafdata());
    if (echo_req_sent.is_set || is_set(echo_req_sent.operation)) leaf_name_data.push_back(echo_req_sent.get_name_leafdata());
    if (link_error.is_set || is_set(link_error.operation)) leaf_name_data.push_back(link_error.get_name_leafdata());
    if (link_up.is_set || is_set(link_up.operation)) leaf_name_data.push_back(link_up.get_name_leafdata());
    if (proto_rej_rcvd.is_set || is_set(proto_rej_rcvd.operation)) leaf_name_data.push_back(proto_rej_rcvd.get_name_leafdata());
    if (proto_rej_sent.is_set || is_set(proto_rej_sent.operation)) leaf_name_data.push_back(proto_rej_sent.get_name_leafdata());
    if (term_ack_rcvd.is_set || is_set(term_ack_rcvd.operation)) leaf_name_data.push_back(term_ack_rcvd.get_name_leafdata());
    if (term_ack_sent.is_set || is_set(term_ack_sent.operation)) leaf_name_data.push_back(term_ack_sent.get_name_leafdata());
    if (term_req_rcvd.is_set || is_set(term_req_rcvd.operation)) leaf_name_data.push_back(term_req_rcvd.get_name_leafdata());
    if (term_req_sent.is_set || is_set(term_req_sent.operation)) leaf_name_data.push_back(term_req_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Statistics::LcpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Statistics::LcpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::Statistics::LcpStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "code-rej-rcvd")
    {
        code_rej_rcvd = value;
    }
    if(value_path == "code-rej-sent")
    {
        code_rej_sent = value;
    }
    if(value_path == "conf-ack-rcvd")
    {
        conf_ack_rcvd = value;
    }
    if(value_path == "conf-ack-sent")
    {
        conf_ack_sent = value;
    }
    if(value_path == "conf-nak-rcvd")
    {
        conf_nak_rcvd = value;
    }
    if(value_path == "conf-nak-sent")
    {
        conf_nak_sent = value;
    }
    if(value_path == "conf-rej-rcvd")
    {
        conf_rej_rcvd = value;
    }
    if(value_path == "conf-rej-sent")
    {
        conf_rej_sent = value;
    }
    if(value_path == "conf-req-rcvd")
    {
        conf_req_rcvd = value;
    }
    if(value_path == "conf-req-sent")
    {
        conf_req_sent = value;
    }
    if(value_path == "disc-req-rcvd")
    {
        disc_req_rcvd = value;
    }
    if(value_path == "disc-req-sent")
    {
        disc_req_sent = value;
    }
    if(value_path == "echo-rep-rcvd")
    {
        echo_rep_rcvd = value;
    }
    if(value_path == "echo-rep-sent")
    {
        echo_rep_sent = value;
    }
    if(value_path == "echo-req-rcvd")
    {
        echo_req_rcvd = value;
    }
    if(value_path == "echo-req-sent")
    {
        echo_req_sent = value;
    }
    if(value_path == "link-error")
    {
        link_error = value;
    }
    if(value_path == "link-up")
    {
        link_up = value;
    }
    if(value_path == "proto-rej-rcvd")
    {
        proto_rej_rcvd = value;
    }
    if(value_path == "proto-rej-sent")
    {
        proto_rej_sent = value;
    }
    if(value_path == "term-ack-rcvd")
    {
        term_ack_rcvd = value;
    }
    if(value_path == "term-ack-sent")
    {
        term_ack_sent = value;
    }
    if(value_path == "term-req-rcvd")
    {
        term_req_rcvd = value;
    }
    if(value_path == "term-req-sent")
    {
        term_req_sent = value;
    }
}

Ppp::Nodes::Node::Statistics::AuthenticationStatistics::AuthenticationStatistics()
    :
    auth_timeout_count{YType::uint64, "auth-timeout-count"},
    chap_chall_rcvd{YType::uint64, "chap-chall-rcvd"},
    chap_chall_sent{YType::uint64, "chap-chall-sent"},
    chap_rep_fail_rcvd{YType::uint64, "chap-rep-fail-rcvd"},
    chap_rep_fail_sent{YType::uint64, "chap-rep-fail-sent"},
    chap_rep_succ_rcvd{YType::uint64, "chap-rep-succ-rcvd"},
    chap_rep_succ_sent{YType::uint64, "chap-rep-succ-sent"},
    chap_resp_rcvd{YType::uint64, "chap-resp-rcvd"},
    chap_resp_sent{YType::uint64, "chap-resp-sent"},
    pap_ack_rcvd{YType::uint64, "pap-ack-rcvd"},
    pap_ack_sent{YType::uint64, "pap-ack-sent"},
    pap_nak_rcvd{YType::uint64, "pap-nak-rcvd"},
    pap_nak_sent{YType::uint64, "pap-nak-sent"},
    pap_req_rcvd{YType::uint64, "pap-req-rcvd"},
    pap_req_sent{YType::uint64, "pap-req-sent"}
{
    yang_name = "authentication-statistics"; yang_parent_name = "statistics";
}

Ppp::Nodes::Node::Statistics::AuthenticationStatistics::~AuthenticationStatistics()
{
}

bool Ppp::Nodes::Node::Statistics::AuthenticationStatistics::has_data() const
{
    return auth_timeout_count.is_set
	|| chap_chall_rcvd.is_set
	|| chap_chall_sent.is_set
	|| chap_rep_fail_rcvd.is_set
	|| chap_rep_fail_sent.is_set
	|| chap_rep_succ_rcvd.is_set
	|| chap_rep_succ_sent.is_set
	|| chap_resp_rcvd.is_set
	|| chap_resp_sent.is_set
	|| pap_ack_rcvd.is_set
	|| pap_ack_sent.is_set
	|| pap_nak_rcvd.is_set
	|| pap_nak_sent.is_set
	|| pap_req_rcvd.is_set
	|| pap_req_sent.is_set;
}

bool Ppp::Nodes::Node::Statistics::AuthenticationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_timeout_count.operation)
	|| is_set(chap_chall_rcvd.operation)
	|| is_set(chap_chall_sent.operation)
	|| is_set(chap_rep_fail_rcvd.operation)
	|| is_set(chap_rep_fail_sent.operation)
	|| is_set(chap_rep_succ_rcvd.operation)
	|| is_set(chap_rep_succ_sent.operation)
	|| is_set(chap_resp_rcvd.operation)
	|| is_set(chap_resp_sent.operation)
	|| is_set(pap_ack_rcvd.operation)
	|| is_set(pap_ack_sent.operation)
	|| is_set(pap_nak_rcvd.operation)
	|| is_set(pap_nak_sent.operation)
	|| is_set(pap_req_rcvd.operation)
	|| is_set(pap_req_sent.operation);
}

std::string Ppp::Nodes::Node::Statistics::AuthenticationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-statistics";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Statistics::AuthenticationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationStatistics' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_timeout_count.is_set || is_set(auth_timeout_count.operation)) leaf_name_data.push_back(auth_timeout_count.get_name_leafdata());
    if (chap_chall_rcvd.is_set || is_set(chap_chall_rcvd.operation)) leaf_name_data.push_back(chap_chall_rcvd.get_name_leafdata());
    if (chap_chall_sent.is_set || is_set(chap_chall_sent.operation)) leaf_name_data.push_back(chap_chall_sent.get_name_leafdata());
    if (chap_rep_fail_rcvd.is_set || is_set(chap_rep_fail_rcvd.operation)) leaf_name_data.push_back(chap_rep_fail_rcvd.get_name_leafdata());
    if (chap_rep_fail_sent.is_set || is_set(chap_rep_fail_sent.operation)) leaf_name_data.push_back(chap_rep_fail_sent.get_name_leafdata());
    if (chap_rep_succ_rcvd.is_set || is_set(chap_rep_succ_rcvd.operation)) leaf_name_data.push_back(chap_rep_succ_rcvd.get_name_leafdata());
    if (chap_rep_succ_sent.is_set || is_set(chap_rep_succ_sent.operation)) leaf_name_data.push_back(chap_rep_succ_sent.get_name_leafdata());
    if (chap_resp_rcvd.is_set || is_set(chap_resp_rcvd.operation)) leaf_name_data.push_back(chap_resp_rcvd.get_name_leafdata());
    if (chap_resp_sent.is_set || is_set(chap_resp_sent.operation)) leaf_name_data.push_back(chap_resp_sent.get_name_leafdata());
    if (pap_ack_rcvd.is_set || is_set(pap_ack_rcvd.operation)) leaf_name_data.push_back(pap_ack_rcvd.get_name_leafdata());
    if (pap_ack_sent.is_set || is_set(pap_ack_sent.operation)) leaf_name_data.push_back(pap_ack_sent.get_name_leafdata());
    if (pap_nak_rcvd.is_set || is_set(pap_nak_rcvd.operation)) leaf_name_data.push_back(pap_nak_rcvd.get_name_leafdata());
    if (pap_nak_sent.is_set || is_set(pap_nak_sent.operation)) leaf_name_data.push_back(pap_nak_sent.get_name_leafdata());
    if (pap_req_rcvd.is_set || is_set(pap_req_rcvd.operation)) leaf_name_data.push_back(pap_req_rcvd.get_name_leafdata());
    if (pap_req_sent.is_set || is_set(pap_req_sent.operation)) leaf_name_data.push_back(pap_req_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Statistics::AuthenticationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Statistics::AuthenticationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::Statistics::AuthenticationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-timeout-count")
    {
        auth_timeout_count = value;
    }
    if(value_path == "chap-chall-rcvd")
    {
        chap_chall_rcvd = value;
    }
    if(value_path == "chap-chall-sent")
    {
        chap_chall_sent = value;
    }
    if(value_path == "chap-rep-fail-rcvd")
    {
        chap_rep_fail_rcvd = value;
    }
    if(value_path == "chap-rep-fail-sent")
    {
        chap_rep_fail_sent = value;
    }
    if(value_path == "chap-rep-succ-rcvd")
    {
        chap_rep_succ_rcvd = value;
    }
    if(value_path == "chap-rep-succ-sent")
    {
        chap_rep_succ_sent = value;
    }
    if(value_path == "chap-resp-rcvd")
    {
        chap_resp_rcvd = value;
    }
    if(value_path == "chap-resp-sent")
    {
        chap_resp_sent = value;
    }
    if(value_path == "pap-ack-rcvd")
    {
        pap_ack_rcvd = value;
    }
    if(value_path == "pap-ack-sent")
    {
        pap_ack_sent = value;
    }
    if(value_path == "pap-nak-rcvd")
    {
        pap_nak_rcvd = value;
    }
    if(value_path == "pap-nak-sent")
    {
        pap_nak_sent = value;
    }
    if(value_path == "pap-req-rcvd")
    {
        pap_req_rcvd = value;
    }
    if(value_path == "pap-req-sent")
    {
        pap_req_sent = value;
    }
}

Ppp::Nodes::Node::Statistics::NcpStatisticsArray::NcpStatisticsArray()
    :
    conf_ack_rcvd{YType::uint64, "conf-ack-rcvd"},
    conf_ack_sent{YType::uint64, "conf-ack-sent"},
    conf_nak_rcvd{YType::uint64, "conf-nak-rcvd"},
    conf_nak_sent{YType::uint64, "conf-nak-sent"},
    conf_rej_rcvd{YType::uint64, "conf-rej-rcvd"},
    conf_rej_sent{YType::uint64, "conf-rej-sent"},
    conf_req_rcvd{YType::uint64, "conf-req-rcvd"},
    conf_req_sent{YType::uint64, "conf-req-sent"},
    ncp_identifier{YType::enumeration, "ncp-identifier"},
    proto_rej_rcvd{YType::uint64, "proto-rej-rcvd"},
    proto_rej_sent{YType::uint64, "proto-rej-sent"},
    term_ack_rcvd{YType::uint64, "term-ack-rcvd"},
    term_ack_sent{YType::uint64, "term-ack-sent"},
    term_req_rcvd{YType::uint64, "term-req-rcvd"},
    term_req_sent{YType::uint64, "term-req-sent"}
{
    yang_name = "ncp-statistics-array"; yang_parent_name = "statistics";
}

Ppp::Nodes::Node::Statistics::NcpStatisticsArray::~NcpStatisticsArray()
{
}

bool Ppp::Nodes::Node::Statistics::NcpStatisticsArray::has_data() const
{
    return conf_ack_rcvd.is_set
	|| conf_ack_sent.is_set
	|| conf_nak_rcvd.is_set
	|| conf_nak_sent.is_set
	|| conf_rej_rcvd.is_set
	|| conf_rej_sent.is_set
	|| conf_req_rcvd.is_set
	|| conf_req_sent.is_set
	|| ncp_identifier.is_set
	|| proto_rej_rcvd.is_set
	|| proto_rej_sent.is_set
	|| term_ack_rcvd.is_set
	|| term_ack_sent.is_set
	|| term_req_rcvd.is_set
	|| term_req_sent.is_set;
}

bool Ppp::Nodes::Node::Statistics::NcpStatisticsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conf_ack_rcvd.operation)
	|| is_set(conf_ack_sent.operation)
	|| is_set(conf_nak_rcvd.operation)
	|| is_set(conf_nak_sent.operation)
	|| is_set(conf_rej_rcvd.operation)
	|| is_set(conf_rej_sent.operation)
	|| is_set(conf_req_rcvd.operation)
	|| is_set(conf_req_sent.operation)
	|| is_set(ncp_identifier.operation)
	|| is_set(proto_rej_rcvd.operation)
	|| is_set(proto_rej_sent.operation)
	|| is_set(term_ack_rcvd.operation)
	|| is_set(term_ack_sent.operation)
	|| is_set(term_req_rcvd.operation)
	|| is_set(term_req_sent.operation);
}

std::string Ppp::Nodes::Node::Statistics::NcpStatisticsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncp-statistics-array";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Statistics::NcpStatisticsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcpStatisticsArray' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conf_ack_rcvd.is_set || is_set(conf_ack_rcvd.operation)) leaf_name_data.push_back(conf_ack_rcvd.get_name_leafdata());
    if (conf_ack_sent.is_set || is_set(conf_ack_sent.operation)) leaf_name_data.push_back(conf_ack_sent.get_name_leafdata());
    if (conf_nak_rcvd.is_set || is_set(conf_nak_rcvd.operation)) leaf_name_data.push_back(conf_nak_rcvd.get_name_leafdata());
    if (conf_nak_sent.is_set || is_set(conf_nak_sent.operation)) leaf_name_data.push_back(conf_nak_sent.get_name_leafdata());
    if (conf_rej_rcvd.is_set || is_set(conf_rej_rcvd.operation)) leaf_name_data.push_back(conf_rej_rcvd.get_name_leafdata());
    if (conf_rej_sent.is_set || is_set(conf_rej_sent.operation)) leaf_name_data.push_back(conf_rej_sent.get_name_leafdata());
    if (conf_req_rcvd.is_set || is_set(conf_req_rcvd.operation)) leaf_name_data.push_back(conf_req_rcvd.get_name_leafdata());
    if (conf_req_sent.is_set || is_set(conf_req_sent.operation)) leaf_name_data.push_back(conf_req_sent.get_name_leafdata());
    if (ncp_identifier.is_set || is_set(ncp_identifier.operation)) leaf_name_data.push_back(ncp_identifier.get_name_leafdata());
    if (proto_rej_rcvd.is_set || is_set(proto_rej_rcvd.operation)) leaf_name_data.push_back(proto_rej_rcvd.get_name_leafdata());
    if (proto_rej_sent.is_set || is_set(proto_rej_sent.operation)) leaf_name_data.push_back(proto_rej_sent.get_name_leafdata());
    if (term_ack_rcvd.is_set || is_set(term_ack_rcvd.operation)) leaf_name_data.push_back(term_ack_rcvd.get_name_leafdata());
    if (term_ack_sent.is_set || is_set(term_ack_sent.operation)) leaf_name_data.push_back(term_ack_sent.get_name_leafdata());
    if (term_req_rcvd.is_set || is_set(term_req_rcvd.operation)) leaf_name_data.push_back(term_req_rcvd.get_name_leafdata());
    if (term_req_sent.is_set || is_set(term_req_sent.operation)) leaf_name_data.push_back(term_req_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Statistics::NcpStatisticsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Statistics::NcpStatisticsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::Statistics::NcpStatisticsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conf-ack-rcvd")
    {
        conf_ack_rcvd = value;
    }
    if(value_path == "conf-ack-sent")
    {
        conf_ack_sent = value;
    }
    if(value_path == "conf-nak-rcvd")
    {
        conf_nak_rcvd = value;
    }
    if(value_path == "conf-nak-sent")
    {
        conf_nak_sent = value;
    }
    if(value_path == "conf-rej-rcvd")
    {
        conf_rej_rcvd = value;
    }
    if(value_path == "conf-rej-sent")
    {
        conf_rej_sent = value;
    }
    if(value_path == "conf-req-rcvd")
    {
        conf_req_rcvd = value;
    }
    if(value_path == "conf-req-sent")
    {
        conf_req_sent = value;
    }
    if(value_path == "ncp-identifier")
    {
        ncp_identifier = value;
    }
    if(value_path == "proto-rej-rcvd")
    {
        proto_rej_rcvd = value;
    }
    if(value_path == "proto-rej-sent")
    {
        proto_rej_sent = value;
    }
    if(value_path == "term-ack-rcvd")
    {
        term_ack_rcvd = value;
    }
    if(value_path == "term-ack-sent")
    {
        term_ack_sent = value;
    }
    if(value_path == "term-req-rcvd")
    {
        term_req_rcvd = value;
    }
    if(value_path == "term-req-sent")
    {
        term_req_sent = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterfaces()
{
    yang_name = "node-interfaces"; yang_parent_name = "node";
}

Ppp::Nodes::Node::NodeInterfaces::~NodeInterfaces()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::has_data() const
{
    for (std::size_t index=0; index<node_interface.size(); index++)
    {
        if(node_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Ppp::Nodes::Node::NodeInterfaces::has_operation() const
{
    for (std::size_t index=0; index<node_interface.size(); index++)
    {
        if(node_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interfaces";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeInterfaces' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface")
    {
        for(auto const & c : node_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface>();
        c->parent = this;
        node_interface.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_interface)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NodeInterface()
    :
    interface{YType::str, "interface"},
    ip_interworking_enabled{YType::boolean, "ip-interworking-enabled"},
    is_l2ac{YType::boolean, "is-l2ac"},
    is_lcp_delayed{YType::boolean, "is-lcp-delayed"},
    is_loopback_detected{YType::boolean, "is-loopback-detected"},
    is_mcmp_enabled{YType::boolean, "is-mcmp-enabled"},
    is_ssrp_configured{YType::boolean, "is-ssrp-configured"},
    is_tunneled_session{YType::boolean, "is-tunneled-session"},
    keepalive_period{YType::uint32, "keepalive-period"},
    keepalive_retry_count{YType::uint32, "keepalive-retry-count"},
    lcp_state{YType::enumeration, "lcp-state"},
    lcpsso_state{YType::enumeration, "lcpsso-state"},
    line_state{YType::uint32, "line-state"},
    local_ed{YType::str, "local-ed"},
    local_mcmp_classes{YType::uint8, "local-mcmp-classes"},
    local_mrru{YType::uint16, "local-mrru"},
    local_mru{YType::uint16, "local-mru"},
    parent_state{YType::uint32, "parent-state"},
    peer_ed{YType::str, "peer-ed"},
    peer_mcmp_classes{YType::uint8, "peer-mcmp-classes"},
    peer_mrru{YType::uint16, "peer-mrru"},
    peer_mru{YType::uint16, "peer-mru"},
    provisioned{YType::boolean, "provisioned"},
    session_expires{YType::uint32, "session-expires"},
    srg_role{YType::uint32, "srg-role"},
    ssrp_peer_id{YType::str, "ssrp-peer-id"},
    xconnect_id{YType::uint32, "xconnect-id"}
    	,
    auth_info(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo>())
	,configured_timeout(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout>())
	,mp_info(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo>())
{
    auth_info->parent = this;

    configured_timeout->parent = this;

    mp_info->parent = this;

    yang_name = "node-interface"; yang_parent_name = "node-interfaces";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::~NodeInterface()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::has_data() const
{
    for (std::size_t index=0; index<ncp_info_array.size(); index++)
    {
        if(ncp_info_array[index]->has_data())
            return true;
    }
    return interface.is_set
	|| ip_interworking_enabled.is_set
	|| is_l2ac.is_set
	|| is_lcp_delayed.is_set
	|| is_loopback_detected.is_set
	|| is_mcmp_enabled.is_set
	|| is_ssrp_configured.is_set
	|| is_tunneled_session.is_set
	|| keepalive_period.is_set
	|| keepalive_retry_count.is_set
	|| lcp_state.is_set
	|| lcpsso_state.is_set
	|| line_state.is_set
	|| local_ed.is_set
	|| local_mcmp_classes.is_set
	|| local_mrru.is_set
	|| local_mru.is_set
	|| parent_state.is_set
	|| peer_ed.is_set
	|| peer_mcmp_classes.is_set
	|| peer_mrru.is_set
	|| peer_mru.is_set
	|| provisioned.is_set
	|| session_expires.is_set
	|| srg_role.is_set
	|| ssrp_peer_id.is_set
	|| xconnect_id.is_set
	|| (auth_info !=  nullptr && auth_info->has_data())
	|| (configured_timeout !=  nullptr && configured_timeout->has_data())
	|| (mp_info !=  nullptr && mp_info->has_data());
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::has_operation() const
{
    for (std::size_t index=0; index<ncp_info_array.size(); index++)
    {
        if(ncp_info_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(ip_interworking_enabled.operation)
	|| is_set(is_l2ac.operation)
	|| is_set(is_lcp_delayed.operation)
	|| is_set(is_loopback_detected.operation)
	|| is_set(is_mcmp_enabled.operation)
	|| is_set(is_ssrp_configured.operation)
	|| is_set(is_tunneled_session.operation)
	|| is_set(keepalive_period.operation)
	|| is_set(keepalive_retry_count.operation)
	|| is_set(lcp_state.operation)
	|| is_set(lcpsso_state.operation)
	|| is_set(line_state.operation)
	|| is_set(local_ed.operation)
	|| is_set(local_mcmp_classes.operation)
	|| is_set(local_mrru.operation)
	|| is_set(local_mru.operation)
	|| is_set(parent_state.operation)
	|| is_set(peer_ed.operation)
	|| is_set(peer_mcmp_classes.operation)
	|| is_set(peer_mrru.operation)
	|| is_set(peer_mru.operation)
	|| is_set(provisioned.operation)
	|| is_set(session_expires.operation)
	|| is_set(srg_role.operation)
	|| is_set(ssrp_peer_id.operation)
	|| is_set(xconnect_id.operation)
	|| (auth_info !=  nullptr && auth_info->has_operation())
	|| (configured_timeout !=  nullptr && configured_timeout->has_operation())
	|| (mp_info !=  nullptr && mp_info->has_operation());
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeInterface' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (ip_interworking_enabled.is_set || is_set(ip_interworking_enabled.operation)) leaf_name_data.push_back(ip_interworking_enabled.get_name_leafdata());
    if (is_l2ac.is_set || is_set(is_l2ac.operation)) leaf_name_data.push_back(is_l2ac.get_name_leafdata());
    if (is_lcp_delayed.is_set || is_set(is_lcp_delayed.operation)) leaf_name_data.push_back(is_lcp_delayed.get_name_leafdata());
    if (is_loopback_detected.is_set || is_set(is_loopback_detected.operation)) leaf_name_data.push_back(is_loopback_detected.get_name_leafdata());
    if (is_mcmp_enabled.is_set || is_set(is_mcmp_enabled.operation)) leaf_name_data.push_back(is_mcmp_enabled.get_name_leafdata());
    if (is_ssrp_configured.is_set || is_set(is_ssrp_configured.operation)) leaf_name_data.push_back(is_ssrp_configured.get_name_leafdata());
    if (is_tunneled_session.is_set || is_set(is_tunneled_session.operation)) leaf_name_data.push_back(is_tunneled_session.get_name_leafdata());
    if (keepalive_period.is_set || is_set(keepalive_period.operation)) leaf_name_data.push_back(keepalive_period.get_name_leafdata());
    if (keepalive_retry_count.is_set || is_set(keepalive_retry_count.operation)) leaf_name_data.push_back(keepalive_retry_count.get_name_leafdata());
    if (lcp_state.is_set || is_set(lcp_state.operation)) leaf_name_data.push_back(lcp_state.get_name_leafdata());
    if (lcpsso_state.is_set || is_set(lcpsso_state.operation)) leaf_name_data.push_back(lcpsso_state.get_name_leafdata());
    if (line_state.is_set || is_set(line_state.operation)) leaf_name_data.push_back(line_state.get_name_leafdata());
    if (local_ed.is_set || is_set(local_ed.operation)) leaf_name_data.push_back(local_ed.get_name_leafdata());
    if (local_mcmp_classes.is_set || is_set(local_mcmp_classes.operation)) leaf_name_data.push_back(local_mcmp_classes.get_name_leafdata());
    if (local_mrru.is_set || is_set(local_mrru.operation)) leaf_name_data.push_back(local_mrru.get_name_leafdata());
    if (local_mru.is_set || is_set(local_mru.operation)) leaf_name_data.push_back(local_mru.get_name_leafdata());
    if (parent_state.is_set || is_set(parent_state.operation)) leaf_name_data.push_back(parent_state.get_name_leafdata());
    if (peer_ed.is_set || is_set(peer_ed.operation)) leaf_name_data.push_back(peer_ed.get_name_leafdata());
    if (peer_mcmp_classes.is_set || is_set(peer_mcmp_classes.operation)) leaf_name_data.push_back(peer_mcmp_classes.get_name_leafdata());
    if (peer_mrru.is_set || is_set(peer_mrru.operation)) leaf_name_data.push_back(peer_mrru.get_name_leafdata());
    if (peer_mru.is_set || is_set(peer_mru.operation)) leaf_name_data.push_back(peer_mru.get_name_leafdata());
    if (provisioned.is_set || is_set(provisioned.operation)) leaf_name_data.push_back(provisioned.get_name_leafdata());
    if (session_expires.is_set || is_set(session_expires.operation)) leaf_name_data.push_back(session_expires.get_name_leafdata());
    if (srg_role.is_set || is_set(srg_role.operation)) leaf_name_data.push_back(srg_role.get_name_leafdata());
    if (ssrp_peer_id.is_set || is_set(ssrp_peer_id.operation)) leaf_name_data.push_back(ssrp_peer_id.get_name_leafdata());
    if (xconnect_id.is_set || is_set(xconnect_id.operation)) leaf_name_data.push_back(xconnect_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-info")
    {
        if(auth_info == nullptr)
        {
            auth_info = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo>();
        }
        return auth_info;
    }

    if(child_yang_name == "configured-timeout")
    {
        if(configured_timeout == nullptr)
        {
            configured_timeout = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout>();
        }
        return configured_timeout;
    }

    if(child_yang_name == "mp-info")
    {
        if(mp_info == nullptr)
        {
            mp_info = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo>();
        }
        return mp_info;
    }

    if(child_yang_name == "ncp-info-array")
    {
        for(auto const & c : ncp_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray>();
        c->parent = this;
        ncp_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_info != nullptr)
    {
        children["auth-info"] = auth_info;
    }

    if(configured_timeout != nullptr)
    {
        children["configured-timeout"] = configured_timeout;
    }

    if(mp_info != nullptr)
    {
        children["mp-info"] = mp_info;
    }

    for (auto const & c : ncp_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "ip-interworking-enabled")
    {
        ip_interworking_enabled = value;
    }
    if(value_path == "is-l2ac")
    {
        is_l2ac = value;
    }
    if(value_path == "is-lcp-delayed")
    {
        is_lcp_delayed = value;
    }
    if(value_path == "is-loopback-detected")
    {
        is_loopback_detected = value;
    }
    if(value_path == "is-mcmp-enabled")
    {
        is_mcmp_enabled = value;
    }
    if(value_path == "is-ssrp-configured")
    {
        is_ssrp_configured = value;
    }
    if(value_path == "is-tunneled-session")
    {
        is_tunneled_session = value;
    }
    if(value_path == "keepalive-period")
    {
        keepalive_period = value;
    }
    if(value_path == "keepalive-retry-count")
    {
        keepalive_retry_count = value;
    }
    if(value_path == "lcp-state")
    {
        lcp_state = value;
    }
    if(value_path == "lcpsso-state")
    {
        lcpsso_state = value;
    }
    if(value_path == "line-state")
    {
        line_state = value;
    }
    if(value_path == "local-ed")
    {
        local_ed = value;
    }
    if(value_path == "local-mcmp-classes")
    {
        local_mcmp_classes = value;
    }
    if(value_path == "local-mrru")
    {
        local_mrru = value;
    }
    if(value_path == "local-mru")
    {
        local_mru = value;
    }
    if(value_path == "parent-state")
    {
        parent_state = value;
    }
    if(value_path == "peer-ed")
    {
        peer_ed = value;
    }
    if(value_path == "peer-mcmp-classes")
    {
        peer_mcmp_classes = value;
    }
    if(value_path == "peer-mrru")
    {
        peer_mrru = value;
    }
    if(value_path == "peer-mru")
    {
        peer_mru = value;
    }
    if(value_path == "provisioned")
    {
        provisioned = value;
    }
    if(value_path == "session-expires")
    {
        session_expires = value;
    }
    if(value_path == "srg-role")
    {
        srg_role = value;
    }
    if(value_path == "ssrp-peer-id")
    {
        ssrp_peer_id = value;
    }
    if(value_path == "xconnect-id")
    {
        xconnect_id = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpInfo()
    :
    active_links{YType::uint16, "active-links"},
    inactive_links{YType::uint16, "inactive-links"},
    is_mp_bundle{YType::boolean, "is-mp-bundle"},
    is_mp_bundle_member{YType::boolean, "is-mp-bundle-member"},
    minimum_active_links{YType::uint16, "minimum-active-links"},
    mp_bundle_interface{YType::str, "mp-bundle-interface"},
    mp_group{YType::uint32, "mp-group"},
    mp_state{YType::enumeration, "mp-state"}
{
    yang_name = "mp-info"; yang_parent_name = "node-interface";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::~MpInfo()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::has_data() const
{
    for (std::size_t index=0; index<mp_member_info_array.size(); index++)
    {
        if(mp_member_info_array[index]->has_data())
            return true;
    }
    return active_links.is_set
	|| inactive_links.is_set
	|| is_mp_bundle.is_set
	|| is_mp_bundle_member.is_set
	|| minimum_active_links.is_set
	|| mp_bundle_interface.is_set
	|| mp_group.is_set
	|| mp_state.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::has_operation() const
{
    for (std::size_t index=0; index<mp_member_info_array.size(); index++)
    {
        if(mp_member_info_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active_links.operation)
	|| is_set(inactive_links.operation)
	|| is_set(is_mp_bundle.operation)
	|| is_set(is_mp_bundle_member.operation)
	|| is_set(minimum_active_links.operation)
	|| is_set(mp_bundle_interface.operation)
	|| is_set(mp_group.operation)
	|| is_set(mp_state.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-info";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MpInfo' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_links.is_set || is_set(active_links.operation)) leaf_name_data.push_back(active_links.get_name_leafdata());
    if (inactive_links.is_set || is_set(inactive_links.operation)) leaf_name_data.push_back(inactive_links.get_name_leafdata());
    if (is_mp_bundle.is_set || is_set(is_mp_bundle.operation)) leaf_name_data.push_back(is_mp_bundle.get_name_leafdata());
    if (is_mp_bundle_member.is_set || is_set(is_mp_bundle_member.operation)) leaf_name_data.push_back(is_mp_bundle_member.get_name_leafdata());
    if (minimum_active_links.is_set || is_set(minimum_active_links.operation)) leaf_name_data.push_back(minimum_active_links.get_name_leafdata());
    if (mp_bundle_interface.is_set || is_set(mp_bundle_interface.operation)) leaf_name_data.push_back(mp_bundle_interface.get_name_leafdata());
    if (mp_group.is_set || is_set(mp_group.operation)) leaf_name_data.push_back(mp_group.get_name_leafdata());
    if (mp_state.is_set || is_set(mp_state.operation)) leaf_name_data.push_back(mp_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mp-member-info-array")
    {
        for(auto const & c : mp_member_info_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray>();
        c->parent = this;
        mp_member_info_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mp_member_info_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-links")
    {
        active_links = value;
    }
    if(value_path == "inactive-links")
    {
        inactive_links = value;
    }
    if(value_path == "is-mp-bundle")
    {
        is_mp_bundle = value;
    }
    if(value_path == "is-mp-bundle-member")
    {
        is_mp_bundle_member = value;
    }
    if(value_path == "minimum-active-links")
    {
        minimum_active_links = value;
    }
    if(value_path == "mp-bundle-interface")
    {
        mp_bundle_interface = value;
    }
    if(value_path == "mp-group")
    {
        mp_group = value;
    }
    if(value_path == "mp-state")
    {
        mp_state = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::MpMemberInfoArray()
    :
    interface{YType::str, "interface"},
    state{YType::enumeration, "state"}
{
    yang_name = "mp-member-info-array"; yang_parent_name = "mp-info";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::~MpMemberInfoArray()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::has_data() const
{
    return interface.is_set
	|| state.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| is_set(state.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mp-member-info-array";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MpMemberInfoArray' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::MpInfo::MpMemberInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::ConfiguredTimeout()
    :
    minutes{YType::uint32, "minutes"},
    seconds{YType::uint8, "seconds"}
{
    yang_name = "configured-timeout"; yang_parent_name = "node-interface";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::~ConfiguredTimeout()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::has_data() const
{
    return minutes.is_set
	|| seconds.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::has_operation() const
{
    return is_set(operation)
	|| is_set(minutes.operation)
	|| is_set(seconds.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configured-timeout";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ConfiguredTimeout' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (minutes.is_set || is_set(minutes.operation)) leaf_name_data.push_back(minutes.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::ConfiguredTimeout::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "minutes")
    {
        minutes = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::AuthInfo()
    :
    is_authenticated{YType::boolean, "is-authenticated"},
    is_sso_authenticated{YType::boolean, "is-sso-authenticated"},
    of_peer_auth{YType::uint8, "of-peer-auth"},
    of_peer_name{YType::str, "of-peer-name"},
    of_peer_sso_state{YType::enumeration, "of-peer-sso-state"},
    of_us_auth{YType::uint8, "of-us-auth"},
    of_us_name{YType::str, "of-us-name"},
    of_us_sso_state{YType::enumeration, "of-us-sso-state"}
{
    yang_name = "auth-info"; yang_parent_name = "node-interface";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::~AuthInfo()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::has_data() const
{
    return is_authenticated.is_set
	|| is_sso_authenticated.is_set
	|| of_peer_auth.is_set
	|| of_peer_name.is_set
	|| of_peer_sso_state.is_set
	|| of_us_auth.is_set
	|| of_us_name.is_set
	|| of_us_sso_state.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(is_authenticated.operation)
	|| is_set(is_sso_authenticated.operation)
	|| is_set(of_peer_auth.operation)
	|| is_set(of_peer_name.operation)
	|| is_set(of_peer_sso_state.operation)
	|| is_set(of_us_auth.operation)
	|| is_set(of_us_name.operation)
	|| is_set(of_us_sso_state.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-info";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthInfo' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_authenticated.is_set || is_set(is_authenticated.operation)) leaf_name_data.push_back(is_authenticated.get_name_leafdata());
    if (is_sso_authenticated.is_set || is_set(is_sso_authenticated.operation)) leaf_name_data.push_back(is_sso_authenticated.get_name_leafdata());
    if (of_peer_auth.is_set || is_set(of_peer_auth.operation)) leaf_name_data.push_back(of_peer_auth.get_name_leafdata());
    if (of_peer_name.is_set || is_set(of_peer_name.operation)) leaf_name_data.push_back(of_peer_name.get_name_leafdata());
    if (of_peer_sso_state.is_set || is_set(of_peer_sso_state.operation)) leaf_name_data.push_back(of_peer_sso_state.get_name_leafdata());
    if (of_us_auth.is_set || is_set(of_us_auth.operation)) leaf_name_data.push_back(of_us_auth.get_name_leafdata());
    if (of_us_name.is_set || is_set(of_us_name.operation)) leaf_name_data.push_back(of_us_name.get_name_leafdata());
    if (of_us_sso_state.is_set || is_set(of_us_sso_state.operation)) leaf_name_data.push_back(of_us_sso_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::AuthInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-authenticated")
    {
        is_authenticated = value;
    }
    if(value_path == "is-sso-authenticated")
    {
        is_sso_authenticated = value;
    }
    if(value_path == "of-peer-auth")
    {
        of_peer_auth = value;
    }
    if(value_path == "of-peer-name")
    {
        of_peer_name = value;
    }
    if(value_path == "of-peer-sso-state")
    {
        of_peer_sso_state = value;
    }
    if(value_path == "of-us-auth")
    {
        of_us_auth = value;
    }
    if(value_path == "of-us-name")
    {
        of_us_name = value;
    }
    if(value_path == "of-us-sso-state")
    {
        of_us_sso_state = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfoArray()
    :
    is_passive{YType::boolean, "is-passive"},
    ncp_identifier{YType::enumeration, "ncp-identifier"},
    ncp_state{YType::enumeration, "ncp-state"},
    ncpsso_state{YType::enumeration, "ncpsso-state"}
    	,
    ncp_info(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo>())
{
    ncp_info->parent = this;

    yang_name = "ncp-info-array"; yang_parent_name = "node-interface";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::~NcpInfoArray()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::has_data() const
{
    return is_passive.is_set
	|| ncp_identifier.is_set
	|| ncp_state.is_set
	|| ncpsso_state.is_set
	|| (ncp_info !=  nullptr && ncp_info->has_data());
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::has_operation() const
{
    return is_set(operation)
	|| is_set(is_passive.operation)
	|| is_set(ncp_identifier.operation)
	|| is_set(ncp_state.operation)
	|| is_set(ncpsso_state.operation)
	|| (ncp_info !=  nullptr && ncp_info->has_operation());
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncp-info-array";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcpInfoArray' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_passive.is_set || is_set(is_passive.operation)) leaf_name_data.push_back(is_passive.get_name_leafdata());
    if (ncp_identifier.is_set || is_set(ncp_identifier.operation)) leaf_name_data.push_back(ncp_identifier.get_name_leafdata());
    if (ncp_state.is_set || is_set(ncp_state.operation)) leaf_name_data.push_back(ncp_state.get_name_leafdata());
    if (ncpsso_state.is_set || is_set(ncpsso_state.operation)) leaf_name_data.push_back(ncpsso_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ncp-info")
    {
        if(ncp_info == nullptr)
        {
            ncp_info = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo>();
        }
        return ncp_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ncp_info != nullptr)
    {
        children["ncp-info"] = ncp_info;
    }

    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-passive")
    {
        is_passive = value;
    }
    if(value_path == "ncp-identifier")
    {
        ncp_identifier = value;
    }
    if(value_path == "ncp-state")
    {
        ncp_state = value;
    }
    if(value_path == "ncpsso-state")
    {
        ncpsso_state = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::NcpInfo()
    :
    type{YType::enumeration, "type"}
    	,
    ipcp_info(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo>())
	,ipcpiw_info(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo>())
	,ipv6cp_info(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo>())
{
    ipcp_info->parent = this;

    ipcpiw_info->parent = this;

    ipv6cp_info->parent = this;

    yang_name = "ncp-info"; yang_parent_name = "ncp-info-array";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::~NcpInfo()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::has_data() const
{
    return type.is_set
	|| (ipcp_info !=  nullptr && ipcp_info->has_data())
	|| (ipcpiw_info !=  nullptr && ipcpiw_info->has_data())
	|| (ipv6cp_info !=  nullptr && ipv6cp_info->has_data());
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(type.operation)
	|| (ipcp_info !=  nullptr && ipcp_info->has_operation())
	|| (ipcpiw_info !=  nullptr && ipcpiw_info->has_operation())
	|| (ipv6cp_info !=  nullptr && ipv6cp_info->has_operation());
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncp-info";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcpInfo' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (type.is_set || is_set(type.operation)) leaf_name_data.push_back(type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcp-info")
    {
        if(ipcp_info == nullptr)
        {
            ipcp_info = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo>();
        }
        return ipcp_info;
    }

    if(child_yang_name == "ipcpiw-info")
    {
        if(ipcpiw_info == nullptr)
        {
            ipcpiw_info = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo>();
        }
        return ipcpiw_info;
    }

    if(child_yang_name == "ipv6cp-info")
    {
        if(ipv6cp_info == nullptr)
        {
            ipv6cp_info = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo>();
        }
        return ipv6cp_info;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcp_info != nullptr)
    {
        children["ipcp-info"] = ipcp_info;
    }

    if(ipcpiw_info != nullptr)
    {
        children["ipcpiw-info"] = ipcpiw_info;
    }

    if(ipv6cp_info != nullptr)
    {
        children["ipv6cp-info"] = ipv6cp_info;
    }

    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "type")
    {
        type = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::IpcpInfo()
    :
    dns_primary{YType::str, "dns-primary"},
    dns_secondary{YType::str, "dns-secondary"},
    is_iphc_configured{YType::boolean, "is-iphc-configured"},
    local_address{YType::str, "local-address"},
    peer_address{YType::str, "peer-address"},
    peer_netmask{YType::str, "peer-netmask"},
    wins_primary{YType::str, "wins-primary"},
    wins_secondary{YType::str, "wins-secondary"}
    	,
    local_iphc_options(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions>())
	,peer_iphc_options(std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions>())
{
    local_iphc_options->parent = this;

    peer_iphc_options->parent = this;

    yang_name = "ipcp-info"; yang_parent_name = "ncp-info";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::~IpcpInfo()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::has_data() const
{
    return dns_primary.is_set
	|| dns_secondary.is_set
	|| is_iphc_configured.is_set
	|| local_address.is_set
	|| peer_address.is_set
	|| peer_netmask.is_set
	|| wins_primary.is_set
	|| wins_secondary.is_set
	|| (local_iphc_options !=  nullptr && local_iphc_options->has_data())
	|| (peer_iphc_options !=  nullptr && peer_iphc_options->has_data());
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(dns_primary.operation)
	|| is_set(dns_secondary.operation)
	|| is_set(is_iphc_configured.operation)
	|| is_set(local_address.operation)
	|| is_set(peer_address.operation)
	|| is_set(peer_netmask.operation)
	|| is_set(wins_primary.operation)
	|| is_set(wins_secondary.operation)
	|| (local_iphc_options !=  nullptr && local_iphc_options->has_operation())
	|| (peer_iphc_options !=  nullptr && peer_iphc_options->has_operation());
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp-info";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpcpInfo' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dns_primary.is_set || is_set(dns_primary.operation)) leaf_name_data.push_back(dns_primary.get_name_leafdata());
    if (dns_secondary.is_set || is_set(dns_secondary.operation)) leaf_name_data.push_back(dns_secondary.get_name_leafdata());
    if (is_iphc_configured.is_set || is_set(is_iphc_configured.operation)) leaf_name_data.push_back(is_iphc_configured.get_name_leafdata());
    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());
    if (peer_netmask.is_set || is_set(peer_netmask.operation)) leaf_name_data.push_back(peer_netmask.get_name_leafdata());
    if (wins_primary.is_set || is_set(wins_primary.operation)) leaf_name_data.push_back(wins_primary.get_name_leafdata());
    if (wins_secondary.is_set || is_set(wins_secondary.operation)) leaf_name_data.push_back(wins_secondary.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local-iphc-options")
    {
        if(local_iphc_options == nullptr)
        {
            local_iphc_options = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions>();
        }
        return local_iphc_options;
    }

    if(child_yang_name == "peer-iphc-options")
    {
        if(peer_iphc_options == nullptr)
        {
            peer_iphc_options = std::make_shared<Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions>();
        }
        return peer_iphc_options;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local_iphc_options != nullptr)
    {
        children["local-iphc-options"] = local_iphc_options;
    }

    if(peer_iphc_options != nullptr)
    {
        children["peer-iphc-options"] = peer_iphc_options;
    }

    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dns-primary")
    {
        dns_primary = value;
    }
    if(value_path == "dns-secondary")
    {
        dns_secondary = value;
    }
    if(value_path == "is-iphc-configured")
    {
        is_iphc_configured = value;
    }
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
    if(value_path == "peer-netmask")
    {
        peer_netmask = value;
    }
    if(value_path == "wins-primary")
    {
        wins_primary = value;
    }
    if(value_path == "wins-secondary")
    {
        wins_secondary = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::LocalIphcOptions()
    :
    compression_type{YType::enumeration, "compression-type"},
    ec_rtp_compression{YType::boolean, "ec-rtp-compression"},
    max_header{YType::uint16, "max-header"},
    max_period{YType::uint16, "max-period"},
    max_time{YType::uint16, "max-time"},
    non_tcp_space{YType::uint16, "non-tcp-space"},
    rtp_compression{YType::boolean, "rtp-compression"},
    tcp_space{YType::uint16, "tcp-space"}
{
    yang_name = "local-iphc-options"; yang_parent_name = "ipcp-info";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::~LocalIphcOptions()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::has_data() const
{
    return compression_type.is_set
	|| ec_rtp_compression.is_set
	|| max_header.is_set
	|| max_period.is_set
	|| max_time.is_set
	|| non_tcp_space.is_set
	|| rtp_compression.is_set
	|| tcp_space.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(compression_type.operation)
	|| is_set(ec_rtp_compression.operation)
	|| is_set(max_header.operation)
	|| is_set(max_period.operation)
	|| is_set(max_time.operation)
	|| is_set(non_tcp_space.operation)
	|| is_set(rtp_compression.operation)
	|| is_set(tcp_space.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local-iphc-options";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LocalIphcOptions' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compression_type.is_set || is_set(compression_type.operation)) leaf_name_data.push_back(compression_type.get_name_leafdata());
    if (ec_rtp_compression.is_set || is_set(ec_rtp_compression.operation)) leaf_name_data.push_back(ec_rtp_compression.get_name_leafdata());
    if (max_header.is_set || is_set(max_header.operation)) leaf_name_data.push_back(max_header.get_name_leafdata());
    if (max_period.is_set || is_set(max_period.operation)) leaf_name_data.push_back(max_period.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.operation)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (non_tcp_space.is_set || is_set(non_tcp_space.operation)) leaf_name_data.push_back(non_tcp_space.get_name_leafdata());
    if (rtp_compression.is_set || is_set(rtp_compression.operation)) leaf_name_data.push_back(rtp_compression.get_name_leafdata());
    if (tcp_space.is_set || is_set(tcp_space.operation)) leaf_name_data.push_back(tcp_space.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::LocalIphcOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compression-type")
    {
        compression_type = value;
    }
    if(value_path == "ec-rtp-compression")
    {
        ec_rtp_compression = value;
    }
    if(value_path == "max-header")
    {
        max_header = value;
    }
    if(value_path == "max-period")
    {
        max_period = value;
    }
    if(value_path == "max-time")
    {
        max_time = value;
    }
    if(value_path == "non-tcp-space")
    {
        non_tcp_space = value;
    }
    if(value_path == "rtp-compression")
    {
        rtp_compression = value;
    }
    if(value_path == "tcp-space")
    {
        tcp_space = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::PeerIphcOptions()
    :
    compression_type{YType::enumeration, "compression-type"},
    ec_rtp_compression{YType::boolean, "ec-rtp-compression"},
    max_header{YType::uint16, "max-header"},
    max_period{YType::uint16, "max-period"},
    max_time{YType::uint16, "max-time"},
    non_tcp_space{YType::uint16, "non-tcp-space"},
    rtp_compression{YType::boolean, "rtp-compression"},
    tcp_space{YType::uint16, "tcp-space"}
{
    yang_name = "peer-iphc-options"; yang_parent_name = "ipcp-info";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::~PeerIphcOptions()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::has_data() const
{
    return compression_type.is_set
	|| ec_rtp_compression.is_set
	|| max_header.is_set
	|| max_period.is_set
	|| max_time.is_set
	|| non_tcp_space.is_set
	|| rtp_compression.is_set
	|| tcp_space.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::has_operation() const
{
    return is_set(operation)
	|| is_set(compression_type.operation)
	|| is_set(ec_rtp_compression.operation)
	|| is_set(max_header.operation)
	|| is_set(max_period.operation)
	|| is_set(max_time.operation)
	|| is_set(non_tcp_space.operation)
	|| is_set(rtp_compression.operation)
	|| is_set(tcp_space.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "peer-iphc-options";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PeerIphcOptions' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (compression_type.is_set || is_set(compression_type.operation)) leaf_name_data.push_back(compression_type.get_name_leafdata());
    if (ec_rtp_compression.is_set || is_set(ec_rtp_compression.operation)) leaf_name_data.push_back(ec_rtp_compression.get_name_leafdata());
    if (max_header.is_set || is_set(max_header.operation)) leaf_name_data.push_back(max_header.get_name_leafdata());
    if (max_period.is_set || is_set(max_period.operation)) leaf_name_data.push_back(max_period.get_name_leafdata());
    if (max_time.is_set || is_set(max_time.operation)) leaf_name_data.push_back(max_time.get_name_leafdata());
    if (non_tcp_space.is_set || is_set(non_tcp_space.operation)) leaf_name_data.push_back(non_tcp_space.get_name_leafdata());
    if (rtp_compression.is_set || is_set(rtp_compression.operation)) leaf_name_data.push_back(rtp_compression.get_name_leafdata());
    if (tcp_space.is_set || is_set(tcp_space.operation)) leaf_name_data.push_back(tcp_space.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpInfo::PeerIphcOptions::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "compression-type")
    {
        compression_type = value;
    }
    if(value_path == "ec-rtp-compression")
    {
        ec_rtp_compression = value;
    }
    if(value_path == "max-header")
    {
        max_header = value;
    }
    if(value_path == "max-period")
    {
        max_period = value;
    }
    if(value_path == "max-time")
    {
        max_time = value;
    }
    if(value_path == "non-tcp-space")
    {
        non_tcp_space = value;
    }
    if(value_path == "rtp-compression")
    {
        rtp_compression = value;
    }
    if(value_path == "tcp-space")
    {
        tcp_space = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::IpcpiwInfo()
    :
    local_address{YType::str, "local-address"},
    peer_address{YType::str, "peer-address"}
{
    yang_name = "ipcpiw-info"; yang_parent_name = "ncp-info";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::~IpcpiwInfo()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::has_data() const
{
    return local_address.is_set
	|| peer_address.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(peer_address.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcpiw-info";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpcpiwInfo' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::IpcpiwInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::Ipv6CpInfo()
    :
    local_address{YType::str, "local-address"},
    peer_address{YType::str, "peer-address"}
{
    yang_name = "ipv6cp-info"; yang_parent_name = "ncp-info";
}

Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::~Ipv6CpInfo()
{
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::has_data() const
{
    return local_address.is_set
	|| peer_address.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::has_operation() const
{
    return is_set(operation)
	|| is_set(local_address.operation)
	|| is_set(peer_address.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6cp-info";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6CpInfo' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_address.is_set || is_set(local_address.operation)) leaf_name_data.push_back(local_address.get_name_leafdata());
    if (peer_address.is_set || is_set(peer_address.operation)) leaf_name_data.push_back(peer_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaces::NodeInterface::NcpInfoArray::NcpInfo::Ipv6CpInfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "local-address")
    {
        local_address = value;
    }
    if(value_path == "peer-address")
    {
        peer_address = value;
    }
}

Ppp::Nodes::Node::SsoAlerts::SsoAlerts()
{
    yang_name = "sso-alerts"; yang_parent_name = "node";
}

Ppp::Nodes::Node::SsoAlerts::~SsoAlerts()
{
}

bool Ppp::Nodes::Node::SsoAlerts::has_data() const
{
    for (std::size_t index=0; index<sso_alert.size(); index++)
    {
        if(sso_alert[index]->has_data())
            return true;
    }
    return false;
}

bool Ppp::Nodes::Node::SsoAlerts::has_operation() const
{
    for (std::size_t index=0; index<sso_alert.size(); index++)
    {
        if(sso_alert[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ppp::Nodes::Node::SsoAlerts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso-alerts";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoAlerts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsoAlerts' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoAlerts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso-alert")
    {
        for(auto const & c : sso_alert)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert>();
        c->parent = this;
        sso_alert.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoAlerts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sso_alert)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::SsoAlerts::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::SsoAlert()
    :
    interface{YType::str, "interface"}
    	,
    ipcp_error(std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError>())
	,lcp_error(std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError>())
	,of_peer_auth_error(std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError>())
	,of_us_auth_error(std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError>())
{
    ipcp_error->parent = this;

    lcp_error->parent = this;

    of_peer_auth_error->parent = this;

    of_us_auth_error->parent = this;

    yang_name = "sso-alert"; yang_parent_name = "sso-alerts";
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::~SsoAlert()
{
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::has_data() const
{
    return interface.is_set
	|| (ipcp_error !=  nullptr && ipcp_error->has_data())
	|| (lcp_error !=  nullptr && lcp_error->has_data())
	|| (of_peer_auth_error !=  nullptr && of_peer_auth_error->has_data())
	|| (of_us_auth_error !=  nullptr && of_us_auth_error->has_data());
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::has_operation() const
{
    return is_set(operation)
	|| is_set(interface.operation)
	|| (ipcp_error !=  nullptr && ipcp_error->has_operation())
	|| (lcp_error !=  nullptr && lcp_error->has_operation())
	|| (of_peer_auth_error !=  nullptr && of_peer_auth_error->has_operation())
	|| (of_us_auth_error !=  nullptr && of_us_auth_error->has_operation());
}

std::string Ppp::Nodes::Node::SsoAlerts::SsoAlert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso-alert" <<"[interface='" <<interface <<"']";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoAlerts::SsoAlert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsoAlert' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoAlerts::SsoAlert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcp-error")
    {
        if(ipcp_error == nullptr)
        {
            ipcp_error = std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError>();
        }
        return ipcp_error;
    }

    if(child_yang_name == "lcp-error")
    {
        if(lcp_error == nullptr)
        {
            lcp_error = std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError>();
        }
        return lcp_error;
    }

    if(child_yang_name == "of-peer-auth-error")
    {
        if(of_peer_auth_error == nullptr)
        {
            of_peer_auth_error = std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError>();
        }
        return of_peer_auth_error;
    }

    if(child_yang_name == "of-us-auth-error")
    {
        if(of_us_auth_error == nullptr)
        {
            of_us_auth_error = std::make_shared<Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError>();
        }
        return of_us_auth_error;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoAlerts::SsoAlert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcp_error != nullptr)
    {
        children["ipcp-error"] = ipcp_error;
    }

    if(lcp_error != nullptr)
    {
        children["lcp-error"] = lcp_error;
    }

    if(of_peer_auth_error != nullptr)
    {
        children["of-peer-auth-error"] = of_peer_auth_error;
    }

    if(of_us_auth_error != nullptr)
    {
        children["of-us-auth-error"] = of_us_auth_error;
    }

    return children;
}

void Ppp::Nodes::Node::SsoAlerts::SsoAlert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface")
    {
        interface = value;
    }
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::LcpError()
    :
    context{YType::uint32, "context"},
    error{YType::uint32, "error"},
    is_error{YType::boolean, "is-error"}
{
    yang_name = "lcp-error"; yang_parent_name = "sso-alert";
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::~LcpError()
{
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::has_data() const
{
    return context.is_set
	|| error.is_set
	|| is_error.is_set;
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::has_operation() const
{
    return is_set(operation)
	|| is_set(context.operation)
	|| is_set(error.operation)
	|| is_set(is_error.operation);
}

std::string Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp-error";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcpError' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (is_error.is_set || is_set(is_error.operation)) leaf_name_data.push_back(is_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoAlerts::SsoAlert::LcpError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "is-error")
    {
        is_error = value;
    }
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::OfUsAuthError()
    :
    context{YType::uint32, "context"},
    error{YType::uint32, "error"},
    is_error{YType::boolean, "is-error"}
{
    yang_name = "of-us-auth-error"; yang_parent_name = "sso-alert";
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::~OfUsAuthError()
{
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::has_data() const
{
    return context.is_set
	|| error.is_set
	|| is_error.is_set;
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::has_operation() const
{
    return is_set(operation)
	|| is_set(context.operation)
	|| is_set(error.operation)
	|| is_set(is_error.operation);
}

std::string Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "of-us-auth-error";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OfUsAuthError' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (is_error.is_set || is_set(is_error.operation)) leaf_name_data.push_back(is_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfUsAuthError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "is-error")
    {
        is_error = value;
    }
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::OfPeerAuthError()
    :
    context{YType::uint32, "context"},
    error{YType::uint32, "error"},
    is_error{YType::boolean, "is-error"}
{
    yang_name = "of-peer-auth-error"; yang_parent_name = "sso-alert";
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::~OfPeerAuthError()
{
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::has_data() const
{
    return context.is_set
	|| error.is_set
	|| is_error.is_set;
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::has_operation() const
{
    return is_set(operation)
	|| is_set(context.operation)
	|| is_set(error.operation)
	|| is_set(is_error.operation);
}

std::string Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "of-peer-auth-error";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OfPeerAuthError' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (is_error.is_set || is_set(is_error.operation)) leaf_name_data.push_back(is_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoAlerts::SsoAlert::OfPeerAuthError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "is-error")
    {
        is_error = value;
    }
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::IpcpError()
    :
    context{YType::uint32, "context"},
    error{YType::uint32, "error"},
    is_error{YType::boolean, "is-error"}
{
    yang_name = "ipcp-error"; yang_parent_name = "sso-alert";
}

Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::~IpcpError()
{
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::has_data() const
{
    return context.is_set
	|| error.is_set
	|| is_error.is_set;
}

bool Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::has_operation() const
{
    return is_set(operation)
	|| is_set(context.operation)
	|| is_set(error.operation)
	|| is_set(is_error.operation);
}

std::string Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp-error";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpcpError' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (context.is_set || is_set(context.operation)) leaf_name_data.push_back(context.get_name_leafdata());
    if (error.is_set || is_set(error.operation)) leaf_name_data.push_back(error.get_name_leafdata());
    if (is_error.is_set || is_set(is_error.operation)) leaf_name_data.push_back(is_error.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoAlerts::SsoAlert::IpcpError::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "context")
    {
        context = value;
    }
    if(value_path == "error")
    {
        error = value;
    }
    if(value_path == "is-error")
    {
        is_error = value;
    }
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistics()
{
    yang_name = "node-interface-statistics"; yang_parent_name = "node";
}

Ppp::Nodes::Node::NodeInterfaceStatistics::~NodeInterfaceStatistics()
{
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::has_data() const
{
    for (std::size_t index=0; index<node_interface_statistic.size(); index++)
    {
        if(node_interface_statistic[index]->has_data())
            return true;
    }
    return false;
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::has_operation() const
{
    for (std::size_t index=0; index<node_interface_statistic.size(); index++)
    {
        if(node_interface_statistic[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ppp::Nodes::Node::NodeInterfaceStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-statistics";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaceStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeInterfaceStatistics' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaceStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node-interface-statistic")
    {
        for(auto const & c : node_interface_statistic)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic>();
        c->parent = this;
        node_interface_statistic.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaceStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node_interface_statistic)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::NodeInterfaceStatistics::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NodeInterfaceStatistic()
    :
    interface_name{YType::str, "interface-name"}
    	,
    authentication_statistics(std::make_shared<Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics>())
	,lcp_statistics(std::make_shared<Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics>())
{
    authentication_statistics->parent = this;

    lcp_statistics->parent = this;

    yang_name = "node-interface-statistic"; yang_parent_name = "node-interface-statistics";
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::~NodeInterfaceStatistic()
{
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::has_data() const
{
    for (std::size_t index=0; index<ncp_statistics_array.size(); index++)
    {
        if(ncp_statistics_array[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_data())
	|| (lcp_statistics !=  nullptr && lcp_statistics->has_data());
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::has_operation() const
{
    for (std::size_t index=0; index<ncp_statistics_array.size(); index++)
    {
        if(ncp_statistics_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_operation())
	|| (lcp_statistics !=  nullptr && lcp_statistics->has_operation());
}

std::string Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node-interface-statistic" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NodeInterfaceStatistic' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-statistics")
    {
        if(authentication_statistics == nullptr)
        {
            authentication_statistics = std::make_shared<Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics>();
        }
        return authentication_statistics;
    }

    if(child_yang_name == "lcp-statistics")
    {
        if(lcp_statistics == nullptr)
        {
            lcp_statistics = std::make_shared<Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics>();
        }
        return lcp_statistics;
    }

    if(child_yang_name == "ncp-statistics-array")
    {
        for(auto const & c : ncp_statistics_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray>();
        c->parent = this;
        ncp_statistics_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication_statistics != nullptr)
    {
        children["authentication-statistics"] = authentication_statistics;
    }

    if(lcp_statistics != nullptr)
    {
        children["lcp-statistics"] = lcp_statistics;
    }

    for (auto const & c : ncp_statistics_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::LcpStatistics()
    :
    conf_ack_rcvd{YType::uint16, "conf-ack-rcvd"},
    conf_ack_sent{YType::uint16, "conf-ack-sent"},
    conf_nak_rcvd{YType::uint16, "conf-nak-rcvd"},
    conf_nak_sent{YType::uint16, "conf-nak-sent"},
    conf_rej_rcvd{YType::uint16, "conf-rej-rcvd"},
    conf_rej_sent{YType::uint16, "conf-rej-sent"},
    conf_req_rcvd{YType::uint16, "conf-req-rcvd"},
    conf_req_sent{YType::uint16, "conf-req-sent"},
    disc_req_rcvd{YType::uint16, "disc-req-rcvd"},
    disc_req_sent{YType::uint16, "disc-req-sent"},
    echo_rep_rcvd{YType::uint16, "echo-rep-rcvd"},
    echo_rep_sent{YType::uint16, "echo-rep-sent"},
    echo_req_rcvd{YType::uint16, "echo-req-rcvd"},
    echo_req_sent{YType::uint16, "echo-req-sent"},
    link_error{YType::uint16, "link-error"},
    link_up{YType::uint16, "link-up"}
{
    yang_name = "lcp-statistics"; yang_parent_name = "node-interface-statistic";
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::~LcpStatistics()
{
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::has_data() const
{
    return conf_ack_rcvd.is_set
	|| conf_ack_sent.is_set
	|| conf_nak_rcvd.is_set
	|| conf_nak_sent.is_set
	|| conf_rej_rcvd.is_set
	|| conf_rej_sent.is_set
	|| conf_req_rcvd.is_set
	|| conf_req_sent.is_set
	|| disc_req_rcvd.is_set
	|| disc_req_sent.is_set
	|| echo_rep_rcvd.is_set
	|| echo_rep_sent.is_set
	|| echo_req_rcvd.is_set
	|| echo_req_sent.is_set
	|| link_error.is_set
	|| link_up.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(conf_ack_rcvd.operation)
	|| is_set(conf_ack_sent.operation)
	|| is_set(conf_nak_rcvd.operation)
	|| is_set(conf_nak_sent.operation)
	|| is_set(conf_rej_rcvd.operation)
	|| is_set(conf_rej_sent.operation)
	|| is_set(conf_req_rcvd.operation)
	|| is_set(conf_req_sent.operation)
	|| is_set(disc_req_rcvd.operation)
	|| is_set(disc_req_sent.operation)
	|| is_set(echo_rep_rcvd.operation)
	|| is_set(echo_rep_sent.operation)
	|| is_set(echo_req_rcvd.operation)
	|| is_set(echo_req_sent.operation)
	|| is_set(link_error.operation)
	|| is_set(link_up.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp-statistics";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcpStatistics' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conf_ack_rcvd.is_set || is_set(conf_ack_rcvd.operation)) leaf_name_data.push_back(conf_ack_rcvd.get_name_leafdata());
    if (conf_ack_sent.is_set || is_set(conf_ack_sent.operation)) leaf_name_data.push_back(conf_ack_sent.get_name_leafdata());
    if (conf_nak_rcvd.is_set || is_set(conf_nak_rcvd.operation)) leaf_name_data.push_back(conf_nak_rcvd.get_name_leafdata());
    if (conf_nak_sent.is_set || is_set(conf_nak_sent.operation)) leaf_name_data.push_back(conf_nak_sent.get_name_leafdata());
    if (conf_rej_rcvd.is_set || is_set(conf_rej_rcvd.operation)) leaf_name_data.push_back(conf_rej_rcvd.get_name_leafdata());
    if (conf_rej_sent.is_set || is_set(conf_rej_sent.operation)) leaf_name_data.push_back(conf_rej_sent.get_name_leafdata());
    if (conf_req_rcvd.is_set || is_set(conf_req_rcvd.operation)) leaf_name_data.push_back(conf_req_rcvd.get_name_leafdata());
    if (conf_req_sent.is_set || is_set(conf_req_sent.operation)) leaf_name_data.push_back(conf_req_sent.get_name_leafdata());
    if (disc_req_rcvd.is_set || is_set(disc_req_rcvd.operation)) leaf_name_data.push_back(disc_req_rcvd.get_name_leafdata());
    if (disc_req_sent.is_set || is_set(disc_req_sent.operation)) leaf_name_data.push_back(disc_req_sent.get_name_leafdata());
    if (echo_rep_rcvd.is_set || is_set(echo_rep_rcvd.operation)) leaf_name_data.push_back(echo_rep_rcvd.get_name_leafdata());
    if (echo_rep_sent.is_set || is_set(echo_rep_sent.operation)) leaf_name_data.push_back(echo_rep_sent.get_name_leafdata());
    if (echo_req_rcvd.is_set || is_set(echo_req_rcvd.operation)) leaf_name_data.push_back(echo_req_rcvd.get_name_leafdata());
    if (echo_req_sent.is_set || is_set(echo_req_sent.operation)) leaf_name_data.push_back(echo_req_sent.get_name_leafdata());
    if (link_error.is_set || is_set(link_error.operation)) leaf_name_data.push_back(link_error.get_name_leafdata());
    if (link_up.is_set || is_set(link_up.operation)) leaf_name_data.push_back(link_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::LcpStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conf-ack-rcvd")
    {
        conf_ack_rcvd = value;
    }
    if(value_path == "conf-ack-sent")
    {
        conf_ack_sent = value;
    }
    if(value_path == "conf-nak-rcvd")
    {
        conf_nak_rcvd = value;
    }
    if(value_path == "conf-nak-sent")
    {
        conf_nak_sent = value;
    }
    if(value_path == "conf-rej-rcvd")
    {
        conf_rej_rcvd = value;
    }
    if(value_path == "conf-rej-sent")
    {
        conf_rej_sent = value;
    }
    if(value_path == "conf-req-rcvd")
    {
        conf_req_rcvd = value;
    }
    if(value_path == "conf-req-sent")
    {
        conf_req_sent = value;
    }
    if(value_path == "disc-req-rcvd")
    {
        disc_req_rcvd = value;
    }
    if(value_path == "disc-req-sent")
    {
        disc_req_sent = value;
    }
    if(value_path == "echo-rep-rcvd")
    {
        echo_rep_rcvd = value;
    }
    if(value_path == "echo-rep-sent")
    {
        echo_rep_sent = value;
    }
    if(value_path == "echo-req-rcvd")
    {
        echo_req_rcvd = value;
    }
    if(value_path == "echo-req-sent")
    {
        echo_req_sent = value;
    }
    if(value_path == "link-error")
    {
        link_error = value;
    }
    if(value_path == "link-up")
    {
        link_up = value;
    }
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::AuthenticationStatistics()
    :
    auth_timeout_count{YType::uint16, "auth-timeout-count"},
    chap_chall_rcvd{YType::uint16, "chap-chall-rcvd"},
    chap_chall_sent{YType::uint16, "chap-chall-sent"},
    chap_rep_fail_rcvd{YType::uint16, "chap-rep-fail-rcvd"},
    chap_rep_fail_sent{YType::uint16, "chap-rep-fail-sent"},
    chap_rep_succ_rcvd{YType::uint16, "chap-rep-succ-rcvd"},
    chap_rep_succ_sent{YType::uint16, "chap-rep-succ-sent"},
    chap_resp_rcvd{YType::uint16, "chap-resp-rcvd"},
    chap_resp_sent{YType::uint16, "chap-resp-sent"},
    pap_ack_rcvd{YType::uint16, "pap-ack-rcvd"},
    pap_ack_sent{YType::uint16, "pap-ack-sent"},
    pap_nak_rcvd{YType::uint16, "pap-nak-rcvd"},
    pap_nak_sent{YType::uint16, "pap-nak-sent"},
    pap_req_rcvd{YType::uint16, "pap-req-rcvd"},
    pap_req_sent{YType::uint16, "pap-req-sent"}
{
    yang_name = "authentication-statistics"; yang_parent_name = "node-interface-statistic";
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::~AuthenticationStatistics()
{
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::has_data() const
{
    return auth_timeout_count.is_set
	|| chap_chall_rcvd.is_set
	|| chap_chall_sent.is_set
	|| chap_rep_fail_rcvd.is_set
	|| chap_rep_fail_sent.is_set
	|| chap_rep_succ_rcvd.is_set
	|| chap_rep_succ_sent.is_set
	|| chap_resp_rcvd.is_set
	|| chap_resp_sent.is_set
	|| pap_ack_rcvd.is_set
	|| pap_ack_sent.is_set
	|| pap_nak_rcvd.is_set
	|| pap_nak_sent.is_set
	|| pap_req_rcvd.is_set
	|| pap_req_sent.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_timeout_count.operation)
	|| is_set(chap_chall_rcvd.operation)
	|| is_set(chap_chall_sent.operation)
	|| is_set(chap_rep_fail_rcvd.operation)
	|| is_set(chap_rep_fail_sent.operation)
	|| is_set(chap_rep_succ_rcvd.operation)
	|| is_set(chap_rep_succ_sent.operation)
	|| is_set(chap_resp_rcvd.operation)
	|| is_set(chap_resp_sent.operation)
	|| is_set(pap_ack_rcvd.operation)
	|| is_set(pap_ack_sent.operation)
	|| is_set(pap_nak_rcvd.operation)
	|| is_set(pap_nak_sent.operation)
	|| is_set(pap_req_rcvd.operation)
	|| is_set(pap_req_sent.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-statistics";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationStatistics' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_timeout_count.is_set || is_set(auth_timeout_count.operation)) leaf_name_data.push_back(auth_timeout_count.get_name_leafdata());
    if (chap_chall_rcvd.is_set || is_set(chap_chall_rcvd.operation)) leaf_name_data.push_back(chap_chall_rcvd.get_name_leafdata());
    if (chap_chall_sent.is_set || is_set(chap_chall_sent.operation)) leaf_name_data.push_back(chap_chall_sent.get_name_leafdata());
    if (chap_rep_fail_rcvd.is_set || is_set(chap_rep_fail_rcvd.operation)) leaf_name_data.push_back(chap_rep_fail_rcvd.get_name_leafdata());
    if (chap_rep_fail_sent.is_set || is_set(chap_rep_fail_sent.operation)) leaf_name_data.push_back(chap_rep_fail_sent.get_name_leafdata());
    if (chap_rep_succ_rcvd.is_set || is_set(chap_rep_succ_rcvd.operation)) leaf_name_data.push_back(chap_rep_succ_rcvd.get_name_leafdata());
    if (chap_rep_succ_sent.is_set || is_set(chap_rep_succ_sent.operation)) leaf_name_data.push_back(chap_rep_succ_sent.get_name_leafdata());
    if (chap_resp_rcvd.is_set || is_set(chap_resp_rcvd.operation)) leaf_name_data.push_back(chap_resp_rcvd.get_name_leafdata());
    if (chap_resp_sent.is_set || is_set(chap_resp_sent.operation)) leaf_name_data.push_back(chap_resp_sent.get_name_leafdata());
    if (pap_ack_rcvd.is_set || is_set(pap_ack_rcvd.operation)) leaf_name_data.push_back(pap_ack_rcvd.get_name_leafdata());
    if (pap_ack_sent.is_set || is_set(pap_ack_sent.operation)) leaf_name_data.push_back(pap_ack_sent.get_name_leafdata());
    if (pap_nak_rcvd.is_set || is_set(pap_nak_rcvd.operation)) leaf_name_data.push_back(pap_nak_rcvd.get_name_leafdata());
    if (pap_nak_sent.is_set || is_set(pap_nak_sent.operation)) leaf_name_data.push_back(pap_nak_sent.get_name_leafdata());
    if (pap_req_rcvd.is_set || is_set(pap_req_rcvd.operation)) leaf_name_data.push_back(pap_req_rcvd.get_name_leafdata());
    if (pap_req_sent.is_set || is_set(pap_req_sent.operation)) leaf_name_data.push_back(pap_req_sent.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::AuthenticationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-timeout-count")
    {
        auth_timeout_count = value;
    }
    if(value_path == "chap-chall-rcvd")
    {
        chap_chall_rcvd = value;
    }
    if(value_path == "chap-chall-sent")
    {
        chap_chall_sent = value;
    }
    if(value_path == "chap-rep-fail-rcvd")
    {
        chap_rep_fail_rcvd = value;
    }
    if(value_path == "chap-rep-fail-sent")
    {
        chap_rep_fail_sent = value;
    }
    if(value_path == "chap-rep-succ-rcvd")
    {
        chap_rep_succ_rcvd = value;
    }
    if(value_path == "chap-rep-succ-sent")
    {
        chap_rep_succ_sent = value;
    }
    if(value_path == "chap-resp-rcvd")
    {
        chap_resp_rcvd = value;
    }
    if(value_path == "chap-resp-sent")
    {
        chap_resp_sent = value;
    }
    if(value_path == "pap-ack-rcvd")
    {
        pap_ack_rcvd = value;
    }
    if(value_path == "pap-ack-sent")
    {
        pap_ack_sent = value;
    }
    if(value_path == "pap-nak-rcvd")
    {
        pap_nak_rcvd = value;
    }
    if(value_path == "pap-nak-sent")
    {
        pap_nak_sent = value;
    }
    if(value_path == "pap-req-rcvd")
    {
        pap_req_rcvd = value;
    }
    if(value_path == "pap-req-sent")
    {
        pap_req_sent = value;
    }
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::NcpStatisticsArray()
    :
    conf_ack_rcvd{YType::uint16, "conf-ack-rcvd"},
    conf_ack_sent{YType::uint16, "conf-ack-sent"},
    conf_nak_rcvd{YType::uint16, "conf-nak-rcvd"},
    conf_nak_sent{YType::uint16, "conf-nak-sent"},
    conf_rej_rcvd{YType::uint16, "conf-rej-rcvd"},
    conf_rej_sent{YType::uint16, "conf-rej-sent"},
    conf_req_rcvd{YType::uint16, "conf-req-rcvd"},
    conf_req_sent{YType::uint16, "conf-req-sent"},
    ncp_identifier{YType::enumeration, "ncp-identifier"}
{
    yang_name = "ncp-statistics-array"; yang_parent_name = "node-interface-statistic";
}

Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::~NcpStatisticsArray()
{
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::has_data() const
{
    return conf_ack_rcvd.is_set
	|| conf_ack_sent.is_set
	|| conf_nak_rcvd.is_set
	|| conf_nak_sent.is_set
	|| conf_rej_rcvd.is_set
	|| conf_rej_sent.is_set
	|| conf_req_rcvd.is_set
	|| conf_req_sent.is_set
	|| ncp_identifier.is_set;
}

bool Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::has_operation() const
{
    return is_set(operation)
	|| is_set(conf_ack_rcvd.operation)
	|| is_set(conf_ack_sent.operation)
	|| is_set(conf_nak_rcvd.operation)
	|| is_set(conf_nak_sent.operation)
	|| is_set(conf_rej_rcvd.operation)
	|| is_set(conf_rej_sent.operation)
	|| is_set(conf_req_rcvd.operation)
	|| is_set(conf_req_sent.operation)
	|| is_set(ncp_identifier.operation);
}

std::string Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncp-statistics-array";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcpStatisticsArray' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (conf_ack_rcvd.is_set || is_set(conf_ack_rcvd.operation)) leaf_name_data.push_back(conf_ack_rcvd.get_name_leafdata());
    if (conf_ack_sent.is_set || is_set(conf_ack_sent.operation)) leaf_name_data.push_back(conf_ack_sent.get_name_leafdata());
    if (conf_nak_rcvd.is_set || is_set(conf_nak_rcvd.operation)) leaf_name_data.push_back(conf_nak_rcvd.get_name_leafdata());
    if (conf_nak_sent.is_set || is_set(conf_nak_sent.operation)) leaf_name_data.push_back(conf_nak_sent.get_name_leafdata());
    if (conf_rej_rcvd.is_set || is_set(conf_rej_rcvd.operation)) leaf_name_data.push_back(conf_rej_rcvd.get_name_leafdata());
    if (conf_rej_sent.is_set || is_set(conf_rej_sent.operation)) leaf_name_data.push_back(conf_rej_sent.get_name_leafdata());
    if (conf_req_rcvd.is_set || is_set(conf_req_rcvd.operation)) leaf_name_data.push_back(conf_req_rcvd.get_name_leafdata());
    if (conf_req_sent.is_set || is_set(conf_req_sent.operation)) leaf_name_data.push_back(conf_req_sent.get_name_leafdata());
    if (ncp_identifier.is_set || is_set(ncp_identifier.operation)) leaf_name_data.push_back(ncp_identifier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::NodeInterfaceStatistics::NodeInterfaceStatistic::NcpStatisticsArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "conf-ack-rcvd")
    {
        conf_ack_rcvd = value;
    }
    if(value_path == "conf-ack-sent")
    {
        conf_ack_sent = value;
    }
    if(value_path == "conf-nak-rcvd")
    {
        conf_nak_rcvd = value;
    }
    if(value_path == "conf-nak-sent")
    {
        conf_nak_sent = value;
    }
    if(value_path == "conf-rej-rcvd")
    {
        conf_rej_rcvd = value;
    }
    if(value_path == "conf-rej-sent")
    {
        conf_rej_sent = value;
    }
    if(value_path == "conf-req-rcvd")
    {
        conf_req_rcvd = value;
    }
    if(value_path == "conf-req-sent")
    {
        conf_req_sent = value;
    }
    if(value_path == "ncp-identifier")
    {
        ncp_identifier = value;
    }
}

Ppp::Nodes::Node::SsoSummary::SsoSummary()
    :
    ipcp_states(std::make_shared<Ppp::Nodes::Node::SsoSummary::IpcpStates>())
	,lcp_states(std::make_shared<Ppp::Nodes::Node::SsoSummary::LcpStates>())
	,of_peer_auth_states(std::make_shared<Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates>())
	,of_us_auth_states(std::make_shared<Ppp::Nodes::Node::SsoSummary::OfUsAuthStates>())
{
    ipcp_states->parent = this;

    lcp_states->parent = this;

    of_peer_auth_states->parent = this;

    of_us_auth_states->parent = this;

    yang_name = "sso-summary"; yang_parent_name = "node";
}

Ppp::Nodes::Node::SsoSummary::~SsoSummary()
{
}

bool Ppp::Nodes::Node::SsoSummary::has_data() const
{
    return (ipcp_states !=  nullptr && ipcp_states->has_data())
	|| (lcp_states !=  nullptr && lcp_states->has_data())
	|| (of_peer_auth_states !=  nullptr && of_peer_auth_states->has_data())
	|| (of_us_auth_states !=  nullptr && of_us_auth_states->has_data());
}

bool Ppp::Nodes::Node::SsoSummary::has_operation() const
{
    return is_set(operation)
	|| (ipcp_states !=  nullptr && ipcp_states->has_operation())
	|| (lcp_states !=  nullptr && lcp_states->has_operation())
	|| (of_peer_auth_states !=  nullptr && of_peer_auth_states->has_operation())
	|| (of_us_auth_states !=  nullptr && of_us_auth_states->has_operation());
}

std::string Ppp::Nodes::Node::SsoSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso-summary";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsoSummary' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcp-states")
    {
        if(ipcp_states == nullptr)
        {
            ipcp_states = std::make_shared<Ppp::Nodes::Node::SsoSummary::IpcpStates>();
        }
        return ipcp_states;
    }

    if(child_yang_name == "lcp-states")
    {
        if(lcp_states == nullptr)
        {
            lcp_states = std::make_shared<Ppp::Nodes::Node::SsoSummary::LcpStates>();
        }
        return lcp_states;
    }

    if(child_yang_name == "of-peer-auth-states")
    {
        if(of_peer_auth_states == nullptr)
        {
            of_peer_auth_states = std::make_shared<Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates>();
        }
        return of_peer_auth_states;
    }

    if(child_yang_name == "of-us-auth-states")
    {
        if(of_us_auth_states == nullptr)
        {
            of_us_auth_states = std::make_shared<Ppp::Nodes::Node::SsoSummary::OfUsAuthStates>();
        }
        return of_us_auth_states;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcp_states != nullptr)
    {
        children["ipcp-states"] = ipcp_states;
    }

    if(lcp_states != nullptr)
    {
        children["lcp-states"] = lcp_states;
    }

    if(of_peer_auth_states != nullptr)
    {
        children["of-peer-auth-states"] = of_peer_auth_states;
    }

    if(of_us_auth_states != nullptr)
    {
        children["of-us-auth-states"] = of_us_auth_states;
    }

    return children;
}

void Ppp::Nodes::Node::SsoSummary::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::SsoSummary::LcpStates::LcpStates()
    :
    count{YType::uint16, "count"},
    total{YType::uint16, "total"}
{
    yang_name = "lcp-states"; yang_parent_name = "sso-summary";
}

Ppp::Nodes::Node::SsoSummary::LcpStates::~LcpStates()
{
}

bool Ppp::Nodes::Node::SsoSummary::LcpStates::has_data() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return total.is_set;
}

bool Ppp::Nodes::Node::SsoSummary::LcpStates::has_operation() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(total.operation);
}

std::string Ppp::Nodes::Node::SsoSummary::LcpStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp-states";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoSummary::LcpStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcpStates' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());

    auto count_name_datas = count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), count_name_datas.begin(), count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoSummary::LcpStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoSummary::LcpStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoSummary::LcpStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count.append(value);
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::OfUsAuthStates()
    :
    count{YType::uint16, "count"},
    total{YType::uint16, "total"}
{
    yang_name = "of-us-auth-states"; yang_parent_name = "sso-summary";
}

Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::~OfUsAuthStates()
{
}

bool Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::has_data() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return total.is_set;
}

bool Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::has_operation() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(total.operation);
}

std::string Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "of-us-auth-states";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OfUsAuthStates' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());

    auto count_name_datas = count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), count_name_datas.begin(), count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoSummary::OfUsAuthStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count.append(value);
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::OfPeerAuthStates()
    :
    count{YType::uint16, "count"},
    total{YType::uint16, "total"}
{
    yang_name = "of-peer-auth-states"; yang_parent_name = "sso-summary";
}

Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::~OfPeerAuthStates()
{
}

bool Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::has_data() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return total.is_set;
}

bool Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::has_operation() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(total.operation);
}

std::string Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "of-peer-auth-states";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OfPeerAuthStates' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());

    auto count_name_datas = count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), count_name_datas.begin(), count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoSummary::OfPeerAuthStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count.append(value);
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ppp::Nodes::Node::SsoSummary::IpcpStates::IpcpStates()
    :
    count{YType::uint16, "count"},
    total{YType::uint16, "total"}
{
    yang_name = "ipcp-states"; yang_parent_name = "sso-summary";
}

Ppp::Nodes::Node::SsoSummary::IpcpStates::~IpcpStates()
{
}

bool Ppp::Nodes::Node::SsoSummary::IpcpStates::has_data() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return total.is_set;
}

bool Ppp::Nodes::Node::SsoSummary::IpcpStates::has_operation() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(total.operation);
}

std::string Ppp::Nodes::Node::SsoSummary::IpcpStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp-states";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoSummary::IpcpStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpcpStates' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());

    auto count_name_datas = count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), count_name_datas.begin(), count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoSummary::IpcpStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoSummary::IpcpStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoSummary::IpcpStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count.append(value);
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ppp::Nodes::Node::SsoGroups::SsoGroups()
{
    yang_name = "sso-groups"; yang_parent_name = "node";
}

Ppp::Nodes::Node::SsoGroups::~SsoGroups()
{
}

bool Ppp::Nodes::Node::SsoGroups::has_data() const
{
    for (std::size_t index=0; index<sso_group.size(); index++)
    {
        if(sso_group[index]->has_data())
            return true;
    }
    return false;
}

bool Ppp::Nodes::Node::SsoGroups::has_operation() const
{
    for (std::size_t index=0; index<sso_group.size(); index++)
    {
        if(sso_group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ppp::Nodes::Node::SsoGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso-groups";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsoGroups' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso-group")
    {
        for(auto const & c : sso_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup>();
        c->parent = this;
        sso_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sso_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::SsoGroups::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoGroup()
    :
    group_id{YType::uint32, "group-id"}
    	,
    sso_states(std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates>())
{
    sso_states->parent = this;

    yang_name = "sso-group"; yang_parent_name = "sso-groups";
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::~SsoGroup()
{
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::has_data() const
{
    return group_id.is_set
	|| (sso_states !=  nullptr && sso_states->has_data());
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(group_id.operation)
	|| (sso_states !=  nullptr && sso_states->has_operation());
}

std::string Ppp::Nodes::Node::SsoGroups::SsoGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso-group" <<"[group-id='" <<group_id <<"']";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoGroups::SsoGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsoGroup' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_id.is_set || is_set(group_id.operation)) leaf_name_data.push_back(group_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoGroups::SsoGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso-states")
    {
        if(sso_states == nullptr)
        {
            sso_states = std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates>();
        }
        return sso_states;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoGroups::SsoGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(sso_states != nullptr)
    {
        children["sso-states"] = sso_states;
    }

    return children;
}

void Ppp::Nodes::Node::SsoGroups::SsoGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-id")
    {
        group_id = value;
    }
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoStates()
{
    yang_name = "sso-states"; yang_parent_name = "sso-group";
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::~SsoStates()
{
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::has_data() const
{
    for (std::size_t index=0; index<sso_state.size(); index++)
    {
        if(sso_state[index]->has_data())
            return true;
    }
    return false;
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::has_operation() const
{
    for (std::size_t index=0; index<sso_state.size(); index++)
    {
        if(sso_state[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso-states";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsoStates' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sso-state")
    {
        for(auto const & c : sso_state)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState>();
        c->parent = this;
        sso_state.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sso_state)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::SsoState()
    :
    session_id{YType::uint32, "session-id"},
    interface{YType::str, "interface"},
    session_id_xr{YType::uint32, "session-id-xr"}
    	,
    ipcp_state(std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState>())
	,lcp_state(std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState>())
	,of_peer_auth_state(std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState>())
	,of_us_auth_state(std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState>())
{
    ipcp_state->parent = this;

    lcp_state->parent = this;

    of_peer_auth_state->parent = this;

    of_us_auth_state->parent = this;

    yang_name = "sso-state"; yang_parent_name = "sso-states";
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::~SsoState()
{
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::has_data() const
{
    return session_id.is_set
	|| interface.is_set
	|| session_id_xr.is_set
	|| (ipcp_state !=  nullptr && ipcp_state->has_data())
	|| (lcp_state !=  nullptr && lcp_state->has_data())
	|| (of_peer_auth_state !=  nullptr && of_peer_auth_state->has_data())
	|| (of_us_auth_state !=  nullptr && of_us_auth_state->has_data());
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(interface.operation)
	|| is_set(session_id_xr.operation)
	|| (ipcp_state !=  nullptr && ipcp_state->has_operation())
	|| (lcp_state !=  nullptr && lcp_state->has_operation())
	|| (of_peer_auth_state !=  nullptr && of_peer_auth_state->has_operation())
	|| (of_us_auth_state !=  nullptr && of_us_auth_state->has_operation());
}

std::string Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sso-state" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SsoState' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (session_id_xr.is_set || is_set(session_id_xr.operation)) leaf_name_data.push_back(session_id_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipcp-state")
    {
        if(ipcp_state == nullptr)
        {
            ipcp_state = std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState>();
        }
        return ipcp_state;
    }

    if(child_yang_name == "lcp-state")
    {
        if(lcp_state == nullptr)
        {
            lcp_state = std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState>();
        }
        return lcp_state;
    }

    if(child_yang_name == "of-peer-auth-state")
    {
        if(of_peer_auth_state == nullptr)
        {
            of_peer_auth_state = std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState>();
        }
        return of_peer_auth_state;
    }

    if(child_yang_name == "of-us-auth-state")
    {
        if(of_us_auth_state == nullptr)
        {
            of_us_auth_state = std::make_shared<Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState>();
        }
        return of_us_auth_state;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ipcp_state != nullptr)
    {
        children["ipcp-state"] = ipcp_state;
    }

    if(lcp_state != nullptr)
    {
        children["lcp-state"] = lcp_state;
    }

    if(of_peer_auth_state != nullptr)
    {
        children["of-peer-auth-state"] = of_peer_auth_state;
    }

    if(of_us_auth_state != nullptr)
    {
        children["of-us-auth-state"] = of_us_auth_state;
    }

    return children;
}

void Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "session-id-xr")
    {
        session_id_xr = value;
    }
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::LcpState()
    :
    is_running{YType::boolean, "is-running"},
    state{YType::enumeration, "state"}
{
    yang_name = "lcp-state"; yang_parent_name = "sso-state";
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::~LcpState()
{
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::has_data() const
{
    return is_running.is_set
	|| state.is_set;
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::has_operation() const
{
    return is_set(operation)
	|| is_set(is_running.operation)
	|| is_set(state.operation);
}

std::string Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp-state";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcpState' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_running.is_set || is_set(is_running.operation)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::LcpState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-running")
    {
        is_running = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::OfUsAuthState()
    :
    is_running{YType::boolean, "is-running"},
    state{YType::enumeration, "state"}
{
    yang_name = "of-us-auth-state"; yang_parent_name = "sso-state";
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::~OfUsAuthState()
{
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::has_data() const
{
    return is_running.is_set
	|| state.is_set;
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::has_operation() const
{
    return is_set(operation)
	|| is_set(is_running.operation)
	|| is_set(state.operation);
}

std::string Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "of-us-auth-state";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OfUsAuthState' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_running.is_set || is_set(is_running.operation)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfUsAuthState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-running")
    {
        is_running = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::OfPeerAuthState()
    :
    is_running{YType::boolean, "is-running"},
    state{YType::enumeration, "state"}
{
    yang_name = "of-peer-auth-state"; yang_parent_name = "sso-state";
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::~OfPeerAuthState()
{
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::has_data() const
{
    return is_running.is_set
	|| state.is_set;
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::has_operation() const
{
    return is_set(operation)
	|| is_set(is_running.operation)
	|| is_set(state.operation);
}

std::string Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "of-peer-auth-state";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OfPeerAuthState' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_running.is_set || is_set(is_running.operation)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::OfPeerAuthState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-running")
    {
        is_running = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::IpcpState()
    :
    is_running{YType::boolean, "is-running"},
    state{YType::enumeration, "state"}
{
    yang_name = "ipcp-state"; yang_parent_name = "sso-state";
}

Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::~IpcpState()
{
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::has_data() const
{
    return is_running.is_set
	|| state.is_set;
}

bool Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::has_operation() const
{
    return is_set(operation)
	|| is_set(is_running.operation)
	|| is_set(state.operation);
}

std::string Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipcp-state";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpcpState' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_running.is_set || is_set(is_running.operation)) leaf_name_data.push_back(is_running.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::SsoGroups::SsoGroup::SsoStates::SsoState::IpcpState::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "is-running")
    {
        is_running = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Ppp::Nodes::Node::Summary::Summary()
    :
    fsm_states(std::make_shared<Ppp::Nodes::Node::Summary::FsmStates>())
	,intfs(std::make_shared<Ppp::Nodes::Node::Summary::Intfs>())
	,lcp_auth_phases(std::make_shared<Ppp::Nodes::Node::Summary::LcpAuthPhases>())
{
    fsm_states->parent = this;

    intfs->parent = this;

    lcp_auth_phases->parent = this;

    yang_name = "summary"; yang_parent_name = "node";
}

Ppp::Nodes::Node::Summary::~Summary()
{
}

bool Ppp::Nodes::Node::Summary::has_data() const
{
    return (fsm_states !=  nullptr && fsm_states->has_data())
	|| (intfs !=  nullptr && intfs->has_data())
	|| (lcp_auth_phases !=  nullptr && lcp_auth_phases->has_data());
}

bool Ppp::Nodes::Node::Summary::has_operation() const
{
    return is_set(operation)
	|| (fsm_states !=  nullptr && fsm_states->has_operation())
	|| (intfs !=  nullptr && intfs->has_operation())
	|| (lcp_auth_phases !=  nullptr && lcp_auth_phases->has_operation());
}

std::string Ppp::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "fsm-states")
    {
        if(fsm_states == nullptr)
        {
            fsm_states = std::make_shared<Ppp::Nodes::Node::Summary::FsmStates>();
        }
        return fsm_states;
    }

    if(child_yang_name == "intfs")
    {
        if(intfs == nullptr)
        {
            intfs = std::make_shared<Ppp::Nodes::Node::Summary::Intfs>();
        }
        return intfs;
    }

    if(child_yang_name == "lcp-auth-phases")
    {
        if(lcp_auth_phases == nullptr)
        {
            lcp_auth_phases = std::make_shared<Ppp::Nodes::Node::Summary::LcpAuthPhases>();
        }
        return lcp_auth_phases;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(fsm_states != nullptr)
    {
        children["fsm-states"] = fsm_states;
    }

    if(intfs != nullptr)
    {
        children["intfs"] = intfs;
    }

    if(lcp_auth_phases != nullptr)
    {
        children["lcp-auth-phases"] = lcp_auth_phases;
    }

    return children;
}

void Ppp::Nodes::Node::Summary::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::Summary::Intfs::Intfs()
    :
    gcc0_count{YType::uint32, "gcc0-count"},
    gcc1_count{YType::uint32, "gcc1-count"},
    multilink_bundle_count{YType::uint32, "multilink-bundle-count"},
    pos_count{YType::uint32, "pos-count"},
    pppoe_count{YType::uint32, "pppoe-count"},
    serial_count{YType::uint32, "serial-count"},
    total{YType::uint32, "total"}
{
    yang_name = "intfs"; yang_parent_name = "summary";
}

Ppp::Nodes::Node::Summary::Intfs::~Intfs()
{
}

bool Ppp::Nodes::Node::Summary::Intfs::has_data() const
{
    return gcc0_count.is_set
	|| gcc1_count.is_set
	|| multilink_bundle_count.is_set
	|| pos_count.is_set
	|| pppoe_count.is_set
	|| serial_count.is_set
	|| total.is_set;
}

bool Ppp::Nodes::Node::Summary::Intfs::has_operation() const
{
    return is_set(operation)
	|| is_set(gcc0_count.operation)
	|| is_set(gcc1_count.operation)
	|| is_set(multilink_bundle_count.operation)
	|| is_set(pos_count.operation)
	|| is_set(pppoe_count.operation)
	|| is_set(serial_count.operation)
	|| is_set(total.operation);
}

std::string Ppp::Nodes::Node::Summary::Intfs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "intfs";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Summary::Intfs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Intfs' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (gcc0_count.is_set || is_set(gcc0_count.operation)) leaf_name_data.push_back(gcc0_count.get_name_leafdata());
    if (gcc1_count.is_set || is_set(gcc1_count.operation)) leaf_name_data.push_back(gcc1_count.get_name_leafdata());
    if (multilink_bundle_count.is_set || is_set(multilink_bundle_count.operation)) leaf_name_data.push_back(multilink_bundle_count.get_name_leafdata());
    if (pos_count.is_set || is_set(pos_count.operation)) leaf_name_data.push_back(pos_count.get_name_leafdata());
    if (pppoe_count.is_set || is_set(pppoe_count.operation)) leaf_name_data.push_back(pppoe_count.get_name_leafdata());
    if (serial_count.is_set || is_set(serial_count.operation)) leaf_name_data.push_back(serial_count.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Summary::Intfs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Summary::Intfs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::Summary::Intfs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "gcc0-count")
    {
        gcc0_count = value;
    }
    if(value_path == "gcc1-count")
    {
        gcc1_count = value;
    }
    if(value_path == "multilink-bundle-count")
    {
        multilink_bundle_count = value;
    }
    if(value_path == "pos-count")
    {
        pos_count = value;
    }
    if(value_path == "pppoe-count")
    {
        pppoe_count = value;
    }
    if(value_path == "serial-count")
    {
        serial_count = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ppp::Nodes::Node::Summary::FsmStates::FsmStates()
    :
    lcpfsm_states(std::make_shared<Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates>())
{
    lcpfsm_states->parent = this;

    yang_name = "fsm-states"; yang_parent_name = "summary";
}

Ppp::Nodes::Node::Summary::FsmStates::~FsmStates()
{
}

bool Ppp::Nodes::Node::Summary::FsmStates::has_data() const
{
    for (std::size_t index=0; index<ncpfsm_states_array.size(); index++)
    {
        if(ncpfsm_states_array[index]->has_data())
            return true;
    }
    return (lcpfsm_states !=  nullptr && lcpfsm_states->has_data());
}

bool Ppp::Nodes::Node::Summary::FsmStates::has_operation() const
{
    for (std::size_t index=0; index<ncpfsm_states_array.size(); index++)
    {
        if(ncpfsm_states_array[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (lcpfsm_states !=  nullptr && lcpfsm_states->has_operation());
}

std::string Ppp::Nodes::Node::Summary::FsmStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fsm-states";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Summary::FsmStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FsmStates' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Summary::FsmStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "lcpfsm-states")
    {
        if(lcpfsm_states == nullptr)
        {
            lcpfsm_states = std::make_shared<Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates>();
        }
        return lcpfsm_states;
    }

    if(child_yang_name == "ncpfsm-states-array")
    {
        for(auto const & c : ncpfsm_states_array)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray>();
        c->parent = this;
        ncpfsm_states_array.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Summary::FsmStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(lcpfsm_states != nullptr)
    {
        children["lcpfsm-states"] = lcpfsm_states;
    }

    for (auto const & c : ncpfsm_states_array)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Ppp::Nodes::Node::Summary::FsmStates::set_value(const std::string & value_path, std::string value)
{
}

Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::LcpfsmStates()
    :
    count{YType::uint32, "count"},
    total{YType::uint32, "total"}
{
    yang_name = "lcpfsm-states"; yang_parent_name = "fsm-states";
}

Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::~LcpfsmStates()
{
}

bool Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::has_data() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return total.is_set;
}

bool Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::has_operation() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(total.operation);
}

std::string Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcpfsm-states";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcpfsmStates' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());

    auto count_name_datas = count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), count_name_datas.begin(), count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::Summary::FsmStates::LcpfsmStates::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count.append(value);
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::NcpfsmStatesArray()
    :
    count{YType::uint32, "count"},
    ncp_identifier{YType::enumeration, "ncp-identifier"},
    total{YType::uint32, "total"}
{
    yang_name = "ncpfsm-states-array"; yang_parent_name = "fsm-states";
}

Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::~NcpfsmStatesArray()
{
}

bool Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::has_data() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return ncp_identifier.is_set
	|| total.is_set;
}

bool Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::has_operation() const
{
    for (auto const & leaf : count.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(count.operation)
	|| is_set(ncp_identifier.operation)
	|| is_set(total.operation);
}

std::string Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ncpfsm-states-array";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NcpfsmStatesArray' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ncp_identifier.is_set || is_set(ncp_identifier.operation)) leaf_name_data.push_back(ncp_identifier.get_name_leafdata());
    if (total.is_set || is_set(total.operation)) leaf_name_data.push_back(total.get_name_leafdata());

    auto count_name_datas = count.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), count_name_datas.begin(), count_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::Summary::FsmStates::NcpfsmStatesArray::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "count")
    {
        count.append(value);
    }
    if(value_path == "ncp-identifier")
    {
        ncp_identifier = value;
    }
    if(value_path == "total")
    {
        total = value;
    }
}

Ppp::Nodes::Node::Summary::LcpAuthPhases::LcpAuthPhases()
    :
    authenticating{YType::uint32, "authenticating"},
    lcp_not_negotiated{YType::uint32, "lcp-not-negotiated"},
    line_held_down{YType::uint32, "line-held-down"},
    up_l2_fwded{YType::uint32, "up-l2-fwded"},
    up_local_term{YType::uint32, "up-local-term"},
    up_tunneled{YType::uint32, "up-tunneled"}
{
    yang_name = "lcp-auth-phases"; yang_parent_name = "summary";
}

Ppp::Nodes::Node::Summary::LcpAuthPhases::~LcpAuthPhases()
{
}

bool Ppp::Nodes::Node::Summary::LcpAuthPhases::has_data() const
{
    return authenticating.is_set
	|| lcp_not_negotiated.is_set
	|| line_held_down.is_set
	|| up_l2_fwded.is_set
	|| up_local_term.is_set
	|| up_tunneled.is_set;
}

bool Ppp::Nodes::Node::Summary::LcpAuthPhases::has_operation() const
{
    return is_set(operation)
	|| is_set(authenticating.operation)
	|| is_set(lcp_not_negotiated.operation)
	|| is_set(line_held_down.operation)
	|| is_set(up_l2_fwded.operation)
	|| is_set(up_local_term.operation)
	|| is_set(up_tunneled.operation);
}

std::string Ppp::Nodes::Node::Summary::LcpAuthPhases::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lcp-auth-phases";

    return path_buffer.str();

}

const EntityPath Ppp::Nodes::Node::Summary::LcpAuthPhases::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LcpAuthPhases' in Cisco_IOS_XR_ppp_ma_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authenticating.is_set || is_set(authenticating.operation)) leaf_name_data.push_back(authenticating.get_name_leafdata());
    if (lcp_not_negotiated.is_set || is_set(lcp_not_negotiated.operation)) leaf_name_data.push_back(lcp_not_negotiated.get_name_leafdata());
    if (line_held_down.is_set || is_set(line_held_down.operation)) leaf_name_data.push_back(line_held_down.get_name_leafdata());
    if (up_l2_fwded.is_set || is_set(up_l2_fwded.operation)) leaf_name_data.push_back(up_l2_fwded.get_name_leafdata());
    if (up_local_term.is_set || is_set(up_local_term.operation)) leaf_name_data.push_back(up_local_term.get_name_leafdata());
    if (up_tunneled.is_set || is_set(up_tunneled.operation)) leaf_name_data.push_back(up_tunneled.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Ppp::Nodes::Node::Summary::LcpAuthPhases::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Ppp::Nodes::Node::Summary::LcpAuthPhases::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Ppp::Nodes::Node::Summary::LcpAuthPhases::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authenticating")
    {
        authenticating = value;
    }
    if(value_path == "lcp-not-negotiated")
    {
        lcp_not_negotiated = value;
    }
    if(value_path == "line-held-down")
    {
        line_held_down = value;
    }
    if(value_path == "up-l2-fwded")
    {
        up_l2_fwded = value;
    }
    if(value_path == "up-local-term")
    {
        up_local_term = value;
    }
    if(value_path == "up-tunneled")
    {
        up_tunneled = value;
    }
}

const Enum::YLeaf NcpIdentEnum::cdpcp {1, "cdpcp"};
const Enum::YLeaf NcpIdentEnum::ipcp {2, "ipcp"};
const Enum::YLeaf NcpIdentEnum::ipcpiw {3, "ipcpiw"};
const Enum::YLeaf NcpIdentEnum::ipv6cp {4, "ipv6cp"};
const Enum::YLeaf NcpIdentEnum::mplscp {5, "mplscp"};
const Enum::YLeaf NcpIdentEnum::osicp {6, "osicp"};

const Enum::YLeaf PppSsoFsmStateEnum::ppp_sso_state_not_ready_0 {0, "ppp-sso-state-not-ready-0"};
const Enum::YLeaf PppSsoFsmStateEnum::ppp_sso_state_standby_unnegd_1 {1, "ppp-sso-state-standby-unnegd-1"};
const Enum::YLeaf PppSsoFsmStateEnum::ppp_sso_state_active_down_2 {2, "ppp-sso-state-active-down-2"};
const Enum::YLeaf PppSsoFsmStateEnum::ppp_sso_state_deactivating_3 {3, "ppp-sso-state-deactivating-3"};
const Enum::YLeaf PppSsoFsmStateEnum::ppp_sso_state_active_unnegd_4 {4, "ppp-sso-state-active-unnegd-4"};
const Enum::YLeaf PppSsoFsmStateEnum::ppp_sso_state_standby_negd_5 {5, "ppp-sso-state-standby-negd-5"};
const Enum::YLeaf PppSsoFsmStateEnum::ppp_sso_state_activating_6 {6, "ppp-sso-state-activating-6"};
const Enum::YLeaf PppSsoFsmStateEnum::ppp_sso_state_active_negd_7 {7, "ppp-sso-state-active-negd-7"};

const Enum::YLeaf PppIphcCompressionEnum::ppp_iphc_compression_fmt_none {0, "ppp-iphc-compression-fmt-none"};
const Enum::YLeaf PppIphcCompressionEnum::ppp_iphc_compression_fmt_vj {1, "ppp-iphc-compression-fmt-vj"};
const Enum::YLeaf PppIphcCompressionEnum::ppp_iphc_compression_fmt_ietf {2, "ppp-iphc-compression-fmt-ietf"};
const Enum::YLeaf PppIphcCompressionEnum::ppp_iphc_compression_fmt_iphc {3, "ppp-iphc-compression-fmt-iphc"};
const Enum::YLeaf PppIphcCompressionEnum::ppp_iphc_compression_fmt_cisco {4, "ppp-iphc-compression-fmt-cisco"};

const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_initial_0 {0, "ppp-fsm-state-initial-0"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_starting_1 {1, "ppp-fsm-state-starting-1"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_closed_2 {2, "ppp-fsm-state-closed-2"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_stopped_3 {3, "ppp-fsm-state-stopped-3"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_closing_4 {4, "ppp-fsm-state-closing-4"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_stopping_5 {5, "ppp-fsm-state-stopping-5"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_req_sent_6 {6, "ppp-fsm-state-req-sent-6"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_ack_rcvd_7 {7, "ppp-fsm-state-ack-rcvd-7"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_ack_sent_8 {8, "ppp-fsm-state-ack-sent-8"};
const Enum::YLeaf PppFsmStateEnum::ppp_fsm_state_opened_9 {9, "ppp-fsm-state-opened-9"};

const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_detached {0, "ppp-lcp-mp-mbr-state-detached"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_lcp_not_negotiated {1, "ppp-lcp-mp-mbr-state-lcp-not-negotiated"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_link_noise {2, "ppp-lcp-mp-mbr-state-link-noise"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_bundle_shutdown {3, "ppp-lcp-mp-mbr-state-bundle-shutdown"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_mrru_rejected {4, "ppp-lcp-mp-mbr-state-mrru-rejected"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_mrru_mismatch {5, "ppp-lcp-mp-mbr-state-mrru-mismatch"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_ed_mismatch {6, "ppp-lcp-mp-mbr-state-ed-mismatch"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_auth_name_mismatch {7, "ppp-lcp-mp-mbr-state-auth-name-mismatch"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_mcmp_rejected {8, "ppp-lcp-mp-mbr-state-mcmp-rejected"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_mcmp_not_negotiated {9, "ppp-lcp-mp-mbr-state-mcmp-not-negotiated"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_mcmp_local_mismatch {10, "ppp-lcp-mp-mbr-state-mcmp-local-mismatch"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_mcmp_peer_mismatch {11, "ppp-lcp-mp-mbr-state-mcmp-peer-mismatch"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_standby_up {12, "ppp-lcp-mp-mbr-state-standby-up"};
const Enum::YLeaf PppLcpMpMbrStateEnum::ppp_lcp_mp_mbr_state_active {13, "ppp-lcp-mp-mbr-state-active"};


}
}

