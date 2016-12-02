
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_infra_rmf_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_infra_rmf_oper {

Redundancy::Nodes::Node::Redundancy_::Groupinfo::Groupinfo()
    :
    	active{YType::str, "active"},
	 ha_state{YType::str, "ha-state"},
	 nsr_state{YType::str, "nsr-state"},
	 standby{YType::str, "standby"}
{
    yang_name = "groupinfo"; yang_parent_name = "redundancy";
}

Redundancy::Nodes::Node::Redundancy_::Groupinfo::~Groupinfo()
{
}

bool Redundancy::Nodes::Node::Redundancy_::Groupinfo::has_data() const
{
    return active.is_set
	|| ha_state.is_set
	|| nsr_state.is_set
	|| standby.is_set;
}

bool Redundancy::Nodes::Node::Redundancy_::Groupinfo::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(ha_state.operation)
	|| is_set(nsr_state.operation)
	|| is_set(standby.operation);
}

std::string Redundancy::Nodes::Node::Redundancy_::Groupinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groupinfo";

    return path_buffer.str();

}

EntityPath Redundancy::Nodes::Node::Redundancy_::Groupinfo::get_entity_path(Entity* ancestor) const
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

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ha_state.is_set || is_set(ha_state.operation)) leaf_name_data.push_back(ha_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (standby.is_set || is_set(standby.operation)) leaf_name_data.push_back(standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Redundancy::Nodes::Node::Redundancy_::Groupinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Redundancy::Nodes::Node::Redundancy_::Groupinfo::get_children()
{
    return children;
}

void Redundancy::Nodes::Node::Redundancy_::Groupinfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "ha-state")
    {
        ha_state = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "standby")
    {
        standby = value;
    }
}

Redundancy::Nodes::Node::Redundancy_::Redundancy_()
    :
    	active{YType::str, "active"},
	 ha_state{YType::str, "ha-state"},
	 nsr_state{YType::str, "nsr-state"},
	 standby{YType::str, "standby"}
{
    yang_name = "redundancy"; yang_parent_name = "node";
}

Redundancy::Nodes::Node::Redundancy_::~Redundancy_()
{
}

bool Redundancy::Nodes::Node::Redundancy_::has_data() const
{
    for (std::size_t index=0; index<groupinfo.size(); index++)
    {
        if(groupinfo[index]->has_data())
            return true;
    }
    return active.is_set
	|| ha_state.is_set
	|| nsr_state.is_set
	|| standby.is_set;
}

bool Redundancy::Nodes::Node::Redundancy_::has_operation() const
{
    for (std::size_t index=0; index<groupinfo.size(); index++)
    {
        if(groupinfo[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(ha_state.operation)
	|| is_set(nsr_state.operation)
	|| is_set(standby.operation);
}

std::string Redundancy::Nodes::Node::Redundancy_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

EntityPath Redundancy::Nodes::Node::Redundancy_::get_entity_path(Entity* ancestor) const
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

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ha_state.is_set || is_set(ha_state.operation)) leaf_name_data.push_back(ha_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (standby.is_set || is_set(standby.operation)) leaf_name_data.push_back(standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Redundancy::Nodes::Node::Redundancy_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groupinfo")
    {
        for(auto const & c : groupinfo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Redundancy::Nodes::Node::Redundancy_::Groupinfo>();
        c->parent = this;
        groupinfo.push_back(std::move(c));
        children[segment_path] = groupinfo.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Redundancy::Nodes::Node::Redundancy_::get_children()
{
    for (auto const & c : groupinfo)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Redundancy::Nodes::Node::Redundancy_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "ha-state")
    {
        ha_state = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "standby")
    {
        standby = value;
    }
}

Redundancy::Nodes::Node::Node()
    :
    	node_id{YType::str, "node-id"},
	 active_reboot_reason{YType::str, "active-reboot-reason"},
	 err_log{YType::str, "err-log"},
	 log{YType::str, "log"},
	 standby_reboot_reason{YType::str, "standby-reboot-reason"}
    	,
    redundancy(std::make_unique<Redundancy::Nodes::Node::Redundancy_>())
{
    redundancy->parent = this;
    children["redundancy"] = redundancy.get();

    yang_name = "node"; yang_parent_name = "nodes";
}

Redundancy::Nodes::Node::~Node()
{
}

bool Redundancy::Nodes::Node::has_data() const
{
    return node_id.is_set
	|| active_reboot_reason.is_set
	|| err_log.is_set
	|| log.is_set
	|| standby_reboot_reason.is_set
	|| (redundancy !=  nullptr && redundancy->has_data());
}

bool Redundancy::Nodes::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_id.operation)
	|| is_set(active_reboot_reason.operation)
	|| is_set(err_log.operation)
	|| is_set(log.operation)
	|| is_set(standby_reboot_reason.operation)
	|| (redundancy !=  nullptr && is_set(redundancy->operation));
}

std::string Redundancy::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-id='" <<node_id.get() <<"']";

    return path_buffer.str();

}

EntityPath Redundancy::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/nodes/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_id.is_set || is_set(node_id.operation)) leaf_name_data.push_back(node_id.get_name_leafdata());
    if (active_reboot_reason.is_set || is_set(active_reboot_reason.operation)) leaf_name_data.push_back(active_reboot_reason.get_name_leafdata());
    if (err_log.is_set || is_set(err_log.operation)) leaf_name_data.push_back(err_log.get_name_leafdata());
    if (log.is_set || is_set(log.operation)) leaf_name_data.push_back(log.get_name_leafdata());
    if (standby_reboot_reason.is_set || is_set(standby_reboot_reason.operation)) leaf_name_data.push_back(standby_reboot_reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Redundancy::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "redundancy")
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy.get();
        }
        else
        {
            redundancy = std::make_unique<Redundancy::Nodes::Node::Redundancy_>();
            redundancy->parent = this;
            children["redundancy"] = redundancy.get();
        }
        return children.at("redundancy");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Redundancy::Nodes::Node::get_children()
{
    if(children.find("redundancy") == children.end())
    {
        if(redundancy != nullptr)
        {
            children["redundancy"] = redundancy.get();
        }
    }

    return children;
}

void Redundancy::Nodes::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-id")
    {
        node_id = value;
    }
    if(value_path == "active-reboot-reason")
    {
        active_reboot_reason = value;
    }
    if(value_path == "err-log")
    {
        err_log = value;
    }
    if(value_path == "log")
    {
        log = value;
    }
    if(value_path == "standby-reboot-reason")
    {
        standby_reboot_reason = value;
    }
}

Redundancy::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "redundancy";
}

Redundancy::Nodes::~Nodes()
{
}

bool Redundancy::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Redundancy::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Redundancy::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

EntityPath Redundancy::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Redundancy::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<Redundancy::Nodes::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Redundancy::Nodes::get_children()
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

void Redundancy::Nodes::set_value(const std::string & value_path, std::string value)
{
}

Redundancy::Summary::RedPair::Groupinfo::Groupinfo()
    :
    	active{YType::str, "active"},
	 ha_state{YType::str, "ha-state"},
	 nsr_state{YType::str, "nsr-state"},
	 standby{YType::str, "standby"}
{
    yang_name = "groupinfo"; yang_parent_name = "red-pair";
}

Redundancy::Summary::RedPair::Groupinfo::~Groupinfo()
{
}

bool Redundancy::Summary::RedPair::Groupinfo::has_data() const
{
    return active.is_set
	|| ha_state.is_set
	|| nsr_state.is_set
	|| standby.is_set;
}

bool Redundancy::Summary::RedPair::Groupinfo::has_operation() const
{
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(ha_state.operation)
	|| is_set(nsr_state.operation)
	|| is_set(standby.operation);
}

std::string Redundancy::Summary::RedPair::Groupinfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groupinfo";

    return path_buffer.str();

}

EntityPath Redundancy::Summary::RedPair::Groupinfo::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/summary/red-pair/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ha_state.is_set || is_set(ha_state.operation)) leaf_name_data.push_back(ha_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (standby.is_set || is_set(standby.operation)) leaf_name_data.push_back(standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Redundancy::Summary::RedPair::Groupinfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & Redundancy::Summary::RedPair::Groupinfo::get_children()
{
    return children;
}

void Redundancy::Summary::RedPair::Groupinfo::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "ha-state")
    {
        ha_state = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "standby")
    {
        standby = value;
    }
}

Redundancy::Summary::RedPair::RedPair()
    :
    	active{YType::str, "active"},
	 ha_state{YType::str, "ha-state"},
	 nsr_state{YType::str, "nsr-state"},
	 standby{YType::str, "standby"}
{
    yang_name = "red-pair"; yang_parent_name = "summary";
}

Redundancy::Summary::RedPair::~RedPair()
{
}

bool Redundancy::Summary::RedPair::has_data() const
{
    for (std::size_t index=0; index<groupinfo.size(); index++)
    {
        if(groupinfo[index]->has_data())
            return true;
    }
    return active.is_set
	|| ha_state.is_set
	|| nsr_state.is_set
	|| standby.is_set;
}

bool Redundancy::Summary::RedPair::has_operation() const
{
    for (std::size_t index=0; index<groupinfo.size(); index++)
    {
        if(groupinfo[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(active.operation)
	|| is_set(ha_state.operation)
	|| is_set(nsr_state.operation)
	|| is_set(standby.operation);
}

std::string Redundancy::Summary::RedPair::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "red-pair";

    return path_buffer.str();

}

EntityPath Redundancy::Summary::RedPair::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/summary/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active.is_set || is_set(active.operation)) leaf_name_data.push_back(active.get_name_leafdata());
    if (ha_state.is_set || is_set(ha_state.operation)) leaf_name_data.push_back(ha_state.get_name_leafdata());
    if (nsr_state.is_set || is_set(nsr_state.operation)) leaf_name_data.push_back(nsr_state.get_name_leafdata());
    if (standby.is_set || is_set(standby.operation)) leaf_name_data.push_back(standby.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Redundancy::Summary::RedPair::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groupinfo")
    {
        for(auto const & c : groupinfo)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Redundancy::Summary::RedPair::Groupinfo>();
        c->parent = this;
        groupinfo.push_back(std::move(c));
        children[segment_path] = groupinfo.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Redundancy::Summary::RedPair::get_children()
{
    for (auto const & c : groupinfo)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Redundancy::Summary::RedPair::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active")
    {
        active = value;
    }
    if(value_path == "ha-state")
    {
        ha_state = value;
    }
    if(value_path == "nsr-state")
    {
        nsr_state = value;
    }
    if(value_path == "standby")
    {
        standby = value;
    }
}

Redundancy::Summary::Summary()
    :
    	err_log{YType::str, "err-log"}
{
    yang_name = "summary"; yang_parent_name = "redundancy";
}

Redundancy::Summary::~Summary()
{
}

bool Redundancy::Summary::has_data() const
{
    for (std::size_t index=0; index<red_pair.size(); index++)
    {
        if(red_pair[index]->has_data())
            return true;
    }
    return err_log.is_set;
}

bool Redundancy::Summary::has_operation() const
{
    for (std::size_t index=0; index<red_pair.size(); index++)
    {
        if(red_pair[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(err_log.operation);
}

std::string Redundancy::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Redundancy::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (err_log.is_set || is_set(err_log.operation)) leaf_name_data.push_back(err_log.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* Redundancy::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "red-pair")
    {
        for(auto const & c : red_pair)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c.get();
                return children.at(segment_path);
            }
        }
        auto c = std::make_unique<Redundancy::Summary::RedPair>();
        c->parent = this;
        red_pair.push_back(std::move(c));
        children[segment_path] = red_pair.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & Redundancy::Summary::get_children()
{
    for (auto const & c : red_pair)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c.get();
        }
    }

    return children;
}

void Redundancy::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "err-log")
    {
        err_log = value;
    }
}

Redundancy::Redundancy()
    :
    nodes(std::make_unique<Redundancy::Nodes>())
	,summary(std::make_unique<Redundancy::Summary>())
{
    nodes->parent = this;
    children["nodes"] = nodes.get();

    summary->parent = this;
    children["summary"] = summary.get();

    yang_name = "redundancy"; yang_parent_name = "Cisco-IOS-XR-infra-rmf-oper";
}

Redundancy::~Redundancy()
{
}

bool Redundancy::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Redundancy::has_operation() const
{
    return is_set(operation)
	|| (nodes !=  nullptr && is_set(nodes->operation))
	|| (summary !=  nullptr && is_set(summary->operation));
}

std::string Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-infra-rmf-oper:redundancy";

    return path_buffer.str();

}

EntityPath Redundancy::get_entity_path(Entity* ancestor) const
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

Entity* Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
            nodes = std::make_unique<Redundancy::Nodes>();
            nodes->parent = this;
            children["nodes"] = nodes.get();
        }
        return children.at("nodes");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
        else
        {
            summary = std::make_unique<Redundancy::Summary>();
            summary->parent = this;
            children["summary"] = summary.get();
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, Entity*> & Redundancy::get_children()
{
    if(children.find("nodes") == children.end())
    {
        if(nodes != nullptr)
        {
            children["nodes"] = nodes.get();
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary.get();
        }
    }

    return children;
}

void Redundancy::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> Redundancy::clone_ptr()
{
    return std::make_unique<Redundancy>();
}


}
}

