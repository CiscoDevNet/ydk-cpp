
#include <sstream>
#include <iostream>
#include "ydk/entity_util.hpp"
#include "Cisco_IOS_XR_iedge4710_cfg.hpp"

namespace ydk {
namespace Cisco_IOS_XR_iedge4710_cfg {

SubscriberManager::Accounting::SendStop::SendStop()
    :
    	setup_failure{YType::str, "setup-failure"}
{
    yang_name = "send-stop"; yang_parent_name = "accounting";
}

SubscriberManager::Accounting::SendStop::~SendStop()
{
}

bool SubscriberManager::Accounting::SendStop::has_data() const
{
    return setup_failure.is_set;
}

bool SubscriberManager::Accounting::SendStop::has_operation() const
{
    return is_set(operation)
	|| is_set(setup_failure.operation);
}

std::string SubscriberManager::Accounting::SendStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send-stop";

    return path_buffer.str();

}

EntityPath SubscriberManager::Accounting::SendStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/accounting/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (setup_failure.is_set || is_set(setup_failure.operation)) leaf_name_data.push_back(setup_failure.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SubscriberManager::Accounting::SendStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & SubscriberManager::Accounting::SendStop::get_children()
{
    return children;
}

void SubscriberManager::Accounting::SendStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "setup-failure")
    {
        setup_failure = value;
    }
}

SubscriberManager::Accounting::Accounting()
    :
    send_stop(std::make_unique<SubscriberManager::Accounting::SendStop>())
{
    send_stop->parent = this;
    children["send-stop"] = send_stop.get();

    yang_name = "accounting"; yang_parent_name = "subscriber-manager";
}

SubscriberManager::Accounting::~Accounting()
{
}

bool SubscriberManager::Accounting::has_data() const
{
    return (send_stop !=  nullptr && send_stop->has_data());
}

bool SubscriberManager::Accounting::has_operation() const
{
    return is_set(operation)
	|| (send_stop !=  nullptr && is_set(send_stop->operation));
}

std::string SubscriberManager::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

EntityPath SubscriberManager::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* SubscriberManager::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "send-stop")
    {
        if(send_stop != nullptr)
        {
            children["send-stop"] = send_stop.get();
        }
        else
        {
            send_stop = std::make_unique<SubscriberManager::Accounting::SendStop>();
            send_stop->parent = this;
            children["send-stop"] = send_stop.get();
        }
        return children.at("send-stop");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SubscriberManager::Accounting::get_children()
{
    if(children.find("send-stop") == children.end())
    {
        if(send_stop != nullptr)
        {
            children["send-stop"] = send_stop.get();
        }
    }

    return children;
}

void SubscriberManager::Accounting::set_value(const std::string & value_path, std::string value)
{
}

SubscriberManager::SubscriberManager()
    :
    accounting(std::make_unique<SubscriberManager::Accounting>())
{
    accounting->parent = this;
    children["accounting"] = accounting.get();

    yang_name = "subscriber-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg";
}

SubscriberManager::~SubscriberManager()
{
}

bool SubscriberManager::has_data() const
{
    return (accounting !=  nullptr && accounting->has_data());
}

bool SubscriberManager::has_operation() const
{
    return is_set(operation)
	|| (accounting !=  nullptr && is_set(accounting->operation));
}

std::string SubscriberManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:subscriber-manager";

    return path_buffer.str();

}

EntityPath SubscriberManager::get_entity_path(Entity* ancestor) const
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

Entity* SubscriberManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "accounting")
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
        else
        {
            accounting = std::make_unique<SubscriberManager::Accounting>();
            accounting->parent = this;
            children["accounting"] = accounting.get();
        }
        return children.at("accounting");
    }

    return nullptr;
}

std::map<std::string, Entity*> & SubscriberManager::get_children()
{
    if(children.find("accounting") == children.end())
    {
        if(accounting != nullptr)
        {
            children["accounting"] = accounting.get();
        }
    }

    return children;
}

void SubscriberManager::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> SubscriberManager::clone_ptr()
{
    return std::make_unique<SubscriberManager>();
}
IedgeLicenseManager::Node::Node()
    :
    	node_name{YType::str, "node-name"},
	 session_limit{YType::int32, "session-limit"},
	 session_threshold{YType::int32, "session-threshold"}
{
    yang_name = "node"; yang_parent_name = "iedge-license-manager";
}

IedgeLicenseManager::Node::~Node()
{
}

bool IedgeLicenseManager::Node::has_data() const
{
    return node_name.is_set
	|| session_limit.is_set
	|| session_threshold.is_set;
}

bool IedgeLicenseManager::Node::has_operation() const
{
    return is_set(operation)
	|| is_set(node_name.operation)
	|| is_set(session_limit.operation)
	|| is_set(session_threshold.operation);
}

std::string IedgeLicenseManager::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name.get() <<"']";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-iedge4710-cfg:iedge-license-manager/" << get_segment_path();
    }
    else
    {
        get_relative_entity_path(this, ancestor, path_buffer);
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.operation)) leaf_name_data.push_back(node_name.get_name_leafdata());
    if (session_limit.is_set || is_set(session_limit.operation)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (session_threshold.is_set || is_set(session_threshold.operation)) leaf_name_data.push_back(session_threshold.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

Entity* IedgeLicenseManager::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, Entity*> & IedgeLicenseManager::Node::get_children()
{
    return children;
}

void IedgeLicenseManager::Node::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "node-name")
    {
        node_name = value;
    }
    if(value_path == "session-limit")
    {
        session_limit = value;
    }
    if(value_path == "session-threshold")
    {
        session_threshold = value;
    }
}

IedgeLicenseManager::IedgeLicenseManager()
{
    yang_name = "iedge-license-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-cfg";
}

IedgeLicenseManager::~IedgeLicenseManager()
{
}

bool IedgeLicenseManager::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool IedgeLicenseManager::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string IedgeLicenseManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-cfg:iedge-license-manager";

    return path_buffer.str();

}

EntityPath IedgeLicenseManager::get_entity_path(Entity* ancestor) const
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

Entity* IedgeLicenseManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_unique<IedgeLicenseManager::Node>();
        c->parent = this;
        node.push_back(std::move(c));
        children[segment_path] = node.back().get();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, Entity*> & IedgeLicenseManager::get_children()
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

void IedgeLicenseManager::set_value(const std::string & value_path, std::string value)
{
}

std::unique_ptr<Entity> IedgeLicenseManager::clone_ptr()
{
    return std::make_unique<IedgeLicenseManager>();
}


}
}

