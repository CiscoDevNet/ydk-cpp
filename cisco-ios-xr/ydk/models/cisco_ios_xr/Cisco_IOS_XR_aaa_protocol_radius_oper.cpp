
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_aaa_protocol_radius_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_aaa_protocol_radius_oper {

Radius::Radius()
    :
    nodes(std::make_shared<Radius::Nodes>())
{
    nodes->parent = this;

    yang_name = "radius"; yang_parent_name = "Cisco-IOS-XR-aaa-protocol-radius-oper";
}

Radius::~Radius()
{
}

bool Radius::has_data() const
{
    return (nodes !=  nullptr && nodes->has_data());
}

bool Radius::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-oper:radius";

    return path_buffer.str();

}

const EntityPath Radius::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<Radius::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nodes != nullptr)
    {
        children["nodes"] = nodes;
    }

    return children;
}

void Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<Entity> Radius::clone_ptr() const
{
    return std::make_shared<Radius>();
}

std::string Radius::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Radius::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Radius::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> Radius::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Radius::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

Radius::Nodes::Nodes()
{
    yang_name = "nodes"; yang_parent_name = "radius";
}

Radius::Nodes::~Nodes()
{
}

bool Radius::Nodes::has_data() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.size(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Radius::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-oper:radius/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Radius::Nodes::Node>();
        c->parent = this;
        node.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : node)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Radius::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Radius::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

Radius::Nodes::Node::Node()
    :
    node_name{YType::str, "node-name"}
    	,
    accounting(std::make_shared<Radius::Nodes::Node::Accounting>())
	,authentication(std::make_shared<Radius::Nodes::Node::Authentication>())
	,client(std::make_shared<Radius::Nodes::Node::Client>())
	,dead_criteria(std::make_shared<Radius::Nodes::Node::DeadCriteria>())
	,dynamic_authorization(std::make_shared<Radius::Nodes::Node::DynamicAuthorization>())
	,server_groups(std::make_shared<Radius::Nodes::Node::ServerGroups>())
{
    accounting->parent = this;

    authentication->parent = this;

    client->parent = this;

    dead_criteria->parent = this;

    dynamic_authorization->parent = this;

    server_groups->parent = this;

    yang_name = "node"; yang_parent_name = "nodes";
}

Radius::Nodes::Node::~Node()
{
}

bool Radius::Nodes::Node::has_data() const
{
    return node_name.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (client !=  nullptr && client->has_data())
	|| (dead_criteria !=  nullptr && dead_criteria->has_data())
	|| (dynamic_authorization !=  nullptr && dynamic_authorization->has_data())
	|| (server_groups !=  nullptr && server_groups->has_data());
}

bool Radius::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (client !=  nullptr && client->has_operation())
	|| (dead_criteria !=  nullptr && dead_criteria->has_operation())
	|| (dynamic_authorization !=  nullptr && dynamic_authorization->has_operation())
	|| (server_groups !=  nullptr && server_groups->has_operation());
}

std::string Radius::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node" <<"[node-name='" <<node_name <<"']";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-oper:radius/nodes/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Radius::Nodes::Node::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Radius::Nodes::Node::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Radius::Nodes::Node::Client>();
        }
        return client;
    }

    if(child_yang_name == "dead-criteria")
    {
        if(dead_criteria == nullptr)
        {
            dead_criteria = std::make_shared<Radius::Nodes::Node::DeadCriteria>();
        }
        return dead_criteria;
    }

    if(child_yang_name == "dynamic-authorization")
    {
        if(dynamic_authorization == nullptr)
        {
            dynamic_authorization = std::make_shared<Radius::Nodes::Node::DynamicAuthorization>();
        }
        return dynamic_authorization;
    }

    if(child_yang_name == "server-groups")
    {
        if(server_groups == nullptr)
        {
            server_groups = std::make_shared<Radius::Nodes::Node::ServerGroups>();
        }
        return server_groups;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(dead_criteria != nullptr)
    {
        children["dead-criteria"] = dead_criteria;
    }

    if(dynamic_authorization != nullptr)
    {
        children["dynamic-authorization"] = dynamic_authorization;
    }

    if(server_groups != nullptr)
    {
        children["server-groups"] = server_groups;
    }

    return children;
}

void Radius::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "node-name")
    {
        node_name = value;
        node_name.value_namespace = name_space;
        node_name.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "node-name")
    {
        node_name.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "client" || name == "dead-criteria" || name == "dynamic-authorization" || name == "server-groups" || name == "node-name")
        return true;
    return false;
}

Radius::Nodes::Node::Client::Client()
    :
    authentication_nas_id{YType::str, "authentication-nas-id"},
    unknown_accounting_responses{YType::uint32, "unknown-accounting-responses"},
    unknown_authentication_responses{YType::uint32, "unknown-authentication-responses"}
{
    yang_name = "client"; yang_parent_name = "node";
}

Radius::Nodes::Node::Client::~Client()
{
}

bool Radius::Nodes::Node::Client::has_data() const
{
    return authentication_nas_id.is_set
	|| unknown_accounting_responses.is_set
	|| unknown_authentication_responses.is_set;
}

bool Radius::Nodes::Node::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_nas_id.yfilter)
	|| ydk::is_set(unknown_accounting_responses.yfilter)
	|| ydk::is_set(unknown_authentication_responses.yfilter);
}

std::string Radius::Nodes::Node::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_nas_id.is_set || is_set(authentication_nas_id.yfilter)) leaf_name_data.push_back(authentication_nas_id.get_name_leafdata());
    if (unknown_accounting_responses.is_set || is_set(unknown_accounting_responses.yfilter)) leaf_name_data.push_back(unknown_accounting_responses.get_name_leafdata());
    if (unknown_authentication_responses.is_set || is_set(unknown_authentication_responses.yfilter)) leaf_name_data.push_back(unknown_authentication_responses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-nas-id")
    {
        authentication_nas_id = value;
        authentication_nas_id.value_namespace = name_space;
        authentication_nas_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-accounting-responses")
    {
        unknown_accounting_responses = value;
        unknown_accounting_responses.value_namespace = name_space;
        unknown_accounting_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-authentication-responses")
    {
        unknown_authentication_responses = value;
        unknown_authentication_responses.value_namespace = name_space;
        unknown_authentication_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-nas-id")
    {
        authentication_nas_id.yfilter = yfilter;
    }
    if(value_path == "unknown-accounting-responses")
    {
        unknown_accounting_responses.yfilter = yfilter;
    }
    if(value_path == "unknown-authentication-responses")
    {
        unknown_authentication_responses.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-nas-id" || name == "unknown-accounting-responses" || name == "unknown-authentication-responses")
        return true;
    return false;
}

Radius::Nodes::Node::DeadCriteria::DeadCriteria()
    :
    hosts(std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts>())
{
    hosts->parent = this;

    yang_name = "dead-criteria"; yang_parent_name = "node";
}

Radius::Nodes::Node::DeadCriteria::~DeadCriteria()
{
}

bool Radius::Nodes::Node::DeadCriteria::has_data() const
{
    return (hosts !=  nullptr && hosts->has_data());
}

bool Radius::Nodes::Node::DeadCriteria::has_operation() const
{
    return is_set(yfilter)
	|| (hosts !=  nullptr && hosts->has_operation());
}

std::string Radius::Nodes::Node::DeadCriteria::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-criteria";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::DeadCriteria::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadCriteria' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "hosts")
    {
        if(hosts == nullptr)
        {
            hosts = std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts>();
        }
        return hosts;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::DeadCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(hosts != nullptr)
    {
        children["hosts"] = hosts;
    }

    return children;
}

void Radius::Nodes::Node::DeadCriteria::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::Nodes::Node::DeadCriteria::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Radius::Nodes::Node::DeadCriteria::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "hosts")
        return true;
    return false;
}

Radius::Nodes::Node::DeadCriteria::Hosts::Hosts()
{
    yang_name = "hosts"; yang_parent_name = "dead-criteria";
}

Radius::Nodes::Node::DeadCriteria::Hosts::~Hosts()
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::has_data() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.size(); index++)
    {
        if(host[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Radius::Nodes::Node::DeadCriteria::Hosts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "hosts";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::DeadCriteria::Hosts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Hosts' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::DeadCriteria::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        for(auto const & c : host)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts::Host>();
        c->parent = this;
        host.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::DeadCriteria::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : host)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Radius::Nodes::Node::DeadCriteria::Hosts::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::Nodes::Node::DeadCriteria::Hosts::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "host")
        return true;
    return false;
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Host()
    :
    acct_port_number{YType::uint32, "acct-port-number"},
    auth_port_number{YType::uint32, "auth-port-number"},
    ip_address{YType::str, "ip-address"}
    	,
    time(std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time>())
	,tries(std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries>())
{
    time->parent = this;

    tries->parent = this;

    yang_name = "host"; yang_parent_name = "hosts";
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::~Host()
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::has_data() const
{
    return acct_port_number.is_set
	|| auth_port_number.is_set
	|| ip_address.is_set
	|| (time !=  nullptr && time->has_data())
	|| (tries !=  nullptr && tries->has_data());
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_port_number.yfilter)
	|| ydk::is_set(auth_port_number.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| (time !=  nullptr && time->has_operation())
	|| (tries !=  nullptr && tries->has_operation());
}

std::string Radius::Nodes::Node::DeadCriteria::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::DeadCriteria::Hosts::Host::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Host' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_port_number.is_set || is_set(acct_port_number.yfilter)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.yfilter)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::DeadCriteria::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time>();
        }
        return time;
    }

    if(child_yang_name == "tries")
    {
        if(tries == nullptr)
        {
            tries = std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries>();
        }
        return tries;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::DeadCriteria::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(time != nullptr)
    {
        children["time"] = time;
    }

    if(tries != nullptr)
    {
        children["tries"] = tries;
    }

    return children;
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
        acct_port_number.value_namespace = name_space;
        acct_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
        auth_port_number.value_namespace = name_space;
        auth_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-port-number")
    {
        acct_port_number.yfilter = yfilter;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "tries" || name == "acct-port-number" || name == "auth-port-number" || name == "ip-address")
        return true;
    return false;
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::Time()
    :
    is_computed{YType::boolean, "is-computed"},
    value_{YType::uint32, "value"}
{
    yang_name = "time"; yang_parent_name = "host";
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::~Time()
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::has_data() const
{
    return is_computed.is_set
	|| value_.is_set;
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_computed.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_computed.is_set || is_set(is_computed.yfilter)) leaf_name_data.push_back(is_computed.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-computed")
    {
        is_computed = value;
        is_computed.value_namespace = name_space;
        is_computed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-computed")
    {
        is_computed.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-computed" || name == "value")
        return true;
    return false;
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::Tries()
    :
    is_computed{YType::boolean, "is-computed"},
    value_{YType::uint32, "value"}
{
    yang_name = "tries"; yang_parent_name = "host";
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::~Tries()
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::has_data() const
{
    return is_computed.is_set
	|| value_.is_set;
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(is_computed.yfilter)
	|| ydk::is_set(value_.yfilter);
}

std::string Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tries";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tries' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (is_computed.is_set || is_set(is_computed.yfilter)) leaf_name_data.push_back(is_computed.get_name_leafdata());
    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "is-computed")
    {
        is_computed = value;
        is_computed.value_namespace = name_space;
        is_computed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "is-computed")
    {
        is_computed.yfilter = yfilter;
    }
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "is-computed" || name == "value")
        return true;
    return false;
}

Radius::Nodes::Node::Authentication::Authentication()
{
    yang_name = "authentication"; yang_parent_name = "node";
}

Radius::Nodes::Node::Authentication::~Authentication()
{
}

bool Radius::Nodes::Node::Authentication::has_data() const
{
    for (std::size_t index=0; index<authentication_group.size(); index++)
    {
        if(authentication_group[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::Authentication::has_operation() const
{
    for (std::size_t index=0; index<authentication_group.size(); index++)
    {
        if(authentication_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Radius::Nodes::Node::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-group")
    {
        for(auto const & c : authentication_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Radius::Nodes::Node::Authentication::AuthenticationGroup>();
        c->parent = this;
        authentication_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : authentication_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Radius::Nodes::Node::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::Nodes::Node::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Radius::Nodes::Node::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-group")
        return true;
    return false;
}

Radius::Nodes::Node::Authentication::AuthenticationGroup::AuthenticationGroup()
    :
    family{YType::str, "family"},
    ip_address{YType::str, "ip-address"},
    port{YType::uint32, "port"},
    server_address{YType::str, "server-address"}
    	,
    authentication(std::make_shared<Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_>())
{
    authentication->parent = this;

    yang_name = "authentication-group"; yang_parent_name = "authentication";
}

Radius::Nodes::Node::Authentication::AuthenticationGroup::~AuthenticationGroup()
{
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::has_data() const
{
    return family.is_set
	|| ip_address.is_set
	|| port.is_set
	|| server_address.is_set
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(server_address.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Radius::Nodes::Node::Authentication::AuthenticationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-group";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::Authentication::AuthenticationGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationGroup' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (family.is_set || is_set(family.yfilter)) leaf_name_data.push_back(family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::Authentication::AuthenticationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::Authentication::AuthenticationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Radius::Nodes::Node::Authentication::AuthenticationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "family")
    {
        family = value;
        family.value_namespace = name_space;
        family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Authentication::AuthenticationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "family")
    {
        family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "family" || name == "ip-address" || name == "port" || name == "server-address")
        return true;
    return false;
}

Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::Authentication_()
    :
    access_accepts{YType::uint32, "access-accepts"},
    access_challenges{YType::uint32, "access-challenges"},
    access_rejects{YType::uint32, "access-rejects"},
    access_request_retransmits{YType::uint32, "access-request-retransmits"},
    access_requests{YType::uint32, "access-requests"},
    access_timeouts{YType::uint32, "access-timeouts"},
    authen_incorrect_responses{YType::uint32, "authen-incorrect-responses"},
    authen_response_time{YType::uint32, "authen-response-time"},
    authen_server_error_responses{YType::uint32, "authen-server-error-responses"},
    authen_transaction_failure{YType::uint32, "authen-transaction-failure"},
    authen_transaction_successess{YType::uint32, "authen-transaction-successess"},
    authen_unexpected_responses{YType::uint32, "authen-unexpected-responses"},
    bad_access_authenticators{YType::uint32, "bad-access-authenticators"},
    bad_access_responses{YType::uint32, "bad-access-responses"},
    dropped_access_responses{YType::uint32, "dropped-access-responses"},
    pending_access_requests{YType::uint32, "pending-access-requests"},
    rtt{YType::uint32, "rtt"},
    unknown_access_types{YType::uint32, "unknown-access-types"}
{
    yang_name = "authentication"; yang_parent_name = "authentication-group";
}

Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::~Authentication_()
{
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::has_data() const
{
    return access_accepts.is_set
	|| access_challenges.is_set
	|| access_rejects.is_set
	|| access_request_retransmits.is_set
	|| access_requests.is_set
	|| access_timeouts.is_set
	|| authen_incorrect_responses.is_set
	|| authen_response_time.is_set
	|| authen_server_error_responses.is_set
	|| authen_transaction_failure.is_set
	|| authen_transaction_successess.is_set
	|| authen_unexpected_responses.is_set
	|| bad_access_authenticators.is_set
	|| bad_access_responses.is_set
	|| dropped_access_responses.is_set
	|| pending_access_requests.is_set
	|| rtt.is_set
	|| unknown_access_types.is_set;
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_accepts.yfilter)
	|| ydk::is_set(access_challenges.yfilter)
	|| ydk::is_set(access_rejects.yfilter)
	|| ydk::is_set(access_request_retransmits.yfilter)
	|| ydk::is_set(access_requests.yfilter)
	|| ydk::is_set(access_timeouts.yfilter)
	|| ydk::is_set(authen_incorrect_responses.yfilter)
	|| ydk::is_set(authen_response_time.yfilter)
	|| ydk::is_set(authen_server_error_responses.yfilter)
	|| ydk::is_set(authen_transaction_failure.yfilter)
	|| ydk::is_set(authen_transaction_successess.yfilter)
	|| ydk::is_set(authen_unexpected_responses.yfilter)
	|| ydk::is_set(bad_access_authenticators.yfilter)
	|| ydk::is_set(bad_access_responses.yfilter)
	|| ydk::is_set(dropped_access_responses.yfilter)
	|| ydk::is_set(pending_access_requests.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(unknown_access_types.yfilter);
}

std::string Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication_' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_accepts.is_set || is_set(access_accepts.yfilter)) leaf_name_data.push_back(access_accepts.get_name_leafdata());
    if (access_challenges.is_set || is_set(access_challenges.yfilter)) leaf_name_data.push_back(access_challenges.get_name_leafdata());
    if (access_rejects.is_set || is_set(access_rejects.yfilter)) leaf_name_data.push_back(access_rejects.get_name_leafdata());
    if (access_request_retransmits.is_set || is_set(access_request_retransmits.yfilter)) leaf_name_data.push_back(access_request_retransmits.get_name_leafdata());
    if (access_requests.is_set || is_set(access_requests.yfilter)) leaf_name_data.push_back(access_requests.get_name_leafdata());
    if (access_timeouts.is_set || is_set(access_timeouts.yfilter)) leaf_name_data.push_back(access_timeouts.get_name_leafdata());
    if (authen_incorrect_responses.is_set || is_set(authen_incorrect_responses.yfilter)) leaf_name_data.push_back(authen_incorrect_responses.get_name_leafdata());
    if (authen_response_time.is_set || is_set(authen_response_time.yfilter)) leaf_name_data.push_back(authen_response_time.get_name_leafdata());
    if (authen_server_error_responses.is_set || is_set(authen_server_error_responses.yfilter)) leaf_name_data.push_back(authen_server_error_responses.get_name_leafdata());
    if (authen_transaction_failure.is_set || is_set(authen_transaction_failure.yfilter)) leaf_name_data.push_back(authen_transaction_failure.get_name_leafdata());
    if (authen_transaction_successess.is_set || is_set(authen_transaction_successess.yfilter)) leaf_name_data.push_back(authen_transaction_successess.get_name_leafdata());
    if (authen_unexpected_responses.is_set || is_set(authen_unexpected_responses.yfilter)) leaf_name_data.push_back(authen_unexpected_responses.get_name_leafdata());
    if (bad_access_authenticators.is_set || is_set(bad_access_authenticators.yfilter)) leaf_name_data.push_back(bad_access_authenticators.get_name_leafdata());
    if (bad_access_responses.is_set || is_set(bad_access_responses.yfilter)) leaf_name_data.push_back(bad_access_responses.get_name_leafdata());
    if (dropped_access_responses.is_set || is_set(dropped_access_responses.yfilter)) leaf_name_data.push_back(dropped_access_responses.get_name_leafdata());
    if (pending_access_requests.is_set || is_set(pending_access_requests.yfilter)) leaf_name_data.push_back(pending_access_requests.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (unknown_access_types.is_set || is_set(unknown_access_types.yfilter)) leaf_name_data.push_back(unknown_access_types.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-accepts")
    {
        access_accepts = value;
        access_accepts.value_namespace = name_space;
        access_accepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-challenges")
    {
        access_challenges = value;
        access_challenges.value_namespace = name_space;
        access_challenges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-rejects")
    {
        access_rejects = value;
        access_rejects.value_namespace = name_space;
        access_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits = value;
        access_request_retransmits.value_namespace = name_space;
        access_request_retransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-requests")
    {
        access_requests = value;
        access_requests.value_namespace = name_space;
        access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts = value;
        access_timeouts.value_namespace = name_space;
        access_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses = value;
        authen_incorrect_responses.value_namespace = name_space;
        authen_incorrect_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-response-time")
    {
        authen_response_time = value;
        authen_response_time.value_namespace = name_space;
        authen_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses = value;
        authen_server_error_responses.value_namespace = name_space;
        authen_server_error_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure = value;
        authen_transaction_failure.value_namespace = name_space;
        authen_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess = value;
        authen_transaction_successess.value_namespace = name_space;
        authen_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses = value;
        authen_unexpected_responses.value_namespace = name_space;
        authen_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators = value;
        bad_access_authenticators.value_namespace = name_space;
        bad_access_authenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses = value;
        bad_access_responses.value_namespace = name_space;
        bad_access_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses = value;
        dropped_access_responses.value_namespace = name_space;
        dropped_access_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests = value;
        pending_access_requests.value_namespace = name_space;
        pending_access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types = value;
        unknown_access_types.value_namespace = name_space;
        unknown_access_types.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-accepts")
    {
        access_accepts.yfilter = yfilter;
    }
    if(value_path == "access-challenges")
    {
        access_challenges.yfilter = yfilter;
    }
    if(value_path == "access-rejects")
    {
        access_rejects.yfilter = yfilter;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits.yfilter = yfilter;
    }
    if(value_path == "access-requests")
    {
        access_requests.yfilter = yfilter;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts.yfilter = yfilter;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses.yfilter = yfilter;
    }
    if(value_path == "authen-response-time")
    {
        authen_response_time.yfilter = yfilter;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses.yfilter = yfilter;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators.yfilter = yfilter;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses.yfilter = yfilter;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses.yfilter = yfilter;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-accepts" || name == "access-challenges" || name == "access-rejects" || name == "access-request-retransmits" || name == "access-requests" || name == "access-timeouts" || name == "authen-incorrect-responses" || name == "authen-response-time" || name == "authen-server-error-responses" || name == "authen-transaction-failure" || name == "authen-transaction-successess" || name == "authen-unexpected-responses" || name == "bad-access-authenticators" || name == "bad-access-responses" || name == "dropped-access-responses" || name == "pending-access-requests" || name == "rtt" || name == "unknown-access-types")
        return true;
    return false;
}

Radius::Nodes::Node::Accounting::Accounting()
{
    yang_name = "accounting"; yang_parent_name = "node";
}

Radius::Nodes::Node::Accounting::~Accounting()
{
}

bool Radius::Nodes::Node::Accounting::has_data() const
{
    for (std::size_t index=0; index<accounting_group.size(); index++)
    {
        if(accounting_group[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::Accounting::has_operation() const
{
    for (std::size_t index=0; index<accounting_group.size(); index++)
    {
        if(accounting_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Radius::Nodes::Node::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-group")
    {
        for(auto const & c : accounting_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Radius::Nodes::Node::Accounting::AccountingGroup>();
        c->parent = this;
        accounting_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : accounting_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Radius::Nodes::Node::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::Nodes::Node::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Radius::Nodes::Node::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-group")
        return true;
    return false;
}

Radius::Nodes::Node::Accounting::AccountingGroup::AccountingGroup()
    :
    family{YType::str, "family"},
    ip_address{YType::str, "ip-address"},
    port{YType::uint32, "port"},
    server_address{YType::str, "server-address"}
    	,
    accounting(std::make_shared<Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_>())
{
    accounting->parent = this;

    yang_name = "accounting-group"; yang_parent_name = "accounting";
}

Radius::Nodes::Node::Accounting::AccountingGroup::~AccountingGroup()
{
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::has_data() const
{
    return family.is_set
	|| ip_address.is_set
	|| port.is_set
	|| server_address.is_set
	|| (accounting !=  nullptr && accounting->has_data());
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(server_address.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string Radius::Nodes::Node::Accounting::AccountingGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-group";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::Accounting::AccountingGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AccountingGroup' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (family.is_set || is_set(family.yfilter)) leaf_name_data.push_back(family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::Accounting::AccountingGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_>();
        }
        return accounting;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::Accounting::AccountingGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    return children;
}

void Radius::Nodes::Node::Accounting::AccountingGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "family")
    {
        family = value;
        family.value_namespace = name_space;
        family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Accounting::AccountingGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "family")
    {
        family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "family" || name == "ip-address" || name == "port" || name == "server-address")
        return true;
    return false;
}

Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::Accounting_()
    :
    acct_incorrect_responses{YType::uint32, "acct-incorrect-responses"},
    acct_response_time{YType::uint32, "acct-response-time"},
    acct_server_error_responses{YType::uint32, "acct-server-error-responses"},
    acct_transaction_failure{YType::uint32, "acct-transaction-failure"},
    acct_transaction_successess{YType::uint32, "acct-transaction-successess"},
    acct_unexpected_responses{YType::uint32, "acct-unexpected-responses"},
    bad_authenticators{YType::uint32, "bad-authenticators"},
    bad_responses{YType::uint32, "bad-responses"},
    dropped_responses{YType::uint32, "dropped-responses"},
    pending_requests{YType::uint32, "pending-requests"},
    requests{YType::uint32, "requests"},
    responses{YType::uint32, "responses"},
    retransmits{YType::uint32, "retransmits"},
    rtt{YType::uint32, "rtt"},
    timeouts{YType::uint32, "timeouts"},
    unknown_packet_types{YType::uint32, "unknown-packet-types"}
{
    yang_name = "accounting"; yang_parent_name = "accounting-group";
}

Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::~Accounting_()
{
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::has_data() const
{
    return acct_incorrect_responses.is_set
	|| acct_response_time.is_set
	|| acct_server_error_responses.is_set
	|| acct_transaction_failure.is_set
	|| acct_transaction_successess.is_set
	|| acct_unexpected_responses.is_set
	|| bad_authenticators.is_set
	|| bad_responses.is_set
	|| dropped_responses.is_set
	|| pending_requests.is_set
	|| requests.is_set
	|| responses.is_set
	|| retransmits.is_set
	|| rtt.is_set
	|| timeouts.is_set
	|| unknown_packet_types.is_set;
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_incorrect_responses.yfilter)
	|| ydk::is_set(acct_response_time.yfilter)
	|| ydk::is_set(acct_server_error_responses.yfilter)
	|| ydk::is_set(acct_transaction_failure.yfilter)
	|| ydk::is_set(acct_transaction_successess.yfilter)
	|| ydk::is_set(acct_unexpected_responses.yfilter)
	|| ydk::is_set(bad_authenticators.yfilter)
	|| ydk::is_set(bad_responses.yfilter)
	|| ydk::is_set(dropped_responses.yfilter)
	|| ydk::is_set(pending_requests.yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(responses.yfilter)
	|| ydk::is_set(retransmits.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(timeouts.yfilter)
	|| ydk::is_set(unknown_packet_types.yfilter);
}

std::string Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting_' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_incorrect_responses.is_set || is_set(acct_incorrect_responses.yfilter)) leaf_name_data.push_back(acct_incorrect_responses.get_name_leafdata());
    if (acct_response_time.is_set || is_set(acct_response_time.yfilter)) leaf_name_data.push_back(acct_response_time.get_name_leafdata());
    if (acct_server_error_responses.is_set || is_set(acct_server_error_responses.yfilter)) leaf_name_data.push_back(acct_server_error_responses.get_name_leafdata());
    if (acct_transaction_failure.is_set || is_set(acct_transaction_failure.yfilter)) leaf_name_data.push_back(acct_transaction_failure.get_name_leafdata());
    if (acct_transaction_successess.is_set || is_set(acct_transaction_successess.yfilter)) leaf_name_data.push_back(acct_transaction_successess.get_name_leafdata());
    if (acct_unexpected_responses.is_set || is_set(acct_unexpected_responses.yfilter)) leaf_name_data.push_back(acct_unexpected_responses.get_name_leafdata());
    if (bad_authenticators.is_set || is_set(bad_authenticators.yfilter)) leaf_name_data.push_back(bad_authenticators.get_name_leafdata());
    if (bad_responses.is_set || is_set(bad_responses.yfilter)) leaf_name_data.push_back(bad_responses.get_name_leafdata());
    if (dropped_responses.is_set || is_set(dropped_responses.yfilter)) leaf_name_data.push_back(dropped_responses.get_name_leafdata());
    if (pending_requests.is_set || is_set(pending_requests.yfilter)) leaf_name_data.push_back(pending_requests.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (responses.is_set || is_set(responses.yfilter)) leaf_name_data.push_back(responses.get_name_leafdata());
    if (retransmits.is_set || is_set(retransmits.yfilter)) leaf_name_data.push_back(retransmits.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.yfilter)) leaf_name_data.push_back(timeouts.get_name_leafdata());
    if (unknown_packet_types.is_set || is_set(unknown_packet_types.yfilter)) leaf_name_data.push_back(unknown_packet_types.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-incorrect-responses")
    {
        acct_incorrect_responses = value;
        acct_incorrect_responses.value_namespace = name_space;
        acct_incorrect_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-response-time")
    {
        acct_response_time = value;
        acct_response_time.value_namespace = name_space;
        acct_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-server-error-responses")
    {
        acct_server_error_responses = value;
        acct_server_error_responses.value_namespace = name_space;
        acct_server_error_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure = value;
        acct_transaction_failure.value_namespace = name_space;
        acct_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess = value;
        acct_transaction_successess.value_namespace = name_space;
        acct_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses = value;
        acct_unexpected_responses.value_namespace = name_space;
        acct_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-authenticators")
    {
        bad_authenticators = value;
        bad_authenticators.value_namespace = name_space;
        bad_authenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-responses")
    {
        bad_responses = value;
        bad_responses.value_namespace = name_space;
        bad_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-responses")
    {
        dropped_responses = value;
        dropped_responses.value_namespace = name_space;
        dropped_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-requests")
    {
        pending_requests = value;
        pending_requests.value_namespace = name_space;
        pending_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responses")
    {
        responses = value;
        responses.value_namespace = name_space;
        responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmits")
    {
        retransmits = value;
        retransmits.value_namespace = name_space;
        retransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
        timeouts.value_namespace = name_space;
        timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-packet-types")
    {
        unknown_packet_types = value;
        unknown_packet_types.value_namespace = name_space;
        unknown_packet_types.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-incorrect-responses")
    {
        acct_incorrect_responses.yfilter = yfilter;
    }
    if(value_path == "acct-response-time")
    {
        acct_response_time.yfilter = yfilter;
    }
    if(value_path == "acct-server-error-responses")
    {
        acct_server_error_responses.yfilter = yfilter;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "bad-authenticators")
    {
        bad_authenticators.yfilter = yfilter;
    }
    if(value_path == "bad-responses")
    {
        bad_responses.yfilter = yfilter;
    }
    if(value_path == "dropped-responses")
    {
        dropped_responses.yfilter = yfilter;
    }
    if(value_path == "pending-requests")
    {
        pending_requests.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "responses")
    {
        responses.yfilter = yfilter;
    }
    if(value_path == "retransmits")
    {
        retransmits.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "timeouts")
    {
        timeouts.yfilter = yfilter;
    }
    if(value_path == "unknown-packet-types")
    {
        unknown_packet_types.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-incorrect-responses" || name == "acct-response-time" || name == "acct-server-error-responses" || name == "acct-transaction-failure" || name == "acct-transaction-successess" || name == "acct-unexpected-responses" || name == "bad-authenticators" || name == "bad-responses" || name == "dropped-responses" || name == "pending-requests" || name == "requests" || name == "responses" || name == "retransmits" || name == "rtt" || name == "timeouts" || name == "unknown-packet-types")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroups()
{
    yang_name = "server-groups"; yang_parent_name = "node";
}

Radius::Nodes::Node::ServerGroups::~ServerGroups()
{
}

bool Radius::Nodes::Node::ServerGroups::has_data() const
{
    for (std::size_t index=0; index<server_group.size(); index++)
    {
        if(server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::ServerGroups::has_operation() const
{
    for (std::size_t index=0; index<server_group.size(); index++)
    {
        if(server_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-groups";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::ServerGroups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerGroups' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::ServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-group")
    {
        for(auto const & c : server_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup>();
        c->parent = this;
        server_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::ServerGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Radius::Nodes::Node::ServerGroups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::Nodes::Node::ServerGroups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Radius::Nodes::Node::ServerGroups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-group")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup()
    :
    server_group_name{YType::str, "server-group-name"},
    dead_time{YType::uint32, "dead-time"},
    groups{YType::uint32, "groups"},
    servers{YType::uint32, "servers"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "server-group"; yang_parent_name = "server-groups";
}

Radius::Nodes::Node::ServerGroups::ServerGroup::~ServerGroup()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::has_data() const
{
    for (std::size_t index=0; index<server_group.size(); index++)
    {
        if(server_group[index]->has_data())
            return true;
    }
    return server_group_name.is_set
	|| dead_time.is_set
	|| groups.is_set
	|| servers.is_set
	|| vrf_name.is_set;
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::has_operation() const
{
    for (std::size_t index=0; index<server_group.size(); index++)
    {
        if(server_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(server_group_name.yfilter)
	|| ydk::is_set(dead_time.yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(servers.yfilter)
	|| ydk::is_set(vrf_name.yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-group" <<"[server-group-name='" <<server_group_name <<"']";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::ServerGroups::ServerGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerGroup' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.yfilter)) leaf_name_data.push_back(server_group_name.get_name_leafdata());
    if (dead_time.is_set || is_set(dead_time.yfilter)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (servers.is_set || is_set(servers.yfilter)) leaf_name_data.push_back(servers.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-group")
    {
        for(auto const & c : server_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_>();
        c->parent = this;
        server_group.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : server_group)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-group-name")
    {
        server_group_name = value;
        server_group_name.value_namespace = name_space;
        server_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-time")
    {
        dead_time = value;
        dead_time.value_namespace = name_space;
        dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servers")
    {
        servers = value;
        servers.value_namespace = name_space;
        servers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
    if(value_path == "dead-time")
    {
        dead_time.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "servers")
    {
        servers.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-group" || name == "server-group-name" || name == "dead-time" || name == "groups" || name == "servers" || name == "vrf-name")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::ServerGroup_()
    :
    accounting_port{YType::uint32, "accounting-port"},
    authentication_port{YType::uint32, "authentication-port"},
    family{YType::str, "family"},
    ip_address{YType::str, "ip-address"},
    is_private{YType::boolean, "is-private"},
    server_address{YType::str, "server-address"}
    	,
    accounting(std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting>())
	,authentication(std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication>())
	,authorization(std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization>())
{
    accounting->parent = this;

    authentication->parent = this;

    authorization->parent = this;

    yang_name = "server-group"; yang_parent_name = "server-group";
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::~ServerGroup_()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::has_data() const
{
    return accounting_port.is_set
	|| authentication_port.is_set
	|| family.is_set
	|| ip_address.is_set
	|| is_private.is_set
	|| server_address.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data());
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting_port.yfilter)
	|| ydk::is_set(authentication_port.yfilter)
	|| ydk::is_set(family.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(is_private.yfilter)
	|| ydk::is_set(server_address.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-group";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerGroup_' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_port.is_set || is_set(accounting_port.yfilter)) leaf_name_data.push_back(accounting_port.get_name_leafdata());
    if (authentication_port.is_set || is_set(authentication_port.yfilter)) leaf_name_data.push_back(authentication_port.get_name_leafdata());
    if (family.is_set || is_set(family.yfilter)) leaf_name_data.push_back(family.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (is_private.is_set || is_set(is_private.yfilter)) leaf_name_data.push_back(is_private.get_name_leafdata());
    if (server_address.is_set || is_set(server_address.yfilter)) leaf_name_data.push_back(server_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization>();
        }
        return authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(authorization != nullptr)
    {
        children["authorization"] = authorization;
    }

    return children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting-port")
    {
        accounting_port = value;
        accounting_port.value_namespace = name_space;
        accounting_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-port")
    {
        authentication_port = value;
        authentication_port.value_namespace = name_space;
        authentication_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "family")
    {
        family = value;
        family.value_namespace = name_space;
        family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-private")
    {
        is_private = value;
        is_private.value_namespace = name_space;
        is_private.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "server-address")
    {
        server_address = value;
        server_address.value_namespace = name_space;
        server_address.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting-port")
    {
        accounting_port.yfilter = yfilter;
    }
    if(value_path == "authentication-port")
    {
        authentication_port.yfilter = yfilter;
    }
    if(value_path == "family")
    {
        family.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "is-private")
    {
        is_private.yfilter = yfilter;
    }
    if(value_path == "server-address")
    {
        server_address.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "authorization" || name == "accounting-port" || name == "authentication-port" || name == "family" || name == "ip-address" || name == "is-private" || name == "server-address")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::Accounting()
    :
    acct_incorrect_responses{YType::uint32, "acct-incorrect-responses"},
    acct_response_time{YType::uint32, "acct-response-time"},
    acct_server_error_responses{YType::uint32, "acct-server-error-responses"},
    acct_transaction_failure{YType::uint32, "acct-transaction-failure"},
    acct_transaction_successess{YType::uint32, "acct-transaction-successess"},
    acct_unexpected_responses{YType::uint32, "acct-unexpected-responses"},
    bad_authenticators{YType::uint32, "bad-authenticators"},
    bad_responses{YType::uint32, "bad-responses"},
    dropped_responses{YType::uint32, "dropped-responses"},
    pending_requests{YType::uint32, "pending-requests"},
    requests{YType::uint32, "requests"},
    responses{YType::uint32, "responses"},
    retransmits{YType::uint32, "retransmits"},
    rtt{YType::uint32, "rtt"},
    timeouts{YType::uint32, "timeouts"},
    unknown_packet_types{YType::uint32, "unknown-packet-types"}
{
    yang_name = "accounting"; yang_parent_name = "server-group";
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::~Accounting()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::has_data() const
{
    return acct_incorrect_responses.is_set
	|| acct_response_time.is_set
	|| acct_server_error_responses.is_set
	|| acct_transaction_failure.is_set
	|| acct_transaction_successess.is_set
	|| acct_unexpected_responses.is_set
	|| bad_authenticators.is_set
	|| bad_responses.is_set
	|| dropped_responses.is_set
	|| pending_requests.is_set
	|| requests.is_set
	|| responses.is_set
	|| retransmits.is_set
	|| rtt.is_set
	|| timeouts.is_set
	|| unknown_packet_types.is_set;
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(acct_incorrect_responses.yfilter)
	|| ydk::is_set(acct_response_time.yfilter)
	|| ydk::is_set(acct_server_error_responses.yfilter)
	|| ydk::is_set(acct_transaction_failure.yfilter)
	|| ydk::is_set(acct_transaction_successess.yfilter)
	|| ydk::is_set(acct_unexpected_responses.yfilter)
	|| ydk::is_set(bad_authenticators.yfilter)
	|| ydk::is_set(bad_responses.yfilter)
	|| ydk::is_set(dropped_responses.yfilter)
	|| ydk::is_set(pending_requests.yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(responses.yfilter)
	|| ydk::is_set(retransmits.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(timeouts.yfilter)
	|| ydk::is_set(unknown_packet_types.yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Accounting' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acct_incorrect_responses.is_set || is_set(acct_incorrect_responses.yfilter)) leaf_name_data.push_back(acct_incorrect_responses.get_name_leafdata());
    if (acct_response_time.is_set || is_set(acct_response_time.yfilter)) leaf_name_data.push_back(acct_response_time.get_name_leafdata());
    if (acct_server_error_responses.is_set || is_set(acct_server_error_responses.yfilter)) leaf_name_data.push_back(acct_server_error_responses.get_name_leafdata());
    if (acct_transaction_failure.is_set || is_set(acct_transaction_failure.yfilter)) leaf_name_data.push_back(acct_transaction_failure.get_name_leafdata());
    if (acct_transaction_successess.is_set || is_set(acct_transaction_successess.yfilter)) leaf_name_data.push_back(acct_transaction_successess.get_name_leafdata());
    if (acct_unexpected_responses.is_set || is_set(acct_unexpected_responses.yfilter)) leaf_name_data.push_back(acct_unexpected_responses.get_name_leafdata());
    if (bad_authenticators.is_set || is_set(bad_authenticators.yfilter)) leaf_name_data.push_back(bad_authenticators.get_name_leafdata());
    if (bad_responses.is_set || is_set(bad_responses.yfilter)) leaf_name_data.push_back(bad_responses.get_name_leafdata());
    if (dropped_responses.is_set || is_set(dropped_responses.yfilter)) leaf_name_data.push_back(dropped_responses.get_name_leafdata());
    if (pending_requests.is_set || is_set(pending_requests.yfilter)) leaf_name_data.push_back(pending_requests.get_name_leafdata());
    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (responses.is_set || is_set(responses.yfilter)) leaf_name_data.push_back(responses.get_name_leafdata());
    if (retransmits.is_set || is_set(retransmits.yfilter)) leaf_name_data.push_back(retransmits.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.yfilter)) leaf_name_data.push_back(timeouts.get_name_leafdata());
    if (unknown_packet_types.is_set || is_set(unknown_packet_types.yfilter)) leaf_name_data.push_back(unknown_packet_types.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "acct-incorrect-responses")
    {
        acct_incorrect_responses = value;
        acct_incorrect_responses.value_namespace = name_space;
        acct_incorrect_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-response-time")
    {
        acct_response_time = value;
        acct_response_time.value_namespace = name_space;
        acct_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-server-error-responses")
    {
        acct_server_error_responses = value;
        acct_server_error_responses.value_namespace = name_space;
        acct_server_error_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure = value;
        acct_transaction_failure.value_namespace = name_space;
        acct_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess = value;
        acct_transaction_successess.value_namespace = name_space;
        acct_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses = value;
        acct_unexpected_responses.value_namespace = name_space;
        acct_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-authenticators")
    {
        bad_authenticators = value;
        bad_authenticators.value_namespace = name_space;
        bad_authenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-responses")
    {
        bad_responses = value;
        bad_responses.value_namespace = name_space;
        bad_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-responses")
    {
        dropped_responses = value;
        dropped_responses.value_namespace = name_space;
        dropped_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-requests")
    {
        pending_requests = value;
        pending_requests.value_namespace = name_space;
        pending_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responses")
    {
        responses = value;
        responses.value_namespace = name_space;
        responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmits")
    {
        retransmits = value;
        retransmits.value_namespace = name_space;
        retransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
        timeouts.value_namespace = name_space;
        timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-packet-types")
    {
        unknown_packet_types = value;
        unknown_packet_types.value_namespace = name_space;
        unknown_packet_types.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "acct-incorrect-responses")
    {
        acct_incorrect_responses.yfilter = yfilter;
    }
    if(value_path == "acct-response-time")
    {
        acct_response_time.yfilter = yfilter;
    }
    if(value_path == "acct-server-error-responses")
    {
        acct_server_error_responses.yfilter = yfilter;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "bad-authenticators")
    {
        bad_authenticators.yfilter = yfilter;
    }
    if(value_path == "bad-responses")
    {
        bad_responses.yfilter = yfilter;
    }
    if(value_path == "dropped-responses")
    {
        dropped_responses.yfilter = yfilter;
    }
    if(value_path == "pending-requests")
    {
        pending_requests.yfilter = yfilter;
    }
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "responses")
    {
        responses.yfilter = yfilter;
    }
    if(value_path == "retransmits")
    {
        retransmits.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "timeouts")
    {
        timeouts.yfilter = yfilter;
    }
    if(value_path == "unknown-packet-types")
    {
        unknown_packet_types.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "acct-incorrect-responses" || name == "acct-response-time" || name == "acct-server-error-responses" || name == "acct-transaction-failure" || name == "acct-transaction-successess" || name == "acct-unexpected-responses" || name == "bad-authenticators" || name == "bad-responses" || name == "dropped-responses" || name == "pending-requests" || name == "requests" || name == "responses" || name == "retransmits" || name == "rtt" || name == "timeouts" || name == "unknown-packet-types")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::Authentication()
    :
    access_accepts{YType::uint32, "access-accepts"},
    access_challenges{YType::uint32, "access-challenges"},
    access_rejects{YType::uint32, "access-rejects"},
    access_request_retransmits{YType::uint32, "access-request-retransmits"},
    access_requests{YType::uint32, "access-requests"},
    access_timeouts{YType::uint32, "access-timeouts"},
    authen_incorrect_responses{YType::uint32, "authen-incorrect-responses"},
    authen_response_time{YType::uint32, "authen-response-time"},
    authen_server_error_responses{YType::uint32, "authen-server-error-responses"},
    authen_transaction_failure{YType::uint32, "authen-transaction-failure"},
    authen_transaction_successess{YType::uint32, "authen-transaction-successess"},
    authen_unexpected_responses{YType::uint32, "authen-unexpected-responses"},
    bad_access_authenticators{YType::uint32, "bad-access-authenticators"},
    bad_access_responses{YType::uint32, "bad-access-responses"},
    dropped_access_responses{YType::uint32, "dropped-access-responses"},
    pending_access_requests{YType::uint32, "pending-access-requests"},
    rtt{YType::uint32, "rtt"},
    unknown_access_types{YType::uint32, "unknown-access-types"}
{
    yang_name = "authentication"; yang_parent_name = "server-group";
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::~Authentication()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::has_data() const
{
    return access_accepts.is_set
	|| access_challenges.is_set
	|| access_rejects.is_set
	|| access_request_retransmits.is_set
	|| access_requests.is_set
	|| access_timeouts.is_set
	|| authen_incorrect_responses.is_set
	|| authen_response_time.is_set
	|| authen_server_error_responses.is_set
	|| authen_transaction_failure.is_set
	|| authen_transaction_successess.is_set
	|| authen_unexpected_responses.is_set
	|| bad_access_authenticators.is_set
	|| bad_access_responses.is_set
	|| dropped_access_responses.is_set
	|| pending_access_requests.is_set
	|| rtt.is_set
	|| unknown_access_types.is_set;
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_accepts.yfilter)
	|| ydk::is_set(access_challenges.yfilter)
	|| ydk::is_set(access_rejects.yfilter)
	|| ydk::is_set(access_request_retransmits.yfilter)
	|| ydk::is_set(access_requests.yfilter)
	|| ydk::is_set(access_timeouts.yfilter)
	|| ydk::is_set(authen_incorrect_responses.yfilter)
	|| ydk::is_set(authen_response_time.yfilter)
	|| ydk::is_set(authen_server_error_responses.yfilter)
	|| ydk::is_set(authen_transaction_failure.yfilter)
	|| ydk::is_set(authen_transaction_successess.yfilter)
	|| ydk::is_set(authen_unexpected_responses.yfilter)
	|| ydk::is_set(bad_access_authenticators.yfilter)
	|| ydk::is_set(bad_access_responses.yfilter)
	|| ydk::is_set(dropped_access_responses.yfilter)
	|| ydk::is_set(pending_access_requests.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(unknown_access_types.yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_accepts.is_set || is_set(access_accepts.yfilter)) leaf_name_data.push_back(access_accepts.get_name_leafdata());
    if (access_challenges.is_set || is_set(access_challenges.yfilter)) leaf_name_data.push_back(access_challenges.get_name_leafdata());
    if (access_rejects.is_set || is_set(access_rejects.yfilter)) leaf_name_data.push_back(access_rejects.get_name_leafdata());
    if (access_request_retransmits.is_set || is_set(access_request_retransmits.yfilter)) leaf_name_data.push_back(access_request_retransmits.get_name_leafdata());
    if (access_requests.is_set || is_set(access_requests.yfilter)) leaf_name_data.push_back(access_requests.get_name_leafdata());
    if (access_timeouts.is_set || is_set(access_timeouts.yfilter)) leaf_name_data.push_back(access_timeouts.get_name_leafdata());
    if (authen_incorrect_responses.is_set || is_set(authen_incorrect_responses.yfilter)) leaf_name_data.push_back(authen_incorrect_responses.get_name_leafdata());
    if (authen_response_time.is_set || is_set(authen_response_time.yfilter)) leaf_name_data.push_back(authen_response_time.get_name_leafdata());
    if (authen_server_error_responses.is_set || is_set(authen_server_error_responses.yfilter)) leaf_name_data.push_back(authen_server_error_responses.get_name_leafdata());
    if (authen_transaction_failure.is_set || is_set(authen_transaction_failure.yfilter)) leaf_name_data.push_back(authen_transaction_failure.get_name_leafdata());
    if (authen_transaction_successess.is_set || is_set(authen_transaction_successess.yfilter)) leaf_name_data.push_back(authen_transaction_successess.get_name_leafdata());
    if (authen_unexpected_responses.is_set || is_set(authen_unexpected_responses.yfilter)) leaf_name_data.push_back(authen_unexpected_responses.get_name_leafdata());
    if (bad_access_authenticators.is_set || is_set(bad_access_authenticators.yfilter)) leaf_name_data.push_back(bad_access_authenticators.get_name_leafdata());
    if (bad_access_responses.is_set || is_set(bad_access_responses.yfilter)) leaf_name_data.push_back(bad_access_responses.get_name_leafdata());
    if (dropped_access_responses.is_set || is_set(dropped_access_responses.yfilter)) leaf_name_data.push_back(dropped_access_responses.get_name_leafdata());
    if (pending_access_requests.is_set || is_set(pending_access_requests.yfilter)) leaf_name_data.push_back(pending_access_requests.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (unknown_access_types.is_set || is_set(unknown_access_types.yfilter)) leaf_name_data.push_back(unknown_access_types.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-accepts")
    {
        access_accepts = value;
        access_accepts.value_namespace = name_space;
        access_accepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-challenges")
    {
        access_challenges = value;
        access_challenges.value_namespace = name_space;
        access_challenges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-rejects")
    {
        access_rejects = value;
        access_rejects.value_namespace = name_space;
        access_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits = value;
        access_request_retransmits.value_namespace = name_space;
        access_request_retransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-requests")
    {
        access_requests = value;
        access_requests.value_namespace = name_space;
        access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts = value;
        access_timeouts.value_namespace = name_space;
        access_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses = value;
        authen_incorrect_responses.value_namespace = name_space;
        authen_incorrect_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-response-time")
    {
        authen_response_time = value;
        authen_response_time.value_namespace = name_space;
        authen_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses = value;
        authen_server_error_responses.value_namespace = name_space;
        authen_server_error_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure = value;
        authen_transaction_failure.value_namespace = name_space;
        authen_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess = value;
        authen_transaction_successess.value_namespace = name_space;
        authen_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses = value;
        authen_unexpected_responses.value_namespace = name_space;
        authen_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators = value;
        bad_access_authenticators.value_namespace = name_space;
        bad_access_authenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses = value;
        bad_access_responses.value_namespace = name_space;
        bad_access_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses = value;
        dropped_access_responses.value_namespace = name_space;
        dropped_access_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests = value;
        pending_access_requests.value_namespace = name_space;
        pending_access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types = value;
        unknown_access_types.value_namespace = name_space;
        unknown_access_types.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-accepts")
    {
        access_accepts.yfilter = yfilter;
    }
    if(value_path == "access-challenges")
    {
        access_challenges.yfilter = yfilter;
    }
    if(value_path == "access-rejects")
    {
        access_rejects.yfilter = yfilter;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits.yfilter = yfilter;
    }
    if(value_path == "access-requests")
    {
        access_requests.yfilter = yfilter;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts.yfilter = yfilter;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses.yfilter = yfilter;
    }
    if(value_path == "authen-response-time")
    {
        authen_response_time.yfilter = yfilter;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses.yfilter = yfilter;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators.yfilter = yfilter;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses.yfilter = yfilter;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses.yfilter = yfilter;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-accepts" || name == "access-challenges" || name == "access-rejects" || name == "access-request-retransmits" || name == "access-requests" || name == "access-timeouts" || name == "authen-incorrect-responses" || name == "authen-response-time" || name == "authen-server-error-responses" || name == "authen-transaction-failure" || name == "authen-transaction-successess" || name == "authen-unexpected-responses" || name == "bad-access-authenticators" || name == "bad-access-responses" || name == "dropped-access-responses" || name == "pending-access-requests" || name == "rtt" || name == "unknown-access-types")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::Authorization()
    :
    author_incorrect_responses{YType::uint32, "author-incorrect-responses"},
    author_request_timeouts{YType::uint32, "author-request-timeouts"},
    author_requests{YType::uint32, "author-requests"},
    author_response_time{YType::uint32, "author-response-time"},
    author_server_error_responses{YType::uint32, "author-server-error-responses"},
    author_transaction_failure{YType::uint32, "author-transaction-failure"},
    author_transaction_successess{YType::uint32, "author-transaction-successess"},
    author_unexpected_responses{YType::uint32, "author-unexpected-responses"}
{
    yang_name = "authorization"; yang_parent_name = "server-group";
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::~Authorization()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::has_data() const
{
    return author_incorrect_responses.is_set
	|| author_request_timeouts.is_set
	|| author_requests.is_set
	|| author_response_time.is_set
	|| author_server_error_responses.is_set
	|| author_transaction_failure.is_set
	|| author_transaction_successess.is_set
	|| author_unexpected_responses.is_set;
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(author_incorrect_responses.yfilter)
	|| ydk::is_set(author_request_timeouts.yfilter)
	|| ydk::is_set(author_requests.yfilter)
	|| ydk::is_set(author_response_time.yfilter)
	|| ydk::is_set(author_server_error_responses.yfilter)
	|| ydk::is_set(author_transaction_failure.yfilter)
	|| ydk::is_set(author_transaction_successess.yfilter)
	|| ydk::is_set(author_unexpected_responses.yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authorization' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (author_incorrect_responses.is_set || is_set(author_incorrect_responses.yfilter)) leaf_name_data.push_back(author_incorrect_responses.get_name_leafdata());
    if (author_request_timeouts.is_set || is_set(author_request_timeouts.yfilter)) leaf_name_data.push_back(author_request_timeouts.get_name_leafdata());
    if (author_requests.is_set || is_set(author_requests.yfilter)) leaf_name_data.push_back(author_requests.get_name_leafdata());
    if (author_response_time.is_set || is_set(author_response_time.yfilter)) leaf_name_data.push_back(author_response_time.get_name_leafdata());
    if (author_server_error_responses.is_set || is_set(author_server_error_responses.yfilter)) leaf_name_data.push_back(author_server_error_responses.get_name_leafdata());
    if (author_transaction_failure.is_set || is_set(author_transaction_failure.yfilter)) leaf_name_data.push_back(author_transaction_failure.get_name_leafdata());
    if (author_transaction_successess.is_set || is_set(author_transaction_successess.yfilter)) leaf_name_data.push_back(author_transaction_successess.get_name_leafdata());
    if (author_unexpected_responses.is_set || is_set(author_unexpected_responses.yfilter)) leaf_name_data.push_back(author_unexpected_responses.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "author-incorrect-responses")
    {
        author_incorrect_responses = value;
        author_incorrect_responses.value_namespace = name_space;
        author_incorrect_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-request-timeouts")
    {
        author_request_timeouts = value;
        author_request_timeouts.value_namespace = name_space;
        author_request_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-requests")
    {
        author_requests = value;
        author_requests.value_namespace = name_space;
        author_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-response-time")
    {
        author_response_time = value;
        author_response_time.value_namespace = name_space;
        author_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-server-error-responses")
    {
        author_server_error_responses = value;
        author_server_error_responses.value_namespace = name_space;
        author_server_error_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-transaction-failure")
    {
        author_transaction_failure = value;
        author_transaction_failure.value_namespace = name_space;
        author_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-transaction-successess")
    {
        author_transaction_successess = value;
        author_transaction_successess.value_namespace = name_space;
        author_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-unexpected-responses")
    {
        author_unexpected_responses = value;
        author_unexpected_responses.value_namespace = name_space;
        author_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "author-incorrect-responses")
    {
        author_incorrect_responses.yfilter = yfilter;
    }
    if(value_path == "author-request-timeouts")
    {
        author_request_timeouts.yfilter = yfilter;
    }
    if(value_path == "author-requests")
    {
        author_requests.yfilter = yfilter;
    }
    if(value_path == "author-response-time")
    {
        author_response_time.yfilter = yfilter;
    }
    if(value_path == "author-server-error-responses")
    {
        author_server_error_responses.yfilter = yfilter;
    }
    if(value_path == "author-transaction-failure")
    {
        author_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "author-transaction-successess")
    {
        author_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "author-unexpected-responses")
    {
        author_unexpected_responses.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "author-incorrect-responses" || name == "author-request-timeouts" || name == "author-requests" || name == "author-response-time" || name == "author-server-error-responses" || name == "author-transaction-failure" || name == "author-transaction-successess" || name == "author-unexpected-responses")
        return true;
    return false;
}

Radius::Nodes::Node::DynamicAuthorization::DynamicAuthorization()
    :
    disconnected_invalid_requests{YType::uint32, "disconnected-invalid-requests"},
    invalid_coa_requests{YType::uint32, "invalid-coa-requests"}
{
    yang_name = "dynamic-authorization"; yang_parent_name = "node";
}

Radius::Nodes::Node::DynamicAuthorization::~DynamicAuthorization()
{
}

bool Radius::Nodes::Node::DynamicAuthorization::has_data() const
{
    return disconnected_invalid_requests.is_set
	|| invalid_coa_requests.is_set;
}

bool Radius::Nodes::Node::DynamicAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disconnected_invalid_requests.yfilter)
	|| ydk::is_set(invalid_coa_requests.yfilter);
}

std::string Radius::Nodes::Node::DynamicAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-authorization";

    return path_buffer.str();

}

const EntityPath Radius::Nodes::Node::DynamicAuthorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynamicAuthorization' in Cisco_IOS_XR_aaa_protocol_radius_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnected_invalid_requests.is_set || is_set(disconnected_invalid_requests.yfilter)) leaf_name_data.push_back(disconnected_invalid_requests.get_name_leafdata());
    if (invalid_coa_requests.is_set || is_set(invalid_coa_requests.yfilter)) leaf_name_data.push_back(invalid_coa_requests.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Radius::Nodes::Node::DynamicAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Radius::Nodes::Node::DynamicAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Radius::Nodes::Node::DynamicAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disconnected-invalid-requests")
    {
        disconnected_invalid_requests = value;
        disconnected_invalid_requests.value_namespace = name_space;
        disconnected_invalid_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-coa-requests")
    {
        invalid_coa_requests = value;
        invalid_coa_requests.value_namespace = name_space;
        invalid_coa_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::DynamicAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disconnected-invalid-requests")
    {
        disconnected_invalid_requests.yfilter = yfilter;
    }
    if(value_path == "invalid-coa-requests")
    {
        invalid_coa_requests.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DynamicAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnected-invalid-requests" || name == "invalid-coa-requests")
        return true;
    return false;
}


}
}

