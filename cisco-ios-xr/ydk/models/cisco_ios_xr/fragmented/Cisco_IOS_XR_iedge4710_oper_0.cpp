
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_0.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_2.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_oper {

Subscriber::Subscriber()
    :
    manager(std::make_shared<Subscriber::Manager>())
    , session(std::make_shared<Subscriber::Session>())
{
    manager->parent = this;
    session->parent = this;

    yang_name = "subscriber"; yang_parent_name = "Cisco-IOS-XR-iedge4710-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Subscriber::~Subscriber()
{
}

bool Subscriber::has_data() const
{
    if (is_presence_container) return true;
    return (manager !=  nullptr && manager->has_data())
	|| (session !=  nullptr && session->has_data());
}

bool Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| (manager !=  nullptr && manager->has_operation())
	|| (session !=  nullptr && session->has_operation());
}

std::string Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(manager != nullptr)
    {
        _children["manager"] = manager;
    }

    if(session != nullptr)
    {
        _children["session"] = session;
    }

    return _children;
}

void Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Subscriber::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Subscriber::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "manager" || name == "session")
        return true;
    return false;
}

Subscriber::Manager::Manager()
    :
    nodes(std::make_shared<Subscriber::Manager::Nodes>())
{
    nodes->parent = this;

    yang_name = "manager"; yang_parent_name = "subscriber"; is_top_level_class = false; has_list_ancestor = false; 
}

Subscriber::Manager::~Manager()
{
}

bool Subscriber::Manager::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Subscriber::Manager::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Subscriber::Manager::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Subscriber::Manager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Subscriber::Manager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Manager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Manager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "manager"; is_top_level_class = false; has_list_ancestor = false; 
}

Subscriber::Manager::Nodes::~Nodes()
{
}

bool Subscriber::Manager::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Manager::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Manager::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/manager/" << get_segment_path();
    return path_buffer.str();
}

std::string Subscriber::Manager::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Subscriber::Manager::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::get_children() const
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

void Subscriber::Manager::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Manager::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Manager::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics>())
{
    statistics->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Subscriber::Manager::Nodes::Node::~Node()
{
}

bool Subscriber::Manager::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Subscriber::Manager::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/manager/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Subscriber::Manager::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "node-name")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Statistics()
    :
    aaa(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa>())
    , aggregate_summary(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary>())
    , disconn_unique(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique>())
    , srg(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Srg>())
{
    aaa->parent = this;
    aggregate_summary->parent = this;
    disconn_unique->parent = this;
    srg->parent = this;

    yang_name = "statistics"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::~Statistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return (aaa !=  nullptr && aaa->has_data())
	|| (aggregate_summary !=  nullptr && aggregate_summary->has_data())
	|| (disconn_unique !=  nullptr && disconn_unique->has_data())
	|| (srg !=  nullptr && srg->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| (aaa !=  nullptr && aaa->has_operation())
	|| (aggregate_summary !=  nullptr && aggregate_summary->has_operation())
	|| (disconn_unique !=  nullptr && disconn_unique->has_operation())
	|| (srg !=  nullptr && srg->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

    if(child_yang_name == "disconn-unique")
    {
        if(disconn_unique == nullptr)
        {
            disconn_unique = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique>();
        }
        return disconn_unique;
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aaa != nullptr)
    {
        _children["aaa"] = aaa;
    }

    if(aggregate_summary != nullptr)
    {
        _children["aggregate-summary"] = aggregate_summary;
    }

    if(disconn_unique != nullptr)
    {
        _children["disconn-unique"] = disconn_unique;
    }

    if(srg != nullptr)
    {
        _children["srg"] = srg;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Manager::Nodes::Node::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aaa" || name == "aggregate-summary" || name == "disconn-unique" || name == "srg")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Aaa()
    :
    aggregate_accounting(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting>())
    , authentication(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication>())
    , aggregate_mobility(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility>())
    , aggregate_authentication(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication>())
    , accounting_stats_all(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll>())
    , change_of_authorization(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization>())
    , authorization(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization>())
    , aggregate_authorization(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization>())
    , aggregate_accounting_stats_all(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll>())
    , accounting(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting>())
    , mobility(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility>())
    , aggregate_change_of_authorization(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization>())
{
    aggregate_accounting->parent = this;
    authentication->parent = this;
    aggregate_mobility->parent = this;
    aggregate_authentication->parent = this;
    accounting_stats_all->parent = this;
    change_of_authorization->parent = this;
    authorization->parent = this;
    aggregate_authorization->parent = this;
    aggregate_accounting_stats_all->parent = this;
    accounting->parent = this;
    mobility->parent = this;
    aggregate_change_of_authorization->parent = this;

    yang_name = "aaa"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::~Aaa()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::has_data() const
{
    if (is_presence_container) return true;
    return (aggregate_accounting !=  nullptr && aggregate_accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (aggregate_mobility !=  nullptr && aggregate_mobility->has_data())
	|| (aggregate_authentication !=  nullptr && aggregate_authentication->has_data())
	|| (accounting_stats_all !=  nullptr && accounting_stats_all->has_data())
	|| (change_of_authorization !=  nullptr && change_of_authorization->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (aggregate_authorization !=  nullptr && aggregate_authorization->has_data())
	|| (aggregate_accounting_stats_all !=  nullptr && aggregate_accounting_stats_all->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (mobility !=  nullptr && mobility->has_data())
	|| (aggregate_change_of_authorization !=  nullptr && aggregate_change_of_authorization->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::has_operation() const
{
    return is_set(yfilter)
	|| (aggregate_accounting !=  nullptr && aggregate_accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (aggregate_mobility !=  nullptr && aggregate_mobility->has_operation())
	|| (aggregate_authentication !=  nullptr && aggregate_authentication->has_operation())
	|| (accounting_stats_all !=  nullptr && accounting_stats_all->has_operation())
	|| (change_of_authorization !=  nullptr && change_of_authorization->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (aggregate_authorization !=  nullptr && aggregate_authorization->has_operation())
	|| (aggregate_accounting_stats_all !=  nullptr && aggregate_accounting_stats_all->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (mobility !=  nullptr && mobility->has_operation())
	|| (aggregate_change_of_authorization !=  nullptr && aggregate_change_of_authorization->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "aggregate-accounting")
    {
        if(aggregate_accounting == nullptr)
        {
            aggregate_accounting = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting>();
        }
        return aggregate_accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "aggregate-mobility")
    {
        if(aggregate_mobility == nullptr)
        {
            aggregate_mobility = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility>();
        }
        return aggregate_mobility;
    }

    if(child_yang_name == "aggregate-authentication")
    {
        if(aggregate_authentication == nullptr)
        {
            aggregate_authentication = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication>();
        }
        return aggregate_authentication;
    }

    if(child_yang_name == "accounting-stats-all")
    {
        if(accounting_stats_all == nullptr)
        {
            accounting_stats_all = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll>();
        }
        return accounting_stats_all;
    }

    if(child_yang_name == "change-of-authorization")
    {
        if(change_of_authorization == nullptr)
        {
            change_of_authorization = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization>();
        }
        return change_of_authorization;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "aggregate-authorization")
    {
        if(aggregate_authorization == nullptr)
        {
            aggregate_authorization = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization>();
        }
        return aggregate_authorization;
    }

    if(child_yang_name == "aggregate-accounting-stats-all")
    {
        if(aggregate_accounting_stats_all == nullptr)
        {
            aggregate_accounting_stats_all = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll>();
        }
        return aggregate_accounting_stats_all;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "mobility")
    {
        if(mobility == nullptr)
        {
            mobility = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility>();
        }
        return mobility;
    }

    if(child_yang_name == "aggregate-change-of-authorization")
    {
        if(aggregate_change_of_authorization == nullptr)
        {
            aggregate_change_of_authorization = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization>();
        }
        return aggregate_change_of_authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(aggregate_accounting != nullptr)
    {
        _children["aggregate-accounting"] = aggregate_accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(aggregate_mobility != nullptr)
    {
        _children["aggregate-mobility"] = aggregate_mobility;
    }

    if(aggregate_authentication != nullptr)
    {
        _children["aggregate-authentication"] = aggregate_authentication;
    }

    if(accounting_stats_all != nullptr)
    {
        _children["accounting-stats-all"] = accounting_stats_all;
    }

    if(change_of_authorization != nullptr)
    {
        _children["change-of-authorization"] = change_of_authorization;
    }

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    if(aggregate_authorization != nullptr)
    {
        _children["aggregate-authorization"] = aggregate_authorization;
    }

    if(aggregate_accounting_stats_all != nullptr)
    {
        _children["aggregate-accounting-stats-all"] = aggregate_accounting_stats_all;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(mobility != nullptr)
    {
        _children["mobility"] = mobility;
    }

    if(aggregate_change_of_authorization != nullptr)
    {
        _children["aggregate-change-of-authorization"] = aggregate_change_of_authorization;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "aggregate-accounting" || name == "authentication" || name == "aggregate-mobility" || name == "aggregate-authentication" || name == "accounting-stats-all" || name == "change-of-authorization" || name == "authorization" || name == "aggregate-authorization" || name == "aggregate-accounting-stats-all" || name == "accounting" || name == "mobility" || name == "aggregate-change-of-authorization")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::AggregateAccounting()
    :
    active_sessions{YType::uint32, "active-sessions"},
    started_sessions{YType::uint64, "started-sessions"},
    stopped_sessions{YType::uint64, "stopped-sessions"},
    policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
    policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"}
        ,
    start(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start>())
    , stop(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop>())
    , interim(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim>())
    , pass_through(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough>())
    , update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update>())
    , interim_inflight(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight>())
{
    start->parent = this;
    stop->parent = this;
    interim->parent = this;
    pass_through->parent = this;
    update->parent = this;
    interim_inflight->parent = this;

    yang_name = "aggregate-accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::~AggregateAccounting()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::has_data() const
{
    if (is_presence_container) return true;
    return active_sessions.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (interim !=  nullptr && interim->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (update !=  nullptr && update->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(started_sessions.yfilter)
	|| ydk::is_set(stopped_sessions.yfilter)
	|| ydk::is_set(policy_plane_errored_requests.yfilter)
	|| ydk::is_set(policy_plane_unknown_requests.yfilter)
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (interim !=  nullptr && interim->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (update !=  nullptr && update->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.yfilter)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.yfilter)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.yfilter)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.yfilter)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim>();
        }
        return interim;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update>();
        }
        return update;
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight == nullptr)
        {
            interim_inflight = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight>();
        }
        return interim_inflight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start != nullptr)
    {
        _children["start"] = start;
    }

    if(stop != nullptr)
    {
        _children["stop"] = stop;
    }

    if(interim != nullptr)
    {
        _children["interim"] = interim;
    }

    if(pass_through != nullptr)
    {
        _children["pass-through"] = pass_through;
    }

    if(update != nullptr)
    {
        _children["update"] = update;
    }

    if(interim_inflight != nullptr)
    {
        _children["interim-inflight"] = interim_inflight;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
        started_sessions.value_namespace = name_space;
        started_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
        stopped_sessions.value_namespace = name_space;
        stopped_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
        policy_plane_errored_requests.value_namespace = name_space;
        policy_plane_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
        policy_plane_unknown_requests.value_namespace = name_space;
        policy_plane_unknown_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "started-sessions")
    {
        started_sessions.yfilter = yfilter;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions.yfilter = yfilter;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests.yfilter = yfilter;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop" || name == "interim" || name == "pass-through" || name == "update" || name == "interim-inflight" || name == "active-sessions" || name == "started-sessions" || name == "stopped-sessions" || name == "policy-plane-errored-requests" || name == "policy-plane-unknown-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::Start()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "start"; yang_parent_name = "aggregate-accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::Stop()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "stop"; yang_parent_name = "aggregate-accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::Interim()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "interim"; yang_parent_name = "aggregate-accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Interim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::PassThrough()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "pass-through"; yang_parent_name = "aggregate-accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::PassThrough::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::Update()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "update"; yang_parent_name = "aggregate-accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::InterimInflight()
    :
    quota_exhausts{YType::uint32, "quota-exhausts"},
    denied_requests{YType::uint32, "denied-requests"},
    accepted_requests{YType::uint32, "accepted-requests"},
    total_quota_of_requests{YType::uint32, "total-quota-of-requests"},
    remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
    low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"}
{

    yang_name = "interim-inflight"; yang_parent_name = "aggregate-accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::has_data() const
{
    if (is_presence_container) return true;
    return quota_exhausts.is_set
	|| denied_requests.is_set
	|| accepted_requests.is_set
	|| total_quota_of_requests.is_set
	|| remaining_quota_of_requests.is_set
	|| low_water_mark_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quota_exhausts.yfilter)
	|| ydk::is_set(denied_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(total_quota_of_requests.yfilter)
	|| ydk::is_set(remaining_quota_of_requests.yfilter)
	|| ydk::is_set(low_water_mark_quota_of_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quota_exhausts.is_set || is_set(quota_exhausts.yfilter)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.yfilter)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.yfilter)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.yfilter)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.yfilter)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
        quota_exhausts.value_namespace = name_space;
        quota_exhausts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
        denied_requests.value_namespace = name_space;
        denied_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
        total_quota_of_requests.value_namespace = name_space;
        total_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
        remaining_quota_of_requests.value_namespace = name_space;
        remaining_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
        low_water_mark_quota_of_requests.value_namespace = name_space;
        low_water_mark_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quota-exhausts")
    {
        quota_exhausts.yfilter = yfilter;
    }
    if(value_path == "denied-requests")
    {
        denied_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests.yfilter = yfilter;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests.yfilter = yfilter;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccounting::InterimInflight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quota-exhausts" || name == "denied-requests" || name == "accepted-requests" || name == "total-quota-of-requests" || name == "remaining-quota-of-requests" || name == "low-water-mark-quota-of-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::Authentication()
    :
    sent_requests{YType::uint64, "sent-requests"},
    accepted_requests{YType::uint64, "accepted-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    terminated_requests{YType::uint64, "terminated-requests"}
{

    yang_name = "authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::~Authentication()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return sent_requests.is_set
	|| accepted_requests.is_set
	|| successful_requests.is_set
	|| rejected_requests.is_set
	|| unreachable_requests.is_set
	|| errored_requests.is_set
	|| terminated_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(successful_requests.yfilter)
	|| ydk::is_set(rejected_requests.yfilter)
	|| ydk::is_set(unreachable_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(terminated_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_requests.is_set || is_set(sent_requests.yfilter)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.yfilter)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.yfilter)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.yfilter)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.yfilter)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-requests")
    {
        sent_requests = value;
        sent_requests.value_namespace = name_space;
        sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
        successful_requests.value_namespace = name_space;
        successful_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
        rejected_requests.value_namespace = name_space;
        rejected_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
        unreachable_requests.value_namespace = name_space;
        unreachable_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
        terminated_requests.value_namespace = name_space;
        terminated_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-requests")
    {
        sent_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "successful-requests")
    {
        successful_requests.yfilter = yfilter;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests.yfilter = yfilter;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-requests" || name == "accepted-requests" || name == "successful-requests" || name == "rejected-requests" || name == "unreachable-requests" || name == "errored-requests" || name == "terminated-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::AggregateMobility()
    :
    send_request_successes{YType::uint64, "send-request-successes"},
    send_request_failures{YType::uint64, "send-request-failures"},
    receive_response_successes{YType::uint64, "receive-response-successes"},
    receive_response_failures{YType::uint64, "receive-response-failures"}
{

    yang_name = "aggregate-mobility"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::~AggregateMobility()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::has_data() const
{
    if (is_presence_container) return true;
    return send_request_successes.is_set
	|| send_request_failures.is_set
	|| receive_response_successes.is_set
	|| receive_response_failures.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_request_successes.yfilter)
	|| ydk::is_set(send_request_failures.yfilter)
	|| ydk::is_set(receive_response_successes.yfilter)
	|| ydk::is_set(receive_response_failures.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_request_successes.is_set || is_set(send_request_successes.yfilter)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.yfilter)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.yfilter)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (receive_response_failures.is_set || is_set(receive_response_failures.yfilter)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
        send_request_successes.value_namespace = name_space;
        send_request_successes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
        send_request_failures.value_namespace = name_space;
        send_request_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
        receive_response_successes.value_namespace = name_space;
        receive_response_successes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
        receive_response_failures.value_namespace = name_space;
        receive_response_failures.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-request-successes")
    {
        send_request_successes.yfilter = yfilter;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures.yfilter = yfilter;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes.yfilter = yfilter;
    }
    if(value_path == "receive-response-failures")
    {
        receive_response_failures.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateMobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-request-successes" || name == "send-request-failures" || name == "receive-response-successes" || name == "receive-response-failures")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::AggregateAuthentication()
    :
    sent_requests{YType::uint64, "sent-requests"},
    accepted_requests{YType::uint64, "accepted-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    terminated_requests{YType::uint64, "terminated-requests"}
{

    yang_name = "aggregate-authentication"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::~AggregateAuthentication()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::has_data() const
{
    if (is_presence_container) return true;
    return sent_requests.is_set
	|| accepted_requests.is_set
	|| successful_requests.is_set
	|| rejected_requests.is_set
	|| unreachable_requests.is_set
	|| errored_requests.is_set
	|| terminated_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(successful_requests.yfilter)
	|| ydk::is_set(rejected_requests.yfilter)
	|| ydk::is_set(unreachable_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(terminated_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_requests.is_set || is_set(sent_requests.yfilter)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.yfilter)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.yfilter)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.yfilter)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.yfilter)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-requests")
    {
        sent_requests = value;
        sent_requests.value_namespace = name_space;
        sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
        successful_requests.value_namespace = name_space;
        successful_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
        rejected_requests.value_namespace = name_space;
        rejected_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
        unreachable_requests.value_namespace = name_space;
        unreachable_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
        terminated_requests.value_namespace = name_space;
        terminated_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-requests")
    {
        sent_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "successful-requests")
    {
        successful_requests.yfilter = yfilter;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests.yfilter = yfilter;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-requests" || name == "accepted-requests" || name == "successful-requests" || name == "rejected-requests" || name == "unreachable-requests" || name == "errored-requests" || name == "terminated-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatsAll()
    :
    accounting_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics>())
    , authentication_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics>())
    , authorization_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics>())
    , change_of_authorization_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics>())
    , mobility_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics>())
{
    accounting_statistics->parent = this;
    authentication_statistics->parent = this;
    authorization_statistics->parent = this;
    change_of_authorization_statistics->parent = this;
    mobility_statistics->parent = this;

    yang_name = "accounting-stats-all"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::~AccountingStatsAll()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::has_data() const
{
    if (is_presence_container) return true;
    return (accounting_statistics !=  nullptr && accounting_statistics->has_data())
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_data())
	|| (authorization_statistics !=  nullptr && authorization_statistics->has_data())
	|| (change_of_authorization_statistics !=  nullptr && change_of_authorization_statistics->has_data())
	|| (mobility_statistics !=  nullptr && mobility_statistics->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::has_operation() const
{
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting_statistics != nullptr)
    {
        _children["accounting-statistics"] = accounting_statistics;
    }

    if(authentication_statistics != nullptr)
    {
        _children["authentication-statistics"] = authentication_statistics;
    }

    if(authorization_statistics != nullptr)
    {
        _children["authorization-statistics"] = authorization_statistics;
    }

    if(change_of_authorization_statistics != nullptr)
    {
        _children["change-of-authorization-statistics"] = change_of_authorization_statistics;
    }

    if(mobility_statistics != nullptr)
    {
        _children["mobility-statistics"] = mobility_statistics;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-statistics" || name == "authentication-statistics" || name == "authorization-statistics" || name == "change-of-authorization-statistics" || name == "mobility-statistics")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::AccountingStatistics()
    :
    active_sessions{YType::uint32, "active-sessions"},
    started_sessions{YType::uint64, "started-sessions"},
    stopped_sessions{YType::uint64, "stopped-sessions"},
    policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
    policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"}
        ,
    start(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start>())
    , stop(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop>())
    , interim(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim>())
    , pass_through(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough>())
    , update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update>())
    , interim_inflight(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight>())
{
    start->parent = this;
    stop->parent = this;
    interim->parent = this;
    pass_through->parent = this;
    update->parent = this;
    interim_inflight->parent = this;

    yang_name = "accounting-statistics"; yang_parent_name = "accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::~AccountingStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::has_data() const
{
    if (is_presence_container) return true;
    return active_sessions.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (interim !=  nullptr && interim->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (update !=  nullptr && update->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(started_sessions.yfilter)
	|| ydk::is_set(stopped_sessions.yfilter)
	|| ydk::is_set(policy_plane_errored_requests.yfilter)
	|| ydk::is_set(policy_plane_unknown_requests.yfilter)
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (interim !=  nullptr && interim->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (update !=  nullptr && update->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.yfilter)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.yfilter)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.yfilter)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.yfilter)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim>();
        }
        return interim;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update>();
        }
        return update;
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight == nullptr)
        {
            interim_inflight = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight>();
        }
        return interim_inflight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start != nullptr)
    {
        _children["start"] = start;
    }

    if(stop != nullptr)
    {
        _children["stop"] = stop;
    }

    if(interim != nullptr)
    {
        _children["interim"] = interim;
    }

    if(pass_through != nullptr)
    {
        _children["pass-through"] = pass_through;
    }

    if(update != nullptr)
    {
        _children["update"] = update;
    }

    if(interim_inflight != nullptr)
    {
        _children["interim-inflight"] = interim_inflight;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
        started_sessions.value_namespace = name_space;
        started_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
        stopped_sessions.value_namespace = name_space;
        stopped_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
        policy_plane_errored_requests.value_namespace = name_space;
        policy_plane_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
        policy_plane_unknown_requests.value_namespace = name_space;
        policy_plane_unknown_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "started-sessions")
    {
        started_sessions.yfilter = yfilter;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions.yfilter = yfilter;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests.yfilter = yfilter;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop" || name == "interim" || name == "pass-through" || name == "update" || name == "interim-inflight" || name == "active-sessions" || name == "started-sessions" || name == "stopped-sessions" || name == "policy-plane-errored-requests" || name == "policy-plane-unknown-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::Start()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "start"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::Stop()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "stop"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::Interim()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "interim"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Interim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::PassThrough()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "pass-through"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::PassThrough::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::Update()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "update"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::InterimInflight()
    :
    quota_exhausts{YType::uint32, "quota-exhausts"},
    denied_requests{YType::uint32, "denied-requests"},
    accepted_requests{YType::uint32, "accepted-requests"},
    total_quota_of_requests{YType::uint32, "total-quota-of-requests"},
    remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
    low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"}
{

    yang_name = "interim-inflight"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::has_data() const
{
    if (is_presence_container) return true;
    return quota_exhausts.is_set
	|| denied_requests.is_set
	|| accepted_requests.is_set
	|| total_quota_of_requests.is_set
	|| remaining_quota_of_requests.is_set
	|| low_water_mark_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quota_exhausts.yfilter)
	|| ydk::is_set(denied_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(total_quota_of_requests.yfilter)
	|| ydk::is_set(remaining_quota_of_requests.yfilter)
	|| ydk::is_set(low_water_mark_quota_of_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quota_exhausts.is_set || is_set(quota_exhausts.yfilter)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.yfilter)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.yfilter)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.yfilter)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.yfilter)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
        quota_exhausts.value_namespace = name_space;
        quota_exhausts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
        denied_requests.value_namespace = name_space;
        denied_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
        total_quota_of_requests.value_namespace = name_space;
        total_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
        remaining_quota_of_requests.value_namespace = name_space;
        remaining_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
        low_water_mark_quota_of_requests.value_namespace = name_space;
        low_water_mark_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quota-exhausts")
    {
        quota_exhausts.yfilter = yfilter;
    }
    if(value_path == "denied-requests")
    {
        denied_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests.yfilter = yfilter;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests.yfilter = yfilter;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AccountingStatistics::InterimInflight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quota-exhausts" || name == "denied-requests" || name == "accepted-requests" || name == "total-quota-of-requests" || name == "remaining-quota-of-requests" || name == "low-water-mark-quota-of-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::AuthenticationStatistics()
    :
    sent_requests{YType::uint64, "sent-requests"},
    accepted_requests{YType::uint64, "accepted-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    terminated_requests{YType::uint64, "terminated-requests"}
{

    yang_name = "authentication-statistics"; yang_parent_name = "accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::~AuthenticationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::has_data() const
{
    if (is_presence_container) return true;
    return sent_requests.is_set
	|| accepted_requests.is_set
	|| successful_requests.is_set
	|| rejected_requests.is_set
	|| unreachable_requests.is_set
	|| errored_requests.is_set
	|| terminated_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(successful_requests.yfilter)
	|| ydk::is_set(rejected_requests.yfilter)
	|| ydk::is_set(unreachable_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(terminated_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_requests.is_set || is_set(sent_requests.yfilter)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.yfilter)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.yfilter)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.yfilter)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.yfilter)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-requests")
    {
        sent_requests = value;
        sent_requests.value_namespace = name_space;
        sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
        successful_requests.value_namespace = name_space;
        successful_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
        rejected_requests.value_namespace = name_space;
        rejected_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
        unreachable_requests.value_namespace = name_space;
        unreachable_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
        terminated_requests.value_namespace = name_space;
        terminated_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-requests")
    {
        sent_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "successful-requests")
    {
        successful_requests.yfilter = yfilter;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests.yfilter = yfilter;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthenticationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-requests" || name == "accepted-requests" || name == "successful-requests" || name == "rejected-requests" || name == "unreachable-requests" || name == "errored-requests" || name == "terminated-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::AuthorizationStatistics()
    :
    sent_requests{YType::uint64, "sent-requests"},
    accepted_requests{YType::uint64, "accepted-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    terminated_requests{YType::uint64, "terminated-requests"}
{

    yang_name = "authorization-statistics"; yang_parent_name = "accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::~AuthorizationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::has_data() const
{
    if (is_presence_container) return true;
    return sent_requests.is_set
	|| accepted_requests.is_set
	|| successful_requests.is_set
	|| rejected_requests.is_set
	|| unreachable_requests.is_set
	|| errored_requests.is_set
	|| terminated_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(successful_requests.yfilter)
	|| ydk::is_set(rejected_requests.yfilter)
	|| ydk::is_set(unreachable_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(terminated_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_requests.is_set || is_set(sent_requests.yfilter)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.yfilter)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.yfilter)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.yfilter)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.yfilter)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-requests")
    {
        sent_requests = value;
        sent_requests.value_namespace = name_space;
        sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
        successful_requests.value_namespace = name_space;
        successful_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
        rejected_requests.value_namespace = name_space;
        rejected_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
        unreachable_requests.value_namespace = name_space;
        unreachable_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
        terminated_requests.value_namespace = name_space;
        terminated_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-requests")
    {
        sent_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "successful-requests")
    {
        successful_requests.yfilter = yfilter;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests.yfilter = yfilter;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::AuthorizationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-requests" || name == "accepted-requests" || name == "successful-requests" || name == "rejected-requests" || name == "unreachable-requests" || name == "errored-requests" || name == "terminated-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ChangeOfAuthorizationStatistics()
    :
    unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
    unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"},
    unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
    attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
    resp_send_failure{YType::uint64, "resp-send-failure"},
    internal_err_resps{YType::uint64, "internal-err-resps"},
    service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
    no_cmd_resps{YType::uint64, "no-cmd-resps"},
    no_session_found_resps{YType::uint64, "no-session-found-resps"},
    no_session_peer_resps{YType::uint64, "no-session-peer-resps"}
        ,
    account_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon>())
    , account_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff>())
    , account_update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate>())
    , session_disconnect(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect>())
    , single_service_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon>())
    , single_service_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff>())
    , single_service_modify(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify>())
    , service_multi(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti>())
{
    account_logon->parent = this;
    account_logoff->parent = this;
    account_update->parent = this;
    session_disconnect->parent = this;
    single_service_logon->parent = this;
    single_service_logoff->parent = this;
    single_service_modify->parent = this;
    service_multi->parent = this;

    yang_name = "change-of-authorization-statistics"; yang_parent_name = "accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::~ChangeOfAuthorizationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::has_data() const
{
    if (is_presence_container) return true;
    return unknown_account_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| attr_list_retrieve_failure_resps.is_set
	|| resp_send_failure.is_set
	|| internal_err_resps.is_set
	|| service_profile_push_failure_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_account_cmd_resps.yfilter)
	|| ydk::is_set(unknown_service_cmd_resps.yfilter)
	|| ydk::is_set(unknown_cmd_resps.yfilter)
	|| ydk::is_set(attr_list_retrieve_failure_resps.yfilter)
	|| ydk::is_set(resp_send_failure.yfilter)
	|| ydk::is_set(internal_err_resps.yfilter)
	|| ydk::is_set(service_profile_push_failure_resps.yfilter)
	|| ydk::is_set(no_cmd_resps.yfilter)
	|| ydk::is_set(no_session_found_resps.yfilter)
	|| ydk::is_set(no_session_peer_resps.yfilter)
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-of-authorization-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.yfilter)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.yfilter)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.yfilter)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.yfilter)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.yfilter)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.yfilter)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.yfilter)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-logon")
    {
        if(account_logon == nullptr)
        {
            account_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon>();
        }
        return account_logon;
    }

    if(child_yang_name == "account-logoff")
    {
        if(account_logoff == nullptr)
        {
            account_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff>();
        }
        return account_logoff;
    }

    if(child_yang_name == "account-update")
    {
        if(account_update == nullptr)
        {
            account_update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate>();
        }
        return account_update;
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect == nullptr)
        {
            session_disconnect = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect>();
        }
        return session_disconnect;
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon == nullptr)
        {
            single_service_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon>();
        }
        return single_service_logon;
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff == nullptr)
        {
            single_service_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff>();
        }
        return single_service_logoff;
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify == nullptr)
        {
            single_service_modify = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify>();
        }
        return single_service_modify;
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi == nullptr)
        {
            service_multi = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti>();
        }
        return service_multi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(account_logon != nullptr)
    {
        _children["account-logon"] = account_logon;
    }

    if(account_logoff != nullptr)
    {
        _children["account-logoff"] = account_logoff;
    }

    if(account_update != nullptr)
    {
        _children["account-update"] = account_update;
    }

    if(session_disconnect != nullptr)
    {
        _children["session-disconnect"] = session_disconnect;
    }

    if(single_service_logon != nullptr)
    {
        _children["single-service-logon"] = single_service_logon;
    }

    if(single_service_logoff != nullptr)
    {
        _children["single-service-logoff"] = single_service_logoff;
    }

    if(single_service_modify != nullptr)
    {
        _children["single-service-modify"] = single_service_modify;
    }

    if(service_multi != nullptr)
    {
        _children["service-multi"] = service_multi;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
        unknown_account_cmd_resps.value_namespace = name_space;
        unknown_account_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
        unknown_service_cmd_resps.value_namespace = name_space;
        unknown_service_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
        unknown_cmd_resps.value_namespace = name_space;
        unknown_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
        attr_list_retrieve_failure_resps.value_namespace = name_space;
        attr_list_retrieve_failure_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
        resp_send_failure.value_namespace = name_space;
        resp_send_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
        internal_err_resps.value_namespace = name_space;
        internal_err_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
        service_profile_push_failure_resps.value_namespace = name_space;
        service_profile_push_failure_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
        no_cmd_resps.value_namespace = name_space;
        no_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
        no_session_found_resps.value_namespace = name_space;
        no_session_found_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
        no_session_peer_resps.value_namespace = name_space;
        no_session_peer_resps.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps.yfilter = yfilter;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure.yfilter = yfilter;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps.yfilter = yfilter;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps.yfilter = yfilter;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps.yfilter = yfilter;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-logon" || name == "account-logoff" || name == "account-update" || name == "session-disconnect" || name == "single-service-logon" || name == "single-service-logoff" || name == "single-service-modify" || name == "service-multi" || name == "unknown-account-cmd-resps" || name == "unknown-service-cmd-resps" || name == "unknown-cmd-resps" || name == "attr-list-retrieve-failure-resps" || name == "resp-send-failure" || name == "internal-err-resps" || name == "service-profile-push-failure-resps" || name == "no-cmd-resps" || name == "no-session-found-resps" || name == "no-session-peer-resps")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::AccountLogon()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-logon"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::AccountLogoff()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-logoff"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::AccountUpdate()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-update"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::SessionDisconnect()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "session-disconnect"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::SingleServiceLogon()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-logon"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::SingleServiceLogoff()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-logoff"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::SingleServiceModify()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-modify"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::ServiceMulti()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "service-multi"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::MobilityStatistics()
    :
    send_request_successes{YType::uint64, "send-request-successes"},
    send_request_failures{YType::uint64, "send-request-failures"},
    receive_response_successes{YType::uint64, "receive-response-successes"},
    receive_response_failures{YType::uint64, "receive-response-failures"}
{

    yang_name = "mobility-statistics"; yang_parent_name = "accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::~MobilityStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::has_data() const
{
    if (is_presence_container) return true;
    return send_request_successes.is_set
	|| send_request_failures.is_set
	|| receive_response_successes.is_set
	|| receive_response_failures.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_request_successes.yfilter)
	|| ydk::is_set(send_request_failures.yfilter)
	|| ydk::is_set(receive_response_successes.yfilter)
	|| ydk::is_set(receive_response_failures.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_request_successes.is_set || is_set(send_request_successes.yfilter)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.yfilter)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.yfilter)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (receive_response_failures.is_set || is_set(receive_response_failures.yfilter)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
        send_request_successes.value_namespace = name_space;
        send_request_successes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
        send_request_failures.value_namespace = name_space;
        send_request_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
        receive_response_successes.value_namespace = name_space;
        receive_response_successes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
        receive_response_failures.value_namespace = name_space;
        receive_response_failures.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-request-successes")
    {
        send_request_successes.yfilter = yfilter;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures.yfilter = yfilter;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes.yfilter = yfilter;
    }
    if(value_path == "receive-response-failures")
    {
        receive_response_failures.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AccountingStatsAll::MobilityStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-request-successes" || name == "send-request-failures" || name == "receive-response-successes" || name == "receive-response-failures")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ChangeOfAuthorization()
    :
    unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
    unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"},
    unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
    attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
    resp_send_failure{YType::uint64, "resp-send-failure"},
    internal_err_resps{YType::uint64, "internal-err-resps"},
    service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
    no_cmd_resps{YType::uint64, "no-cmd-resps"},
    no_session_found_resps{YType::uint64, "no-session-found-resps"},
    no_session_peer_resps{YType::uint64, "no-session-peer-resps"}
        ,
    account_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon>())
    , account_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff>())
    , account_update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate>())
    , session_disconnect(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect>())
    , single_service_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon>())
    , single_service_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff>())
    , single_service_modify(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify>())
    , service_multi(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti>())
{
    account_logon->parent = this;
    account_logoff->parent = this;
    account_update->parent = this;
    session_disconnect->parent = this;
    single_service_logon->parent = this;
    single_service_logoff->parent = this;
    single_service_modify->parent = this;
    service_multi->parent = this;

    yang_name = "change-of-authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::~ChangeOfAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::has_data() const
{
    if (is_presence_container) return true;
    return unknown_account_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| attr_list_retrieve_failure_resps.is_set
	|| resp_send_failure.is_set
	|| internal_err_resps.is_set
	|| service_profile_push_failure_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_account_cmd_resps.yfilter)
	|| ydk::is_set(unknown_service_cmd_resps.yfilter)
	|| ydk::is_set(unknown_cmd_resps.yfilter)
	|| ydk::is_set(attr_list_retrieve_failure_resps.yfilter)
	|| ydk::is_set(resp_send_failure.yfilter)
	|| ydk::is_set(internal_err_resps.yfilter)
	|| ydk::is_set(service_profile_push_failure_resps.yfilter)
	|| ydk::is_set(no_cmd_resps.yfilter)
	|| ydk::is_set(no_session_found_resps.yfilter)
	|| ydk::is_set(no_session_peer_resps.yfilter)
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-of-authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.yfilter)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.yfilter)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.yfilter)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.yfilter)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.yfilter)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.yfilter)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.yfilter)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-logon")
    {
        if(account_logon == nullptr)
        {
            account_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon>();
        }
        return account_logon;
    }

    if(child_yang_name == "account-logoff")
    {
        if(account_logoff == nullptr)
        {
            account_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff>();
        }
        return account_logoff;
    }

    if(child_yang_name == "account-update")
    {
        if(account_update == nullptr)
        {
            account_update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate>();
        }
        return account_update;
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect == nullptr)
        {
            session_disconnect = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect>();
        }
        return session_disconnect;
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon == nullptr)
        {
            single_service_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon>();
        }
        return single_service_logon;
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff == nullptr)
        {
            single_service_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff>();
        }
        return single_service_logoff;
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify == nullptr)
        {
            single_service_modify = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify>();
        }
        return single_service_modify;
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi == nullptr)
        {
            service_multi = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti>();
        }
        return service_multi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(account_logon != nullptr)
    {
        _children["account-logon"] = account_logon;
    }

    if(account_logoff != nullptr)
    {
        _children["account-logoff"] = account_logoff;
    }

    if(account_update != nullptr)
    {
        _children["account-update"] = account_update;
    }

    if(session_disconnect != nullptr)
    {
        _children["session-disconnect"] = session_disconnect;
    }

    if(single_service_logon != nullptr)
    {
        _children["single-service-logon"] = single_service_logon;
    }

    if(single_service_logoff != nullptr)
    {
        _children["single-service-logoff"] = single_service_logoff;
    }

    if(single_service_modify != nullptr)
    {
        _children["single-service-modify"] = single_service_modify;
    }

    if(service_multi != nullptr)
    {
        _children["service-multi"] = service_multi;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
        unknown_account_cmd_resps.value_namespace = name_space;
        unknown_account_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
        unknown_service_cmd_resps.value_namespace = name_space;
        unknown_service_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
        unknown_cmd_resps.value_namespace = name_space;
        unknown_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
        attr_list_retrieve_failure_resps.value_namespace = name_space;
        attr_list_retrieve_failure_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
        resp_send_failure.value_namespace = name_space;
        resp_send_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
        internal_err_resps.value_namespace = name_space;
        internal_err_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
        service_profile_push_failure_resps.value_namespace = name_space;
        service_profile_push_failure_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
        no_cmd_resps.value_namespace = name_space;
        no_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
        no_session_found_resps.value_namespace = name_space;
        no_session_found_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
        no_session_peer_resps.value_namespace = name_space;
        no_session_peer_resps.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps.yfilter = yfilter;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure.yfilter = yfilter;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps.yfilter = yfilter;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps.yfilter = yfilter;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps.yfilter = yfilter;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-logon" || name == "account-logoff" || name == "account-update" || name == "session-disconnect" || name == "single-service-logon" || name == "single-service-logoff" || name == "single-service-modify" || name == "service-multi" || name == "unknown-account-cmd-resps" || name == "unknown-service-cmd-resps" || name == "unknown-cmd-resps" || name == "attr-list-retrieve-failure-resps" || name == "resp-send-failure" || name == "internal-err-resps" || name == "service-profile-push-failure-resps" || name == "no-cmd-resps" || name == "no-session-found-resps" || name == "no-session-peer-resps")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::AccountLogon()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-logon"; yang_parent_name = "change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::AccountLogoff()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-logoff"; yang_parent_name = "change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountLogoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::AccountUpdate()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-update"; yang_parent_name = "change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::AccountUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::SessionDisconnect()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "session-disconnect"; yang_parent_name = "change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SessionDisconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::SingleServiceLogon()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-logon"; yang_parent_name = "change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::SingleServiceLogoff()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-logoff"; yang_parent_name = "change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceLogoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::SingleServiceModify()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-modify"; yang_parent_name = "change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::SingleServiceModify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::ServiceMulti()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "service-multi"; yang_parent_name = "change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::ChangeOfAuthorization::ServiceMulti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::Authorization()
    :
    sent_requests{YType::uint64, "sent-requests"},
    accepted_requests{YType::uint64, "accepted-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    terminated_requests{YType::uint64, "terminated-requests"}
{

    yang_name = "authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::~Authorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return sent_requests.is_set
	|| accepted_requests.is_set
	|| successful_requests.is_set
	|| rejected_requests.is_set
	|| unreachable_requests.is_set
	|| errored_requests.is_set
	|| terminated_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(successful_requests.yfilter)
	|| ydk::is_set(rejected_requests.yfilter)
	|| ydk::is_set(unreachable_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(terminated_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_requests.is_set || is_set(sent_requests.yfilter)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.yfilter)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.yfilter)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.yfilter)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.yfilter)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-requests")
    {
        sent_requests = value;
        sent_requests.value_namespace = name_space;
        sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
        successful_requests.value_namespace = name_space;
        successful_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
        rejected_requests.value_namespace = name_space;
        rejected_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
        unreachable_requests.value_namespace = name_space;
        unreachable_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
        terminated_requests.value_namespace = name_space;
        terminated_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-requests")
    {
        sent_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "successful-requests")
    {
        successful_requests.yfilter = yfilter;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests.yfilter = yfilter;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-requests" || name == "accepted-requests" || name == "successful-requests" || name == "rejected-requests" || name == "unreachable-requests" || name == "errored-requests" || name == "terminated-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::AggregateAuthorization()
    :
    sent_requests{YType::uint64, "sent-requests"},
    accepted_requests{YType::uint64, "accepted-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    terminated_requests{YType::uint64, "terminated-requests"}
{

    yang_name = "aggregate-authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::~AggregateAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::has_data() const
{
    if (is_presence_container) return true;
    return sent_requests.is_set
	|| accepted_requests.is_set
	|| successful_requests.is_set
	|| rejected_requests.is_set
	|| unreachable_requests.is_set
	|| errored_requests.is_set
	|| terminated_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(successful_requests.yfilter)
	|| ydk::is_set(rejected_requests.yfilter)
	|| ydk::is_set(unreachable_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(terminated_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_requests.is_set || is_set(sent_requests.yfilter)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.yfilter)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.yfilter)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.yfilter)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.yfilter)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-requests")
    {
        sent_requests = value;
        sent_requests.value_namespace = name_space;
        sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
        successful_requests.value_namespace = name_space;
        successful_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
        rejected_requests.value_namespace = name_space;
        rejected_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
        unreachable_requests.value_namespace = name_space;
        unreachable_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
        terminated_requests.value_namespace = name_space;
        terminated_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-requests")
    {
        sent_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "successful-requests")
    {
        successful_requests.yfilter = yfilter;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests.yfilter = yfilter;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-requests" || name == "accepted-requests" || name == "successful-requests" || name == "rejected-requests" || name == "unreachable-requests" || name == "errored-requests" || name == "terminated-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AggregateAccountingStatsAll()
    :
    accounting_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics>())
    , authentication_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics>())
    , authorization_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics>())
    , change_of_authorization_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics>())
    , mobility_statistics(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics>())
{
    accounting_statistics->parent = this;
    authentication_statistics->parent = this;
    authorization_statistics->parent = this;
    change_of_authorization_statistics->parent = this;
    mobility_statistics->parent = this;

    yang_name = "aggregate-accounting-stats-all"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::~AggregateAccountingStatsAll()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::has_data() const
{
    if (is_presence_container) return true;
    return (accounting_statistics !=  nullptr && accounting_statistics->has_data())
	|| (authentication_statistics !=  nullptr && authentication_statistics->has_data())
	|| (authorization_statistics !=  nullptr && authorization_statistics->has_data())
	|| (change_of_authorization_statistics !=  nullptr && change_of_authorization_statistics->has_data())
	|| (mobility_statistics !=  nullptr && mobility_statistics->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::has_operation() const
{
    return is_set(yfilter)
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

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting_statistics != nullptr)
    {
        _children["accounting-statistics"] = accounting_statistics;
    }

    if(authentication_statistics != nullptr)
    {
        _children["authentication-statistics"] = authentication_statistics;
    }

    if(authorization_statistics != nullptr)
    {
        _children["authorization-statistics"] = authorization_statistics;
    }

    if(change_of_authorization_statistics != nullptr)
    {
        _children["change-of-authorization-statistics"] = change_of_authorization_statistics;
    }

    if(mobility_statistics != nullptr)
    {
        _children["mobility-statistics"] = mobility_statistics;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-statistics" || name == "authentication-statistics" || name == "authorization-statistics" || name == "change-of-authorization-statistics" || name == "mobility-statistics")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::AccountingStatistics()
    :
    active_sessions{YType::uint32, "active-sessions"},
    started_sessions{YType::uint64, "started-sessions"},
    stopped_sessions{YType::uint64, "stopped-sessions"},
    policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
    policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"}
        ,
    start(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start>())
    , stop(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop>())
    , interim(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim>())
    , pass_through(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough>())
    , update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update>())
    , interim_inflight(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight>())
{
    start->parent = this;
    stop->parent = this;
    interim->parent = this;
    pass_through->parent = this;
    update->parent = this;
    interim_inflight->parent = this;

    yang_name = "accounting-statistics"; yang_parent_name = "aggregate-accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::~AccountingStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::has_data() const
{
    if (is_presence_container) return true;
    return active_sessions.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (interim !=  nullptr && interim->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (update !=  nullptr && update->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(started_sessions.yfilter)
	|| ydk::is_set(stopped_sessions.yfilter)
	|| ydk::is_set(policy_plane_errored_requests.yfilter)
	|| ydk::is_set(policy_plane_unknown_requests.yfilter)
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (interim !=  nullptr && interim->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (update !=  nullptr && update->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.yfilter)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.yfilter)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.yfilter)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.yfilter)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim>();
        }
        return interim;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update>();
        }
        return update;
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight == nullptr)
        {
            interim_inflight = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight>();
        }
        return interim_inflight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start != nullptr)
    {
        _children["start"] = start;
    }

    if(stop != nullptr)
    {
        _children["stop"] = stop;
    }

    if(interim != nullptr)
    {
        _children["interim"] = interim;
    }

    if(pass_through != nullptr)
    {
        _children["pass-through"] = pass_through;
    }

    if(update != nullptr)
    {
        _children["update"] = update;
    }

    if(interim_inflight != nullptr)
    {
        _children["interim-inflight"] = interim_inflight;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
        started_sessions.value_namespace = name_space;
        started_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
        stopped_sessions.value_namespace = name_space;
        stopped_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
        policy_plane_errored_requests.value_namespace = name_space;
        policy_plane_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
        policy_plane_unknown_requests.value_namespace = name_space;
        policy_plane_unknown_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "started-sessions")
    {
        started_sessions.yfilter = yfilter;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions.yfilter = yfilter;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests.yfilter = yfilter;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop" || name == "interim" || name == "pass-through" || name == "update" || name == "interim-inflight" || name == "active-sessions" || name == "started-sessions" || name == "stopped-sessions" || name == "policy-plane-errored-requests" || name == "policy-plane-unknown-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::Start()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "start"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::Stop()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "stop"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::Interim()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "interim"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Interim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::PassThrough()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "pass-through"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::PassThrough::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::Update()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "update"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::InterimInflight()
    :
    quota_exhausts{YType::uint32, "quota-exhausts"},
    denied_requests{YType::uint32, "denied-requests"},
    accepted_requests{YType::uint32, "accepted-requests"},
    total_quota_of_requests{YType::uint32, "total-quota-of-requests"},
    remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
    low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"}
{

    yang_name = "interim-inflight"; yang_parent_name = "accounting-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::has_data() const
{
    if (is_presence_container) return true;
    return quota_exhausts.is_set
	|| denied_requests.is_set
	|| accepted_requests.is_set
	|| total_quota_of_requests.is_set
	|| remaining_quota_of_requests.is_set
	|| low_water_mark_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quota_exhausts.yfilter)
	|| ydk::is_set(denied_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(total_quota_of_requests.yfilter)
	|| ydk::is_set(remaining_quota_of_requests.yfilter)
	|| ydk::is_set(low_water_mark_quota_of_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quota_exhausts.is_set || is_set(quota_exhausts.yfilter)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.yfilter)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.yfilter)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.yfilter)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.yfilter)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
        quota_exhausts.value_namespace = name_space;
        quota_exhausts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
        denied_requests.value_namespace = name_space;
        denied_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
        total_quota_of_requests.value_namespace = name_space;
        total_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
        remaining_quota_of_requests.value_namespace = name_space;
        remaining_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
        low_water_mark_quota_of_requests.value_namespace = name_space;
        low_water_mark_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quota-exhausts")
    {
        quota_exhausts.yfilter = yfilter;
    }
    if(value_path == "denied-requests")
    {
        denied_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests.yfilter = yfilter;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests.yfilter = yfilter;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AccountingStatistics::InterimInflight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quota-exhausts" || name == "denied-requests" || name == "accepted-requests" || name == "total-quota-of-requests" || name == "remaining-quota-of-requests" || name == "low-water-mark-quota-of-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::AuthenticationStatistics()
    :
    sent_requests{YType::uint64, "sent-requests"},
    accepted_requests{YType::uint64, "accepted-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    terminated_requests{YType::uint64, "terminated-requests"}
{

    yang_name = "authentication-statistics"; yang_parent_name = "aggregate-accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::~AuthenticationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::has_data() const
{
    if (is_presence_container) return true;
    return sent_requests.is_set
	|| accepted_requests.is_set
	|| successful_requests.is_set
	|| rejected_requests.is_set
	|| unreachable_requests.is_set
	|| errored_requests.is_set
	|| terminated_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(successful_requests.yfilter)
	|| ydk::is_set(rejected_requests.yfilter)
	|| ydk::is_set(unreachable_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(terminated_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_requests.is_set || is_set(sent_requests.yfilter)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.yfilter)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.yfilter)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.yfilter)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.yfilter)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-requests")
    {
        sent_requests = value;
        sent_requests.value_namespace = name_space;
        sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
        successful_requests.value_namespace = name_space;
        successful_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
        rejected_requests.value_namespace = name_space;
        rejected_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
        unreachable_requests.value_namespace = name_space;
        unreachable_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
        terminated_requests.value_namespace = name_space;
        terminated_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-requests")
    {
        sent_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "successful-requests")
    {
        successful_requests.yfilter = yfilter;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests.yfilter = yfilter;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthenticationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-requests" || name == "accepted-requests" || name == "successful-requests" || name == "rejected-requests" || name == "unreachable-requests" || name == "errored-requests" || name == "terminated-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::AuthorizationStatistics()
    :
    sent_requests{YType::uint64, "sent-requests"},
    accepted_requests{YType::uint64, "accepted-requests"},
    successful_requests{YType::uint64, "successful-requests"},
    rejected_requests{YType::uint64, "rejected-requests"},
    unreachable_requests{YType::uint64, "unreachable-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    terminated_requests{YType::uint64, "terminated-requests"}
{

    yang_name = "authorization-statistics"; yang_parent_name = "aggregate-accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::~AuthorizationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::has_data() const
{
    if (is_presence_container) return true;
    return sent_requests.is_set
	|| accepted_requests.is_set
	|| successful_requests.is_set
	|| rejected_requests.is_set
	|| unreachable_requests.is_set
	|| errored_requests.is_set
	|| terminated_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sent_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(successful_requests.yfilter)
	|| ydk::is_set(rejected_requests.yfilter)
	|| ydk::is_set(unreachable_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(terminated_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sent_requests.is_set || is_set(sent_requests.yfilter)) leaf_name_data.push_back(sent_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (successful_requests.is_set || is_set(successful_requests.yfilter)) leaf_name_data.push_back(successful_requests.get_name_leafdata());
    if (rejected_requests.is_set || is_set(rejected_requests.yfilter)) leaf_name_data.push_back(rejected_requests.get_name_leafdata());
    if (unreachable_requests.is_set || is_set(unreachable_requests.yfilter)) leaf_name_data.push_back(unreachable_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (terminated_requests.is_set || is_set(terminated_requests.yfilter)) leaf_name_data.push_back(terminated_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sent-requests")
    {
        sent_requests = value;
        sent_requests.value_namespace = name_space;
        sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "successful-requests")
    {
        successful_requests = value;
        successful_requests.value_namespace = name_space;
        successful_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests = value;
        rejected_requests.value_namespace = name_space;
        rejected_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests = value;
        unreachable_requests.value_namespace = name_space;
        unreachable_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests = value;
        terminated_requests.value_namespace = name_space;
        terminated_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sent-requests")
    {
        sent_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "successful-requests")
    {
        successful_requests.yfilter = yfilter;
    }
    if(value_path == "rejected-requests")
    {
        rejected_requests.yfilter = yfilter;
    }
    if(value_path == "unreachable-requests")
    {
        unreachable_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "terminated-requests")
    {
        terminated_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::AuthorizationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sent-requests" || name == "accepted-requests" || name == "successful-requests" || name == "rejected-requests" || name == "unreachable-requests" || name == "errored-requests" || name == "terminated-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ChangeOfAuthorizationStatistics()
    :
    unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
    unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"},
    unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
    attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
    resp_send_failure{YType::uint64, "resp-send-failure"},
    internal_err_resps{YType::uint64, "internal-err-resps"},
    service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
    no_cmd_resps{YType::uint64, "no-cmd-resps"},
    no_session_found_resps{YType::uint64, "no-session-found-resps"},
    no_session_peer_resps{YType::uint64, "no-session-peer-resps"}
        ,
    account_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon>())
    , account_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff>())
    , account_update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate>())
    , session_disconnect(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect>())
    , single_service_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon>())
    , single_service_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff>())
    , single_service_modify(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify>())
    , service_multi(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti>())
{
    account_logon->parent = this;
    account_logoff->parent = this;
    account_update->parent = this;
    session_disconnect->parent = this;
    single_service_logon->parent = this;
    single_service_logoff->parent = this;
    single_service_modify->parent = this;
    service_multi->parent = this;

    yang_name = "change-of-authorization-statistics"; yang_parent_name = "aggregate-accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::~ChangeOfAuthorizationStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::has_data() const
{
    if (is_presence_container) return true;
    return unknown_account_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| attr_list_retrieve_failure_resps.is_set
	|| resp_send_failure.is_set
	|| internal_err_resps.is_set
	|| service_profile_push_failure_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_account_cmd_resps.yfilter)
	|| ydk::is_set(unknown_service_cmd_resps.yfilter)
	|| ydk::is_set(unknown_cmd_resps.yfilter)
	|| ydk::is_set(attr_list_retrieve_failure_resps.yfilter)
	|| ydk::is_set(resp_send_failure.yfilter)
	|| ydk::is_set(internal_err_resps.yfilter)
	|| ydk::is_set(service_profile_push_failure_resps.yfilter)
	|| ydk::is_set(no_cmd_resps.yfilter)
	|| ydk::is_set(no_session_found_resps.yfilter)
	|| ydk::is_set(no_session_peer_resps.yfilter)
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "change-of-authorization-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.yfilter)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.yfilter)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.yfilter)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.yfilter)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.yfilter)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.yfilter)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.yfilter)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-logon")
    {
        if(account_logon == nullptr)
        {
            account_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon>();
        }
        return account_logon;
    }

    if(child_yang_name == "account-logoff")
    {
        if(account_logoff == nullptr)
        {
            account_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff>();
        }
        return account_logoff;
    }

    if(child_yang_name == "account-update")
    {
        if(account_update == nullptr)
        {
            account_update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate>();
        }
        return account_update;
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect == nullptr)
        {
            session_disconnect = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect>();
        }
        return session_disconnect;
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon == nullptr)
        {
            single_service_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon>();
        }
        return single_service_logon;
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff == nullptr)
        {
            single_service_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff>();
        }
        return single_service_logoff;
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify == nullptr)
        {
            single_service_modify = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify>();
        }
        return single_service_modify;
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi == nullptr)
        {
            service_multi = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti>();
        }
        return service_multi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(account_logon != nullptr)
    {
        _children["account-logon"] = account_logon;
    }

    if(account_logoff != nullptr)
    {
        _children["account-logoff"] = account_logoff;
    }

    if(account_update != nullptr)
    {
        _children["account-update"] = account_update;
    }

    if(session_disconnect != nullptr)
    {
        _children["session-disconnect"] = session_disconnect;
    }

    if(single_service_logon != nullptr)
    {
        _children["single-service-logon"] = single_service_logon;
    }

    if(single_service_logoff != nullptr)
    {
        _children["single-service-logoff"] = single_service_logoff;
    }

    if(single_service_modify != nullptr)
    {
        _children["single-service-modify"] = single_service_modify;
    }

    if(service_multi != nullptr)
    {
        _children["service-multi"] = service_multi;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
        unknown_account_cmd_resps.value_namespace = name_space;
        unknown_account_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
        unknown_service_cmd_resps.value_namespace = name_space;
        unknown_service_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
        unknown_cmd_resps.value_namespace = name_space;
        unknown_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
        attr_list_retrieve_failure_resps.value_namespace = name_space;
        attr_list_retrieve_failure_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
        resp_send_failure.value_namespace = name_space;
        resp_send_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
        internal_err_resps.value_namespace = name_space;
        internal_err_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
        service_profile_push_failure_resps.value_namespace = name_space;
        service_profile_push_failure_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
        no_cmd_resps.value_namespace = name_space;
        no_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
        no_session_found_resps.value_namespace = name_space;
        no_session_found_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
        no_session_peer_resps.value_namespace = name_space;
        no_session_peer_resps.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps.yfilter = yfilter;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure.yfilter = yfilter;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps.yfilter = yfilter;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps.yfilter = yfilter;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps.yfilter = yfilter;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-logon" || name == "account-logoff" || name == "account-update" || name == "session-disconnect" || name == "single-service-logon" || name == "single-service-logoff" || name == "single-service-modify" || name == "service-multi" || name == "unknown-account-cmd-resps" || name == "unknown-service-cmd-resps" || name == "unknown-cmd-resps" || name == "attr-list-retrieve-failure-resps" || name == "resp-send-failure" || name == "internal-err-resps" || name == "service-profile-push-failure-resps" || name == "no-cmd-resps" || name == "no-session-found-resps" || name == "no-session-peer-resps")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::AccountLogon()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-logon"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::AccountLogoff()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-logoff"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountLogoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::AccountUpdate()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-update"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::AccountUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::SessionDisconnect()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "session-disconnect"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SessionDisconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::SingleServiceLogon()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-logon"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::SingleServiceLogoff()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-logoff"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceLogoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::SingleServiceModify()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-modify"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::SingleServiceModify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::ServiceMulti()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "service-multi"; yang_parent_name = "change-of-authorization-statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::ChangeOfAuthorizationStatistics::ServiceMulti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::MobilityStatistics()
    :
    send_request_successes{YType::uint64, "send-request-successes"},
    send_request_failures{YType::uint64, "send-request-failures"},
    receive_response_successes{YType::uint64, "receive-response-successes"},
    receive_response_failures{YType::uint64, "receive-response-failures"}
{

    yang_name = "mobility-statistics"; yang_parent_name = "aggregate-accounting-stats-all"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::~MobilityStatistics()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::has_data() const
{
    if (is_presence_container) return true;
    return send_request_successes.is_set
	|| send_request_failures.is_set
	|| receive_response_successes.is_set
	|| receive_response_failures.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_request_successes.yfilter)
	|| ydk::is_set(send_request_failures.yfilter)
	|| ydk::is_set(receive_response_successes.yfilter)
	|| ydk::is_set(receive_response_failures.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility-statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_request_successes.is_set || is_set(send_request_successes.yfilter)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.yfilter)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.yfilter)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (receive_response_failures.is_set || is_set(receive_response_failures.yfilter)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
        send_request_successes.value_namespace = name_space;
        send_request_successes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
        send_request_failures.value_namespace = name_space;
        send_request_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
        receive_response_successes.value_namespace = name_space;
        receive_response_successes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
        receive_response_failures.value_namespace = name_space;
        receive_response_failures.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-request-successes")
    {
        send_request_successes.yfilter = yfilter;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures.yfilter = yfilter;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes.yfilter = yfilter;
    }
    if(value_path == "receive-response-failures")
    {
        receive_response_failures.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateAccountingStatsAll::MobilityStatistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-request-successes" || name == "send-request-failures" || name == "receive-response-successes" || name == "receive-response-failures")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Accounting()
    :
    active_sessions{YType::uint32, "active-sessions"},
    started_sessions{YType::uint64, "started-sessions"},
    stopped_sessions{YType::uint64, "stopped-sessions"},
    policy_plane_errored_requests{YType::uint64, "policy-plane-errored-requests"},
    policy_plane_unknown_requests{YType::uint64, "policy-plane-unknown-requests"}
        ,
    start(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start>())
    , stop(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop>())
    , interim(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim>())
    , pass_through(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough>())
    , update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update>())
    , interim_inflight(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight>())
{
    start->parent = this;
    stop->parent = this;
    interim->parent = this;
    pass_through->parent = this;
    update->parent = this;
    interim_inflight->parent = this;

    yang_name = "accounting"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::~Accounting()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return active_sessions.is_set
	|| started_sessions.is_set
	|| stopped_sessions.is_set
	|| policy_plane_errored_requests.is_set
	|| policy_plane_unknown_requests.is_set
	|| (start !=  nullptr && start->has_data())
	|| (stop !=  nullptr && stop->has_data())
	|| (interim !=  nullptr && interim->has_data())
	|| (pass_through !=  nullptr && pass_through->has_data())
	|| (update !=  nullptr && update->has_data())
	|| (interim_inflight !=  nullptr && interim_inflight->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_sessions.yfilter)
	|| ydk::is_set(started_sessions.yfilter)
	|| ydk::is_set(stopped_sessions.yfilter)
	|| ydk::is_set(policy_plane_errored_requests.yfilter)
	|| ydk::is_set(policy_plane_unknown_requests.yfilter)
	|| (start !=  nullptr && start->has_operation())
	|| (stop !=  nullptr && stop->has_operation())
	|| (interim !=  nullptr && interim->has_operation())
	|| (pass_through !=  nullptr && pass_through->has_operation())
	|| (update !=  nullptr && update->has_operation())
	|| (interim_inflight !=  nullptr && interim_inflight->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_sessions.is_set || is_set(active_sessions.yfilter)) leaf_name_data.push_back(active_sessions.get_name_leafdata());
    if (started_sessions.is_set || is_set(started_sessions.yfilter)) leaf_name_data.push_back(started_sessions.get_name_leafdata());
    if (stopped_sessions.is_set || is_set(stopped_sessions.yfilter)) leaf_name_data.push_back(stopped_sessions.get_name_leafdata());
    if (policy_plane_errored_requests.is_set || is_set(policy_plane_errored_requests.yfilter)) leaf_name_data.push_back(policy_plane_errored_requests.get_name_leafdata());
    if (policy_plane_unknown_requests.is_set || is_set(policy_plane_unknown_requests.yfilter)) leaf_name_data.push_back(policy_plane_unknown_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "interim")
    {
        if(interim == nullptr)
        {
            interim = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim>();
        }
        return interim;
    }

    if(child_yang_name == "pass-through")
    {
        if(pass_through == nullptr)
        {
            pass_through = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough>();
        }
        return pass_through;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update>();
        }
        return update;
    }

    if(child_yang_name == "interim-inflight")
    {
        if(interim_inflight == nullptr)
        {
            interim_inflight = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight>();
        }
        return interim_inflight;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(start != nullptr)
    {
        _children["start"] = start;
    }

    if(stop != nullptr)
    {
        _children["stop"] = stop;
    }

    if(interim != nullptr)
    {
        _children["interim"] = interim;
    }

    if(pass_through != nullptr)
    {
        _children["pass-through"] = pass_through;
    }

    if(update != nullptr)
    {
        _children["update"] = update;
    }

    if(interim_inflight != nullptr)
    {
        _children["interim-inflight"] = interim_inflight;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-sessions")
    {
        active_sessions = value;
        active_sessions.value_namespace = name_space;
        active_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "started-sessions")
    {
        started_sessions = value;
        started_sessions.value_namespace = name_space;
        started_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions = value;
        stopped_sessions.value_namespace = name_space;
        stopped_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests = value;
        policy_plane_errored_requests.value_namespace = name_space;
        policy_plane_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests = value;
        policy_plane_unknown_requests.value_namespace = name_space;
        policy_plane_unknown_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-sessions")
    {
        active_sessions.yfilter = yfilter;
    }
    if(value_path == "started-sessions")
    {
        started_sessions.yfilter = yfilter;
    }
    if(value_path == "stopped-sessions")
    {
        stopped_sessions.yfilter = yfilter;
    }
    if(value_path == "policy-plane-errored-requests")
    {
        policy_plane_errored_requests.yfilter = yfilter;
    }
    if(value_path == "policy-plane-unknown-requests")
    {
        policy_plane_unknown_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "start" || name == "stop" || name == "interim" || name == "pass-through" || name == "update" || name == "interim-inflight" || name == "active-sessions" || name == "started-sessions" || name == "stopped-sessions" || name == "policy-plane-errored-requests" || name == "policy-plane-unknown-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::Start()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "start"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::~Start()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Start::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::Stop()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "stop"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::~Stop()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Stop::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::Interim()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "interim"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::~Interim()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Interim::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::PassThrough()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "pass-through"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::~PassThrough()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pass-through";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::PassThrough::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::Update()
    :
    received_requests{YType::uint64, "received-requests"},
    errored_requests{YType::uint64, "errored-requests"},
    aaa_errored_requests{YType::uint64, "aaa-errored-requests"},
    aaa_sent_requests{YType::uint64, "aaa-sent-requests"},
    aaa_succeeded_responses{YType::uint64, "aaa-succeeded-responses"},
    aaa_failed_responses{YType::uint64, "aaa-failed-responses"}
{

    yang_name = "update"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::~Update()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| errored_requests.is_set
	|| aaa_errored_requests.is_set
	|| aaa_sent_requests.is_set
	|| aaa_succeeded_responses.is_set
	|| aaa_failed_responses.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(errored_requests.yfilter)
	|| ydk::is_set(aaa_errored_requests.yfilter)
	|| ydk::is_set(aaa_sent_requests.yfilter)
	|| ydk::is_set(aaa_succeeded_responses.yfilter)
	|| ydk::is_set(aaa_failed_responses.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (errored_requests.is_set || is_set(errored_requests.yfilter)) leaf_name_data.push_back(errored_requests.get_name_leafdata());
    if (aaa_errored_requests.is_set || is_set(aaa_errored_requests.yfilter)) leaf_name_data.push_back(aaa_errored_requests.get_name_leafdata());
    if (aaa_sent_requests.is_set || is_set(aaa_sent_requests.yfilter)) leaf_name_data.push_back(aaa_sent_requests.get_name_leafdata());
    if (aaa_succeeded_responses.is_set || is_set(aaa_succeeded_responses.yfilter)) leaf_name_data.push_back(aaa_succeeded_responses.get_name_leafdata());
    if (aaa_failed_responses.is_set || is_set(aaa_failed_responses.yfilter)) leaf_name_data.push_back(aaa_failed_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "errored-requests")
    {
        errored_requests = value;
        errored_requests.value_namespace = name_space;
        errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests = value;
        aaa_errored_requests.value_namespace = name_space;
        aaa_errored_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests = value;
        aaa_sent_requests.value_namespace = name_space;
        aaa_sent_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses = value;
        aaa_succeeded_responses.value_namespace = name_space;
        aaa_succeeded_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses = value;
        aaa_failed_responses.value_namespace = name_space;
        aaa_failed_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "errored-requests")
    {
        errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-errored-requests")
    {
        aaa_errored_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-sent-requests")
    {
        aaa_sent_requests.yfilter = yfilter;
    }
    if(value_path == "aaa-succeeded-responses")
    {
        aaa_succeeded_responses.yfilter = yfilter;
    }
    if(value_path == "aaa-failed-responses")
    {
        aaa_failed_responses.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::Update::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "errored-requests" || name == "aaa-errored-requests" || name == "aaa-sent-requests" || name == "aaa-succeeded-responses" || name == "aaa-failed-responses")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::InterimInflight()
    :
    quota_exhausts{YType::uint32, "quota-exhausts"},
    denied_requests{YType::uint32, "denied-requests"},
    accepted_requests{YType::uint32, "accepted-requests"},
    total_quota_of_requests{YType::uint32, "total-quota-of-requests"},
    remaining_quota_of_requests{YType::uint32, "remaining-quota-of-requests"},
    low_water_mark_quota_of_requests{YType::uint32, "low-water-mark-quota-of-requests"}
{

    yang_name = "interim-inflight"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::~InterimInflight()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::has_data() const
{
    if (is_presence_container) return true;
    return quota_exhausts.is_set
	|| denied_requests.is_set
	|| accepted_requests.is_set
	|| total_quota_of_requests.is_set
	|| remaining_quota_of_requests.is_set
	|| low_water_mark_quota_of_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(quota_exhausts.yfilter)
	|| ydk::is_set(denied_requests.yfilter)
	|| ydk::is_set(accepted_requests.yfilter)
	|| ydk::is_set(total_quota_of_requests.yfilter)
	|| ydk::is_set(remaining_quota_of_requests.yfilter)
	|| ydk::is_set(low_water_mark_quota_of_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interim-inflight";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (quota_exhausts.is_set || is_set(quota_exhausts.yfilter)) leaf_name_data.push_back(quota_exhausts.get_name_leafdata());
    if (denied_requests.is_set || is_set(denied_requests.yfilter)) leaf_name_data.push_back(denied_requests.get_name_leafdata());
    if (accepted_requests.is_set || is_set(accepted_requests.yfilter)) leaf_name_data.push_back(accepted_requests.get_name_leafdata());
    if (total_quota_of_requests.is_set || is_set(total_quota_of_requests.yfilter)) leaf_name_data.push_back(total_quota_of_requests.get_name_leafdata());
    if (remaining_quota_of_requests.is_set || is_set(remaining_quota_of_requests.yfilter)) leaf_name_data.push_back(remaining_quota_of_requests.get_name_leafdata());
    if (low_water_mark_quota_of_requests.is_set || is_set(low_water_mark_quota_of_requests.yfilter)) leaf_name_data.push_back(low_water_mark_quota_of_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "quota-exhausts")
    {
        quota_exhausts = value;
        quota_exhausts.value_namespace = name_space;
        quota_exhausts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "denied-requests")
    {
        denied_requests = value;
        denied_requests.value_namespace = name_space;
        denied_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests = value;
        accepted_requests.value_namespace = name_space;
        accepted_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests = value;
        total_quota_of_requests.value_namespace = name_space;
        total_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests = value;
        remaining_quota_of_requests.value_namespace = name_space;
        remaining_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests = value;
        low_water_mark_quota_of_requests.value_namespace = name_space;
        low_water_mark_quota_of_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "quota-exhausts")
    {
        quota_exhausts.yfilter = yfilter;
    }
    if(value_path == "denied-requests")
    {
        denied_requests.yfilter = yfilter;
    }
    if(value_path == "accepted-requests")
    {
        accepted_requests.yfilter = yfilter;
    }
    if(value_path == "total-quota-of-requests")
    {
        total_quota_of_requests.yfilter = yfilter;
    }
    if(value_path == "remaining-quota-of-requests")
    {
        remaining_quota_of_requests.yfilter = yfilter;
    }
    if(value_path == "low-water-mark-quota-of-requests")
    {
        low_water_mark_quota_of_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Accounting::InterimInflight::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "quota-exhausts" || name == "denied-requests" || name == "accepted-requests" || name == "total-quota-of-requests" || name == "remaining-quota-of-requests" || name == "low-water-mark-quota-of-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::Mobility()
    :
    send_request_successes{YType::uint64, "send-request-successes"},
    send_request_failures{YType::uint64, "send-request-failures"},
    receive_response_successes{YType::uint64, "receive-response-successes"},
    receive_response_failures{YType::uint64, "receive-response-failures"}
{

    yang_name = "mobility"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::~Mobility()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::has_data() const
{
    if (is_presence_container) return true;
    return send_request_successes.is_set
	|| send_request_failures.is_set
	|| receive_response_successes.is_set
	|| receive_response_failures.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(send_request_successes.yfilter)
	|| ydk::is_set(send_request_failures.yfilter)
	|| ydk::is_set(receive_response_successes.yfilter)
	|| ydk::is_set(receive_response_failures.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (send_request_successes.is_set || is_set(send_request_successes.yfilter)) leaf_name_data.push_back(send_request_successes.get_name_leafdata());
    if (send_request_failures.is_set || is_set(send_request_failures.yfilter)) leaf_name_data.push_back(send_request_failures.get_name_leafdata());
    if (receive_response_successes.is_set || is_set(receive_response_successes.yfilter)) leaf_name_data.push_back(receive_response_successes.get_name_leafdata());
    if (receive_response_failures.is_set || is_set(receive_response_failures.yfilter)) leaf_name_data.push_back(receive_response_failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "send-request-successes")
    {
        send_request_successes = value;
        send_request_successes.value_namespace = name_space;
        send_request_successes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures = value;
        send_request_failures.value_namespace = name_space;
        send_request_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes = value;
        receive_response_successes.value_namespace = name_space;
        receive_response_successes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-response-failures")
    {
        receive_response_failures = value;
        receive_response_failures.value_namespace = name_space;
        receive_response_failures.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "send-request-successes")
    {
        send_request_successes.yfilter = yfilter;
    }
    if(value_path == "send-request-failures")
    {
        send_request_failures.yfilter = yfilter;
    }
    if(value_path == "receive-response-successes")
    {
        receive_response_successes.yfilter = yfilter;
    }
    if(value_path == "receive-response-failures")
    {
        receive_response_failures.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::Mobility::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "send-request-successes" || name == "send-request-failures" || name == "receive-response-successes" || name == "receive-response-failures")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AggregateChangeOfAuthorization()
    :
    unknown_account_cmd_resps{YType::uint64, "unknown-account-cmd-resps"},
    unknown_service_cmd_resps{YType::uint64, "unknown-service-cmd-resps"},
    unknown_cmd_resps{YType::uint64, "unknown-cmd-resps"},
    attr_list_retrieve_failure_resps{YType::uint64, "attr-list-retrieve-failure-resps"},
    resp_send_failure{YType::uint64, "resp-send-failure"},
    internal_err_resps{YType::uint64, "internal-err-resps"},
    service_profile_push_failure_resps{YType::uint64, "service-profile-push-failure-resps"},
    no_cmd_resps{YType::uint64, "no-cmd-resps"},
    no_session_found_resps{YType::uint64, "no-session-found-resps"},
    no_session_peer_resps{YType::uint64, "no-session-peer-resps"}
        ,
    account_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon>())
    , account_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff>())
    , account_update(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate>())
    , session_disconnect(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect>())
    , single_service_logon(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon>())
    , single_service_logoff(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff>())
    , single_service_modify(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify>())
    , service_multi(std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti>())
{
    account_logon->parent = this;
    account_logoff->parent = this;
    account_update->parent = this;
    session_disconnect->parent = this;
    single_service_logon->parent = this;
    single_service_logoff->parent = this;
    single_service_modify->parent = this;
    service_multi->parent = this;

    yang_name = "aggregate-change-of-authorization"; yang_parent_name = "aaa"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::~AggregateChangeOfAuthorization()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::has_data() const
{
    if (is_presence_container) return true;
    return unknown_account_cmd_resps.is_set
	|| unknown_service_cmd_resps.is_set
	|| unknown_cmd_resps.is_set
	|| attr_list_retrieve_failure_resps.is_set
	|| resp_send_failure.is_set
	|| internal_err_resps.is_set
	|| service_profile_push_failure_resps.is_set
	|| no_cmd_resps.is_set
	|| no_session_found_resps.is_set
	|| no_session_peer_resps.is_set
	|| (account_logon !=  nullptr && account_logon->has_data())
	|| (account_logoff !=  nullptr && account_logoff->has_data())
	|| (account_update !=  nullptr && account_update->has_data())
	|| (session_disconnect !=  nullptr && session_disconnect->has_data())
	|| (single_service_logon !=  nullptr && single_service_logon->has_data())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_data())
	|| (single_service_modify !=  nullptr && single_service_modify->has_data())
	|| (service_multi !=  nullptr && service_multi->has_data());
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_account_cmd_resps.yfilter)
	|| ydk::is_set(unknown_service_cmd_resps.yfilter)
	|| ydk::is_set(unknown_cmd_resps.yfilter)
	|| ydk::is_set(attr_list_retrieve_failure_resps.yfilter)
	|| ydk::is_set(resp_send_failure.yfilter)
	|| ydk::is_set(internal_err_resps.yfilter)
	|| ydk::is_set(service_profile_push_failure_resps.yfilter)
	|| ydk::is_set(no_cmd_resps.yfilter)
	|| ydk::is_set(no_session_found_resps.yfilter)
	|| ydk::is_set(no_session_peer_resps.yfilter)
	|| (account_logon !=  nullptr && account_logon->has_operation())
	|| (account_logoff !=  nullptr && account_logoff->has_operation())
	|| (account_update !=  nullptr && account_update->has_operation())
	|| (session_disconnect !=  nullptr && session_disconnect->has_operation())
	|| (single_service_logon !=  nullptr && single_service_logon->has_operation())
	|| (single_service_logoff !=  nullptr && single_service_logoff->has_operation())
	|| (single_service_modify !=  nullptr && single_service_modify->has_operation())
	|| (service_multi !=  nullptr && service_multi->has_operation());
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-change-of-authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_account_cmd_resps.is_set || is_set(unknown_account_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_account_cmd_resps.get_name_leafdata());
    if (unknown_service_cmd_resps.is_set || is_set(unknown_service_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_service_cmd_resps.get_name_leafdata());
    if (unknown_cmd_resps.is_set || is_set(unknown_cmd_resps.yfilter)) leaf_name_data.push_back(unknown_cmd_resps.get_name_leafdata());
    if (attr_list_retrieve_failure_resps.is_set || is_set(attr_list_retrieve_failure_resps.yfilter)) leaf_name_data.push_back(attr_list_retrieve_failure_resps.get_name_leafdata());
    if (resp_send_failure.is_set || is_set(resp_send_failure.yfilter)) leaf_name_data.push_back(resp_send_failure.get_name_leafdata());
    if (internal_err_resps.is_set || is_set(internal_err_resps.yfilter)) leaf_name_data.push_back(internal_err_resps.get_name_leafdata());
    if (service_profile_push_failure_resps.is_set || is_set(service_profile_push_failure_resps.yfilter)) leaf_name_data.push_back(service_profile_push_failure_resps.get_name_leafdata());
    if (no_cmd_resps.is_set || is_set(no_cmd_resps.yfilter)) leaf_name_data.push_back(no_cmd_resps.get_name_leafdata());
    if (no_session_found_resps.is_set || is_set(no_session_found_resps.yfilter)) leaf_name_data.push_back(no_session_found_resps.get_name_leafdata());
    if (no_session_peer_resps.is_set || is_set(no_session_peer_resps.yfilter)) leaf_name_data.push_back(no_session_peer_resps.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "account-logon")
    {
        if(account_logon == nullptr)
        {
            account_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon>();
        }
        return account_logon;
    }

    if(child_yang_name == "account-logoff")
    {
        if(account_logoff == nullptr)
        {
            account_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff>();
        }
        return account_logoff;
    }

    if(child_yang_name == "account-update")
    {
        if(account_update == nullptr)
        {
            account_update = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate>();
        }
        return account_update;
    }

    if(child_yang_name == "session-disconnect")
    {
        if(session_disconnect == nullptr)
        {
            session_disconnect = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect>();
        }
        return session_disconnect;
    }

    if(child_yang_name == "single-service-logon")
    {
        if(single_service_logon == nullptr)
        {
            single_service_logon = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon>();
        }
        return single_service_logon;
    }

    if(child_yang_name == "single-service-logoff")
    {
        if(single_service_logoff == nullptr)
        {
            single_service_logoff = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff>();
        }
        return single_service_logoff;
    }

    if(child_yang_name == "single-service-modify")
    {
        if(single_service_modify == nullptr)
        {
            single_service_modify = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify>();
        }
        return single_service_modify;
    }

    if(child_yang_name == "service-multi")
    {
        if(service_multi == nullptr)
        {
            service_multi = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti>();
        }
        return service_multi;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(account_logon != nullptr)
    {
        _children["account-logon"] = account_logon;
    }

    if(account_logoff != nullptr)
    {
        _children["account-logoff"] = account_logoff;
    }

    if(account_update != nullptr)
    {
        _children["account-update"] = account_update;
    }

    if(session_disconnect != nullptr)
    {
        _children["session-disconnect"] = session_disconnect;
    }

    if(single_service_logon != nullptr)
    {
        _children["single-service-logon"] = single_service_logon;
    }

    if(single_service_logoff != nullptr)
    {
        _children["single-service-logoff"] = single_service_logoff;
    }

    if(single_service_modify != nullptr)
    {
        _children["single-service-modify"] = single_service_modify;
    }

    if(service_multi != nullptr)
    {
        _children["service-multi"] = service_multi;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps = value;
        unknown_account_cmd_resps.value_namespace = name_space;
        unknown_account_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps = value;
        unknown_service_cmd_resps.value_namespace = name_space;
        unknown_service_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps = value;
        unknown_cmd_resps.value_namespace = name_space;
        unknown_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps = value;
        attr_list_retrieve_failure_resps.value_namespace = name_space;
        attr_list_retrieve_failure_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure = value;
        resp_send_failure.value_namespace = name_space;
        resp_send_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps = value;
        internal_err_resps.value_namespace = name_space;
        internal_err_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps = value;
        service_profile_push_failure_resps.value_namespace = name_space;
        service_profile_push_failure_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps = value;
        no_cmd_resps.value_namespace = name_space;
        no_cmd_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps = value;
        no_session_found_resps.value_namespace = name_space;
        no_session_found_resps.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps = value;
        no_session_peer_resps.value_namespace = name_space;
        no_session_peer_resps.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-account-cmd-resps")
    {
        unknown_account_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "unknown-service-cmd-resps")
    {
        unknown_service_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "unknown-cmd-resps")
    {
        unknown_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "attr-list-retrieve-failure-resps")
    {
        attr_list_retrieve_failure_resps.yfilter = yfilter;
    }
    if(value_path == "resp-send-failure")
    {
        resp_send_failure.yfilter = yfilter;
    }
    if(value_path == "internal-err-resps")
    {
        internal_err_resps.yfilter = yfilter;
    }
    if(value_path == "service-profile-push-failure-resps")
    {
        service_profile_push_failure_resps.yfilter = yfilter;
    }
    if(value_path == "no-cmd-resps")
    {
        no_cmd_resps.yfilter = yfilter;
    }
    if(value_path == "no-session-found-resps")
    {
        no_session_found_resps.yfilter = yfilter;
    }
    if(value_path == "no-session-peer-resps")
    {
        no_session_peer_resps.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "account-logon" || name == "account-logoff" || name == "account-update" || name == "session-disconnect" || name == "single-service-logon" || name == "single-service-logoff" || name == "single-service-modify" || name == "service-multi" || name == "unknown-account-cmd-resps" || name == "unknown-service-cmd-resps" || name == "unknown-cmd-resps" || name == "attr-list-retrieve-failure-resps" || name == "resp-send-failure" || name == "internal-err-resps" || name == "service-profile-push-failure-resps" || name == "no-cmd-resps" || name == "no-session-found-resps" || name == "no-session-peer-resps")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::AccountLogon()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-logon"; yang_parent_name = "aggregate-change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::~AccountLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::AccountLogoff()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-logoff"; yang_parent_name = "aggregate-change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::~AccountLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-logoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountLogoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::AccountUpdate()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "account-update"; yang_parent_name = "aggregate-change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::~AccountUpdate()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "account-update";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::AccountUpdate::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::SessionDisconnect()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "session-disconnect"; yang_parent_name = "aggregate-change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::~SessionDisconnect()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-disconnect";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SessionDisconnect::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::SingleServiceLogon()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-logon"; yang_parent_name = "aggregate-change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::~SingleServiceLogon()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logon";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogon::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::SingleServiceLogoff()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-logoff"; yang_parent_name = "aggregate-change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::~SingleServiceLogoff()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-logoff";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceLogoff::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::SingleServiceModify()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "single-service-modify"; yang_parent_name = "aggregate-change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::~SingleServiceModify()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "single-service-modify";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::SingleServiceModify::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::ServiceMulti()
    :
    received_requests{YType::uint64, "received-requests"},
    acknowledged_requests{YType::uint64, "acknowledged-requests"},
    non_acknowledged_requests{YType::uint64, "non-acknowledged-requests"}
{

    yang_name = "service-multi"; yang_parent_name = "aggregate-change-of-authorization"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::~ServiceMulti()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::has_data() const
{
    if (is_presence_container) return true;
    return received_requests.is_set
	|| acknowledged_requests.is_set
	|| non_acknowledged_requests.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(received_requests.yfilter)
	|| ydk::is_set(acknowledged_requests.yfilter)
	|| ydk::is_set(non_acknowledged_requests.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-multi";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (received_requests.is_set || is_set(received_requests.yfilter)) leaf_name_data.push_back(received_requests.get_name_leafdata());
    if (acknowledged_requests.is_set || is_set(acknowledged_requests.yfilter)) leaf_name_data.push_back(acknowledged_requests.get_name_leafdata());
    if (non_acknowledged_requests.is_set || is_set(non_acknowledged_requests.yfilter)) leaf_name_data.push_back(non_acknowledged_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "received-requests")
    {
        received_requests = value;
        received_requests.value_namespace = name_space;
        received_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests = value;
        acknowledged_requests.value_namespace = name_space;
        acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests = value;
        non_acknowledged_requests.value_namespace = name_space;
        non_acknowledged_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "received-requests")
    {
        received_requests.yfilter = yfilter;
    }
    if(value_path == "acknowledged-requests")
    {
        acknowledged_requests.yfilter = yfilter;
    }
    if(value_path == "non-acknowledged-requests")
    {
        non_acknowledged_requests.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Aaa::AggregateChangeOfAuthorization::ServiceMulti::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "received-requests" || name == "acknowledged-requests" || name == "non-acknowledged-requests")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::AggregateSummary()
    :
    no_subscriber_control_policy_on_interface{YType::uint64, "no-subscriber-control-policy-on-interface"},
    no_class_match_in_start_request{YType::uint64, "no-class-match-in-start-request"},
    nas_port_attribute_format_warnings{YType::uint64, "nas-port-attribute-format-warnings"},
    nas_port_id_attribute_format_warnings{YType::uint64, "nas-port-id-attribute-format-warnings"},
    destination_station_id_attribute_format_warnings{YType::uint64, "destination-station-id-attribute-format-warnings"},
    calling_station_id_attribute_format_warnings{YType::uint64, "calling-station-id-attribute-format-warnings"},
    username_attribute_format_warnings{YType::uint64, "username-attribute-format-warnings"},
    install_user_profiles{YType::uint64, "install-user-profiles"},
    user_profile_install_errors{YType::uint64, "user-profile-install-errors"},
    user_profile_removals{YType::uint64, "user-profile-removals"},
    user_profile_errors{YType::uint64, "user-profile-errors"},
    sess_disc_quota_exhausts{YType::uint64, "sess-disc-quota-exhausts"},
    sess_disc_no_quota{YType::uint64, "sess-disc-no-quota"},
    sess_disc_quota_avail{YType::uint64, "sess-disc-quota-avail"},
    sess_disc_recon_ip{YType::uint64, "sess-disc-recon-ip"},
    sess_disc_none_started{YType::uint64, "sess-disc-none-started"},
    sess_disc_quota{YType::uint32, "sess-disc-quota"},
    sess_disc_quota_remaining{YType::uint32, "sess-disc-quota-remaining"},
    sess_disc_q_count{YType::uint32, "sess-disc-q-count"}
{

    yang_name = "aggregate-summary"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::~AggregateSummary()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::has_data() const
{
    if (is_presence_container) return true;
    return no_subscriber_control_policy_on_interface.is_set
	|| no_class_match_in_start_request.is_set
	|| nas_port_attribute_format_warnings.is_set
	|| nas_port_id_attribute_format_warnings.is_set
	|| destination_station_id_attribute_format_warnings.is_set
	|| calling_station_id_attribute_format_warnings.is_set
	|| username_attribute_format_warnings.is_set
	|| install_user_profiles.is_set
	|| user_profile_install_errors.is_set
	|| user_profile_removals.is_set
	|| user_profile_errors.is_set
	|| sess_disc_quota_exhausts.is_set
	|| sess_disc_no_quota.is_set
	|| sess_disc_quota_avail.is_set
	|| sess_disc_recon_ip.is_set
	|| sess_disc_none_started.is_set
	|| sess_disc_quota.is_set
	|| sess_disc_quota_remaining.is_set
	|| sess_disc_q_count.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(no_subscriber_control_policy_on_interface.yfilter)
	|| ydk::is_set(no_class_match_in_start_request.yfilter)
	|| ydk::is_set(nas_port_attribute_format_warnings.yfilter)
	|| ydk::is_set(nas_port_id_attribute_format_warnings.yfilter)
	|| ydk::is_set(destination_station_id_attribute_format_warnings.yfilter)
	|| ydk::is_set(calling_station_id_attribute_format_warnings.yfilter)
	|| ydk::is_set(username_attribute_format_warnings.yfilter)
	|| ydk::is_set(install_user_profiles.yfilter)
	|| ydk::is_set(user_profile_install_errors.yfilter)
	|| ydk::is_set(user_profile_removals.yfilter)
	|| ydk::is_set(user_profile_errors.yfilter)
	|| ydk::is_set(sess_disc_quota_exhausts.yfilter)
	|| ydk::is_set(sess_disc_no_quota.yfilter)
	|| ydk::is_set(sess_disc_quota_avail.yfilter)
	|| ydk::is_set(sess_disc_recon_ip.yfilter)
	|| ydk::is_set(sess_disc_none_started.yfilter)
	|| ydk::is_set(sess_disc_quota.yfilter)
	|| ydk::is_set(sess_disc_quota_remaining.yfilter)
	|| ydk::is_set(sess_disc_q_count.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aggregate-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_subscriber_control_policy_on_interface.is_set || is_set(no_subscriber_control_policy_on_interface.yfilter)) leaf_name_data.push_back(no_subscriber_control_policy_on_interface.get_name_leafdata());
    if (no_class_match_in_start_request.is_set || is_set(no_class_match_in_start_request.yfilter)) leaf_name_data.push_back(no_class_match_in_start_request.get_name_leafdata());
    if (nas_port_attribute_format_warnings.is_set || is_set(nas_port_attribute_format_warnings.yfilter)) leaf_name_data.push_back(nas_port_attribute_format_warnings.get_name_leafdata());
    if (nas_port_id_attribute_format_warnings.is_set || is_set(nas_port_id_attribute_format_warnings.yfilter)) leaf_name_data.push_back(nas_port_id_attribute_format_warnings.get_name_leafdata());
    if (destination_station_id_attribute_format_warnings.is_set || is_set(destination_station_id_attribute_format_warnings.yfilter)) leaf_name_data.push_back(destination_station_id_attribute_format_warnings.get_name_leafdata());
    if (calling_station_id_attribute_format_warnings.is_set || is_set(calling_station_id_attribute_format_warnings.yfilter)) leaf_name_data.push_back(calling_station_id_attribute_format_warnings.get_name_leafdata());
    if (username_attribute_format_warnings.is_set || is_set(username_attribute_format_warnings.yfilter)) leaf_name_data.push_back(username_attribute_format_warnings.get_name_leafdata());
    if (install_user_profiles.is_set || is_set(install_user_profiles.yfilter)) leaf_name_data.push_back(install_user_profiles.get_name_leafdata());
    if (user_profile_install_errors.is_set || is_set(user_profile_install_errors.yfilter)) leaf_name_data.push_back(user_profile_install_errors.get_name_leafdata());
    if (user_profile_removals.is_set || is_set(user_profile_removals.yfilter)) leaf_name_data.push_back(user_profile_removals.get_name_leafdata());
    if (user_profile_errors.is_set || is_set(user_profile_errors.yfilter)) leaf_name_data.push_back(user_profile_errors.get_name_leafdata());
    if (sess_disc_quota_exhausts.is_set || is_set(sess_disc_quota_exhausts.yfilter)) leaf_name_data.push_back(sess_disc_quota_exhausts.get_name_leafdata());
    if (sess_disc_no_quota.is_set || is_set(sess_disc_no_quota.yfilter)) leaf_name_data.push_back(sess_disc_no_quota.get_name_leafdata());
    if (sess_disc_quota_avail.is_set || is_set(sess_disc_quota_avail.yfilter)) leaf_name_data.push_back(sess_disc_quota_avail.get_name_leafdata());
    if (sess_disc_recon_ip.is_set || is_set(sess_disc_recon_ip.yfilter)) leaf_name_data.push_back(sess_disc_recon_ip.get_name_leafdata());
    if (sess_disc_none_started.is_set || is_set(sess_disc_none_started.yfilter)) leaf_name_data.push_back(sess_disc_none_started.get_name_leafdata());
    if (sess_disc_quota.is_set || is_set(sess_disc_quota.yfilter)) leaf_name_data.push_back(sess_disc_quota.get_name_leafdata());
    if (sess_disc_quota_remaining.is_set || is_set(sess_disc_quota_remaining.yfilter)) leaf_name_data.push_back(sess_disc_quota_remaining.get_name_leafdata());
    if (sess_disc_q_count.is_set || is_set(sess_disc_q_count.yfilter)) leaf_name_data.push_back(sess_disc_q_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "no-subscriber-control-policy-on-interface")
    {
        no_subscriber_control_policy_on_interface = value;
        no_subscriber_control_policy_on_interface.value_namespace = name_space;
        no_subscriber_control_policy_on_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-class-match-in-start-request")
    {
        no_class_match_in_start_request = value;
        no_class_match_in_start_request.value_namespace = name_space;
        no_class_match_in_start_request.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas-port-attribute-format-warnings")
    {
        nas_port_attribute_format_warnings = value;
        nas_port_attribute_format_warnings.value_namespace = name_space;
        nas_port_attribute_format_warnings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas-port-id-attribute-format-warnings")
    {
        nas_port_id_attribute_format_warnings = value;
        nas_port_id_attribute_format_warnings.value_namespace = name_space;
        nas_port_id_attribute_format_warnings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-station-id-attribute-format-warnings")
    {
        destination_station_id_attribute_format_warnings = value;
        destination_station_id_attribute_format_warnings.value_namespace = name_space;
        destination_station_id_attribute_format_warnings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "calling-station-id-attribute-format-warnings")
    {
        calling_station_id_attribute_format_warnings = value;
        calling_station_id_attribute_format_warnings.value_namespace = name_space;
        calling_station_id_attribute_format_warnings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username-attribute-format-warnings")
    {
        username_attribute_format_warnings = value;
        username_attribute_format_warnings.value_namespace = name_space;
        username_attribute_format_warnings.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "install-user-profiles")
    {
        install_user_profiles = value;
        install_user_profiles.value_namespace = name_space;
        install_user_profiles.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-profile-install-errors")
    {
        user_profile_install_errors = value;
        user_profile_install_errors.value_namespace = name_space;
        user_profile_install_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-profile-removals")
    {
        user_profile_removals = value;
        user_profile_removals.value_namespace = name_space;
        user_profile_removals.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "user-profile-errors")
    {
        user_profile_errors = value;
        user_profile_errors.value_namespace = name_space;
        user_profile_errors.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-disc-quota-exhausts")
    {
        sess_disc_quota_exhausts = value;
        sess_disc_quota_exhausts.value_namespace = name_space;
        sess_disc_quota_exhausts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-disc-no-quota")
    {
        sess_disc_no_quota = value;
        sess_disc_no_quota.value_namespace = name_space;
        sess_disc_no_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-disc-quota-avail")
    {
        sess_disc_quota_avail = value;
        sess_disc_quota_avail.value_namespace = name_space;
        sess_disc_quota_avail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-disc-recon-ip")
    {
        sess_disc_recon_ip = value;
        sess_disc_recon_ip.value_namespace = name_space;
        sess_disc_recon_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-disc-none-started")
    {
        sess_disc_none_started = value;
        sess_disc_none_started.value_namespace = name_space;
        sess_disc_none_started.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-disc-quota")
    {
        sess_disc_quota = value;
        sess_disc_quota.value_namespace = name_space;
        sess_disc_quota.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-disc-quota-remaining")
    {
        sess_disc_quota_remaining = value;
        sess_disc_quota_remaining.value_namespace = name_space;
        sess_disc_quota_remaining.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sess-disc-q-count")
    {
        sess_disc_q_count = value;
        sess_disc_q_count.value_namespace = name_space;
        sess_disc_q_count.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "no-subscriber-control-policy-on-interface")
    {
        no_subscriber_control_policy_on_interface.yfilter = yfilter;
    }
    if(value_path == "no-class-match-in-start-request")
    {
        no_class_match_in_start_request.yfilter = yfilter;
    }
    if(value_path == "nas-port-attribute-format-warnings")
    {
        nas_port_attribute_format_warnings.yfilter = yfilter;
    }
    if(value_path == "nas-port-id-attribute-format-warnings")
    {
        nas_port_id_attribute_format_warnings.yfilter = yfilter;
    }
    if(value_path == "destination-station-id-attribute-format-warnings")
    {
        destination_station_id_attribute_format_warnings.yfilter = yfilter;
    }
    if(value_path == "calling-station-id-attribute-format-warnings")
    {
        calling_station_id_attribute_format_warnings.yfilter = yfilter;
    }
    if(value_path == "username-attribute-format-warnings")
    {
        username_attribute_format_warnings.yfilter = yfilter;
    }
    if(value_path == "install-user-profiles")
    {
        install_user_profiles.yfilter = yfilter;
    }
    if(value_path == "user-profile-install-errors")
    {
        user_profile_install_errors.yfilter = yfilter;
    }
    if(value_path == "user-profile-removals")
    {
        user_profile_removals.yfilter = yfilter;
    }
    if(value_path == "user-profile-errors")
    {
        user_profile_errors.yfilter = yfilter;
    }
    if(value_path == "sess-disc-quota-exhausts")
    {
        sess_disc_quota_exhausts.yfilter = yfilter;
    }
    if(value_path == "sess-disc-no-quota")
    {
        sess_disc_no_quota.yfilter = yfilter;
    }
    if(value_path == "sess-disc-quota-avail")
    {
        sess_disc_quota_avail.yfilter = yfilter;
    }
    if(value_path == "sess-disc-recon-ip")
    {
        sess_disc_recon_ip.yfilter = yfilter;
    }
    if(value_path == "sess-disc-none-started")
    {
        sess_disc_none_started.yfilter = yfilter;
    }
    if(value_path == "sess-disc-quota")
    {
        sess_disc_quota.yfilter = yfilter;
    }
    if(value_path == "sess-disc-quota-remaining")
    {
        sess_disc_quota_remaining.yfilter = yfilter;
    }
    if(value_path == "sess-disc-q-count")
    {
        sess_disc_q_count.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::AggregateSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "no-subscriber-control-policy-on-interface" || name == "no-class-match-in-start-request" || name == "nas-port-attribute-format-warnings" || name == "nas-port-id-attribute-format-warnings" || name == "destination-station-id-attribute-format-warnings" || name == "calling-station-id-attribute-format-warnings" || name == "username-attribute-format-warnings" || name == "install-user-profiles" || name == "user-profile-install-errors" || name == "user-profile-removals" || name == "user-profile-errors" || name == "sess-disc-quota-exhausts" || name == "sess-disc-no-quota" || name == "sess-disc-quota-avail" || name == "sess-disc-recon-ip" || name == "sess-disc-none-started" || name == "sess-disc-quota" || name == "sess-disc-quota-remaining" || name == "sess-disc-q-count")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::DisconnUnique()
    :
    history_data(this, {})
{

    yang_name = "disconn-unique"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::~DisconnUnique()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history_data.len(); index++)
    {
        if(history_data[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::has_operation() const
{
    for (std::size_t index=0; index<history_data.len(); index++)
    {
        if(history_data[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "disconn-unique";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history-data")
    {
        auto ent_ = std::make_shared<Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData>();
        ent_->parent = this;
        history_data.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : history_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-data")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::HistoryData()
    :
    disc_reason{YType::str, "disc-reason"},
    session_count{YType::uint32, "session-count"},
    latest_activity{YType::uint32, "latest-activity"},
    if_name{YType::str, "if-name"}
{

    yang_name = "history-data"; yang_parent_name = "disconn-unique"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::~HistoryData()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::has_data() const
{
    if (is_presence_container) return true;
    return disc_reason.is_set
	|| session_count.is_set
	|| latest_activity.is_set
	|| if_name.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disc_reason.yfilter)
	|| ydk::is_set(session_count.yfilter)
	|| ydk::is_set(latest_activity.yfilter)
	|| ydk::is_set(if_name.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disc_reason.is_set || is_set(disc_reason.yfilter)) leaf_name_data.push_back(disc_reason.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());
    if (latest_activity.is_set || is_set(latest_activity.yfilter)) leaf_name_data.push_back(latest_activity.get_name_leafdata());
    if (if_name.is_set || is_set(if_name.yfilter)) leaf_name_data.push_back(if_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disc-reason")
    {
        disc_reason = value;
        disc_reason.value_namespace = name_space;
        disc_reason.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "latest-activity")
    {
        latest_activity = value;
        latest_activity.value_namespace = name_space;
        latest_activity.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "if-name")
    {
        if_name = value;
        if_name.value_namespace = name_space;
        if_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disc-reason")
    {
        disc_reason.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
    if(value_path == "latest-activity")
    {
        latest_activity.yfilter = yfilter;
    }
    if(value_path == "if-name")
    {
        if_name.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::DisconnUnique::HistoryData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disc-reason" || name == "session-count" || name == "latest-activity" || name == "if-name")
        return true;
    return false;
}

Subscriber::Manager::Nodes::Node::Statistics::Srg::Srg()
    :
    txlist_send_triggered{YType::uint32, "txlist-send-triggered"},
    txlist_send_failed{YType::uint32, "txlist-send-failed"},
    txlist_send_failed_notactive{YType::uint32, "txlist-send-failed-notactive"},
    actual_txlist_sent{YType::uint32, "actual-txlist-sent"},
    alreadyin_txlist{YType::uint32, "alreadyin-txlist"},
    txlist_encode{YType::uint32, "txlist-encode"},
    txlist_encode_fail{YType::uint32, "txlist-encode-fail"},
    create_update_encode{YType::uint32, "create-update-encode"},
    delete_encode{YType::uint32, "delete-encode"},
    create_upd_clean_callback{YType::uint32, "create-upd-clean-callback"},
    delete_clean_callback{YType::uint32, "delete-clean-callback"},
    slave_recv_entry{YType::uint32, "slave-recv-entry"},
    slave_decode_fail{YType::uint32, "slave-decode-fail"},
    slave_create_update{YType::uint32, "slave-create-update"},
    slave_delete{YType::uint32, "slave-delete"},
    srg_context_malloc{YType::uint32, "srg-context-malloc"},
    srg_context_free{YType::uint32, "srg-context-free"},
    sod_count{YType::uint32, "sod-count"},
    eod_count{YType::uint32, "eod-count"},
    sod_eod_replay_req_count{YType::uint32, "sod-eod-replay-req-count"},
    sod_eod_dirty_mark_count{YType::uint32, "sod-eod-dirty-mark-count"},
    sod_eod_dirty_delete_count{YType::uint32, "sod-eod-dirty-delete-count"},
    ack_to_srg{YType::uint32, "ack-to-srg"},
    nack_to_srg{YType::uint32, "nack-to-srg"},
    nack_to_srg_fail_cnt{YType::uint32, "nack-to-srg-fail-cnt"},
    txlist_remove_all{YType::uint32, "txlist-remove-all"},
    txlist_del_sync{YType::uint32, "txlist-del-sync"},
    txlist_del_sync_notlinked{YType::uint32, "txlist-del-sync-notlinked"},
    txlist_del_app{YType::uint32, "txlist-del-app"},
    txlist_del_app_notlinked{YType::uint32, "txlist-del-app-notlinked"},
    txlist_clean_invalid_state{YType::uint32, "txlist-clean-invalid-state"},
    txlist_remove_all_internal_error{YType::uint32, "txlist-remove-all-internal-error"},
    is_srg_flow_control_enabled{YType::boolean, "is-srg-flow-control-enabled"},
    max_inflight_sessoin_count{YType::uint32, "max-inflight-sessoin-count"},
    flow_control_resume_threshold{YType::uint32, "flow-control-resume-threshold"},
    inflight_session_count{YType::uint32, "inflight-session-count"},
    inflight_add_count{YType::uint32, "inflight-add-count"},
    inflight_under_run_count{YType::uint32, "inflight-under-run-count"},
    inflight_alloc_fails{YType::uint32, "inflight-alloc-fails"},
    inflight_insert_failures{YType::uint32, "inflight-insert-failures"},
    inflight_deletes{YType::uint32, "inflight-deletes"},
    inflight_not_found{YType::uint32, "inflight-not-found"},
    inflight_delete_failures{YType::uint32, "inflight-delete-failures"},
    total_pause_count{YType::uint32, "total-pause-count"},
    total_resume_count{YType::uint32, "total-resume-count"},
    total_dont_send_to_txlist{YType::uint32, "total-dont-send-to-txlist"},
    total_srg_not_master{YType::uint32, "total-srg-not-master"},
    total_master_eoms_pending{YType::uint32, "total-master-eoms-pending"},
    total_master_eoms_pending_cleared{YType::uint32, "total-master-eoms-pending-cleared"},
    last_pause_period{YType::uint64, "last-pause-period"},
    total_pause_time{YType::uint64, "total-pause-time"},
    last_pause_time{YType::uint64, "last-pause-time"},
    last_resume_time{YType::uint64, "last-resume-time"}
{

    yang_name = "srg"; yang_parent_name = "statistics"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Manager::Nodes::Node::Statistics::Srg::~Srg()
{
}

bool Subscriber::Manager::Nodes::Node::Statistics::Srg::has_data() const
{
    if (is_presence_container) return true;
    return txlist_send_triggered.is_set
	|| txlist_send_failed.is_set
	|| txlist_send_failed_notactive.is_set
	|| actual_txlist_sent.is_set
	|| alreadyin_txlist.is_set
	|| txlist_encode.is_set
	|| txlist_encode_fail.is_set
	|| create_update_encode.is_set
	|| delete_encode.is_set
	|| create_upd_clean_callback.is_set
	|| delete_clean_callback.is_set
	|| slave_recv_entry.is_set
	|| slave_decode_fail.is_set
	|| slave_create_update.is_set
	|| slave_delete.is_set
	|| srg_context_malloc.is_set
	|| srg_context_free.is_set
	|| sod_count.is_set
	|| eod_count.is_set
	|| sod_eod_replay_req_count.is_set
	|| sod_eod_dirty_mark_count.is_set
	|| sod_eod_dirty_delete_count.is_set
	|| ack_to_srg.is_set
	|| nack_to_srg.is_set
	|| nack_to_srg_fail_cnt.is_set
	|| txlist_remove_all.is_set
	|| txlist_del_sync.is_set
	|| txlist_del_sync_notlinked.is_set
	|| txlist_del_app.is_set
	|| txlist_del_app_notlinked.is_set
	|| txlist_clean_invalid_state.is_set
	|| txlist_remove_all_internal_error.is_set
	|| is_srg_flow_control_enabled.is_set
	|| max_inflight_sessoin_count.is_set
	|| flow_control_resume_threshold.is_set
	|| inflight_session_count.is_set
	|| inflight_add_count.is_set
	|| inflight_under_run_count.is_set
	|| inflight_alloc_fails.is_set
	|| inflight_insert_failures.is_set
	|| inflight_deletes.is_set
	|| inflight_not_found.is_set
	|| inflight_delete_failures.is_set
	|| total_pause_count.is_set
	|| total_resume_count.is_set
	|| total_dont_send_to_txlist.is_set
	|| total_srg_not_master.is_set
	|| total_master_eoms_pending.is_set
	|| total_master_eoms_pending_cleared.is_set
	|| last_pause_period.is_set
	|| total_pause_time.is_set
	|| last_pause_time.is_set
	|| last_resume_time.is_set;
}

bool Subscriber::Manager::Nodes::Node::Statistics::Srg::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(txlist_send_triggered.yfilter)
	|| ydk::is_set(txlist_send_failed.yfilter)
	|| ydk::is_set(txlist_send_failed_notactive.yfilter)
	|| ydk::is_set(actual_txlist_sent.yfilter)
	|| ydk::is_set(alreadyin_txlist.yfilter)
	|| ydk::is_set(txlist_encode.yfilter)
	|| ydk::is_set(txlist_encode_fail.yfilter)
	|| ydk::is_set(create_update_encode.yfilter)
	|| ydk::is_set(delete_encode.yfilter)
	|| ydk::is_set(create_upd_clean_callback.yfilter)
	|| ydk::is_set(delete_clean_callback.yfilter)
	|| ydk::is_set(slave_recv_entry.yfilter)
	|| ydk::is_set(slave_decode_fail.yfilter)
	|| ydk::is_set(slave_create_update.yfilter)
	|| ydk::is_set(slave_delete.yfilter)
	|| ydk::is_set(srg_context_malloc.yfilter)
	|| ydk::is_set(srg_context_free.yfilter)
	|| ydk::is_set(sod_count.yfilter)
	|| ydk::is_set(eod_count.yfilter)
	|| ydk::is_set(sod_eod_replay_req_count.yfilter)
	|| ydk::is_set(sod_eod_dirty_mark_count.yfilter)
	|| ydk::is_set(sod_eod_dirty_delete_count.yfilter)
	|| ydk::is_set(ack_to_srg.yfilter)
	|| ydk::is_set(nack_to_srg.yfilter)
	|| ydk::is_set(nack_to_srg_fail_cnt.yfilter)
	|| ydk::is_set(txlist_remove_all.yfilter)
	|| ydk::is_set(txlist_del_sync.yfilter)
	|| ydk::is_set(txlist_del_sync_notlinked.yfilter)
	|| ydk::is_set(txlist_del_app.yfilter)
	|| ydk::is_set(txlist_del_app_notlinked.yfilter)
	|| ydk::is_set(txlist_clean_invalid_state.yfilter)
	|| ydk::is_set(txlist_remove_all_internal_error.yfilter)
	|| ydk::is_set(is_srg_flow_control_enabled.yfilter)
	|| ydk::is_set(max_inflight_sessoin_count.yfilter)
	|| ydk::is_set(flow_control_resume_threshold.yfilter)
	|| ydk::is_set(inflight_session_count.yfilter)
	|| ydk::is_set(inflight_add_count.yfilter)
	|| ydk::is_set(inflight_under_run_count.yfilter)
	|| ydk::is_set(inflight_alloc_fails.yfilter)
	|| ydk::is_set(inflight_insert_failures.yfilter)
	|| ydk::is_set(inflight_deletes.yfilter)
	|| ydk::is_set(inflight_not_found.yfilter)
	|| ydk::is_set(inflight_delete_failures.yfilter)
	|| ydk::is_set(total_pause_count.yfilter)
	|| ydk::is_set(total_resume_count.yfilter)
	|| ydk::is_set(total_dont_send_to_txlist.yfilter)
	|| ydk::is_set(total_srg_not_master.yfilter)
	|| ydk::is_set(total_master_eoms_pending.yfilter)
	|| ydk::is_set(total_master_eoms_pending_cleared.yfilter)
	|| ydk::is_set(last_pause_period.yfilter)
	|| ydk::is_set(total_pause_time.yfilter)
	|| ydk::is_set(last_pause_time.yfilter)
	|| ydk::is_set(last_resume_time.yfilter);
}

std::string Subscriber::Manager::Nodes::Node::Statistics::Srg::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srg";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Manager::Nodes::Node::Statistics::Srg::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (txlist_send_triggered.is_set || is_set(txlist_send_triggered.yfilter)) leaf_name_data.push_back(txlist_send_triggered.get_name_leafdata());
    if (txlist_send_failed.is_set || is_set(txlist_send_failed.yfilter)) leaf_name_data.push_back(txlist_send_failed.get_name_leafdata());
    if (txlist_send_failed_notactive.is_set || is_set(txlist_send_failed_notactive.yfilter)) leaf_name_data.push_back(txlist_send_failed_notactive.get_name_leafdata());
    if (actual_txlist_sent.is_set || is_set(actual_txlist_sent.yfilter)) leaf_name_data.push_back(actual_txlist_sent.get_name_leafdata());
    if (alreadyin_txlist.is_set || is_set(alreadyin_txlist.yfilter)) leaf_name_data.push_back(alreadyin_txlist.get_name_leafdata());
    if (txlist_encode.is_set || is_set(txlist_encode.yfilter)) leaf_name_data.push_back(txlist_encode.get_name_leafdata());
    if (txlist_encode_fail.is_set || is_set(txlist_encode_fail.yfilter)) leaf_name_data.push_back(txlist_encode_fail.get_name_leafdata());
    if (create_update_encode.is_set || is_set(create_update_encode.yfilter)) leaf_name_data.push_back(create_update_encode.get_name_leafdata());
    if (delete_encode.is_set || is_set(delete_encode.yfilter)) leaf_name_data.push_back(delete_encode.get_name_leafdata());
    if (create_upd_clean_callback.is_set || is_set(create_upd_clean_callback.yfilter)) leaf_name_data.push_back(create_upd_clean_callback.get_name_leafdata());
    if (delete_clean_callback.is_set || is_set(delete_clean_callback.yfilter)) leaf_name_data.push_back(delete_clean_callback.get_name_leafdata());
    if (slave_recv_entry.is_set || is_set(slave_recv_entry.yfilter)) leaf_name_data.push_back(slave_recv_entry.get_name_leafdata());
    if (slave_decode_fail.is_set || is_set(slave_decode_fail.yfilter)) leaf_name_data.push_back(slave_decode_fail.get_name_leafdata());
    if (slave_create_update.is_set || is_set(slave_create_update.yfilter)) leaf_name_data.push_back(slave_create_update.get_name_leafdata());
    if (slave_delete.is_set || is_set(slave_delete.yfilter)) leaf_name_data.push_back(slave_delete.get_name_leafdata());
    if (srg_context_malloc.is_set || is_set(srg_context_malloc.yfilter)) leaf_name_data.push_back(srg_context_malloc.get_name_leafdata());
    if (srg_context_free.is_set || is_set(srg_context_free.yfilter)) leaf_name_data.push_back(srg_context_free.get_name_leafdata());
    if (sod_count.is_set || is_set(sod_count.yfilter)) leaf_name_data.push_back(sod_count.get_name_leafdata());
    if (eod_count.is_set || is_set(eod_count.yfilter)) leaf_name_data.push_back(eod_count.get_name_leafdata());
    if (sod_eod_replay_req_count.is_set || is_set(sod_eod_replay_req_count.yfilter)) leaf_name_data.push_back(sod_eod_replay_req_count.get_name_leafdata());
    if (sod_eod_dirty_mark_count.is_set || is_set(sod_eod_dirty_mark_count.yfilter)) leaf_name_data.push_back(sod_eod_dirty_mark_count.get_name_leafdata());
    if (sod_eod_dirty_delete_count.is_set || is_set(sod_eod_dirty_delete_count.yfilter)) leaf_name_data.push_back(sod_eod_dirty_delete_count.get_name_leafdata());
    if (ack_to_srg.is_set || is_set(ack_to_srg.yfilter)) leaf_name_data.push_back(ack_to_srg.get_name_leafdata());
    if (nack_to_srg.is_set || is_set(nack_to_srg.yfilter)) leaf_name_data.push_back(nack_to_srg.get_name_leafdata());
    if (nack_to_srg_fail_cnt.is_set || is_set(nack_to_srg_fail_cnt.yfilter)) leaf_name_data.push_back(nack_to_srg_fail_cnt.get_name_leafdata());
    if (txlist_remove_all.is_set || is_set(txlist_remove_all.yfilter)) leaf_name_data.push_back(txlist_remove_all.get_name_leafdata());
    if (txlist_del_sync.is_set || is_set(txlist_del_sync.yfilter)) leaf_name_data.push_back(txlist_del_sync.get_name_leafdata());
    if (txlist_del_sync_notlinked.is_set || is_set(txlist_del_sync_notlinked.yfilter)) leaf_name_data.push_back(txlist_del_sync_notlinked.get_name_leafdata());
    if (txlist_del_app.is_set || is_set(txlist_del_app.yfilter)) leaf_name_data.push_back(txlist_del_app.get_name_leafdata());
    if (txlist_del_app_notlinked.is_set || is_set(txlist_del_app_notlinked.yfilter)) leaf_name_data.push_back(txlist_del_app_notlinked.get_name_leafdata());
    if (txlist_clean_invalid_state.is_set || is_set(txlist_clean_invalid_state.yfilter)) leaf_name_data.push_back(txlist_clean_invalid_state.get_name_leafdata());
    if (txlist_remove_all_internal_error.is_set || is_set(txlist_remove_all_internal_error.yfilter)) leaf_name_data.push_back(txlist_remove_all_internal_error.get_name_leafdata());
    if (is_srg_flow_control_enabled.is_set || is_set(is_srg_flow_control_enabled.yfilter)) leaf_name_data.push_back(is_srg_flow_control_enabled.get_name_leafdata());
    if (max_inflight_sessoin_count.is_set || is_set(max_inflight_sessoin_count.yfilter)) leaf_name_data.push_back(max_inflight_sessoin_count.get_name_leafdata());
    if (flow_control_resume_threshold.is_set || is_set(flow_control_resume_threshold.yfilter)) leaf_name_data.push_back(flow_control_resume_threshold.get_name_leafdata());
    if (inflight_session_count.is_set || is_set(inflight_session_count.yfilter)) leaf_name_data.push_back(inflight_session_count.get_name_leafdata());
    if (inflight_add_count.is_set || is_set(inflight_add_count.yfilter)) leaf_name_data.push_back(inflight_add_count.get_name_leafdata());
    if (inflight_under_run_count.is_set || is_set(inflight_under_run_count.yfilter)) leaf_name_data.push_back(inflight_under_run_count.get_name_leafdata());
    if (inflight_alloc_fails.is_set || is_set(inflight_alloc_fails.yfilter)) leaf_name_data.push_back(inflight_alloc_fails.get_name_leafdata());
    if (inflight_insert_failures.is_set || is_set(inflight_insert_failures.yfilter)) leaf_name_data.push_back(inflight_insert_failures.get_name_leafdata());
    if (inflight_deletes.is_set || is_set(inflight_deletes.yfilter)) leaf_name_data.push_back(inflight_deletes.get_name_leafdata());
    if (inflight_not_found.is_set || is_set(inflight_not_found.yfilter)) leaf_name_data.push_back(inflight_not_found.get_name_leafdata());
    if (inflight_delete_failures.is_set || is_set(inflight_delete_failures.yfilter)) leaf_name_data.push_back(inflight_delete_failures.get_name_leafdata());
    if (total_pause_count.is_set || is_set(total_pause_count.yfilter)) leaf_name_data.push_back(total_pause_count.get_name_leafdata());
    if (total_resume_count.is_set || is_set(total_resume_count.yfilter)) leaf_name_data.push_back(total_resume_count.get_name_leafdata());
    if (total_dont_send_to_txlist.is_set || is_set(total_dont_send_to_txlist.yfilter)) leaf_name_data.push_back(total_dont_send_to_txlist.get_name_leafdata());
    if (total_srg_not_master.is_set || is_set(total_srg_not_master.yfilter)) leaf_name_data.push_back(total_srg_not_master.get_name_leafdata());
    if (total_master_eoms_pending.is_set || is_set(total_master_eoms_pending.yfilter)) leaf_name_data.push_back(total_master_eoms_pending.get_name_leafdata());
    if (total_master_eoms_pending_cleared.is_set || is_set(total_master_eoms_pending_cleared.yfilter)) leaf_name_data.push_back(total_master_eoms_pending_cleared.get_name_leafdata());
    if (last_pause_period.is_set || is_set(last_pause_period.yfilter)) leaf_name_data.push_back(last_pause_period.get_name_leafdata());
    if (total_pause_time.is_set || is_set(total_pause_time.yfilter)) leaf_name_data.push_back(total_pause_time.get_name_leafdata());
    if (last_pause_time.is_set || is_set(last_pause_time.yfilter)) leaf_name_data.push_back(last_pause_time.get_name_leafdata());
    if (last_resume_time.is_set || is_set(last_resume_time.yfilter)) leaf_name_data.push_back(last_resume_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Manager::Nodes::Node::Statistics::Srg::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Manager::Nodes::Node::Statistics::Srg::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Manager::Nodes::Node::Statistics::Srg::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "txlist-send-triggered")
    {
        txlist_send_triggered = value;
        txlist_send_triggered.value_namespace = name_space;
        txlist_send_triggered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-send-failed")
    {
        txlist_send_failed = value;
        txlist_send_failed.value_namespace = name_space;
        txlist_send_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-send-failed-notactive")
    {
        txlist_send_failed_notactive = value;
        txlist_send_failed_notactive.value_namespace = name_space;
        txlist_send_failed_notactive.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-txlist-sent")
    {
        actual_txlist_sent = value;
        actual_txlist_sent.value_namespace = name_space;
        actual_txlist_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alreadyin-txlist")
    {
        alreadyin_txlist = value;
        alreadyin_txlist.value_namespace = name_space;
        alreadyin_txlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-encode")
    {
        txlist_encode = value;
        txlist_encode.value_namespace = name_space;
        txlist_encode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-encode-fail")
    {
        txlist_encode_fail = value;
        txlist_encode_fail.value_namespace = name_space;
        txlist_encode_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-update-encode")
    {
        create_update_encode = value;
        create_update_encode.value_namespace = name_space;
        create_update_encode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-encode")
    {
        delete_encode = value;
        delete_encode.value_namespace = name_space;
        delete_encode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "create-upd-clean-callback")
    {
        create_upd_clean_callback = value;
        create_upd_clean_callback.value_namespace = name_space;
        create_upd_clean_callback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delete-clean-callback")
    {
        delete_clean_callback = value;
        delete_clean_callback.value_namespace = name_space;
        delete_clean_callback.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-recv-entry")
    {
        slave_recv_entry = value;
        slave_recv_entry.value_namespace = name_space;
        slave_recv_entry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-decode-fail")
    {
        slave_decode_fail = value;
        slave_decode_fail.value_namespace = name_space;
        slave_decode_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-create-update")
    {
        slave_create_update = value;
        slave_create_update.value_namespace = name_space;
        slave_create_update.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-delete")
    {
        slave_delete = value;
        slave_delete.value_namespace = name_space;
        slave_delete.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-context-malloc")
    {
        srg_context_malloc = value;
        srg_context_malloc.value_namespace = name_space;
        srg_context_malloc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-context-free")
    {
        srg_context_free = value;
        srg_context_free.value_namespace = name_space;
        srg_context_free.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sod-count")
    {
        sod_count = value;
        sod_count.value_namespace = name_space;
        sod_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "eod-count")
    {
        eod_count = value;
        eod_count.value_namespace = name_space;
        eod_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sod-eod-replay-req-count")
    {
        sod_eod_replay_req_count = value;
        sod_eod_replay_req_count.value_namespace = name_space;
        sod_eod_replay_req_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sod-eod-dirty-mark-count")
    {
        sod_eod_dirty_mark_count = value;
        sod_eod_dirty_mark_count.value_namespace = name_space;
        sod_eod_dirty_mark_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sod-eod-dirty-delete-count")
    {
        sod_eod_dirty_delete_count = value;
        sod_eod_dirty_delete_count.value_namespace = name_space;
        sod_eod_dirty_delete_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ack-to-srg")
    {
        ack_to_srg = value;
        ack_to_srg.value_namespace = name_space;
        ack_to_srg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-to-srg")
    {
        nack_to_srg = value;
        nack_to_srg.value_namespace = name_space;
        nack_to_srg.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nack-to-srg-fail-cnt")
    {
        nack_to_srg_fail_cnt = value;
        nack_to_srg_fail_cnt.value_namespace = name_space;
        nack_to_srg_fail_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-remove-all")
    {
        txlist_remove_all = value;
        txlist_remove_all.value_namespace = name_space;
        txlist_remove_all.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-del-sync")
    {
        txlist_del_sync = value;
        txlist_del_sync.value_namespace = name_space;
        txlist_del_sync.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-del-sync-notlinked")
    {
        txlist_del_sync_notlinked = value;
        txlist_del_sync_notlinked.value_namespace = name_space;
        txlist_del_sync_notlinked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-del-app")
    {
        txlist_del_app = value;
        txlist_del_app.value_namespace = name_space;
        txlist_del_app.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-del-app-notlinked")
    {
        txlist_del_app_notlinked = value;
        txlist_del_app_notlinked.value_namespace = name_space;
        txlist_del_app_notlinked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-clean-invalid-state")
    {
        txlist_clean_invalid_state = value;
        txlist_clean_invalid_state.value_namespace = name_space;
        txlist_clean_invalid_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "txlist-remove-all-internal-error")
    {
        txlist_remove_all_internal_error = value;
        txlist_remove_all_internal_error.value_namespace = name_space;
        txlist_remove_all_internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-srg-flow-control-enabled")
    {
        is_srg_flow_control_enabled = value;
        is_srg_flow_control_enabled.value_namespace = name_space;
        is_srg_flow_control_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-inflight-sessoin-count")
    {
        max_inflight_sessoin_count = value;
        max_inflight_sessoin_count.value_namespace = name_space;
        max_inflight_sessoin_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "flow-control-resume-threshold")
    {
        flow_control_resume_threshold = value;
        flow_control_resume_threshold.value_namespace = name_space;
        flow_control_resume_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inflight-session-count")
    {
        inflight_session_count = value;
        inflight_session_count.value_namespace = name_space;
        inflight_session_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inflight-add-count")
    {
        inflight_add_count = value;
        inflight_add_count.value_namespace = name_space;
        inflight_add_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inflight-under-run-count")
    {
        inflight_under_run_count = value;
        inflight_under_run_count.value_namespace = name_space;
        inflight_under_run_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inflight-alloc-fails")
    {
        inflight_alloc_fails = value;
        inflight_alloc_fails.value_namespace = name_space;
        inflight_alloc_fails.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inflight-insert-failures")
    {
        inflight_insert_failures = value;
        inflight_insert_failures.value_namespace = name_space;
        inflight_insert_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inflight-deletes")
    {
        inflight_deletes = value;
        inflight_deletes.value_namespace = name_space;
        inflight_deletes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inflight-not-found")
    {
        inflight_not_found = value;
        inflight_not_found.value_namespace = name_space;
        inflight_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inflight-delete-failures")
    {
        inflight_delete_failures = value;
        inflight_delete_failures.value_namespace = name_space;
        inflight_delete_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pause-count")
    {
        total_pause_count = value;
        total_pause_count.value_namespace = name_space;
        total_pause_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-resume-count")
    {
        total_resume_count = value;
        total_resume_count.value_namespace = name_space;
        total_resume_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-dont-send-to-txlist")
    {
        total_dont_send_to_txlist = value;
        total_dont_send_to_txlist.value_namespace = name_space;
        total_dont_send_to_txlist.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-srg-not-master")
    {
        total_srg_not_master = value;
        total_srg_not_master.value_namespace = name_space;
        total_srg_not_master.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-master-eoms-pending")
    {
        total_master_eoms_pending = value;
        total_master_eoms_pending.value_namespace = name_space;
        total_master_eoms_pending.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-master-eoms-pending-cleared")
    {
        total_master_eoms_pending_cleared = value;
        total_master_eoms_pending_cleared.value_namespace = name_space;
        total_master_eoms_pending_cleared.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-pause-period")
    {
        last_pause_period = value;
        last_pause_period.value_namespace = name_space;
        last_pause_period.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-pause-time")
    {
        total_pause_time = value;
        total_pause_time.value_namespace = name_space;
        total_pause_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-pause-time")
    {
        last_pause_time = value;
        last_pause_time.value_namespace = name_space;
        last_pause_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-resume-time")
    {
        last_resume_time = value;
        last_resume_time.value_namespace = name_space;
        last_resume_time.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Manager::Nodes::Node::Statistics::Srg::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "txlist-send-triggered")
    {
        txlist_send_triggered.yfilter = yfilter;
    }
    if(value_path == "txlist-send-failed")
    {
        txlist_send_failed.yfilter = yfilter;
    }
    if(value_path == "txlist-send-failed-notactive")
    {
        txlist_send_failed_notactive.yfilter = yfilter;
    }
    if(value_path == "actual-txlist-sent")
    {
        actual_txlist_sent.yfilter = yfilter;
    }
    if(value_path == "alreadyin-txlist")
    {
        alreadyin_txlist.yfilter = yfilter;
    }
    if(value_path == "txlist-encode")
    {
        txlist_encode.yfilter = yfilter;
    }
    if(value_path == "txlist-encode-fail")
    {
        txlist_encode_fail.yfilter = yfilter;
    }
    if(value_path == "create-update-encode")
    {
        create_update_encode.yfilter = yfilter;
    }
    if(value_path == "delete-encode")
    {
        delete_encode.yfilter = yfilter;
    }
    if(value_path == "create-upd-clean-callback")
    {
        create_upd_clean_callback.yfilter = yfilter;
    }
    if(value_path == "delete-clean-callback")
    {
        delete_clean_callback.yfilter = yfilter;
    }
    if(value_path == "slave-recv-entry")
    {
        slave_recv_entry.yfilter = yfilter;
    }
    if(value_path == "slave-decode-fail")
    {
        slave_decode_fail.yfilter = yfilter;
    }
    if(value_path == "slave-create-update")
    {
        slave_create_update.yfilter = yfilter;
    }
    if(value_path == "slave-delete")
    {
        slave_delete.yfilter = yfilter;
    }
    if(value_path == "srg-context-malloc")
    {
        srg_context_malloc.yfilter = yfilter;
    }
    if(value_path == "srg-context-free")
    {
        srg_context_free.yfilter = yfilter;
    }
    if(value_path == "sod-count")
    {
        sod_count.yfilter = yfilter;
    }
    if(value_path == "eod-count")
    {
        eod_count.yfilter = yfilter;
    }
    if(value_path == "sod-eod-replay-req-count")
    {
        sod_eod_replay_req_count.yfilter = yfilter;
    }
    if(value_path == "sod-eod-dirty-mark-count")
    {
        sod_eod_dirty_mark_count.yfilter = yfilter;
    }
    if(value_path == "sod-eod-dirty-delete-count")
    {
        sod_eod_dirty_delete_count.yfilter = yfilter;
    }
    if(value_path == "ack-to-srg")
    {
        ack_to_srg.yfilter = yfilter;
    }
    if(value_path == "nack-to-srg")
    {
        nack_to_srg.yfilter = yfilter;
    }
    if(value_path == "nack-to-srg-fail-cnt")
    {
        nack_to_srg_fail_cnt.yfilter = yfilter;
    }
    if(value_path == "txlist-remove-all")
    {
        txlist_remove_all.yfilter = yfilter;
    }
    if(value_path == "txlist-del-sync")
    {
        txlist_del_sync.yfilter = yfilter;
    }
    if(value_path == "txlist-del-sync-notlinked")
    {
        txlist_del_sync_notlinked.yfilter = yfilter;
    }
    if(value_path == "txlist-del-app")
    {
        txlist_del_app.yfilter = yfilter;
    }
    if(value_path == "txlist-del-app-notlinked")
    {
        txlist_del_app_notlinked.yfilter = yfilter;
    }
    if(value_path == "txlist-clean-invalid-state")
    {
        txlist_clean_invalid_state.yfilter = yfilter;
    }
    if(value_path == "txlist-remove-all-internal-error")
    {
        txlist_remove_all_internal_error.yfilter = yfilter;
    }
    if(value_path == "is-srg-flow-control-enabled")
    {
        is_srg_flow_control_enabled.yfilter = yfilter;
    }
    if(value_path == "max-inflight-sessoin-count")
    {
        max_inflight_sessoin_count.yfilter = yfilter;
    }
    if(value_path == "flow-control-resume-threshold")
    {
        flow_control_resume_threshold.yfilter = yfilter;
    }
    if(value_path == "inflight-session-count")
    {
        inflight_session_count.yfilter = yfilter;
    }
    if(value_path == "inflight-add-count")
    {
        inflight_add_count.yfilter = yfilter;
    }
    if(value_path == "inflight-under-run-count")
    {
        inflight_under_run_count.yfilter = yfilter;
    }
    if(value_path == "inflight-alloc-fails")
    {
        inflight_alloc_fails.yfilter = yfilter;
    }
    if(value_path == "inflight-insert-failures")
    {
        inflight_insert_failures.yfilter = yfilter;
    }
    if(value_path == "inflight-deletes")
    {
        inflight_deletes.yfilter = yfilter;
    }
    if(value_path == "inflight-not-found")
    {
        inflight_not_found.yfilter = yfilter;
    }
    if(value_path == "inflight-delete-failures")
    {
        inflight_delete_failures.yfilter = yfilter;
    }
    if(value_path == "total-pause-count")
    {
        total_pause_count.yfilter = yfilter;
    }
    if(value_path == "total-resume-count")
    {
        total_resume_count.yfilter = yfilter;
    }
    if(value_path == "total-dont-send-to-txlist")
    {
        total_dont_send_to_txlist.yfilter = yfilter;
    }
    if(value_path == "total-srg-not-master")
    {
        total_srg_not_master.yfilter = yfilter;
    }
    if(value_path == "total-master-eoms-pending")
    {
        total_master_eoms_pending.yfilter = yfilter;
    }
    if(value_path == "total-master-eoms-pending-cleared")
    {
        total_master_eoms_pending_cleared.yfilter = yfilter;
    }
    if(value_path == "last-pause-period")
    {
        last_pause_period.yfilter = yfilter;
    }
    if(value_path == "total-pause-time")
    {
        total_pause_time.yfilter = yfilter;
    }
    if(value_path == "last-pause-time")
    {
        last_pause_time.yfilter = yfilter;
    }
    if(value_path == "last-resume-time")
    {
        last_resume_time.yfilter = yfilter;
    }
}

bool Subscriber::Manager::Nodes::Node::Statistics::Srg::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "txlist-send-triggered" || name == "txlist-send-failed" || name == "txlist-send-failed-notactive" || name == "actual-txlist-sent" || name == "alreadyin-txlist" || name == "txlist-encode" || name == "txlist-encode-fail" || name == "create-update-encode" || name == "delete-encode" || name == "create-upd-clean-callback" || name == "delete-clean-callback" || name == "slave-recv-entry" || name == "slave-decode-fail" || name == "slave-create-update" || name == "slave-delete" || name == "srg-context-malloc" || name == "srg-context-free" || name == "sod-count" || name == "eod-count" || name == "sod-eod-replay-req-count" || name == "sod-eod-dirty-mark-count" || name == "sod-eod-dirty-delete-count" || name == "ack-to-srg" || name == "nack-to-srg" || name == "nack-to-srg-fail-cnt" || name == "txlist-remove-all" || name == "txlist-del-sync" || name == "txlist-del-sync-notlinked" || name == "txlist-del-app" || name == "txlist-del-app-notlinked" || name == "txlist-clean-invalid-state" || name == "txlist-remove-all-internal-error" || name == "is-srg-flow-control-enabled" || name == "max-inflight-sessoin-count" || name == "flow-control-resume-threshold" || name == "inflight-session-count" || name == "inflight-add-count" || name == "inflight-under-run-count" || name == "inflight-alloc-fails" || name == "inflight-insert-failures" || name == "inflight-deletes" || name == "inflight-not-found" || name == "inflight-delete-failures" || name == "total-pause-count" || name == "total-resume-count" || name == "total-dont-send-to-txlist" || name == "total-srg-not-master" || name == "total-master-eoms-pending" || name == "total-master-eoms-pending-cleared" || name == "last-pause-period" || name == "total-pause-time" || name == "last-pause-time" || name == "last-resume-time")
        return true;
    return false;
}

Subscriber::Session::Session()
    :
    nodes(std::make_shared<Subscriber::Session::Nodes>())
{
    nodes->parent = this;

    yang_name = "session"; yang_parent_name = "subscriber"; is_top_level_class = false; has_list_ancestor = false; 
}

Subscriber::Session::~Session()
{
}

bool Subscriber::Session::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool Subscriber::Session::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Subscriber::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/" << get_segment_path();
    return path_buffer.str();
}

std::string Subscriber::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Subscriber::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Subscriber::Session::Nodes::Nodes()
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = false; 
}

Subscriber::Session::Nodes::~Nodes()
{
}

bool Subscriber::Session::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/session/" << get_segment_path();
    return path_buffer.str();
}

std::string Subscriber::Session::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::get_children() const
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

void Subscriber::Session::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
        ,
    srg_roles(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles>())
    , author_summaries(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries>())
    , summary(std::make_shared<Subscriber::Session::Nodes::Node::Summary>())
    , mac_summaries(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries>())
    , interface_summaries(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries>())
    , authentication_summaries(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries>())
    , state_summaries(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries>())
    , ipv4_address_vrf_summaries(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries>())
    , address_family_summaries(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries>())
    , username_summaries(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries>())
    , access_interface_summaries(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries>())
    , ipv4_address_summaries(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries>())
    , vrf_summaries(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries>())
    , sessions(std::make_shared<Subscriber::Session::Nodes::Node::Sessions>())
{
    srg_roles->parent = this;
    author_summaries->parent = this;
    summary->parent = this;
    mac_summaries->parent = this;
    interface_summaries->parent = this;
    authentication_summaries->parent = this;
    state_summaries->parent = this;
    ipv4_address_vrf_summaries->parent = this;
    address_family_summaries->parent = this;
    username_summaries->parent = this;
    access_interface_summaries->parent = this;
    ipv4_address_summaries->parent = this;
    vrf_summaries->parent = this;
    sessions->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Subscriber::Session::Nodes::Node::~Node()
{
}

bool Subscriber::Session::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (srg_roles !=  nullptr && srg_roles->has_data())
	|| (author_summaries !=  nullptr && author_summaries->has_data())
	|| (summary !=  nullptr && summary->has_data())
	|| (mac_summaries !=  nullptr && mac_summaries->has_data())
	|| (interface_summaries !=  nullptr && interface_summaries->has_data())
	|| (authentication_summaries !=  nullptr && authentication_summaries->has_data())
	|| (state_summaries !=  nullptr && state_summaries->has_data())
	|| (ipv4_address_vrf_summaries !=  nullptr && ipv4_address_vrf_summaries->has_data())
	|| (address_family_summaries !=  nullptr && address_family_summaries->has_data())
	|| (username_summaries !=  nullptr && username_summaries->has_data())
	|| (access_interface_summaries !=  nullptr && access_interface_summaries->has_data())
	|| (ipv4_address_summaries !=  nullptr && ipv4_address_summaries->has_data())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_data())
	|| (sessions !=  nullptr && sessions->has_data());
}

bool Subscriber::Session::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (srg_roles !=  nullptr && srg_roles->has_operation())
	|| (author_summaries !=  nullptr && author_summaries->has_operation())
	|| (summary !=  nullptr && summary->has_operation())
	|| (mac_summaries !=  nullptr && mac_summaries->has_operation())
	|| (interface_summaries !=  nullptr && interface_summaries->has_operation())
	|| (authentication_summaries !=  nullptr && authentication_summaries->has_operation())
	|| (state_summaries !=  nullptr && state_summaries->has_operation())
	|| (ipv4_address_vrf_summaries !=  nullptr && ipv4_address_vrf_summaries->has_operation())
	|| (address_family_summaries !=  nullptr && address_family_summaries->has_operation())
	|| (username_summaries !=  nullptr && username_summaries->has_operation())
	|| (access_interface_summaries !=  nullptr && access_interface_summaries->has_operation())
	|| (ipv4_address_summaries !=  nullptr && ipv4_address_summaries->has_operation())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string Subscriber::Session::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:subscriber/session/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Subscriber::Session::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srg-roles")
    {
        if(srg_roles == nullptr)
        {
            srg_roles = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles>();
        }
        return srg_roles;
    }

    if(child_yang_name == "author-summaries")
    {
        if(author_summaries == nullptr)
        {
            author_summaries = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries>();
        }
        return author_summaries;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Subscriber::Session::Nodes::Node::Summary>();
        }
        return summary;
    }

    if(child_yang_name == "mac-summaries")
    {
        if(mac_summaries == nullptr)
        {
            mac_summaries = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries>();
        }
        return mac_summaries;
    }

    if(child_yang_name == "interface-summaries")
    {
        if(interface_summaries == nullptr)
        {
            interface_summaries = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries>();
        }
        return interface_summaries;
    }

    if(child_yang_name == "authentication-summaries")
    {
        if(authentication_summaries == nullptr)
        {
            authentication_summaries = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries>();
        }
        return authentication_summaries;
    }

    if(child_yang_name == "state-summaries")
    {
        if(state_summaries == nullptr)
        {
            state_summaries = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries>();
        }
        return state_summaries;
    }

    if(child_yang_name == "ipv4-address-vrf-summaries")
    {
        if(ipv4_address_vrf_summaries == nullptr)
        {
            ipv4_address_vrf_summaries = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries>();
        }
        return ipv4_address_vrf_summaries;
    }

    if(child_yang_name == "address-family-summaries")
    {
        if(address_family_summaries == nullptr)
        {
            address_family_summaries = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries>();
        }
        return address_family_summaries;
    }

    if(child_yang_name == "username-summaries")
    {
        if(username_summaries == nullptr)
        {
            username_summaries = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries>();
        }
        return username_summaries;
    }

    if(child_yang_name == "access-interface-summaries")
    {
        if(access_interface_summaries == nullptr)
        {
            access_interface_summaries = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries>();
        }
        return access_interface_summaries;
    }

    if(child_yang_name == "ipv4-address-summaries")
    {
        if(ipv4_address_summaries == nullptr)
        {
            ipv4_address_summaries = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries>();
        }
        return ipv4_address_summaries;
    }

    if(child_yang_name == "vrf-summaries")
    {
        if(vrf_summaries == nullptr)
        {
            vrf_summaries = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries>();
        }
        return vrf_summaries;
    }

    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Subscriber::Session::Nodes::Node::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(srg_roles != nullptr)
    {
        _children["srg-roles"] = srg_roles;
    }

    if(author_summaries != nullptr)
    {
        _children["author-summaries"] = author_summaries;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    if(mac_summaries != nullptr)
    {
        _children["mac-summaries"] = mac_summaries;
    }

    if(interface_summaries != nullptr)
    {
        _children["interface-summaries"] = interface_summaries;
    }

    if(authentication_summaries != nullptr)
    {
        _children["authentication-summaries"] = authentication_summaries;
    }

    if(state_summaries != nullptr)
    {
        _children["state-summaries"] = state_summaries;
    }

    if(ipv4_address_vrf_summaries != nullptr)
    {
        _children["ipv4-address-vrf-summaries"] = ipv4_address_vrf_summaries;
    }

    if(address_family_summaries != nullptr)
    {
        _children["address-family-summaries"] = address_family_summaries;
    }

    if(username_summaries != nullptr)
    {
        _children["username-summaries"] = username_summaries;
    }

    if(access_interface_summaries != nullptr)
    {
        _children["access-interface-summaries"] = access_interface_summaries;
    }

    if(ipv4_address_summaries != nullptr)
    {
        _children["ipv4-address-summaries"] = ipv4_address_summaries;
    }

    if(vrf_summaries != nullptr)
    {
        _children["vrf-summaries"] = vrf_summaries;
    }

    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srg-roles" || name == "author-summaries" || name == "summary" || name == "mac-summaries" || name == "interface-summaries" || name == "authentication-summaries" || name == "state-summaries" || name == "ipv4-address-vrf-summaries" || name == "address-family-summaries" || name == "username-summaries" || name == "access-interface-summaries" || name == "ipv4-address-summaries" || name == "vrf-summaries" || name == "sessions" || name == "node-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRoles()
    :
    srg_role(this, {"srg"})
{

    yang_name = "srg-roles"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::~SrgRoles()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<srg_role.len(); index++)
    {
        if(srg_role[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::has_operation() const
{
    for (std::size_t index=0; index<srg_role.len(); index++)
    {
        if(srg_role[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srg-roles";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "srg-role")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole>();
        ent_->parent = this;
        srg_role.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : srg_role.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "srg-role")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgRole()
    :
    srg{YType::enumeration, "srg"}
        ,
    author_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries>())
    , username_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries>())
    , mac_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries>())
    , interface_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries>())
    , state_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries>())
    , authentication_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries>())
    , subscriber_sessions(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions>())
    , ipv4_address_vrf_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries>())
    , srg_summary(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary>())
    , access_interface_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries>())
    , address_family_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries>())
    , ipv4_address_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries>())
    , vrf_summaries(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries>())
{
    author_summaries->parent = this;
    username_summaries->parent = this;
    mac_summaries->parent = this;
    interface_summaries->parent = this;
    state_summaries->parent = this;
    authentication_summaries->parent = this;
    subscriber_sessions->parent = this;
    ipv4_address_vrf_summaries->parent = this;
    srg_summary->parent = this;
    access_interface_summaries->parent = this;
    address_family_summaries->parent = this;
    ipv4_address_summaries->parent = this;
    vrf_summaries->parent = this;

    yang_name = "srg-role"; yang_parent_name = "srg-roles"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::~SrgRole()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::has_data() const
{
    if (is_presence_container) return true;
    return srg.is_set
	|| (author_summaries !=  nullptr && author_summaries->has_data())
	|| (username_summaries !=  nullptr && username_summaries->has_data())
	|| (mac_summaries !=  nullptr && mac_summaries->has_data())
	|| (interface_summaries !=  nullptr && interface_summaries->has_data())
	|| (state_summaries !=  nullptr && state_summaries->has_data())
	|| (authentication_summaries !=  nullptr && authentication_summaries->has_data())
	|| (subscriber_sessions !=  nullptr && subscriber_sessions->has_data())
	|| (ipv4_address_vrf_summaries !=  nullptr && ipv4_address_vrf_summaries->has_data())
	|| (srg_summary !=  nullptr && srg_summary->has_data())
	|| (access_interface_summaries !=  nullptr && access_interface_summaries->has_data())
	|| (address_family_summaries !=  nullptr && address_family_summaries->has_data())
	|| (ipv4_address_summaries !=  nullptr && ipv4_address_summaries->has_data())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(srg.yfilter)
	|| (author_summaries !=  nullptr && author_summaries->has_operation())
	|| (username_summaries !=  nullptr && username_summaries->has_operation())
	|| (mac_summaries !=  nullptr && mac_summaries->has_operation())
	|| (interface_summaries !=  nullptr && interface_summaries->has_operation())
	|| (state_summaries !=  nullptr && state_summaries->has_operation())
	|| (authentication_summaries !=  nullptr && authentication_summaries->has_operation())
	|| (subscriber_sessions !=  nullptr && subscriber_sessions->has_operation())
	|| (ipv4_address_vrf_summaries !=  nullptr && ipv4_address_vrf_summaries->has_operation())
	|| (srg_summary !=  nullptr && srg_summary->has_operation())
	|| (access_interface_summaries !=  nullptr && access_interface_summaries->has_operation())
	|| (address_family_summaries !=  nullptr && address_family_summaries->has_operation())
	|| (ipv4_address_summaries !=  nullptr && ipv4_address_summaries->has_operation())
	|| (vrf_summaries !=  nullptr && vrf_summaries->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srg-role";
    ADD_KEY_TOKEN(srg, "srg");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (srg.is_set || is_set(srg.yfilter)) leaf_name_data.push_back(srg.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "author-summaries")
    {
        if(author_summaries == nullptr)
        {
            author_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries>();
        }
        return author_summaries;
    }

    if(child_yang_name == "username-summaries")
    {
        if(username_summaries == nullptr)
        {
            username_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries>();
        }
        return username_summaries;
    }

    if(child_yang_name == "mac-summaries")
    {
        if(mac_summaries == nullptr)
        {
            mac_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries>();
        }
        return mac_summaries;
    }

    if(child_yang_name == "interface-summaries")
    {
        if(interface_summaries == nullptr)
        {
            interface_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries>();
        }
        return interface_summaries;
    }

    if(child_yang_name == "state-summaries")
    {
        if(state_summaries == nullptr)
        {
            state_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries>();
        }
        return state_summaries;
    }

    if(child_yang_name == "authentication-summaries")
    {
        if(authentication_summaries == nullptr)
        {
            authentication_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries>();
        }
        return authentication_summaries;
    }

    if(child_yang_name == "subscriber-sessions")
    {
        if(subscriber_sessions == nullptr)
        {
            subscriber_sessions = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions>();
        }
        return subscriber_sessions;
    }

    if(child_yang_name == "ipv4-address-vrf-summaries")
    {
        if(ipv4_address_vrf_summaries == nullptr)
        {
            ipv4_address_vrf_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries>();
        }
        return ipv4_address_vrf_summaries;
    }

    if(child_yang_name == "srg-summary")
    {
        if(srg_summary == nullptr)
        {
            srg_summary = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary>();
        }
        return srg_summary;
    }

    if(child_yang_name == "access-interface-summaries")
    {
        if(access_interface_summaries == nullptr)
        {
            access_interface_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries>();
        }
        return access_interface_summaries;
    }

    if(child_yang_name == "address-family-summaries")
    {
        if(address_family_summaries == nullptr)
        {
            address_family_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries>();
        }
        return address_family_summaries;
    }

    if(child_yang_name == "ipv4-address-summaries")
    {
        if(ipv4_address_summaries == nullptr)
        {
            ipv4_address_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries>();
        }
        return ipv4_address_summaries;
    }

    if(child_yang_name == "vrf-summaries")
    {
        if(vrf_summaries == nullptr)
        {
            vrf_summaries = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries>();
        }
        return vrf_summaries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(author_summaries != nullptr)
    {
        _children["author-summaries"] = author_summaries;
    }

    if(username_summaries != nullptr)
    {
        _children["username-summaries"] = username_summaries;
    }

    if(mac_summaries != nullptr)
    {
        _children["mac-summaries"] = mac_summaries;
    }

    if(interface_summaries != nullptr)
    {
        _children["interface-summaries"] = interface_summaries;
    }

    if(state_summaries != nullptr)
    {
        _children["state-summaries"] = state_summaries;
    }

    if(authentication_summaries != nullptr)
    {
        _children["authentication-summaries"] = authentication_summaries;
    }

    if(subscriber_sessions != nullptr)
    {
        _children["subscriber-sessions"] = subscriber_sessions;
    }

    if(ipv4_address_vrf_summaries != nullptr)
    {
        _children["ipv4-address-vrf-summaries"] = ipv4_address_vrf_summaries;
    }

    if(srg_summary != nullptr)
    {
        _children["srg-summary"] = srg_summary;
    }

    if(access_interface_summaries != nullptr)
    {
        _children["access-interface-summaries"] = access_interface_summaries;
    }

    if(address_family_summaries != nullptr)
    {
        _children["address-family-summaries"] = address_family_summaries;
    }

    if(ipv4_address_summaries != nullptr)
    {
        _children["ipv4-address-summaries"] = ipv4_address_summaries;
    }

    if(vrf_summaries != nullptr)
    {
        _children["vrf-summaries"] = vrf_summaries;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "srg")
    {
        srg = value;
        srg.value_namespace = name_space;
        srg.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "srg")
    {
        srg.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "author-summaries" || name == "username-summaries" || name == "mac-summaries" || name == "interface-summaries" || name == "state-summaries" || name == "authentication-summaries" || name == "subscriber-sessions" || name == "ipv4-address-vrf-summaries" || name == "srg-summary" || name == "access-interface-summaries" || name == "address-family-summaries" || name == "ipv4-address-summaries" || name == "vrf-summaries" || name == "srg")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummaries()
    :
    author_summary(this, {"author_state"})
{

    yang_name = "author-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::~AuthorSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<author_summary.len(); index++)
    {
        if(author_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::has_operation() const
{
    for (std::size_t index=0; index<author_summary.len(); index++)
    {
        if(author_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "author-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "author-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary>();
        ent_->parent = this;
        author_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : author_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "author-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AuthorSummary()
    :
    author_state{YType::enumeration, "author-state"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "author-summary"; yang_parent_name = "author-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::~AuthorSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::has_data() const
{
    if (is_presence_container) return true;
    return author_state.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(author_state.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "author-summary";
    ADD_KEY_TOKEN(author_state, "author-state");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (author_state.is_set || is_set(author_state.yfilter)) leaf_name_data.push_back(author_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "author-state")
    {
        author_state = value;
        author_state.value_namespace = name_space;
        author_state.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "author-state")
    {
        author_state.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "author-state")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "author-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "author-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummaries()
    :
    username_summary(this, {"username"})
{

    yang_name = "username-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::~UsernameSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<username_summary.len(); index++)
    {
        if(username_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::has_operation() const
{
    for (std::size_t index=0; index<username_summary.len(); index++)
    {
        if(username_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary>();
        ent_->parent = this;
        username_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : username_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::UsernameSummary()
    :
    username{YType::str, "username"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "username-summary"; yang_parent_name = "username-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::~UsernameSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summary";
    ADD_KEY_TOKEN(username, "username");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "username")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "username-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "username-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummaries()
    :
    mac_summary(this, {"mac_address"})
{

    yang_name = "mac-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::~MacSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_summary.len(); index++)
    {
        if(mac_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::has_operation() const
{
    for (std::size_t index=0; index<mac_summary.len(); index++)
    {
        if(mac_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary>();
        ent_->parent = this;
        mac_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::MacSummary()
    :
    mac_address{YType::str, "mac-address"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "mac-summary"; yang_parent_name = "mac-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::~MacSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "mac-address")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "mac-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "mac-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummaries()
    :
    interface_summary(this, {"interface_name"})
{

    yang_name = "interface-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::~InterfaceSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary>();
        ent_->parent = this;
        interface_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "interface-summary"; yang_parent_name = "interface-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::~InterfaceSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "interface-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "interface-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "interface-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummaries()
    :
    state_summary(this, {"state"})
{

    yang_name = "state-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::~StateSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<state_summary.len(); index++)
    {
        if(state_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::has_operation() const
{
    for (std::size_t index=0; index<state_summary.len(); index++)
    {
        if(state_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary>();
        ent_->parent = this;
        state_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : state_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateSummary()
    :
    state{YType::enumeration, "state"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "state-summary"; yang_parent_name = "state-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::~StateSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summary";
    ADD_KEY_TOKEN(state, "state");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "state")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "state-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "state-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummaries()
    :
    authentication_summary(this, {"authentication_state"})
{

    yang_name = "authentication-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::~AuthenticationSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authentication_summary.len(); index++)
    {
        if(authentication_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::has_operation() const
{
    for (std::size_t index=0; index<authentication_summary.len(); index++)
    {
        if(authentication_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary>();
        ent_->parent = this;
        authentication_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authentication_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AuthenticationSummary()
    :
    authentication_state{YType::enumeration, "authentication-state"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "authentication-summary"; yang_parent_name = "authentication-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::~AuthenticationSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::has_data() const
{
    if (is_presence_container) return true;
    return authentication_state.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_state.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-summary";
    ADD_KEY_TOKEN(authentication_state, "authentication-state");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_state.is_set || is_set(authentication_state.yfilter)) leaf_name_data.push_back(authentication_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-state")
    {
        authentication_state = value;
        authentication_state.value_namespace = name_space;
        authentication_state.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-state")
    {
        authentication_state.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "authentication-state")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "authentication-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "authentication-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

const Enum::YLeaf SubscriberAuthorStateFilterFlag::un_authorized {0, "un-authorized"};
const Enum::YLeaf SubscriberAuthorStateFilterFlag::authorized {1, "authorized"};

const Enum::YLeaf SubscriberSrgOperFilterFlag::srg_none {0, "srg-none"};
const Enum::YLeaf SubscriberSrgOperFilterFlag::srg_master {16384, "srg-master"};
const Enum::YLeaf SubscriberSrgOperFilterFlag::srg_slave {65536, "srg-slave"};
const Enum::YLeaf SubscriberSrgOperFilterFlag::srg_both {81920, "srg-both"};

const Enum::YLeaf SubscriberAddressFamilyFilterFlag::ipv4_only {0, "ipv4-only"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlag::ipv6_only {1, "ipv6-only"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlag::ipv4_all {2, "ipv4-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlag::ipv6_all {3, "ipv6-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlag::dual_all {4, "dual-all"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlag::dual_part_up {5, "dual-part-up"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlag::dual_up {6, "dual-up"};
const Enum::YLeaf SubscriberAddressFamilyFilterFlag::lac {7, "lac"};

const Enum::YLeaf SubscriberStateFilterFlag::initializing {0, "initializing"};
const Enum::YLeaf SubscriberStateFilterFlag::connecting {1, "connecting"};
const Enum::YLeaf SubscriberStateFilterFlag::connected {2, "connected"};
const Enum::YLeaf SubscriberStateFilterFlag::activated {3, "activated"};
const Enum::YLeaf SubscriberStateFilterFlag::idle {4, "idle"};
const Enum::YLeaf SubscriberStateFilterFlag::disconnecting {5, "disconnecting"};
const Enum::YLeaf SubscriberStateFilterFlag::end {6, "end"};

const Enum::YLeaf SubscriberAuthenStateFilterFlag::un_authenticated {0, "un-authenticated"};
const Enum::YLeaf SubscriberAuthenStateFilterFlag::authenticated {1, "authenticated"};

const Enum::YLeaf IedgeOperServiceStatus::unknown {0, "unknown"};
const Enum::YLeaf IedgeOperServiceStatus::error {1, "error"};
const Enum::YLeaf IedgeOperServiceStatus::new_ {2, "new"};
const Enum::YLeaf IedgeOperServiceStatus::loading {3, "loading"};
const Enum::YLeaf IedgeOperServiceStatus::req_association {4, "req-association"};
const Enum::YLeaf IedgeOperServiceStatus::associated {5, "associated"};
const Enum::YLeaf IedgeOperServiceStatus::req_pd_association {6, "req-pd-association"};
const Enum::YLeaf IedgeOperServiceStatus::applied {7, "applied"};
const Enum::YLeaf IedgeOperServiceStatus::req_unassociation {8, "req-unassociation"};
const Enum::YLeaf IedgeOperServiceStatus::req_pd_unassociation {9, "req-pd-unassociation"};
const Enum::YLeaf IedgeOperServiceStatus::unapplied {10, "unapplied"};
const Enum::YLeaf IedgeOperServiceStatus::max {11, "max"};

const Enum::YLeaf IedgeOperService::unknown {0, "unknown"};
const Enum::YLeaf IedgeOperService::profile {1, "profile"};
const Enum::YLeaf IedgeOperService::template_ {2, "template"};
const Enum::YLeaf IedgeOperService::grp_template {3, "grp-template"};
const Enum::YLeaf IedgeOperService::ppp_template {4, "ppp-template"};
const Enum::YLeaf IedgeOperService::eth_template {5, "eth-template"};
const Enum::YLeaf IedgeOperService::ip_sub_template {6, "ip-sub-template"};
const Enum::YLeaf IedgeOperService::multi_template {7, "multi-template"};
const Enum::YLeaf IedgeOperService::max_templae {8, "max-templae"};

const Enum::YLeaf IedgeOperSessionState::initialize {0, "initialize"};
const Enum::YLeaf IedgeOperSessionState::connecting {1, "connecting"};
const Enum::YLeaf IedgeOperSessionState::connected {2, "connected"};
const Enum::YLeaf IedgeOperSessionState::activated {3, "activated"};
const Enum::YLeaf IedgeOperSessionState::idle {4, "idle"};
const Enum::YLeaf IedgeOperSessionState::disconnecting {5, "disconnecting"};
const Enum::YLeaf IedgeOperSessionState::end {6, "end"};

const Enum::YLeaf IedgePppSub::pta {0, "pta"};
const Enum::YLeaf IedgePppSub::lac {1, "lac"};

const Enum::YLeaf IedgeOperSession::unknown {0, "unknown"};
const Enum::YLeaf IedgeOperSession::pppoe {1, "pppoe"};
const Enum::YLeaf IedgeOperSession::ppp {2, "ppp"};
const Enum::YLeaf IedgeOperSession::ip_packet_trigger {3, "ip-packet-trigger"};
const Enum::YLeaf IedgeOperSession::ip_packet_dhcp_trigger {4, "ip-packet-dhcp-trigger"};


}
}

