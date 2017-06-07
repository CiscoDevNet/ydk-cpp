
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_0.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_1.hpp"

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_oper {

Subscriber::Subscriber()
    :
    manager(std::make_shared<Subscriber::Manager>())
	,session(std::make_shared<Subscriber::Session>())
{
    manager->parent = this;

    session->parent = this;

    yang_name = "subscriber"; yang_parent_name = "Cisco-IOS-XR-iedge4710-oper";
}

Subscriber::~Subscriber()
{
}

bool Subscriber::has_data() const
{
    return (manager !=  nullptr && manager->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Subscriber::has_operation() const
{
    return is_set(operation)
	|| (manager !=  nullptr && manager->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber";

    return path_buffer.str();

}

const EntityPath Subscriber::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "manager")
    {
        if(manager == nullptr)
        {
            manager = std::make_shared<Subscriber::Manager>();
        }
        return manager;
    }

    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Subscriber::Session>();
        }
        return session;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(manager != nullptr)
    {
        children["manager"] = manager;
    }

    if(session != nullptr)
    {
        children["session"] = session;
    }

    return children;
}

void Subscriber::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Subscriber::clone_ptr() const
{
    return std::make_shared<Subscriber>();
}

std::string Subscriber::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Subscriber::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Subscriber::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Subscriber::Manager::Manager()
    :
    nodes(std::make_shared<Subscriber::Manager::Nodes>())
{
    nodes->parent = this;

    yang_name = "manager"; yang_parent_name = "subscriber";
}

Subscriber::Manager::~Manager()
{
}

bool Subscriber::Manager::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Subscriber::Manager::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Subscriber::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manager";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Subscriber::Manager::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Subscriber::Manager::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "manager";
}

Subscriber::Manager::Nodes::~Nodes()
{
}

bool Subscriber::Manager::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Manager::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Manager::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/manager/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Subscriber::Manager::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Manager::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics>())
{
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Subscriber::Manager::Nodes::Node::~Node()
{
}

bool Subscriber::Manager::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Subscriber::Manager::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/manager/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(statistics != nullptr)
    {
        children["statistics"] = statistics;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Statistics()
    :
    aaa(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa>())
	,aggregate_summary(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary>())
	,srg(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Srg>())
{
    aaa->parent = this;

    aggregate_summary->parent = this;

    srg->parent = this;

    yang_name = "statistics"; yang_parent_name = "node";
}

Subscriber::Manager::Nodes::Node::Statistics::~Statistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::has_data() const
{
    return (aaa !=  nullptr && aaa->has_data())
	|| (aggregate_summary !=  nullptr && aggregate_summary->has_data())
	|| (srg !=  nullptr && srg->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::has_operation() const
{
    return is_set(operation)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (aggregate_summary !=  nullptr && aggregate_summary->has_operation())
	|| (srg !=  nullptr && srg->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aaa")
    {
        if(aaa == nullptr)
        {
            aaa = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa>();
        }
        return aaa;
    }

    if(child_yang_name == "aggregate-summary")
    {
        if(aggregate_summary == nullptr)
        {
            aggregate_summary = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary>();
        }
        return aggregate_summary;
    }

    if(child_yang_name == "srg")
    {
        if(srg == nullptr)
        {
            srg = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Srg>();
        }
        return srg;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(aaa != nullptr)
    {
        children["aaa"] = aaa;
    }

    if(aggregate_summary != nullptr)
    {
        children["aggregate-summary"] = aggregate_summary;
    }

    if(srg != nullptr)
    {
        children["srg"] = srg;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Aaa()
    :
    accounting(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting>())
	,accounting_stats_all(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll>())
	,aggregate_accounting(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting>())
	,aggregate_accounting_stats_all(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll>())
	,aggregate_authentication(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication>())
	,aggregate_authorization(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization>())
	,aggregate_change_of_authorization(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization>())
	,aggregate_mobility(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility>())
	,authentication(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication>())
	,authorization(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization>())
	,change_of_authorization(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization>())
	,mobility(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility>())
{
    accounting->parent = this;

    accounting_stats_all->parent = this;

    aggregate_accounting->parent = this;

    aggregate_accounting_stats_all->parent = this;

    aggregate_authentication->parent = this;

    aggregate_authorization->parent = this;

    aggregate_change_of_authorization->parent = this;

    aggregate_mobility->parent = this;

    authentication->parent = this;

    authorization->parent = this;

    change_of_authorization->parent = this;

    mobility->parent = this;

    yang_name = "aaa"; yang_parent_name = "statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::~Aaa()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data())
	|| (accounting_stats_all !=  nullptr && accounting_stats_all->has_data())
	|| (aggregate_accounting !=  nullptr && aggregate_accounting->has_data())
	|| (aggregate_accounting_stats_all !=  nullptr && aggregate_accounting_stats_all->has_data())
	|| (aggregate_authentication !=  nullptr && aggregate_authentication->has_data())
	|| (aggregate_authorization !=  nullptr && aggregate_authorization->has_data())
	|| (aggregate_change_of_authorization !=  nullptr && aggregate_change_of_authorization->has_data())
	|| (aggregate_mobility !=  nullptr && aggregate_mobility->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (change_of_authorization !=  nullptr && change_of_authorization->has_data())
	|| (mobility !=  nullptr && mobility->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::has_operation() const
{
    return is_set(operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (accounting_stats_all !=  nullptr && accounting_stats_all->has_operation())
	|| (aggregate_accounting !=  nullptr && aggregate_accounting->has_operation())
	|| (aggregate_accounting_stats_all !=  nullptr && aggregate_accounting_stats_all->has_operation())
	|| (aggregate_authentication !=  nullptr && aggregate_authentication->has_operation())
	|| (aggregate_authorization !=  nullptr && aggregate_authorization->has_operation())
	|| (aggregate_change_of_authorization !=  nullptr && aggregate_change_of_authorization->has_operation())
	|| (aggregate_mobility !=  nullptr && aggregate_mobility->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (change_of_authorization !=  nullptr && change_of_authorization->has_operation())
	|| (mobility !=  nullptr && mobility->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Aaa' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "accounting-stats-all")
    {
        if(accounting_stats_all == nullptr)
        {
            accounting_stats_all = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll>();
        }
        return accounting_stats_all;
    }

    if(child_yang_name == "aggregate-accounting")
    {
        if(aggregate_accounting == nullptr)
        {
            aggregate_accounting = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting>();
        }
        return aggregate_accounting;
    }

    if(child_yang_name == "aggregate-accounting-stats-all")
    {
        if(aggregate_accounting_stats_all == nullptr)
        {
            aggregate_accounting_stats_all = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll>();
        }
        return aggregate_accounting_stats_all;
    }

    if(child_yang_name == "aggregate-authentication")
    {
        if(aggregate_authentication == nullptr)
        {
            aggregate_authentication = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication>();
        }
        return aggregate_authentication;
    }

    if(child_yang_name == "aggregate-authorization")
    {
        if(aggregate_authorization == nullptr)
        {
            aggregate_authorization = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization>();
        }
        return aggregate_authorization;
    }

    if(child_yang_name == "aggregate-change-of-authorization")
    {
        if(aggregate_change_of_authorization == nullptr)
        {
            aggregate_change_of_authorization = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization>();
        }
        return aggregate_change_of_authorization;
    }

    if(child_yang_name == "aggregate-mobility")
    {
        if(aggregate_mobility == nullptr)
        {
            aggregate_mobility = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility>();
        }
        return aggregate_mobility;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "change-of-authorization")
    {
        if(change_of_authorization == nullptr)
        {
            change_of_authorization = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization>();
        }
        return change_of_authorization;
    }

    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility>();
        }
        return mobility;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(accounting_stats_all != nullptr)
    {
        children["accounting-stats-all"] = accounting_stats_all;
    }

    if(aggregate_accounting != nullptr)
    {
        children["aggregate-accounting"] = aggregate_accounting;
    }

    if(aggregate_accounting_stats_all != nullptr)
    {
        children["aggregate-accounting-stats-all"] = aggregate_accounting_stats_all;
    }

    if(aggregate_authentication != nullptr)
    {
        children["aggregate-authentication"] = aggregate_authentication;
    }

    if(aggregate_authorization != nullptr)
    {
        children["aggregate-authorization"] = aggregate_authorization;
    }

    if(aggregate_change_of_authorization != nullptr)
    {
        children["aggregate-change-of-authorization"] = aggregate_change_of_authorization;
    }

    if(aggregate_mobility != nullptr)
    {
        children["aggregate-mobility"] = aggregate_mobility;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    if(change_of_authorization != nullptr)
    {
        children["change-of-authorization"] = change_of_authorization;
    }

    if(mobility != nullptr)
    {
        children["mobility"] = mobility;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::AggregateAccounting()
    :
    active_sessions{YType::uint32, "active-sessions"},
    policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
    policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"},
    started_sessions{YType::uint64, "started-sessions"},
    stopped_sessions{YType::uint64, "stopped-sessions"}
    	,
    interim(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim>())
	,interim_inflight(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight>())
	,pass_through(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough>())
	,start(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start>())
	,stop(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop>())
	,update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update>())
{
    interim->parent = this;

    interim_inflight->parent = this;

    pass_through->parent = this;

    start->parent = this;

    stop->parent = this;

    update->parent = this;

    yang_name = "aggregate-accounting"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::~AggregateAccounting()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::has_data() const
{
    return active_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| (interim !=  nullptr && interim->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(policy_plane_errored_requests.operation)
	|| is_set(policy_plane_unknown_requests.operation)
	|| is_set(started_sessions.operation)
	|| is_set(stopped_sessions.operation)
	|| (interim !=  nullptr && interim->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-accounting";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAccounting' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.operation)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.operation)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.operation)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.operation)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim>();
        }
        return interim;
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight == nullptr)
        {
            interim_inflight = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight>();
        }
        return interim_inflight;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start>();
        }
        return start;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop>();
        }
        return stop;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interim != nullptr)
    {
        children["interim"] = interim;
    }

    if(interim_inflight != nullptr)
    {
        children["interim-inflight"] = interim_inflight;
    }

    if(pass_through != nullptr)
    {
        children["pass-through"] = pass_through;
    }

    if(start != nullptr)
    {
        children["start"] = start;
    }

    if(stop != nullptr)
    {
        children["stop"] = stop;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::Start()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "start"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Start' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::Stop()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "stop"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stop' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::Interim()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "interim"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interim' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::PassThrough()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "pass-through"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PassThrough' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::Update()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "update"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::InterimInflight()
    :
    accepted_requests{YType::uint32, "accepted-requests"},
    denied_requests{YType::uint32, "denied-requests"},
    low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"},
    quota_exhausts{YType::uint32, "quota-exhausts"},
    remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
    total_quota_of_requests{YType::uint32, "total-quota-of-requests"}
{
    yang_name = "interim-inflight"; yang_parent_name = "aggregate-accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::has_data() const
{
    return accepted_requests.is_set
	|| denied_requests.is_set
	|| low_water_mark_quota_of_requests.is_set
	|| quota_exhausts.is_set
	|| remaining_quota_of_requests.is_set
	|| total_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(denied_requests.operation)
	|| is_set(low_water_mark_quota_of_requests.operation)
	|| is_set(quota_exhausts.operation)
	|| is_set(remaining_quota_of_requests.operation)
	|| is_set(total_quota_of_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterimInflight' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.operation)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.operation)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());
    if (quota_exhausts.is_set || is_set(quota_exhausts.operation)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.operation)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.operation)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
    }
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::Authentication()
    :
    accepted_requests{YType::uint64, "accepted-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    incomplete_requests{YType::uint64, "incomplete-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    sent_requests{YType::uint64, "sent-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    terminated_requests{YType::uint64, "terminated-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "authentication"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::~Authentication()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::AggregateMobility()
    :
    receive_response_failures{YType::uint64, "receive-response-failures"},
    receive_response_successes{YType::uint64, "receive-response-successes"},
    send_request_failures{YType::uint64, "send-request-failures"},
    send_request_successes{YType::uint64, "send-request-successes"}
{
    yang_name = "aggregate-mobility"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::~AggregateMobility()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::has_data() const
{
    return receive_response_failures.is_set
	|| receive_response_successes.is_set
	|| send_request_failures.is_set
	|| send_request_successes.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::has_operation() const
{
    return is_set(operation)
	|| is_set(receive_response_failures.operation)
	|| is_set(receive_response_successes.operation)
	|| is_set(send_request_failures.operation)
	|| is_set(send_request_successes.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-mobility";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateMobility' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_response_failures.is_set || is_set(receive_response_failures.operation)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.operation)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.operation)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (send_request_successes.is_set || is_set(send_request_successes.operation)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
    }
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::AggregateAuthentication()
    :
    accepted_requests{YType::uint64, "accepted-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    incomplete_requests{YType::uint64, "incomplete-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    sent_requests{YType::uint64, "sent-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    terminated_requests{YType::uint64, "terminated-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "aggregate-authentication"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::~AggregateAuthentication()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-authentication";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAuthentication' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatsAll()
    :
    accounting_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics>())
	,authentication_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics>())
	,authorization_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics>())
	,change_of_authorization_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics>())
	,mobility_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics>())
{
    accounting_statistics->parent = this;

    authentication_statistics->parent = this;

    authorization_statistics->parent = this;

    change_of_authorization_statistics->parent = this;

    mobility_statistics->parent = this;

    yang_name = "accounting-stats-all"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::~AccountingStatsAll()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::has_data() const
{
    return (accounting_statistics !=  nullptr && accounting_statistics->has_data())
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_data())
	|| (authorization_statistics !=  nullptr && authorization_statistics->has_data())
	|| (change_of_authorization_statistics !=  nullptr && change_of_authorization_statistics->has_data())
	|| (mobility_statistics !=  nullptr && mobility_statistics->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::has_operation() const
{
    return is_set(operation)
	|| (accounting_statistics !=  nullptr && accounting_statistics->has_operation())
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_operation())
	|| (authorization_statistics !=  nullptr && authorization_statistics->has_operation())
	|| (change_of_authorization_statistics !=  nullptr && change_of_authorization_statistics->has_operation())
	|| (mobility_statistics !=  nullptr && mobility_statistics->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-stats-all";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountingStatsAll' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-statistics")
    {
        if(accounting_statistics == nullptr)
        {
            accounting_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics>();
        }
        return accounting_statistics;
    }

    if(child_yang_name == "authentication-statistics")
    {
        if(authentication_statistics == nullptr)
        {
            authentication_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics>();
        }
        return authentication_statistics;
    }

    if(child_yang_name == "authorization-statistics")
    {
        if(authorization_statistics == nullptr)
        {
            authorization_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics>();
        }
        return authorization_statistics;
    }

    if(child_yang_name == "change-of-authorization-statistics")
    {
        if(change_of_authorization_statistics == nullptr)
        {
            change_of_authorization_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics>();
        }
        return change_of_authorization_statistics;
    }

    if(child_yang_name == "mobility-statistics")
    {
        if(mobility_statistics == nullptr)
        {
            mobility_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics>();
        }
        return mobility_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting_statistics != nullptr)
    {
        children["accounting-statistics"] = accounting_statistics;
    }

    if(authentication_statistics != nullptr)
    {
        children["authentication-statistics"] = authentication_statistics;
    }

    if(authorization_statistics != nullptr)
    {
        children["authorization-statistics"] = authorization_statistics;
    }

    if(change_of_authorization_statistics != nullptr)
    {
        children["change-of-authorization-statistics"] = change_of_authorization_statistics;
    }

    if(mobility_statistics != nullptr)
    {
        children["mobility-statistics"] = mobility_statistics;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::AccountingStatistics()
    :
    active_sessions{YType::uint32, "active-sessions"},
    policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
    policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"},
    started_sessions{YType::uint64, "started-sessions"},
    stopped_sessions{YType::uint64, "stopped-sessions"}
    	,
    interim(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim>())
	,interim_inflight(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight>())
	,pass_through(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough>())
	,start(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start>())
	,stop(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop>())
	,update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update>())
{
    interim->parent = this;

    interim_inflight->parent = this;

    pass_through->parent = this;

    start->parent = this;

    stop->parent = this;

    update->parent = this;

    yang_name = "accounting-statistics"; yang_parent_name = "accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::~AccountingStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::has_data() const
{
    return active_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| (interim !=  nullptr && interim->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(policy_plane_errored_requests.operation)
	|| is_set(policy_plane_unknown_requests.operation)
	|| is_set(started_sessions.operation)
	|| is_set(stopped_sessions.operation)
	|| (interim !=  nullptr && interim->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountingStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.operation)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.operation)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.operation)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.operation)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim>();
        }
        return interim;
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight == nullptr)
        {
            interim_inflight = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight>();
        }
        return interim_inflight;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start>();
        }
        return start;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop>();
        }
        return stop;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interim != nullptr)
    {
        children["interim"] = interim;
    }

    if(interim_inflight != nullptr)
    {
        children["interim-inflight"] = interim_inflight;
    }

    if(pass_through != nullptr)
    {
        children["pass-through"] = pass_through;
    }

    if(start != nullptr)
    {
        children["start"] = start;
    }

    if(stop != nullptr)
    {
        children["stop"] = stop;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::Start()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "start"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Start' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::Stop()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "stop"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stop' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::Interim()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "interim"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interim' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::PassThrough()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "pass-through"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PassThrough' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::Update()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "update"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::InterimInflight()
    :
    accepted_requests{YType::uint32, "accepted-requests"},
    denied_requests{YType::uint32, "denied-requests"},
    low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"},
    quota_exhausts{YType::uint32, "quota-exhausts"},
    remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
    total_quota_of_requests{YType::uint32, "total-quota-of-requests"}
{
    yang_name = "interim-inflight"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::has_data() const
{
    return accepted_requests.is_set
	|| denied_requests.is_set
	|| low_water_mark_quota_of_requests.is_set
	|| quota_exhausts.is_set
	|| remaining_quota_of_requests.is_set
	|| total_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(denied_requests.operation)
	|| is_set(low_water_mark_quota_of_requests.operation)
	|| is_set(quota_exhausts.operation)
	|| is_set(remaining_quota_of_requests.operation)
	|| is_set(total_quota_of_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterimInflight' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.operation)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.operation)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());
    if (quota_exhausts.is_set || is_set(quota_exhausts.operation)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.operation)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.operation)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
    }
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::AuthenticationStatistics()
    :
    accepted_requests{YType::uint64, "accepted-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    incomplete_requests{YType::uint64, "incomplete-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    sent_requests{YType::uint64, "sent-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    terminated_requests{YType::uint64, "terminated-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "authentication-statistics"; yang_parent_name = "accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::~AuthenticationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::AuthorizationStatistics()
    :
    accepted_requests{YType::uint64, "accepted-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    incomplete_requests{YType::uint64, "incomplete-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    sent_requests{YType::uint64, "sent-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    terminated_requests{YType::uint64, "terminated-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "authorization-statistics"; yang_parent_name = "accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::~AuthorizationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorizationStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ChangeOfAuthorizationStatistics()
    :
    attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
    internal_err_resps{YType::uint64, "internal-err-resps"},
    no_cmd_resps{YType::uint64, "no-cmd-resps"},
    no_session_found_resps{YType::uint64, "no-session-found-resps"},
    no_session_peer_resps{YType::uint64, "no-session-peer-resps"},
    resp_send_failure{YType::uint64, "resp-send-failure"},
    service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
    unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
    unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
    unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"}
    	,
    account_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff>())
	,account_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon>())
	,account_update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate>())
	,service_multi(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti>())
	,session_disconnect(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect>())
	,single_service_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff>())
	,single_service_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon>())
	,single_service_modify(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify>())
{
    account_logoff->parent = this;

    account_logon->parent = this;

    account_update->parent = this;

    service_multi->parent = this;

    session_disconnect->parent = this;

    single_service_logoff->parent = this;

    single_service_logon->parent = this;

    single_service_modify->parent = this;

    yang_name = "change-of-authorization-statistics"; yang_parent_name = "accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::~ChangeOfAuthorizationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::has_data() const
{
    return attr_list_retrieve_failure_resps.is_set
	|| internal_err_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| resp_send_failure.is_set
	|| service_profile_push_failure_resps.is_set
	|| unknown_account_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(attr_list_retrieve_failure_resps.operation)
	|| is_set(internal_err_resps.operation)
	|| is_set(no_cmd_resps.operation)
	|| is_set(no_session_found_resps.operation)
	|| is_set(no_session_peer_resps.operation)
	|| is_set(resp_send_failure.operation)
	|| is_set(service_profile_push_failure_resps.operation)
	|| is_set(unknown_account_cmd_resps.operation)
	|| is_set(unknown_cmd_resps.operation)
	|| is_set(unknown_service_cmd_resps.operation)
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-of-authorization-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChangeOfAuthorizationStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.operation)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.operation)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.operation)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.operation)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.operation)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.operation)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.operation)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.operation)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.operation)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.operation)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-logoff")
    {
        if(account_logoff == nullptr)
        {
            account_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff>();
        }
        return account_logoff;
    }

    if(child_yang_name == "account-logon")
    {
        if(account_logon == nullptr)
        {
            account_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon>();
        }
        return account_logon;
    }

    if(child_yang_name == "account-update")
    {
        if(account_update == nullptr)
        {
            account_update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate>();
        }
        return account_update;
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi == nullptr)
        {
            service_multi = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti>();
        }
        return service_multi;
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect == nullptr)
        {
            session_disconnect = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect>();
        }
        return session_disconnect;
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff == nullptr)
        {
            single_service_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff>();
        }
        return single_service_logoff;
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon == nullptr)
        {
            single_service_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon>();
        }
        return single_service_logon;
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify == nullptr)
        {
            single_service_modify = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify>();
        }
        return single_service_modify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account_logoff != nullptr)
    {
        children["account-logoff"] = account_logoff;
    }

    if(account_logon != nullptr)
    {
        children["account-logon"] = account_logon;
    }

    if(account_update != nullptr)
    {
        children["account-update"] = account_update;
    }

    if(service_multi != nullptr)
    {
        children["service-multi"] = service_multi;
    }

    if(session_disconnect != nullptr)
    {
        children["session-disconnect"] = session_disconnect;
    }

    if(single_service_logoff != nullptr)
    {
        children["single-service-logoff"] = single_service_logoff;
    }

    if(single_service_logon != nullptr)
    {
        children["single-service-logon"] = single_service_logon;
    }

    if(single_service_modify != nullptr)
    {
        children["single-service-modify"] = single_service_modify;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
    }
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::AccountLogon()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logon"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountLogon' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::AccountLogoff()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logoff"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountLogoff' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::AccountUpdate()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-update"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountUpdate' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::SessionDisconnect()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "session-disconnect"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionDisconnect' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::SingleServiceLogon()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logon"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceLogon' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::SingleServiceLogoff()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logoff"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceLogoff' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::SingleServiceModify()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-modify"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceModify' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::ServiceMulti()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "service-multi"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceMulti' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::MobilityStatistics()
    :
    receive_response_failures{YType::uint64, "receive-response-failures"},
    receive_response_successes{YType::uint64, "receive-response-successes"},
    send_request_failures{YType::uint64, "send-request-failures"},
    send_request_successes{YType::uint64, "send-request-successes"}
{
    yang_name = "mobility-statistics"; yang_parent_name = "accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::~MobilityStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::has_data() const
{
    return receive_response_failures.is_set
	|| receive_response_successes.is_set
	|| send_request_failures.is_set
	|| send_request_successes.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(receive_response_failures.operation)
	|| is_set(receive_response_successes.operation)
	|| is_set(send_request_failures.operation)
	|| is_set(send_request_successes.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobilityStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_response_failures.is_set || is_set(receive_response_failures.operation)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.operation)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.operation)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (send_request_successes.is_set || is_set(send_request_successes.operation)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
    }
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ChangeOfAuthorization()
    :
    attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
    internal_err_resps{YType::uint64, "internal-err-resps"},
    no_cmd_resps{YType::uint64, "no-cmd-resps"},
    no_session_found_resps{YType::uint64, "no-session-found-resps"},
    no_session_peer_resps{YType::uint64, "no-session-peer-resps"},
    resp_send_failure{YType::uint64, "resp-send-failure"},
    service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
    unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
    unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
    unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"}
    	,
    account_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff>())
	,account_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon>())
	,account_update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate>())
	,service_multi(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti>())
	,session_disconnect(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect>())
	,single_service_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff>())
	,single_service_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon>())
	,single_service_modify(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify>())
{
    account_logoff->parent = this;

    account_logon->parent = this;

    account_update->parent = this;

    service_multi->parent = this;

    session_disconnect->parent = this;

    single_service_logoff->parent = this;

    single_service_logon->parent = this;

    single_service_modify->parent = this;

    yang_name = "change-of-authorization"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::~ChangeOfAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::has_data() const
{
    return attr_list_retrieve_failure_resps.is_set
	|| internal_err_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| resp_send_failure.is_set
	|| service_profile_push_failure_resps.is_set
	|| unknown_account_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(attr_list_retrieve_failure_resps.operation)
	|| is_set(internal_err_resps.operation)
	|| is_set(no_cmd_resps.operation)
	|| is_set(no_session_found_resps.operation)
	|| is_set(no_session_peer_resps.operation)
	|| is_set(resp_send_failure.operation)
	|| is_set(service_profile_push_failure_resps.operation)
	|| is_set(unknown_account_cmd_resps.operation)
	|| is_set(unknown_cmd_resps.operation)
	|| is_set(unknown_service_cmd_resps.operation)
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-of-authorization";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChangeOfAuthorization' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.operation)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.operation)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.operation)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.operation)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.operation)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.operation)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.operation)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.operation)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.operation)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.operation)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-logoff")
    {
        if(account_logoff == nullptr)
        {
            account_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff>();
        }
        return account_logoff;
    }

    if(child_yang_name == "account-logon")
    {
        if(account_logon == nullptr)
        {
            account_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon>();
        }
        return account_logon;
    }

    if(child_yang_name == "account-update")
    {
        if(account_update == nullptr)
        {
            account_update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate>();
        }
        return account_update;
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi == nullptr)
        {
            service_multi = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti>();
        }
        return service_multi;
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect == nullptr)
        {
            session_disconnect = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect>();
        }
        return session_disconnect;
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff == nullptr)
        {
            single_service_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff>();
        }
        return single_service_logoff;
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon == nullptr)
        {
            single_service_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon>();
        }
        return single_service_logon;
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify == nullptr)
        {
            single_service_modify = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify>();
        }
        return single_service_modify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account_logoff != nullptr)
    {
        children["account-logoff"] = account_logoff;
    }

    if(account_logon != nullptr)
    {
        children["account-logon"] = account_logon;
    }

    if(account_update != nullptr)
    {
        children["account-update"] = account_update;
    }

    if(service_multi != nullptr)
    {
        children["service-multi"] = service_multi;
    }

    if(session_disconnect != nullptr)
    {
        children["session-disconnect"] = session_disconnect;
    }

    if(single_service_logoff != nullptr)
    {
        children["single-service-logoff"] = single_service_logoff;
    }

    if(single_service_logon != nullptr)
    {
        children["single-service-logon"] = single_service_logon;
    }

    if(single_service_modify != nullptr)
    {
        children["single-service-modify"] = single_service_modify;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
    }
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::AccountLogon()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logon"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountLogon' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::AccountLogoff()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logoff"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountLogoff' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::AccountUpdate()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-update"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountUpdate' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::SessionDisconnect()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "session-disconnect"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionDisconnect' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::SingleServiceLogon()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logon"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceLogon' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::SingleServiceLogoff()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logoff"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceLogoff' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::SingleServiceModify()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-modify"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceModify' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::ServiceMulti()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "service-multi"; yang_parent_name = "change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceMulti' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::Authorization()
    :
    accepted_requests{YType::uint64, "accepted-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    incomplete_requests{YType::uint64, "incomplete-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    sent_requests{YType::uint64, "sent-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    terminated_requests{YType::uint64, "terminated-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "authorization"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::~Authorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::AggregateAuthorization()
    :
    accepted_requests{YType::uint64, "accepted-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    incomplete_requests{YType::uint64, "incomplete-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    sent_requests{YType::uint64, "sent-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    terminated_requests{YType::uint64, "terminated-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "aggregate-authorization"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::~AggregateAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-authorization";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAuthorization' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AggregateAccountingStatsAll()
    :
    accounting_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics>())
	,authentication_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics>())
	,authorization_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics>())
	,change_of_authorization_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics>())
	,mobility_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics>())
{
    accounting_statistics->parent = this;

    authentication_statistics->parent = this;

    authorization_statistics->parent = this;

    change_of_authorization_statistics->parent = this;

    mobility_statistics->parent = this;

    yang_name = "aggregate-accounting-stats-all"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::~AggregateAccountingStatsAll()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::has_data() const
{
    return (accounting_statistics !=  nullptr && accounting_statistics->has_data())
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_data())
	|| (authorization_statistics !=  nullptr && authorization_statistics->has_data())
	|| (change_of_authorization_statistics !=  nullptr && change_of_authorization_statistics->has_data())
	|| (mobility_statistics !=  nullptr && mobility_statistics->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::has_operation() const
{
    return is_set(operation)
	|| (accounting_statistics !=  nullptr && accounting_statistics->has_operation())
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_operation())
	|| (authorization_statistics !=  nullptr && authorization_statistics->has_operation())
	|| (change_of_authorization_statistics !=  nullptr && change_of_authorization_statistics->has_operation())
	|| (mobility_statistics !=  nullptr && mobility_statistics->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-accounting-stats-all";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateAccountingStatsAll' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-statistics")
    {
        if(accounting_statistics == nullptr)
        {
            accounting_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics>();
        }
        return accounting_statistics;
    }

    if(child_yang_name == "authentication-statistics")
    {
        if(authentication_statistics == nullptr)
        {
            authentication_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics>();
        }
        return authentication_statistics;
    }

    if(child_yang_name == "authorization-statistics")
    {
        if(authorization_statistics == nullptr)
        {
            authorization_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics>();
        }
        return authorization_statistics;
    }

    if(child_yang_name == "change-of-authorization-statistics")
    {
        if(change_of_authorization_statistics == nullptr)
        {
            change_of_authorization_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics>();
        }
        return change_of_authorization_statistics;
    }

    if(child_yang_name == "mobility-statistics")
    {
        if(mobility_statistics == nullptr)
        {
            mobility_statistics = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics>();
        }
        return mobility_statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting_statistics != nullptr)
    {
        children["accounting-statistics"] = accounting_statistics;
    }

    if(authentication_statistics != nullptr)
    {
        children["authentication-statistics"] = authentication_statistics;
    }

    if(authorization_statistics != nullptr)
    {
        children["authorization-statistics"] = authorization_statistics;
    }

    if(change_of_authorization_statistics != nullptr)
    {
        children["change-of-authorization-statistics"] = change_of_authorization_statistics;
    }

    if(mobility_statistics != nullptr)
    {
        children["mobility-statistics"] = mobility_statistics;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::AccountingStatistics()
    :
    active_sessions{YType::uint32, "active-sessions"},
    policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
    policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"},
    started_sessions{YType::uint64, "started-sessions"},
    stopped_sessions{YType::uint64, "stopped-sessions"}
    	,
    interim(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim>())
	,interim_inflight(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight>())
	,pass_through(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough>())
	,start(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start>())
	,stop(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop>())
	,update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update>())
{
    interim->parent = this;

    interim_inflight->parent = this;

    pass_through->parent = this;

    start->parent = this;

    stop->parent = this;

    update->parent = this;

    yang_name = "accounting-statistics"; yang_parent_name = "aggregate-accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::~AccountingStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::has_data() const
{
    return active_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| (interim !=  nullptr && interim->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(policy_plane_errored_requests.operation)
	|| is_set(policy_plane_unknown_requests.operation)
	|| is_set(started_sessions.operation)
	|| is_set(stopped_sessions.operation)
	|| (interim !=  nullptr && interim->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountingStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.operation)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.operation)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.operation)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.operation)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim>();
        }
        return interim;
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight == nullptr)
        {
            interim_inflight = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight>();
        }
        return interim_inflight;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start>();
        }
        return start;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop>();
        }
        return stop;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interim != nullptr)
    {
        children["interim"] = interim;
    }

    if(interim_inflight != nullptr)
    {
        children["interim-inflight"] = interim_inflight;
    }

    if(pass_through != nullptr)
    {
        children["pass-through"] = pass_through;
    }

    if(start != nullptr)
    {
        children["start"] = start;
    }

    if(stop != nullptr)
    {
        children["stop"] = stop;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::Start()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "start"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Start' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::Stop()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "stop"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stop' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::Interim()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "interim"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interim' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::PassThrough()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "pass-through"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PassThrough' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::Update()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "update"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::InterimInflight()
    :
    accepted_requests{YType::uint32, "accepted-requests"},
    denied_requests{YType::uint32, "denied-requests"},
    low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"},
    quota_exhausts{YType::uint32, "quota-exhausts"},
    remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
    total_quota_of_requests{YType::uint32, "total-quota-of-requests"}
{
    yang_name = "interim-inflight"; yang_parent_name = "accounting-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::has_data() const
{
    return accepted_requests.is_set
	|| denied_requests.is_set
	|| low_water_mark_quota_of_requests.is_set
	|| quota_exhausts.is_set
	|| remaining_quota_of_requests.is_set
	|| total_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(denied_requests.operation)
	|| is_set(low_water_mark_quota_of_requests.operation)
	|| is_set(quota_exhausts.operation)
	|| is_set(remaining_quota_of_requests.operation)
	|| is_set(total_quota_of_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterimInflight' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.operation)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.operation)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());
    if (quota_exhausts.is_set || is_set(quota_exhausts.operation)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.operation)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.operation)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
    }
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::AuthenticationStatistics()
    :
    accepted_requests{YType::uint64, "accepted-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    incomplete_requests{YType::uint64, "incomplete-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    sent_requests{YType::uint64, "sent-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    terminated_requests{YType::uint64, "terminated-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "authentication-statistics"; yang_parent_name = "aggregate-accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::~AuthenticationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::AuthorizationStatistics()
    :
    accepted_requests{YType::uint64, "accepted-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    incomplete_requests{YType::uint64, "incomplete-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    sent_requests{YType::uint64, "sent-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    terminated_requests{YType::uint64, "terminated-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"}
{
    yang_name = "authorization-statistics"; yang_parent_name = "aggregate-accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::~AuthorizationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::has_data() const
{
    return accepted_requests.is_set
	|| errored_requests.is_set
	|| incomplete_requests.is_set
	|| rejected_requests.is_set
	|| sent_requests.is_set
	|| successful_requests.is_set
	|| terminated_requests.is_set
	|| unreachable_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(errored_requests.operation)
	|| is_set(incomplete_requests.operation)
	|| is_set(rejected_requests.operation)
	|| is_set(sent_requests.operation)
	|| is_set(successful_requests.operation)
	|| is_set(terminated_requests.operation)
	|| is_set(unreachable_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorizationStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (incomplete_requests.is_set || is_set(incomplete_requests.operation)) leaf_name_data.push_back(incomplete_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.operation)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (sent_requests.is_set || is_set(sent_requests.operation)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.operation)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.operation)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.operation)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "incomplete-requests")
    {
        incomplete_requests = value;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
    }
    if(value_path == "sent-requests")
    {
        sent_requests = value;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ChangeOfAuthorizationStatistics()
    :
    attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
    internal_err_resps{YType::uint64, "internal-err-resps"},
    no_cmd_resps{YType::uint64, "no-cmd-resps"},
    no_session_found_resps{YType::uint64, "no-session-found-resps"},
    no_session_peer_resps{YType::uint64, "no-session-peer-resps"},
    resp_send_failure{YType::uint64, "resp-send-failure"},
    service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
    unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
    unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
    unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"}
    	,
    account_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff>())
	,account_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon>())
	,account_update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate>())
	,service_multi(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti>())
	,session_disconnect(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect>())
	,single_service_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff>())
	,single_service_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon>())
	,single_service_modify(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify>())
{
    account_logoff->parent = this;

    account_logon->parent = this;

    account_update->parent = this;

    service_multi->parent = this;

    session_disconnect->parent = this;

    single_service_logoff->parent = this;

    single_service_logon->parent = this;

    single_service_modify->parent = this;

    yang_name = "change-of-authorization-statistics"; yang_parent_name = "aggregate-accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::~ChangeOfAuthorizationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::has_data() const
{
    return attr_list_retrieve_failure_resps.is_set
	|| internal_err_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| resp_send_failure.is_set
	|| service_profile_push_failure_resps.is_set
	|| unknown_account_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(attr_list_retrieve_failure_resps.operation)
	|| is_set(internal_err_resps.operation)
	|| is_set(no_cmd_resps.operation)
	|| is_set(no_session_found_resps.operation)
	|| is_set(no_session_peer_resps.operation)
	|| is_set(resp_send_failure.operation)
	|| is_set(service_profile_push_failure_resps.operation)
	|| is_set(unknown_account_cmd_resps.operation)
	|| is_set(unknown_cmd_resps.operation)
	|| is_set(unknown_service_cmd_resps.operation)
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-of-authorization-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ChangeOfAuthorizationStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.operation)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.operation)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.operation)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.operation)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.operation)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.operation)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.operation)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.operation)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.operation)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.operation)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-logoff")
    {
        if(account_logoff == nullptr)
        {
            account_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff>();
        }
        return account_logoff;
    }

    if(child_yang_name == "account-logon")
    {
        if(account_logon == nullptr)
        {
            account_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon>();
        }
        return account_logon;
    }

    if(child_yang_name == "account-update")
    {
        if(account_update == nullptr)
        {
            account_update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate>();
        }
        return account_update;
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi == nullptr)
        {
            service_multi = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti>();
        }
        return service_multi;
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect == nullptr)
        {
            session_disconnect = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect>();
        }
        return session_disconnect;
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff == nullptr)
        {
            single_service_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff>();
        }
        return single_service_logoff;
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon == nullptr)
        {
            single_service_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon>();
        }
        return single_service_logon;
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify == nullptr)
        {
            single_service_modify = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify>();
        }
        return single_service_modify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account_logoff != nullptr)
    {
        children["account-logoff"] = account_logoff;
    }

    if(account_logon != nullptr)
    {
        children["account-logon"] = account_logon;
    }

    if(account_update != nullptr)
    {
        children["account-update"] = account_update;
    }

    if(service_multi != nullptr)
    {
        children["service-multi"] = service_multi;
    }

    if(session_disconnect != nullptr)
    {
        children["session-disconnect"] = session_disconnect;
    }

    if(single_service_logoff != nullptr)
    {
        children["single-service-logoff"] = single_service_logoff;
    }

    if(single_service_logon != nullptr)
    {
        children["single-service-logon"] = single_service_logon;
    }

    if(single_service_modify != nullptr)
    {
        children["single-service-modify"] = single_service_modify;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
    }
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::AccountLogon()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logon"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountLogon' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::AccountLogoff()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logoff"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountLogoff' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::AccountUpdate()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-update"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountUpdate' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::SessionDisconnect()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "session-disconnect"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionDisconnect' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::SingleServiceLogon()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logon"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceLogon' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::SingleServiceLogoff()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logoff"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceLogoff' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::SingleServiceModify()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-modify"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceModify' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::ServiceMulti()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "service-multi"; yang_parent_name = "change-of-authorization-statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceMulti' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::MobilityStatistics()
    :
    receive_response_failures{YType::uint64, "receive-response-failures"},
    receive_response_successes{YType::uint64, "receive-response-successes"},
    send_request_failures{YType::uint64, "send-request-failures"},
    send_request_successes{YType::uint64, "send-request-successes"}
{
    yang_name = "mobility-statistics"; yang_parent_name = "aggregate-accounting-stats-all";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::~MobilityStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::has_data() const
{
    return receive_response_failures.is_set
	|| receive_response_successes.is_set
	|| send_request_failures.is_set
	|| send_request_successes.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::has_operation() const
{
    return is_set(operation)
	|| is_set(receive_response_failures.operation)
	|| is_set(receive_response_successes.operation)
	|| is_set(send_request_failures.operation)
	|| is_set(send_request_successes.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility-statistics";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MobilityStatistics' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_response_failures.is_set || is_set(receive_response_failures.operation)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.operation)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.operation)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (send_request_successes.is_set || is_set(send_request_successes.operation)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
    }
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Accounting()
    :
    active_sessions{YType::uint32, "active-sessions"},
    policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
    policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"},
    started_sessions{YType::uint64, "started-sessions"},
    stopped_sessions{YType::uint64, "stopped-sessions"}
    	,
    interim(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim>())
	,interim_inflight(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight>())
	,pass_through(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough>())
	,start(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start>())
	,stop(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop>())
	,update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update>())
{
    interim->parent = this;

    interim_inflight->parent = this;

    pass_through->parent = this;

    start->parent = this;

    stop->parent = this;

    update->parent = this;

    yang_name = "accounting"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::~Accounting()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::has_data() const
{
    return active_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| (interim !=  nullptr && interim->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::has_operation() const
{
    return is_set(operation)
	|| is_set(active_sessions.operation)
	|| is_set(policy_plane_errored_requests.operation)
	|| is_set(policy_plane_unknown_requests.operation)
	|| is_set(started_sessions.operation)
	|| is_set(stopped_sessions.operation)
	|| (interim !=  nullptr && interim->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.operation)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.operation)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.operation)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.operation)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.operation)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim>();
        }
        return interim;
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight == nullptr)
        {
            interim_inflight = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight>();
        }
        return interim_inflight;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "start")
    {
        if(start == nullptr)
        {
            start = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start>();
        }
        return start;
    }

    if(child_yang_name == "stop")
    {
        if(stop == nullptr)
        {
            stop = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop>();
        }
        return stop;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interim != nullptr)
    {
        children["interim"] = interim;
    }

    if(interim_inflight != nullptr)
    {
        children["interim-inflight"] = interim_inflight;
    }

    if(pass_through != nullptr)
    {
        children["pass-through"] = pass_through;
    }

    if(start != nullptr)
    {
        children["start"] = start;
    }

    if(stop != nullptr)
    {
        children["stop"] = stop;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::Start()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "start"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Start' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::Stop()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "stop"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Stop' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::Interim()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "interim"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interim' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::PassThrough()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "pass-through"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PassThrough' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::Update()
    :
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    errored_requests{YType::uint64, "errored-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "update"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::has_data() const
{
    return aaa_errored_requests.is_set
	|| aaa_failed_responses.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| errored_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(aaa_errored_requests.operation)
	|| is_set(aaa_failed_responses.operation)
	|| is_set(aaa_sent_requests.operation)
	|| is_set(aaa_succeeded_responses.operation)
	|| is_set(errored_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Update' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.operation)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.operation)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.operation)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.operation)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.operation)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::InterimInflight()
    :
    accepted_requests{YType::uint32, "accepted-requests"},
    denied_requests{YType::uint32, "denied-requests"},
    low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"},
    quota_exhausts{YType::uint32, "quota-exhausts"},
    remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
    total_quota_of_requests{YType::uint32, "total-quota-of-requests"}
{
    yang_name = "interim-inflight"; yang_parent_name = "accounting";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::has_data() const
{
    return accepted_requests.is_set
	|| denied_requests.is_set
	|| low_water_mark_quota_of_requests.is_set
	|| quota_exhausts.is_set
	|| remaining_quota_of_requests.is_set
	|| total_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::has_operation() const
{
    return is_set(operation)
	|| is_set(accepted_requests.operation)
	|| is_set(denied_requests.operation)
	|| is_set(low_water_mark_quota_of_requests.operation)
	|| is_set(quota_exhausts.operation)
	|| is_set(remaining_quota_of_requests.operation)
	|| is_set(total_quota_of_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterimInflight' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_requests.is_set || is_set(accepted_requests.operation)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.operation)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.operation)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());
    if (quota_exhausts.is_set || is_set(quota_exhausts.operation)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.operation)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.operation)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
    }
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::Mobility()
    :
    receive_response_failures{YType::uint64, "receive-response-failures"},
    receive_response_successes{YType::uint64, "receive-response-successes"},
    send_request_failures{YType::uint64, "send-request-failures"},
    send_request_successes{YType::uint64, "send-request-successes"}
{
    yang_name = "mobility"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::~Mobility()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::has_data() const
{
    return receive_response_failures.is_set
	|| receive_response_successes.is_set
	|| send_request_failures.is_set
	|| send_request_successes.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::has_operation() const
{
    return is_set(operation)
	|| is_set(receive_response_failures.operation)
	|| is_set(receive_response_successes.operation)
	|| is_set(send_request_failures.operation)
	|| is_set(send_request_successes.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Mobility' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (receive_response_failures.is_set || is_set(receive_response_failures.operation)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.operation)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.operation)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (send_request_successes.is_set || is_set(send_request_successes.operation)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
    }
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AggregateChangeOfAuthorization()
    :
    attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
    internal_err_resps{YType::uint64, "internal-err-resps"},
    no_cmd_resps{YType::uint64, "no-cmd-resps"},
    no_session_found_resps{YType::uint64, "no-session-found-resps"},
    no_session_peer_resps{YType::uint64, "no-session-peer-resps"},
    resp_send_failure{YType::uint64, "resp-send-failure"},
    service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
    unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
    unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
    unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"}
    	,
    account_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff>())
	,account_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon>())
	,account_update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate>())
	,service_multi(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti>())
	,session_disconnect(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect>())
	,single_service_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff>())
	,single_service_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon>())
	,single_service_modify(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify>())
{
    account_logoff->parent = this;

    account_logon->parent = this;

    account_update->parent = this;

    service_multi->parent = this;

    session_disconnect->parent = this;

    single_service_logoff->parent = this;

    single_service_logon->parent = this;

    single_service_modify->parent = this;

    yang_name = "aggregate-change-of-authorization"; yang_parent_name = "aaa";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::~AggregateChangeOfAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::has_data() const
{
    return attr_list_retrieve_failure_resps.is_set
	|| internal_err_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| resp_send_failure.is_set
	|| service_profile_push_failure_resps.is_set
	|| unknown_account_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::has_operation() const
{
    return is_set(operation)
	|| is_set(attr_list_retrieve_failure_resps.operation)
	|| is_set(internal_err_resps.operation)
	|| is_set(no_cmd_resps.operation)
	|| is_set(no_session_found_resps.operation)
	|| is_set(no_session_peer_resps.operation)
	|| is_set(resp_send_failure.operation)
	|| is_set(service_profile_push_failure_resps.operation)
	|| is_set(unknown_account_cmd_resps.operation)
	|| is_set(unknown_cmd_resps.operation)
	|| is_set(unknown_service_cmd_resps.operation)
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-change-of-authorization";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateChangeOfAuthorization' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.operation)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.operation)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.operation)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.operation)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.operation)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.operation)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.operation)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.operation)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.operation)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.operation)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-logoff")
    {
        if(account_logoff == nullptr)
        {
            account_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff>();
        }
        return account_logoff;
    }

    if(child_yang_name == "account-logon")
    {
        if(account_logon == nullptr)
        {
            account_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon>();
        }
        return account_logon;
    }

    if(child_yang_name == "account-update")
    {
        if(account_update == nullptr)
        {
            account_update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate>();
        }
        return account_update;
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi == nullptr)
        {
            service_multi = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti>();
        }
        return service_multi;
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect == nullptr)
        {
            session_disconnect = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect>();
        }
        return session_disconnect;
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff == nullptr)
        {
            single_service_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff>();
        }
        return single_service_logoff;
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon == nullptr)
        {
            single_service_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon>();
        }
        return single_service_logon;
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify == nullptr)
        {
            single_service_modify = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify>();
        }
        return single_service_modify;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(account_logoff != nullptr)
    {
        children["account-logoff"] = account_logoff;
    }

    if(account_logon != nullptr)
    {
        children["account-logon"] = account_logon;
    }

    if(account_update != nullptr)
    {
        children["account-update"] = account_update;
    }

    if(service_multi != nullptr)
    {
        children["service-multi"] = service_multi;
    }

    if(session_disconnect != nullptr)
    {
        children["session-disconnect"] = session_disconnect;
    }

    if(single_service_logoff != nullptr)
    {
        children["single-service-logoff"] = single_service_logoff;
    }

    if(single_service_logon != nullptr)
    {
        children["single-service-logon"] = single_service_logon;
    }

    if(single_service_modify != nullptr)
    {
        children["single-service-modify"] = single_service_modify;
    }

    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
    }
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::AccountLogon()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logon"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountLogon' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::AccountLogoff()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-logoff"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountLogoff' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::AccountUpdate()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "account-update"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountUpdate' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::SessionDisconnect()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "session-disconnect"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SessionDisconnect' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::SingleServiceLogon()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logon"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceLogon' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::SingleServiceLogoff()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-logoff"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceLogoff' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::SingleServiceModify()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "single-service-modify"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SingleServiceModify' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::ServiceMulti()
    :
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"},
    received_requests{YType::uint64, "received-requests"}
{
    yang_name = "service-multi"; yang_parent_name = "aggregate-change-of-authorization";
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::has_data() const
{
    return acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set
	|| received_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::has_operation() const
{
    return is_set(operation)
	|| is_set(acknowledged_requests.operation)
	|| is_set(non_acknowledged_requests.operation)
	|| is_set(received_requests.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServiceMulti' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acknowledged_requests.is_set || is_set(acknowledged_requests.operation)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.operation)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());
    if (received_requests.is_set || is_set(received_requests.operation)) leaf_name_data.push_back(received_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
    }
    if(value_path == "received-requests")
    {
        received_requests = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::AggregateSummary()
    :
    calling_station_id_attribute_format_warnings{YType::uint64, "calling-station-id-attribute-format-warnings"},
    destination_station_id_attribute_format_warnings{YType::uint64, "destination-station-id-attribute-format-warnings"},
    install_user_profiles{YType::uint64, "install-user-profiles"},
    nas_port_attribute_format_warnings{YType::uint64, "nas-port-attribute-format-warnings"},
    nas_port_id_attribute_format_warnings{YType::uint64, "nas-port-id-attribute-format-warnings"},
    no_class_match_in_start_request{YType::uint64, "no-class-match-in-start-request"},
    no_subscriber_control_policy_on_interface{YType::uint64, "no-subscriber-control-policy-on-interface"},
    sess_disc_no_quota{YType::uint64, "sess-disc-no-quota"},
    sess_disc_none_started{YType::uint64, "sess-disc-none-started"},
    sess_disc_q_count{YType::uint32, "sess-disc-q-count"},
    sess_disc_quota{YType::uint32, "sess-disc-quota"},
    sess_disc_quota_avail{YType::uint64, "sess-disc-quota-avail"},
    sess_disc_quota_exhausts{YType::uint64, "sess-disc-quota-exhausts"},
    sess_disc_quota_remaining{YType::uint32, "sess-disc-quota-remaining"},
    sess_disc_recon_ip{YType::uint64, "sess-disc-recon-ip"},
    user_profile_errors{YType::uint64, "user-profile-errors"},
    user_profile_install_errors{YType::uint64, "user-profile-install-errors"},
    user_profile_removals{YType::uint64, "user-profile-removals"},
    username_attribute_format_warnings{YType::uint64, "username-attribute-format-warnings"}
{
    yang_name = "aggregate-summary"; yang_parent_name = "statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::~AggregateSummary()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::has_data() const
{
    return calling_station_id_attribute_format_warnings.is_set
	|| destination_station_id_attribute_format_warnings.is_set
	|| install_user_profiles.is_set
	|| nas_port_attribute_format_warnings.is_set
	|| nas_port_id_attribute_format_warnings.is_set
	|| no_class_match_in_start_request.is_set
	|| no_subscriber_control_policy_on_interface.is_set
	|| sess_disc_no_quota.is_set
	|| sess_disc_none_started.is_set
	|| sess_disc_q_count.is_set
	|| sess_disc_quota.is_set
	|| sess_disc_quota_avail.is_set
	|| sess_disc_quota_exhausts.is_set
	|| sess_disc_quota_remaining.is_set
	|| sess_disc_recon_ip.is_set
	|| user_profile_errors.is_set
	|| user_profile_install_errors.is_set
	|| user_profile_removals.is_set
	|| username_attribute_format_warnings.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(calling_station_id_attribute_format_warnings.operation)
	|| is_set(destination_station_id_attribute_format_warnings.operation)
	|| is_set(install_user_profiles.operation)
	|| is_set(nas_port_attribute_format_warnings.operation)
	|| is_set(nas_port_id_attribute_format_warnings.operation)
	|| is_set(no_class_match_in_start_request.operation)
	|| is_set(no_subscriber_control_policy_on_interface.operation)
	|| is_set(sess_disc_no_quota.operation)
	|| is_set(sess_disc_none_started.operation)
	|| is_set(sess_disc_q_count.operation)
	|| is_set(sess_disc_quota.operation)
	|| is_set(sess_disc_quota_avail.operation)
	|| is_set(sess_disc_quota_exhausts.operation)
	|| is_set(sess_disc_quota_remaining.operation)
	|| is_set(sess_disc_recon_ip.operation)
	|| is_set(user_profile_errors.operation)
	|| is_set(user_profile_install_errors.operation)
	|| is_set(user_profile_removals.operation)
	|| is_set(username_attribute_format_warnings.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-summary";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AggregateSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (calling_station_id_attribute_format_warnings.is_set || is_set(calling_station_id_attribute_format_warnings.operation)) leaf_name_data.push_back(calling_station_id_attribute_format_warnings.get_name_leafdata());
    if (destination_station_id_attribute_format_warnings.is_set || is_set(destination_station_id_attribute_format_warnings.operation)) leaf_name_data.push_back(destination_station_id_attribute_format_warnings.get_name_leafdata());
    if (install_user_profiles.is_set || is_set(install_user_profiles.operation)) leaf_name_data.push_back(install_user_profiles.get_name_leafdata());
    if (nas_port_attribute_format_warnings.is_set || is_set(nas_port_attribute_format_warnings.operation)) leaf_name_data.push_back(nas_port_attribute_format_warnings.get_name_leafdata());
    if (nas_port_id_attribute_format_warnings.is_set || is_set(nas_port_id_attribute_format_warnings.operation)) leaf_name_data.push_back(nas_port_id_attribute_format_warnings.get_name_leafdata());
    if (no_class_match_in_start_request.is_set || is_set(no_class_match_in_start_request.operation)) leaf_name_data.push_back(no_class_match_in_start_request.get_name_leafdata());
    if (no_subscriber_control_policy_on_interface.is_set || is_set(no_subscriber_control_policy_on_interface.operation)) leaf_name_data.push_back(no_subscriber_control_policy_on_interface.get_name_leafdata());
    if (sess_disc_no_quota.is_set || is_set(sess_disc_no_quota.operation)) leaf_name_data.push_back(sess_disc_no_quota.get_name_leafdata());
    if (sess_disc_none_started.is_set || is_set(sess_disc_none_started.operation)) leaf_name_data.push_back(sess_disc_none_started.get_name_leafdata());
    if (sess_disc_q_count.is_set || is_set(sess_disc_q_count.operation)) leaf_name_data.push_back(sess_disc_q_count.get_name_leafdata());
    if (sess_disc_quota.is_set || is_set(sess_disc_quota.operation)) leaf_name_data.push_back(sess_disc_quota.get_name_leafdata());
    if (sess_disc_quota_avail.is_set || is_set(sess_disc_quota_avail.operation)) leaf_name_data.push_back(sess_disc_quota_avail.get_name_leafdata());
    if (sess_disc_quota_exhausts.is_set || is_set(sess_disc_quota_exhausts.operation)) leaf_name_data.push_back(sess_disc_quota_exhausts.get_name_leafdata());
    if (sess_disc_quota_remaining.is_set || is_set(sess_disc_quota_remaining.operation)) leaf_name_data.push_back(sess_disc_quota_remaining.get_name_leafdata());
    if (sess_disc_recon_ip.is_set || is_set(sess_disc_recon_ip.operation)) leaf_name_data.push_back(sess_disc_recon_ip.get_name_leafdata());
    if (user_profile_errors.is_set || is_set(user_profile_errors.operation)) leaf_name_data.push_back(user_profile_errors.get_name_leafdata());
    if (user_profile_install_errors.is_set || is_set(user_profile_install_errors.operation)) leaf_name_data.push_back(user_profile_install_errors.get_name_leafdata());
    if (user_profile_removals.is_set || is_set(user_profile_removals.operation)) leaf_name_data.push_back(user_profile_removals.get_name_leafdata());
    if (username_attribute_format_warnings.is_set || is_set(username_attribute_format_warnings.operation)) leaf_name_data.push_back(username_attribute_format_warnings.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "calling-station-id-attribute-format-warnings")
    {
        calling_station_id_attribute_format_warnings = value;
    }
    if(value_path == "destination-station-id-attribute-format-warnings")
    {
        destination_station_id_attribute_format_warnings = value;
    }
    if(value_path == "install-user-profiles")
    {
        install_user_profiles = value;
    }
    if(value_path == "nas-port-attribute-format-warnings")
    {
        nas_port_attribute_format_warnings = value;
    }
    if(value_path == "nas-port-id-attribute-format-warnings")
    {
        nas_port_id_attribute_format_warnings = value;
    }
    if(value_path == "no-class-match-in-start-request")
    {
        no_class_match_in_start_request = value;
    }
    if(value_path == "no-subscriber-control-policy-on-interface")
    {
        no_subscriber_control_policy_on_interface = value;
    }
    if(value_path == "sess-disc-no-quota")
    {
        sess_disc_no_quota = value;
    }
    if(value_path == "sess-disc-none-started")
    {
        sess_disc_none_started = value;
    }
    if(value_path == "sess-disc-q-count")
    {
        sess_disc_q_count = value;
    }
    if(value_path == "sess-disc-quota")
    {
        sess_disc_quota = value;
    }
    if(value_path == "sess-disc-quota-avail")
    {
        sess_disc_quota_avail = value;
    }
    if(value_path == "sess-disc-quota-exhausts")
    {
        sess_disc_quota_exhausts = value;
    }
    if(value_path == "sess-disc-quota-remaining")
    {
        sess_disc_quota_remaining = value;
    }
    if(value_path == "sess-disc-recon-ip")
    {
        sess_disc_recon_ip = value;
    }
    if(value_path == "user-profile-errors")
    {
        user_profile_errors = value;
    }
    if(value_path == "user-profile-install-errors")
    {
        user_profile_install_errors = value;
    }
    if(value_path == "user-profile-removals")
    {
        user_profile_removals = value;
    }
    if(value_path == "username-attribute-format-warnings")
    {
        username_attribute_format_warnings = value;
    }
}

Subscriber::Manager::Nodes::Node::Statistics::Srg::Srg()
    :
    ack_to_srg{YType::uint32, "ack-to-srg"},
    actual_txlist_sent{YType::uint32, "actual-txlist-sent"},
    alreadyin_txlist{YType::uint32, "alreadyin-txlist"},
    create_upd_clean_callback{YType::uint32, "create-upd-clean-callback"},
    create_update_encode{YType::uint32, "create-update-encode"},
    delete_clean_callback{YType::uint32, "delete-clean-callback"},
    delete_encode{YType::uint32, "delete-encode"},
    eod_count{YType::uint32, "eod-count"},
    flow_control_resume_threshold{YType::uint32, "flow-control-resume-threshold"},
    inflight_add_count{YType::uint32, "inflight-add-count"},
    inflight_alloc_fails{YType::uint32, "inflight-alloc-fails"},
    inflight_delete_failures{YType::uint32, "inflight-delete-failures"},
    inflight_deletes{YType::uint32, "inflight-deletes"},
    inflight_insert_failures{YType::uint32, "inflight-insert-failures"},
    inflight_not_found{YType::uint32, "inflight-not-found"},
    inflight_session_count{YType::uint32, "inflight-session-count"},
    inflight_under_run_count{YType::uint32, "inflight-under-run-count"},
    is_srg_flow_control_enabled{YType::boolean, "is-srg-flow-control-enabled"},
    last_pause_period{YType::uint64, "last-pause-period"},
    last_pause_time{YType::uint64, "last-pause-time"},
    last_resume_time{YType::uint64, "last-resume-time"},
    max_inflight_sessoin_count{YType::uint32, "max-inflight-sessoin-count"},
    nack_to_srg{YType::uint32, "nack-to-srg"},
    nack_to_srg_fail_cnt{YType::uint32, "nack-to-srg-fail-cnt"},
    slave_create_update{YType::uint32, "slave-create-update"},
    slave_decode_fail{YType::uint32, "slave-decode-fail"},
    slave_delete{YType::uint32, "slave-delete"},
    slave_recv_entry{YType::uint32, "slave-recv-entry"},
    sod_count{YType::uint32, "sod-count"},
    sod_eod_dirty_delete_count{YType::uint32, "sod-eod-dirty-delete-count"},
    sod_eod_dirty_mark_count{YType::uint32, "sod-eod-dirty-mark-count"},
    sod_eod_replay_req_count{YType::uint32, "sod-eod-replay-req-count"},
    srg_context_free{YType::uint32, "srg-context-free"},
    srg_context_malloc{YType::uint32, "srg-context-malloc"},
    total_dont_send_to_txlist{YType::uint32, "total-dont-send-to-txlist"},
    total_master_eoms_pending{YType::uint32, "total-master-eoms-pending"},
    total_pause_count{YType::uint32, "total-pause-count"},
    total_pause_time{YType::uint64, "total-pause-time"},
    total_resume_count{YType::uint32, "total-resume-count"},
    total_srg_not_master{YType::uint32, "total-srg-not-master"},
    txlist_clean_invalid_state{YType::uint32, "txlist-clean-invalid-state"},
    txlist_del_app{YType::uint32, "txlist-del-app"},
    txlist_del_app_notlinked{YType::uint32, "txlist-del-app-notlinked"},
    txlist_del_sync{YType::uint32, "txlist-del-sync"},
    txlist_del_sync_notlinked{YType::uint32, "txlist-del-sync-notlinked"},
    txlist_encode{YType::uint32, "txlist-encode"},
    txlist_encode_fail{YType::uint32, "txlist-encode-fail"},
    txlist_remove_all{YType::uint32, "txlist-remove-all"},
    txlist_remove_all_internal_error{YType::uint32, "txlist-remove-all-internal-error"},
    txlist_send_failed{YType::uint32, "txlist-send-failed"},
    txlist_send_failed_notactive{YType::uint32, "txlist-send-failed-notactive"},
    txlist_send_triggered{YType::uint32, "txlist-send-triggered"}
{
    yang_name = "srg"; yang_parent_name = "statistics";
}

Subscriber::Manager::Nodes::Node::Statistics::Srg::~Srg()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Srg::has_data() const
{
    return ack_to_srg.is_set
	|| actual_txlist_sent.is_set
	|| alreadyin_txlist.is_set
	|| create_upd_clean_callback.is_set
	|| create_update_encode.is_set
	|| delete_clean_callback.is_set
	|| delete_encode.is_set
	|| eod_count.is_set
	|| flow_control_resume_threshold.is_set
	|| inflight_add_count.is_set
	|| inflight_alloc_fails.is_set
	|| inflight_delete_failures.is_set
	|| inflight_deletes.is_set
	|| inflight_insert_failures.is_set
	|| inflight_not_found.is_set
	|| inflight_session_count.is_set
	|| inflight_under_run_count.is_set
	|| is_srg_flow_control_enabled.is_set
	|| last_pause_period.is_set
	|| last_pause_time.is_set
	|| last_resume_time.is_set
	|| max_inflight_sessoin_count.is_set
	|| nack_to_srg.is_set
	|| nack_to_srg_fail_cnt.is_set
	|| slave_create_update.is_set
	|| slave_decode_fail.is_set
	|| slave_delete.is_set
	|| slave_recv_entry.is_set
	|| sod_count.is_set
	|| sod_eod_dirty_delete_count.is_set
	|| sod_eod_dirty_mark_count.is_set
	|| sod_eod_replay_req_count.is_set
	|| srg_context_free.is_set
	|| srg_context_malloc.is_set
	|| total_dont_send_to_txlist.is_set
	|| total_master_eoms_pending.is_set
	|| total_pause_count.is_set
	|| total_pause_time.is_set
	|| total_resume_count.is_set
	|| total_srg_not_master.is_set
	|| txlist_clean_invalid_state.is_set
	|| txlist_del_app.is_set
	|| txlist_del_app_notlinked.is_set
	|| txlist_del_sync.is_set
	|| txlist_del_sync_notlinked.is_set
	|| txlist_encode.is_set
	|| txlist_encode_fail.is_set
	|| txlist_remove_all.is_set
	|| txlist_remove_all_internal_error.is_set
	|| txlist_send_failed.is_set
	|| txlist_send_failed_notactive.is_set
	|| txlist_send_triggered.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Srg::has_operation() const
{
    return is_set(operation)
	|| is_set(ack_to_srg.operation)
	|| is_set(actual_txlist_sent.operation)
	|| is_set(alreadyin_txlist.operation)
	|| is_set(create_upd_clean_callback.operation)
	|| is_set(create_update_encode.operation)
	|| is_set(delete_clean_callback.operation)
	|| is_set(delete_encode.operation)
	|| is_set(eod_count.operation)
	|| is_set(flow_control_resume_threshold.operation)
	|| is_set(inflight_add_count.operation)
	|| is_set(inflight_alloc_fails.operation)
	|| is_set(inflight_delete_failures.operation)
	|| is_set(inflight_deletes.operation)
	|| is_set(inflight_insert_failures.operation)
	|| is_set(inflight_not_found.operation)
	|| is_set(inflight_session_count.operation)
	|| is_set(inflight_under_run_count.operation)
	|| is_set(is_srg_flow_control_enabled.operation)
	|| is_set(last_pause_period.operation)
	|| is_set(last_pause_time.operation)
	|| is_set(last_resume_time.operation)
	|| is_set(max_inflight_sessoin_count.operation)
	|| is_set(nack_to_srg.operation)
	|| is_set(nack_to_srg_fail_cnt.operation)
	|| is_set(slave_create_update.operation)
	|| is_set(slave_decode_fail.operation)
	|| is_set(slave_delete.operation)
	|| is_set(slave_recv_entry.operation)
	|| is_set(sod_count.operation)
	|| is_set(sod_eod_dirty_delete_count.operation)
	|| is_set(sod_eod_dirty_mark_count.operation)
	|| is_set(sod_eod_replay_req_count.operation)
	|| is_set(srg_context_free.operation)
	|| is_set(srg_context_malloc.operation)
	|| is_set(total_dont_send_to_txlist.operation)
	|| is_set(total_master_eoms_pending.operation)
	|| is_set(total_pause_count.operation)
	|| is_set(total_pause_time.operation)
	|| is_set(total_resume_count.operation)
	|| is_set(total_srg_not_master.operation)
	|| is_set(txlist_clean_invalid_state.operation)
	|| is_set(txlist_del_app.operation)
	|| is_set(txlist_del_app_notlinked.operation)
	|| is_set(txlist_del_sync.operation)
	|| is_set(txlist_del_sync_notlinked.operation)
	|| is_set(txlist_encode.operation)
	|| is_set(txlist_encode_fail.operation)
	|| is_set(txlist_remove_all.operation)
	|| is_set(txlist_remove_all_internal_error.operation)
	|| is_set(txlist_send_failed.operation)
	|| is_set(txlist_send_failed_notactive.operation)
	|| is_set(txlist_send_triggered.operation);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Srg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srg";

    return path_buffer.str();

}

const EntityPath Subscriber::Manager::Nodes::Node::Statistics::Srg::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Srg' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ack_to_srg.is_set || is_set(ack_to_srg.operation)) leaf_name_data.push_back(ack_to_srg.get_name_leafdata());
    if (actual_txlist_sent.is_set || is_set(actual_txlist_sent.operation)) leaf_name_data.push_back(actual_txlist_sent.get_name_leafdata());
    if (alreadyin_txlist.is_set || is_set(alreadyin_txlist.operation)) leaf_name_data.push_back(alreadyin_txlist.get_name_leafdata());
    if (create_upd_clean_callback.is_set || is_set(create_upd_clean_callback.operation)) leaf_name_data.push_back(create_upd_clean_callback.get_name_leafdata());
    if (create_update_encode.is_set || is_set(create_update_encode.operation)) leaf_name_data.push_back(create_update_encode.get_name_leafdata());
    if (delete_clean_callback.is_set || is_set(delete_clean_callback.operation)) leaf_name_data.push_back(delete_clean_callback.get_name_leafdata());
    if (delete_encode.is_set || is_set(delete_encode.operation)) leaf_name_data.push_back(delete_encode.get_name_leafdata());
    if (eod_count.is_set || is_set(eod_count.operation)) leaf_name_data.push_back(eod_count.get_name_leafdata());
    if (flow_control_resume_threshold.is_set || is_set(flow_control_resume_threshold.operation)) leaf_name_data.push_back(flow_control_resume_threshold.get_name_leafdata());
    if (inflight_add_count.is_set || is_set(inflight_add_count.operation)) leaf_name_data.push_back(inflight_add_count.get_name_leafdata());
    if (inflight_alloc_fails.is_set || is_set(inflight_alloc_fails.operation)) leaf_name_data.push_back(inflight_alloc_fails.get_name_leafdata());
    if (inflight_delete_failures.is_set || is_set(inflight_delete_failures.operation)) leaf_name_data.push_back(inflight_delete_failures.get_name_leafdata());
    if (inflight_deletes.is_set || is_set(inflight_deletes.operation)) leaf_name_data.push_back(inflight_deletes.get_name_leafdata());
    if (inflight_insert_failures.is_set || is_set(inflight_insert_failures.operation)) leaf_name_data.push_back(inflight_insert_failures.get_name_leafdata());
    if (inflight_not_found.is_set || is_set(inflight_not_found.operation)) leaf_name_data.push_back(inflight_not_found.get_name_leafdata());
    if (inflight_session_count.is_set || is_set(inflight_session_count.operation)) leaf_name_data.push_back(inflight_session_count.get_name_leafdata());
    if (inflight_under_run_count.is_set || is_set(inflight_under_run_count.operation)) leaf_name_data.push_back(inflight_under_run_count.get_name_leafdata());
    if (is_srg_flow_control_enabled.is_set || is_set(is_srg_flow_control_enabled.operation)) leaf_name_data.push_back(is_srg_flow_control_enabled.get_name_leafdata());
    if (last_pause_period.is_set || is_set(last_pause_period.operation)) leaf_name_data.push_back(last_pause_period.get_name_leafdata());
    if (last_pause_time.is_set || is_set(last_pause_time.operation)) leaf_name_data.push_back(last_pause_time.get_name_leafdata());
    if (last_resume_time.is_set || is_set(last_resume_time.operation)) leaf_name_data.push_back(last_resume_time.get_name_leafdata());
    if (max_inflight_sessoin_count.is_set || is_set(max_inflight_sessoin_count.operation)) leaf_name_data.push_back(max_inflight_sessoin_count.get_name_leafdata());
    if (nack_to_srg.is_set || is_set(nack_to_srg.operation)) leaf_name_data.push_back(nack_to_srg.get_name_leafdata());
    if (nack_to_srg_fail_cnt.is_set || is_set(nack_to_srg_fail_cnt.operation)) leaf_name_data.push_back(nack_to_srg_fail_cnt.get_name_leafdata());
    if (slave_create_update.is_set || is_set(slave_create_update.operation)) leaf_name_data.push_back(slave_create_update.get_name_leafdata());
    if (slave_decode_fail.is_set || is_set(slave_decode_fail.operation)) leaf_name_data.push_back(slave_decode_fail.get_name_leafdata());
    if (slave_delete.is_set || is_set(slave_delete.operation)) leaf_name_data.push_back(slave_delete.get_name_leafdata());
    if (slave_recv_entry.is_set || is_set(slave_recv_entry.operation)) leaf_name_data.push_back(slave_recv_entry.get_name_leafdata());
    if (sod_count.is_set || is_set(sod_count.operation)) leaf_name_data.push_back(sod_count.get_name_leafdata());
    if (sod_eod_dirty_delete_count.is_set || is_set(sod_eod_dirty_delete_count.operation)) leaf_name_data.push_back(sod_eod_dirty_delete_count.get_name_leafdata());
    if (sod_eod_dirty_mark_count.is_set || is_set(sod_eod_dirty_mark_count.operation)) leaf_name_data.push_back(sod_eod_dirty_mark_count.get_name_leafdata());
    if (sod_eod_replay_req_count.is_set || is_set(sod_eod_replay_req_count.operation)) leaf_name_data.push_back(sod_eod_replay_req_count.get_name_leafdata());
    if (srg_context_free.is_set || is_set(srg_context_free.operation)) leaf_name_data.push_back(srg_context_free.get_name_leafdata());
    if (srg_context_malloc.is_set || is_set(srg_context_malloc.operation)) leaf_name_data.push_back(srg_context_malloc.get_name_leafdata());
    if (total_dont_send_to_txlist.is_set || is_set(total_dont_send_to_txlist.operation)) leaf_name_data.push_back(total_dont_send_to_txlist.get_name_leafdata());
    if (total_master_eoms_pending.is_set || is_set(total_master_eoms_pending.operation)) leaf_name_data.push_back(total_master_eoms_pending.get_name_leafdata());
    if (total_pause_count.is_set || is_set(total_pause_count.operation)) leaf_name_data.push_back(total_pause_count.get_name_leafdata());
    if (total_pause_time.is_set || is_set(total_pause_time.operation)) leaf_name_data.push_back(total_pause_time.get_name_leafdata());
    if (total_resume_count.is_set || is_set(total_resume_count.operation)) leaf_name_data.push_back(total_resume_count.get_name_leafdata());
    if (total_srg_not_master.is_set || is_set(total_srg_not_master.operation)) leaf_name_data.push_back(total_srg_not_master.get_name_leafdata());
    if (txlist_clean_invalid_state.is_set || is_set(txlist_clean_invalid_state.operation)) leaf_name_data.push_back(txlist_clean_invalid_state.get_name_leafdata());
    if (txlist_del_app.is_set || is_set(txlist_del_app.operation)) leaf_name_data.push_back(txlist_del_app.get_name_leafdata());
    if (txlist_del_app_notlinked.is_set || is_set(txlist_del_app_notlinked.operation)) leaf_name_data.push_back(txlist_del_app_notlinked.get_name_leafdata());
    if (txlist_del_sync.is_set || is_set(txlist_del_sync.operation)) leaf_name_data.push_back(txlist_del_sync.get_name_leafdata());
    if (txlist_del_sync_notlinked.is_set || is_set(txlist_del_sync_notlinked.operation)) leaf_name_data.push_back(txlist_del_sync_notlinked.get_name_leafdata());
    if (txlist_encode.is_set || is_set(txlist_encode.operation)) leaf_name_data.push_back(txlist_encode.get_name_leafdata());
    if (txlist_encode_fail.is_set || is_set(txlist_encode_fail.operation)) leaf_name_data.push_back(txlist_encode_fail.get_name_leafdata());
    if (txlist_remove_all.is_set || is_set(txlist_remove_all.operation)) leaf_name_data.push_back(txlist_remove_all.get_name_leafdata());
    if (txlist_remove_all_internal_error.is_set || is_set(txlist_remove_all_internal_error.operation)) leaf_name_data.push_back(txlist_remove_all_internal_error.get_name_leafdata());
    if (txlist_send_failed.is_set || is_set(txlist_send_failed.operation)) leaf_name_data.push_back(txlist_send_failed.get_name_leafdata());
    if (txlist_send_failed_notactive.is_set || is_set(txlist_send_failed_notactive.operation)) leaf_name_data.push_back(txlist_send_failed_notactive.get_name_leafdata());
    if (txlist_send_triggered.is_set || is_set(txlist_send_triggered.operation)) leaf_name_data.push_back(txlist_send_triggered.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Manager::Nodes::Node::Statistics::Srg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Manager::Nodes::Node::Statistics::Srg::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Srg::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ack-to-srg")
    {
        ack_to_srg = value;
    }
    if(value_path == "actual-txlist-sent")
    {
        actual_txlist_sent = value;
    }
    if(value_path == "alreadyin-txlist")
    {
        alreadyin_txlist = value;
    }
    if(value_path == "create-upd-clean-callback")
    {
        create_upd_clean_callback = value;
    }
    if(value_path == "create-update-encode")
    {
        create_update_encode = value;
    }
    if(value_path == "delete-clean-callback")
    {
        delete_clean_callback = value;
    }
    if(value_path == "delete-encode")
    {
        delete_encode = value;
    }
    if(value_path == "eod-count")
    {
        eod_count = value;
    }
    if(value_path == "flow-control-resume-threshold")
    {
        flow_control_resume_threshold = value;
    }
    if(value_path == "inflight-add-count")
    {
        inflight_add_count = value;
    }
    if(value_path == "inflight-alloc-fails")
    {
        inflight_alloc_fails = value;
    }
    if(value_path == "inflight-delete-failures")
    {
        inflight_delete_failures = value;
    }
    if(value_path == "inflight-deletes")
    {
        inflight_deletes = value;
    }
    if(value_path == "inflight-insert-failures")
    {
        inflight_insert_failures = value;
    }
    if(value_path == "inflight-not-found")
    {
        inflight_not_found = value;
    }
    if(value_path == "inflight-session-count")
    {
        inflight_session_count = value;
    }
    if(value_path == "inflight-under-run-count")
    {
        inflight_under_run_count = value;
    }
    if(value_path == "is-srg-flow-control-enabled")
    {
        is_srg_flow_control_enabled = value;
    }
    if(value_path == "last-pause-period")
    {
        last_pause_period = value;
    }
    if(value_path == "last-pause-time")
    {
        last_pause_time = value;
    }
    if(value_path == "last-resume-time")
    {
        last_resume_time = value;
    }
    if(value_path == "max-inflight-sessoin-count")
    {
        max_inflight_sessoin_count = value;
    }
    if(value_path == "nack-to-srg")
    {
        nack_to_srg = value;
    }
    if(value_path == "nack-to-srg-fail-cnt")
    {
        nack_to_srg_fail_cnt = value;
    }
    if(value_path == "slave-create-update")
    {
        slave_create_update = value;
    }
    if(value_path == "slave-decode-fail")
    {
        slave_decode_fail = value;
    }
    if(value_path == "slave-delete")
    {
        slave_delete = value;
    }
    if(value_path == "slave-recv-entry")
    {
        slave_recv_entry = value;
    }
    if(value_path == "sod-count")
    {
        sod_count = value;
    }
    if(value_path == "sod-eod-dirty-delete-count")
    {
        sod_eod_dirty_delete_count = value;
    }
    if(value_path == "sod-eod-dirty-mark-count")
    {
        sod_eod_dirty_mark_count = value;
    }
    if(value_path == "sod-eod-replay-req-count")
    {
        sod_eod_replay_req_count = value;
    }
    if(value_path == "srg-context-free")
    {
        srg_context_free = value;
    }
    if(value_path == "srg-context-malloc")
    {
        srg_context_malloc = value;
    }
    if(value_path == "total-dont-send-to-txlist")
    {
        total_dont_send_to_txlist = value;
    }
    if(value_path == "total-master-eoms-pending")
    {
        total_master_eoms_pending = value;
    }
    if(value_path == "total-pause-count")
    {
        total_pause_count = value;
    }
    if(value_path == "total-pause-time")
    {
        total_pause_time = value;
    }
    if(value_path == "total-resume-count")
    {
        total_resume_count = value;
    }
    if(value_path == "total-srg-not-master")
    {
        total_srg_not_master = value;
    }
    if(value_path == "txlist-clean-invalid-state")
    {
        txlist_clean_invalid_state = value;
    }
    if(value_path == "txlist-del-app")
    {
        txlist_del_app = value;
    }
    if(value_path == "txlist-del-app-notlinked")
    {
        txlist_del_app_notlinked = value;
    }
    if(value_path == "txlist-del-sync")
    {
        txlist_del_sync = value;
    }
    if(value_path == "txlist-del-sync-notlinked")
    {
        txlist_del_sync_notlinked = value;
    }
    if(value_path == "txlist-encode")
    {
        txlist_encode = value;
    }
    if(value_path == "txlist-encode-fail")
    {
        txlist_encode_fail = value;
    }
    if(value_path == "txlist-remove-all")
    {
        txlist_remove_all = value;
    }
    if(value_path == "txlist-remove-all-internal-error")
    {
        txlist_remove_all_internal_error = value;
    }
    if(value_path == "txlist-send-failed")
    {
        txlist_send_failed = value;
    }
    if(value_path == "txlist-send-failed-notactive")
    {
        txlist_send_failed_notactive = value;
    }
    if(value_path == "txlist-send-triggered")
    {
        txlist_send_triggered = value;
    }
}

Subscriber::Session::Session()
    :
    nodes(std::make_shared<Subscriber::Session::Nodes>())
{
    nodes->parent = this;

    yang_name = "session"; yang_parent_name = "subscriber";
}

Subscriber::Session::~Session()
{
}

bool Subscriber::Session::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Subscriber::Session::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Subscriber::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Subscriber::Session::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Subscriber::Session::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "session";
}

Subscriber::Session::Nodes::~Nodes()
{
}

bool Subscriber::Session::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/session/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Subscriber::Session::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    access_interface_summaries(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries>())
	,address_family_summaries(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries>())
	,authentication_summaries(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries>())
	,author_summaries(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries>())
	,interface_summaries(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries>())
	,ipv4_address_summaries(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries>())
	,ipv4_address_vrf_summaries(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries>())
	,mac_summaries(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries>())
	,sessions(std::make_shared<Subscriber::Session::Nodes::Node::Sessions>())
	,state_summaries(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries>())
	,summary(std::make_shared<Subscriber::Session::Nodes::Node::Summary>())
	,username_summaries(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries>())
	,vrf_summaries(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries>())
{
    access_interface_summaries->parent = this;

    address_family_summaries->parent = this;

    authentication_summaries->parent = this;

    author_summaries->parent = this;

    interface_summaries->parent = this;

    ipv4_address_summaries->parent = this;

    ipv4_address_vrf_summaries->parent = this;

    mac_summaries->parent = this;

    sessions->parent = this;

    state_summaries->parent = this;

    summary->parent = this;

    username_summaries->parent = this;

    vrf_summaries->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Subscriber::Session::Nodes::Node::~Node()
{
}

bool Subscriber::Session::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (access_interface_summaries !=  nullptr && access_interface_summaries->has_data())
	|| (address_family_summaries !=  nullptr && address_family_summaries->has_data())
	|| (authentication_summaries !=  nullptr && authentication_summaries->has_data())
	|| (author_summaries !=  nullptr && author_summaries->has_data())
	|| (interface_summaries !=  nullptr && interface_summaries->has_data())
	|| (ipv4_address_summaries !=  nullptr && ipv4_address_summaries->has_data())
	|| (ipv4_address_vrf_summaries !=  nullptr && ipv4_address_vrf_summaries->has_data())
	|| (mac_summaries !=  nullptr && mac_summaries->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (state_summaries !=  nullptr && state_summaries->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (username_summaries !=  nullptr && username_summaries->has_data())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_data());
}

bool Subscriber::Session::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| (access_interface_summaries !=  nullptr && access_interface_summaries->has_operation())
	|| (address_family_summaries !=  nullptr && address_family_summaries->has_operation())
	|| (authentication_summaries !=  nullptr && authentication_summaries->has_operation())
	|| (author_summaries !=  nullptr && author_summaries->has_operation())
	|| (interface_summaries !=  nullptr && interface_summaries->has_operation())
	|| (ipv4_address_summaries !=  nullptr && ipv4_address_summaries->has_operation())
	|| (ipv4_address_vrf_summaries !=  nullptr && ipv4_address_vrf_summaries->has_operation())
	|| (mac_summaries !=  nullptr && mac_summaries->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (state_summaries !=  nullptr && state_summaries->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (username_summaries !=  nullptr && username_summaries->has_operation())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_operation());
}

std::string Subscriber::Session::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/session/nodes/" << get_segment_path();
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

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-summaries")
    {
        if(access_interface_summaries == nullptr)
        {
            access_interface_summaries = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries>();
        }
        return access_interface_summaries;
    }

    if(child_yang_name == "address-family-summaries")
    {
        if(address_family_summaries == nullptr)
        {
            address_family_summaries = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries>();
        }
        return address_family_summaries;
    }

    if(child_yang_name == "authentication-summaries")
    {
        if(authentication_summaries == nullptr)
        {
            authentication_summaries = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries>();
        }
        return authentication_summaries;
    }

    if(child_yang_name == "author-summaries")
    {
        if(author_summaries == nullptr)
        {
            author_summaries = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries>();
        }
        return author_summaries;
    }

    if(child_yang_name == "interface-summaries")
    {
        if(interface_summaries == nullptr)
        {
            interface_summaries = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries>();
        }
        return interface_summaries;
    }

    if(child_yang_name == "ipv4-address-summaries")
    {
        if(ipv4_address_summaries == nullptr)
        {
            ipv4_address_summaries = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries>();
        }
        return ipv4_address_summaries;
    }

    if(child_yang_name == "ipv4-address-vrf-summaries")
    {
        if(ipv4_address_vrf_summaries == nullptr)
        {
            ipv4_address_vrf_summaries = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries>();
        }
        return ipv4_address_vrf_summaries;
    }

    if(child_yang_name == "mac-summaries")
    {
        if(mac_summaries == nullptr)
        {
            mac_summaries = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries>();
        }
        return mac_summaries;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Subscriber::Session::Nodes::Node::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "state-summaries")
    {
        if(state_summaries == nullptr)
        {
            state_summaries = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries>();
        }
        return state_summaries;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Subscriber::Session::Nodes::Node::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "username-summaries")
    {
        if(username_summaries == nullptr)
        {
            username_summaries = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries>();
        }
        return username_summaries;
    }

    if(child_yang_name == "vrf-summaries")
    {
        if(vrf_summaries == nullptr)
        {
            vrf_summaries = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries>();
        }
        return vrf_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(access_interface_summaries != nullptr)
    {
        children["access-interface-summaries"] = access_interface_summaries;
    }

    if(address_family_summaries != nullptr)
    {
        children["address-family-summaries"] = address_family_summaries;
    }

    if(authentication_summaries != nullptr)
    {
        children["authentication-summaries"] = authentication_summaries;
    }

    if(author_summaries != nullptr)
    {
        children["author-summaries"] = author_summaries;
    }

    if(interface_summaries != nullptr)
    {
        children["interface-summaries"] = interface_summaries;
    }

    if(ipv4_address_summaries != nullptr)
    {
        children["ipv4-address-summaries"] = ipv4_address_summaries;
    }

    if(ipv4_address_vrf_summaries != nullptr)
    {
        children["ipv4-address-vrf-summaries"] = ipv4_address_vrf_summaries;
    }

    if(mac_summaries != nullptr)
    {
        children["mac-summaries"] = mac_summaries;
    }

    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    if(state_summaries != nullptr)
    {
        children["state-summaries"] = state_summaries;
    }

    if(summary != nullptr)
    {
        children["summary"] = summary;
    }

    if(username_summaries != nullptr)
    {
        children["username-summaries"] = username_summaries;
    }

    if(vrf_summaries != nullptr)
    {
        children["vrf-summaries"] = vrf_summaries;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummaries()
{
    yang_name = "author-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::~AuthorSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::has_data() const
{
    for (std::size_t index=0; index<author_summary.size(); index++)
    {
        if(author_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::has_operation() const
{
    for (std::size_t index=0; index<author_summary.size(); index++)
    {
        if(author_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "author-summaries";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "author-summary")
    {
        for(auto const & c : author_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary>();
        c->parent = this;
        author_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : author_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AuthorSummary()
    :
    author_state{YType::enumeration, "author-state"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr>())
{
    address_family_xr->parent = this;

    state_xr->parent = this;

    yang_name = "author-summary"; yang_parent_name = "author-summaries";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::~AuthorSummary()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::has_data() const
{
    return author_state.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(author_state.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "author-summary" <<"[author-state='" <<author_state <<"']";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthorSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (author_state.is_set || is_set(author_state.operation)) leaf_name_data.push_back(author_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "author-state")
    {
        author_state = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "author-summary";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "author-summary";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::Summary()
    :
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr>())
{
    address_family_xr->parent = this;

    state_xr->parent = this;

    yang_name = "summary"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::Summary::~Summary()
{
}

bool Subscriber::Session::Nodes::Node::Summary::has_data() const
{
    return (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::has_operation() const
{
    return is_set(operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Summary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Summary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "summary";
}

Subscriber::Session::Nodes::Node::Summary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "summary";
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummaries()
{
    yang_name = "mac-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::MacSummaries::~MacSummaries()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_data() const
{
    for (std::size_t index=0; index<mac_summary.size(); index++)
    {
        if(mac_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_operation() const
{
    for (std::size_t index=0; index<mac_summary.size(); index++)
    {
        if(mac_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summaries";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-summary")
    {
        for(auto const & c : mac_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary>();
        c->parent = this;
        mac_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::MacSummary()
    :
    mac_address{YType::str, "mac-address"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr>())
{
    address_family_xr->parent = this;

    state_xr->parent = this;

    yang_name = "mac-summary"; yang_parent_name = "mac-summaries";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::~MacSummary()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_data() const
{
    return mac_address.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(mac_address.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary" <<"[mac-address='" <<mac_address <<"']";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MacSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.operation)) leaf_name_data.push_back(mac_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "mac-summary";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "mac-summary";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummaries()
{
    yang_name = "interface-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::~InterfaceSummaries()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::has_data() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.size(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summaries";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        for(auto const & c : interface_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary>();
        c->parent = this;
        interface_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : interface_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr>())
{
    address_family_xr->parent = this;

    state_xr->parent = this;

    yang_name = "interface-summary"; yang_parent_name = "interface-summaries";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::~InterfaceSummary()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::has_data() const
{
    return interface_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'InterfaceSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "interface-summary";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "interface-summary";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummaries()
{
    yang_name = "authentication-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::~AuthenticationSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::has_data() const
{
    for (std::size_t index=0; index<authentication_summary.size(); index++)
    {
        if(authentication_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::has_operation() const
{
    for (std::size_t index=0; index<authentication_summary.size(); index++)
    {
        if(authentication_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-summaries";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-summary")
    {
        for(auto const & c : authentication_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary>();
        c->parent = this;
        authentication_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : authentication_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AuthenticationSummary()
    :
    authentication_state{YType::enumeration, "authentication-state"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr>())
{
    address_family_xr->parent = this;

    state_xr->parent = this;

    yang_name = "authentication-summary"; yang_parent_name = "authentication-summaries";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::~AuthenticationSummary()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::has_data() const
{
    return authentication_state.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication_state.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-summary" <<"[authentication-state='" <<authentication_state <<"']";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_state.is_set || is_set(authentication_state.operation)) leaf_name_data.push_back(authentication_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication-state")
    {
        authentication_state = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "authentication-summary";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "authentication-summary";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummaries()
{
    yang_name = "state-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::StateSummaries::~StateSummaries()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_data() const
{
    for (std::size_t index=0; index<state_summary.size(); index++)
    {
        if(state_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_operation() const
{
    for (std::size_t index=0; index<state_summary.size(); index++)
    {
        if(state_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summaries";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-summary")
    {
        for(auto const & c : state_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary>();
        c->parent = this;
        state_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : state_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateSummary()
    :
    state{YType::enumeration, "state"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr>())
{
    address_family_xr->parent = this;

    state_xr->parent = this;

    yang_name = "state-summary"; yang_parent_name = "state-summaries";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::~StateSummary()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_data() const
{
    return state.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(state.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summary" <<"[state='" <<state <<"']";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "state")
    {
        state = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "state-summary";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(activated_sessions.operation)
	|| is_set(connected_sessions.operation)
	|| is_set(connecting_sessions.operation)
	|| is_set(disconnecting_sessions.operation)
	|| is_set(end_sessions.operation)
	|| is_set(idle_sessions.operation)
	|| is_set(initialized_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.operation)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.operation)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.operation)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.operation)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.operation)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.operation)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.operation)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;

    ip_subscriber_packet->parent = this;

    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "state-summary";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_operation() const
{
    return is_set(operation)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AddressFamilyXr' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "pppoe"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pppoe' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberDhcp' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{
    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr";
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(operation)
	|| is_set(dual_part_up_sessions.operation)
	|| is_set(dual_up_sessions.operation)
	|| is_set(in_progress_sessions.operation)
	|| is_set(ipv4_only_sessions.operation)
	|| is_set(ipv6_only_sessions.operation)
	|| is_set(lac_sessions.operation);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'IpSubscriberPacket' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.operation)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.operation)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.operation)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.operation)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.operation)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.operation)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
    }
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummaries()
{
    yang_name = "ipv4-address-vrf-summaries"; yang_parent_name = "node";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::~Ipv4AddressVrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_address_vrf_summary.size(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_vrf_summary.size(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summaries";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddressVrfSummaries' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-vrf-summary")
    {
        for(auto const & c : ipv4_address_vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary>();
        c->parent = this;
        ipv4_address_vrf_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_address_vrf_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::set_value(const std::string & value_path, std::string value)
{
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::Ipv4AddressVrfSummary()
    :
    address{YType::str, "address"},
    vrf_name{YType::str, "vrf-name"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>())
{
    address_family_xr->parent = this;

    state_xr->parent = this;

    yang_name = "ipv4-address-vrf-summary"; yang_parent_name = "ipv4-address-vrf-summaries";
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::~Ipv4AddressVrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_data() const
{
    return address.is_set
	|| vrf_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(vrf_name.operation)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summary";

    return path_buffer.str();

}

const EntityPath Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4AddressVrfSummary' in Cisco_IOS_XR_iedge4710_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

const Enum::YLeaf AaaTunnelProtoEnum::none {0, "none"};
const Enum::YLeaf AaaTunnelProtoEnum::pptp {1, "pptp"};
const Enum::YLeaf AaaTunnelProtoEnum::l2f {2, "l2f"};
const Enum::YLeaf AaaTunnelProtoEnum::l2tp {3, "l2tp"};
const Enum::YLeaf AaaTunnelProtoEnum::atmp {4, "atmp"};
const Enum::YLeaf AaaTunnelProtoEnum::vtp {5, "vtp"};
const Enum::YLeaf AaaTunnelProtoEnum::ah {6, "ah"};
const Enum::YLeaf AaaTunnelProtoEnum::ip_over_ip {7, "ip-over-ip"};
const Enum::YLeaf AaaTunnelProtoEnum::minimum_ip_over_ip {8, "minimum-ip-over-ip"};
const Enum::YLeaf AaaTunnelProtoEnum::esp {9, "esp"};
const Enum::YLeaf AaaTunnelProtoEnum::gre {10, "gre"};
const Enum::YLeaf AaaTunnelProtoEnum::bay_dvs {11, "bay-dvs"};
const Enum::YLeaf AaaTunnelProtoEnum::ip_in_ip {12, "ip-in-ip"};
const Enum::YLeaf AaaTunnelProtoEnum::vlan {13, "vlan"};

const Enum::YLeaf AaaTerminateCauseEnum::none {0, "none"};
const Enum::YLeaf AaaTerminateCauseEnum::user_request {1, "user-request"};
const Enum::YLeaf AaaTerminateCauseEnum::lost_carrier {2, "lost-carrier"};
const Enum::YLeaf AaaTerminateCauseEnum::lost_service {3, "lost-service"};
const Enum::YLeaf AaaTerminateCauseEnum::idle_timeout {4, "idle-timeout"};
const Enum::YLeaf AaaTerminateCauseEnum::session_timeout {5, "session-timeout"};
const Enum::YLeaf AaaTerminateCauseEnum::admin_reset {6, "admin-reset"};
const Enum::YLeaf AaaTerminateCauseEnum::admin_reboot {7, "admin-reboot"};
const Enum::YLeaf AaaTerminateCauseEnum::port_error {8, "port-error"};
const Enum::YLeaf AaaTerminateCauseEnum::nas_error {9, "nas-error"};
const Enum::YLeaf AaaTerminateCauseEnum::nas_request {10, "nas-request"};
const Enum::YLeaf AaaTerminateCauseEnum::nas_reboot {11, "nas-reboot"};
const Enum::YLeaf AaaTerminateCauseEnum::port_unneeded {12, "port-unneeded"};
const Enum::YLeaf AaaTerminateCauseEnum::port_preempted {13, "port-preempted"};
const Enum::YLeaf AaaTerminateCauseEnum::port_suspended {14, "port-suspended"};
const Enum::YLeaf AaaTerminateCauseEnum::service_unavailable {15, "service-unavailable"};
const Enum::YLeaf AaaTerminateCauseEnum::callback {16, "callback"};
const Enum::YLeaf AaaTerminateCauseEnum::user_error {17, "user-error"};
const Enum::YLeaf AaaTerminateCauseEnum::host_request {18, "host-request"};
const Enum::YLeaf AaaTerminateCauseEnum::supplicant_restart {19, "supplicant-restart"};
const Enum::YLeaf AaaTerminateCauseEnum::reauthorization_failure {20, "reauthorization-failure"};
const Enum::YLeaf AaaTerminateCauseEnum::port_reinitialized {21, "port-reinitialized"};
const Enum::YLeaf AaaTerminateCauseEnum::admin_disabled {22, "admin-disabled"};

const Enum::YLeaf SubscriberAuthorStateFilterFlagEnum::un_authorized {0, "un-authorized"};
const Enum::YLeaf SubscriberAuthorStateFilterFlagEnum::authorized {1, "authorized"};

const Enum::YLeaf IedgeOperSessionStateEnum::initialize {0, "initialize"};
const Enum::YLeaf IedgeOperSessionStateEnum::connecting {1, "connecting"};
const Enum::YLeaf IedgeOperSessionStateEnum::connected {2, "connected"};
const Enum::YLeaf IedgeOperSessionStateEnum::activated {3, "activated"};
const Enum::YLeaf IedgeOperSessionStateEnum::idle {4, "idle"};
const Enum::YLeaf IedgeOperSessionStateEnum::disconnecting {5, "disconnecting"};
const Enum::YLeaf IedgeOperSessionStateEnum::end {6, "end"};

const Enum::YLeaf IedgeOperSessionAfStateEnum::not_started {0, "not-started"};
const Enum::YLeaf IedgeOperSessionAfStateEnum::down {1, "down"};
const Enum::YLeaf IedgeOperSessionAfStateEnum::up_pending {2, "up-pending"};
const Enum::YLeaf IedgeOperSessionAfStateEnum::up {3, "up"};

const Enum::YLeaf SubscriberStateFilterFlagEnum::initializing {0, "initializing"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::connecting {1, "connecting"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::connected {2, "connected"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::activated {3, "activated"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::idle {4, "idle"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::disconnecting {5, "disconnecting"};
const Enum::YLeaf SubscriberStateFilterFlagEnum::end {6, "end"};

const Enum::YLeaf AaaAuthServiceEnum::none {0, "none"};
const Enum::YLeaf AaaAuthServiceEnum::login {1, "login"};
const Enum::YLeaf AaaAuthServiceEnum::framed {2, "framed"};
const Enum::YLeaf AaaAuthServiceEnum::callback_login {3, "callback-login"};
const Enum::YLeaf AaaAuthServiceEnum::callback_framed {4, "callback-framed"};
const Enum::YLeaf AaaAuthServiceEnum::outbound {5, "outbound"};
const Enum::YLeaf AaaAuthServiceEnum::administrator {6, "administrator"};
const Enum::YLeaf AaaAuthServiceEnum::prompt {7, "prompt"};
const Enum::YLeaf AaaAuthServiceEnum::authentication_only {8, "authentication-only"};
const Enum::YLeaf AaaAuthServiceEnum::callback_nas_prompt {9, "callback-nas-prompt"};
const Enum::YLeaf AaaAuthServiceEnum::call_check {10, "call-check"};
const Enum::YLeaf AaaAuthServiceEnum::callback_administrator {11, "callback-administrator"};
const Enum::YLeaf AaaAuthServiceEnum::voice {12, "voice"};
const Enum::YLeaf AaaAuthServiceEnum::fax {13, "fax"};
const Enum::YLeaf AaaAuthServiceEnum::modem_relay {14, "modem-relay"};
const Enum::YLeaf AaaAuthServiceEnum::eap_over_udp {15, "eap-over-udp"};

const Enum::YLeaf AaaInterfaceEnum::none {0, "none"};
const Enum::YLeaf AaaInterfaceEnum::primary_rate {1, "primary-rate"};
const Enum::YLeaf AaaInterfaceEnum::basic_rate {2, "basic-rate"};
const Enum::YLeaf AaaInterfaceEnum::serial {3, "serial"};
const Enum::YLeaf AaaInterfaceEnum::asynchronous {4, "asynchronous"};
const Enum::YLeaf AaaInterfaceEnum::vty {5, "vty"};
const Enum::YLeaf AaaInterfaceEnum::atm {6, "atm"};
const Enum::YLeaf AaaInterfaceEnum::ethernet {7, "ethernet"};
const Enum::YLeaf AaaInterfaceEnum::ppp_over_atm {8, "ppp-over-atm"};
const Enum::YLeaf AaaInterfaceEnum::pppoe_over_atm {9, "pppoe-over-atm"};
const Enum::YLeaf AaaInterfaceEnum::pppoe_over_ethernet {10, "pppoe-over-ethernet"};
const Enum::YLeaf AaaInterfaceEnum::ppp_over_vlan {11, "ppp-over-vlan"};
const Enum::YLeaf AaaInterfaceEnum::ppp_over_qinq {12, "ppp-over-qinq"};
const Enum::YLeaf AaaInterfaceEnum::v120 {13, "v120"};
const Enum::YLeaf AaaInterfaceEnum::v110 {14, "v110"};
const Enum::YLeaf AaaInterfaceEnum::piafs {15, "piafs"};
const Enum::YLeaf AaaInterfaceEnum::x75 {16, "x75"};
const Enum::YLeaf AaaInterfaceEnum::ip_sec {17, "ip-sec"};
const Enum::YLeaf AaaInterfaceEnum::other {18, "other"};
const Enum::YLeaf AaaInterfaceEnum::virtual_pppoe_over_ethernet {19, "virtual-pppoe-over-ethernet"};
const Enum::YLeaf AaaInterfaceEnum::virtual_pppoe_over_vlan {20, "virtual-pppoe-over-vlan"};
const Enum::YLeaf AaaInterfaceEnum::virtual_pppoe_over_qinq {21, "virtual-pppoe-over-qinq"};
const Enum::YLeaf AaaInterfaceEnum::ipo_e_over_ethernet {22, "ipo-e-over-ethernet"};
const Enum::YLeaf AaaInterfaceEnum::ipo_e_over_vlan {23, "ipo-e-over-vlan"};
const Enum::YLeaf AaaInterfaceEnum::ipo_e_over_qinq {24, "ipo-e-over-qinq"};
const Enum::YLeaf AaaInterfaceEnum::virtual_i_po_e_over_ethernet {25, "virtual-i-po-e-over-ethernet"};
const Enum::YLeaf AaaInterfaceEnum::virtual_i_po_e_over_vlan {26, "virtual-i-po-e-over-vlan"};
const Enum::YLeaf AaaInterfaceEnum::virtual_i_po_e_over_qinq {27, "virtual-i-po-e-over-qinq"};

const Enum::YLeaf SubscriberAuthenStateFilterFlagEnum::un_authenticated {0, "un-authenticated"};
const Enum::YLeaf SubscriberAuthenStateFilterFlagEnum::authenticated {1, "authenticated"};

const Enum::YLeaf IedgeOperSessionEnum::unknown {0, "unknown"};
const Enum::YLeaf IedgeOperSessionEnum::pppoe {1, "pppoe"};
const Enum::YLeaf IedgeOperSessionEnum::ppp {2, "ppp"};
const Enum::YLeaf IedgeOperSessionEnum::ip_packet_trigger {3, "ip-packet-trigger"};
const Enum::YLeaf IedgeOperSessionEnum::ip_packet_dhcp_trigger {4, "ip-packet-dhcp-trigger"};

const Enum::YLeaf AaaTunnelMediumEnum::none {0, "none"};
const Enum::YLeaf AaaTunnelMediumEnum::ipv4 {1, "ipv4"};
const Enum::YLeaf AaaTunnelMediumEnum::ipv6 {2, "ipv6"};
const Enum::YLeaf AaaTunnelMediumEnum::nsap {3, "nsap"};
const Enum::YLeaf AaaTunnelMediumEnum::hdlc {4, "hdlc"};
const Enum::YLeaf AaaTunnelMediumEnum::bbn {5, "bbn"};
const Enum::YLeaf AaaTunnelMediumEnum::all802 {6, "all802"};

const Enum::YLeaf IedgePppSubEnum::pta {0, "pta"};
const Enum::YLeaf IedgePppSubEnum::lac {1, "lac"};

const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::ipv4_only {0, "ipv4-only"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::ipv6_only {1, "ipv6-only"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::ipv4_all {2, "ipv4-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::ipv6_all {3, "ipv6-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::dual_all {4, "dual-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::dual_part_up {5, "dual-part-up"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::dual_up {6, "dual-up"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlagEnum::lac {7, "lac"};


}
}

