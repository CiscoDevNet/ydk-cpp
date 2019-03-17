
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

    yang_name = "radius"; yang_parent_name = "Cisco-IOS-XR-aaa-protocol-radius-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Radius::~Radius()
{
}

bool Radius::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Radius::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void Radius::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Radius::clone_ptr() const
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
    :
    node(this, {"node_name"})
{

    yang_name = "nodes"; yang_parent_name = "radius"; is_top_level_class = false; has_list_ancestor = false; 
}

Radius::Nodes::~Nodes()
{
}

bool Radius::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Radius::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-oper:radius/" << get_segment_path();
    return path_buffer.str();
}

std::string Radius::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<Radius::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::get_children() const
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
    client(std::make_shared<Radius::Nodes::Node::Client>())
    , dead_criteria(std::make_shared<Radius::Nodes::Node::DeadCriteria>())
    , authentication(std::make_shared<Radius::Nodes::Node::Authentication>())
    , accounting(std::make_shared<Radius::Nodes::Node::Accounting>())
    , dynamic_authorization_clients(std::make_shared<Radius::Nodes::Node::DynamicAuthorizationClients>())
    , server_groups(std::make_shared<Radius::Nodes::Node::ServerGroups>())
    , dynamic_authorization(std::make_shared<Radius::Nodes::Node::DynamicAuthorization>())
{
    client->parent = this;
    dead_criteria->parent = this;
    authentication->parent = this;
    accounting->parent = this;
    dynamic_authorization_clients->parent = this;
    server_groups->parent = this;
    dynamic_authorization->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

Radius::Nodes::Node::~Node()
{
}

bool Radius::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return node_name.is_set
	|| (client !=  nullptr && client->has_data())
	|| (dead_criteria !=  nullptr && dead_criteria->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (accounting !=  nullptr && accounting->has_data())
	|| (dynamic_authorization_clients !=  nullptr && dynamic_authorization_clients->has_data())
	|| (server_groups !=  nullptr && server_groups->has_data())
	|| (dynamic_authorization !=  nullptr && dynamic_authorization->has_data());
}

bool Radius::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(node_name.yfilter)
	|| (client !=  nullptr && client->has_operation())
	|| (dead_criteria !=  nullptr && dead_criteria->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (dynamic_authorization_clients !=  nullptr && dynamic_authorization_clients->has_operation())
	|| (server_groups !=  nullptr && server_groups->has_operation())
	|| (dynamic_authorization !=  nullptr && dynamic_authorization->has_operation());
}

std::string Radius::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-aaa-protocol-radius-oper:radius/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string Radius::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(node_name, "node-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (node_name.is_set || is_set(node_name.yfilter)) leaf_name_data.push_back(node_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Radius::Nodes::Node::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Radius::Nodes::Node::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "dynamic-authorization-clients")
    {
        if(dynamic_authorization_clients == nullptr)
        {
            dynamic_authorization_clients = std::make_shared<Radius::Nodes::Node::DynamicAuthorizationClients>();
        }
        return dynamic_authorization_clients;
    }

    if(child_yang_name == "server-groups")
    {
        if(server_groups == nullptr)
        {
            server_groups = std::make_shared<Radius::Nodes::Node::ServerGroups>();
        }
        return server_groups;
    }

    if(child_yang_name == "dynamic-authorization")
    {
        if(dynamic_authorization == nullptr)
        {
            dynamic_authorization = std::make_shared<Radius::Nodes::Node::DynamicAuthorization>();
        }
        return dynamic_authorization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(client != nullptr)
    {
        _children["client"] = client;
    }

    if(dead_criteria != nullptr)
    {
        _children["dead-criteria"] = dead_criteria;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(dynamic_authorization_clients != nullptr)
    {
        _children["dynamic-authorization-clients"] = dynamic_authorization_clients;
    }

    if(server_groups != nullptr)
    {
        _children["server-groups"] = server_groups;
    }

    if(dynamic_authorization != nullptr)
    {
        _children["dynamic-authorization"] = dynamic_authorization;
    }

    return _children;
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
    if(name == "client" || name == "dead-criteria" || name == "authentication" || name == "accounting" || name == "dynamic-authorization-clients" || name == "server-groups" || name == "dynamic-authorization" || name == "node-name")
        return true;
    return false;
}

Radius::Nodes::Node::Client::Client()
    :
    unknown_authentication_responses{YType::uint32, "unknown-authentication-responses"},
    authentication_nas_id{YType::str, "authentication-nas-id"},
    unknown_accounting_responses{YType::uint32, "unknown-accounting-responses"}
{

    yang_name = "client"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::Client::~Client()
{
}

bool Radius::Nodes::Node::Client::has_data() const
{
    if (is_presence_container) return true;
    return unknown_authentication_responses.is_set
	|| authentication_nas_id.is_set
	|| unknown_accounting_responses.is_set;
}

bool Radius::Nodes::Node::Client::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(unknown_authentication_responses.yfilter)
	|| ydk::is_set(authentication_nas_id.yfilter)
	|| ydk::is_set(unknown_accounting_responses.yfilter);
}

std::string Radius::Nodes::Node::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::Client::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (unknown_authentication_responses.is_set || is_set(unknown_authentication_responses.yfilter)) leaf_name_data.push_back(unknown_authentication_responses.get_name_leafdata());
    if (authentication_nas_id.is_set || is_set(authentication_nas_id.yfilter)) leaf_name_data.push_back(authentication_nas_id.get_name_leafdata());
    if (unknown_accounting_responses.is_set || is_set(unknown_accounting_responses.yfilter)) leaf_name_data.push_back(unknown_accounting_responses.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::Client::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "unknown-authentication-responses")
    {
        unknown_authentication_responses = value;
        unknown_authentication_responses.value_namespace = name_space;
        unknown_authentication_responses.value_namespace_prefix = name_space_prefix;
    }
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
}

void Radius::Nodes::Node::Client::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "unknown-authentication-responses")
    {
        unknown_authentication_responses.yfilter = yfilter;
    }
    if(value_path == "authentication-nas-id")
    {
        authentication_nas_id.yfilter = yfilter;
    }
    if(value_path == "unknown-accounting-responses")
    {
        unknown_accounting_responses.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Client::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "unknown-authentication-responses" || name == "authentication-nas-id" || name == "unknown-accounting-responses")
        return true;
    return false;
}

Radius::Nodes::Node::DeadCriteria::DeadCriteria()
    :
    hosts(std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts>())
{
    hosts->parent = this;

    yang_name = "dead-criteria"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::DeadCriteria::~DeadCriteria()
{
}

bool Radius::Nodes::Node::DeadCriteria::has_data() const
{
    if (is_presence_container) return true;
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

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::DeadCriteria::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::DeadCriteria::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::DeadCriteria::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(hosts != nullptr)
    {
        _children["hosts"] = hosts;
    }

    return _children;
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
    :
    host(this, {})
{

    yang_name = "hosts"; yang_parent_name = "dead-criteria"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::DeadCriteria::Hosts::~Hosts()
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<host.len(); index++)
    {
        if(host[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::has_operation() const
{
    for (std::size_t index=0; index<host.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::DeadCriteria::Hosts::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::DeadCriteria::Hosts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "host")
    {
        auto ent_ = std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts::Host>();
        ent_->parent = this;
        host.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::DeadCriteria::Hosts::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : host.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    ip_address{YType::str, "ip-address"},
    auth_port_number{YType::uint32, "auth-port-number"},
    acct_port_number{YType::uint32, "acct-port-number"}
        ,
    time(std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time>())
    , tries(std::make_shared<Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries>())
{
    time->parent = this;
    tries->parent = this;

    yang_name = "host"; yang_parent_name = "hosts"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::~Host()
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::has_data() const
{
    if (is_presence_container) return true;
    return ip_address.is_set
	|| auth_port_number.is_set
	|| acct_port_number.is_set
	|| (time !=  nullptr && time->has_data())
	|| (tries !=  nullptr && tries->has_data());
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(auth_port_number.yfilter)
	|| ydk::is_set(acct_port_number.yfilter)
	|| (time !=  nullptr && time->has_operation())
	|| (tries !=  nullptr && tries->has_operation());
}

std::string Radius::Nodes::Node::DeadCriteria::Hosts::Host::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "host";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::DeadCriteria::Hosts::Host::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (auth_port_number.is_set || is_set(auth_port_number.yfilter)) leaf_name_data.push_back(auth_port_number.get_name_leafdata());
    if (acct_port_number.is_set || is_set(acct_port_number.yfilter)) leaf_name_data.push_back(acct_port_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::DeadCriteria::Hosts::Host::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::DeadCriteria::Hosts::Host::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(time != nullptr)
    {
        _children["time"] = time;
    }

    if(tries != nullptr)
    {
        _children["tries"] = tries;
    }

    return _children;
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number = value;
        auth_port_number.value_namespace = name_space;
        auth_port_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number = value;
        acct_port_number.value_namespace = name_space;
        acct_port_number.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "auth-port-number")
    {
        auth_port_number.yfilter = yfilter;
    }
    if(value_path == "acct-port-number")
    {
        acct_port_number.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "tries" || name == "ip-address" || name == "auth-port-number" || name == "acct-port-number")
        return true;
    return false;
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::Time()
    :
    value_{YType::uint32, "value"},
    is_computed{YType::boolean, "is-computed"}
{

    yang_name = "time"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::~Time()
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| is_computed.is_set;
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(is_computed.yfilter);
}

std::string Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (is_computed.is_set || is_set(is_computed.yfilter)) leaf_name_data.push_back(is_computed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-computed")
    {
        is_computed = value;
        is_computed.value_namespace = name_space;
        is_computed.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "is-computed")
    {
        is_computed.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "is-computed")
        return true;
    return false;
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::Tries()
    :
    value_{YType::uint32, "value"},
    is_computed{YType::boolean, "is-computed"}
{

    yang_name = "tries"; yang_parent_name = "host"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::~Tries()
{
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::has_data() const
{
    if (is_presence_container) return true;
    return value_.is_set
	|| is_computed.is_set;
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(value_.yfilter)
	|| ydk::is_set(is_computed.yfilter);
}

std::string Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.yfilter)) leaf_name_data.push_back(value_.get_name_leafdata());
    if (is_computed.is_set || is_set(is_computed.yfilter)) leaf_name_data.push_back(is_computed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "value")
    {
        value_ = value;
        value_.value_namespace = name_space;
        value_.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-computed")
    {
        is_computed = value;
        is_computed.value_namespace = name_space;
        is_computed.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "value")
    {
        value_.yfilter = yfilter;
    }
    if(value_path == "is-computed")
    {
        is_computed.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DeadCriteria::Hosts::Host::Tries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "value" || name == "is-computed")
        return true;
    return false;
}

Radius::Nodes::Node::Authentication::Authentication()
    :
    authentication_group(this, {})
{

    yang_name = "authentication"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::Authentication::~Authentication()
{
}

bool Radius::Nodes::Node::Authentication::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authentication_group.len(); index++)
    {
        if(authentication_group[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::Authentication::has_operation() const
{
    for (std::size_t index=0; index<authentication_group.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-group")
    {
        auto ent_ = std::make_shared<Radius::Nodes::Node::Authentication::AuthenticationGroup>();
        ent_->parent = this;
        authentication_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authentication_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    port{YType::uint32, "port"},
    ip_address{YType::str, "ip-address"},
    family{YType::str, "family"}
        ,
    authentication(std::make_shared<Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_>())
{
    authentication->parent = this;

    yang_name = "authentication-group"; yang_parent_name = "authentication"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::Authentication::AuthenticationGroup::~AuthenticationGroup()
{
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| ip_address.is_set
	|| family.is_set
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(family.yfilter)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Radius::Nodes::Node::Authentication::AuthenticationGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-group";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::Authentication::AuthenticationGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (family.is_set || is_set(family.yfilter)) leaf_name_data.push_back(family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::Authentication::AuthenticationGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::Authentication::AuthenticationGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    return _children;
}

void Radius::Nodes::Node::Authentication::AuthenticationGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "family")
    {
        family = value;
        family.value_namespace = name_space;
        family.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Authentication::AuthenticationGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "family")
    {
        family.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication" || name == "port" || name == "ip-address" || name == "family")
        return true;
    return false;
}

Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::Authentication_()
    :
    access_requests{YType::uint32, "access-requests"},
    pending_access_requests{YType::uint32, "pending-access-requests"},
    access_request_retransmits{YType::uint32, "access-request-retransmits"},
    access_accepts{YType::uint32, "access-accepts"},
    access_rejects{YType::uint32, "access-rejects"},
    access_challenges{YType::uint32, "access-challenges"},
    access_timeouts{YType::uint32, "access-timeouts"},
    bad_access_responses{YType::uint32, "bad-access-responses"},
    bad_access_authenticators{YType::uint32, "bad-access-authenticators"},
    unknown_access_types{YType::uint32, "unknown-access-types"},
    dropped_access_responses{YType::uint32, "dropped-access-responses"},
    rtt{YType::uint32, "rtt"},
    authen_transaction_successess{YType::uint32, "authen-transaction-successess"},
    authen_transaction_failure{YType::uint32, "authen-transaction-failure"},
    authen_unexpected_responses{YType::uint32, "authen-unexpected-responses"},
    authen_server_error_responses{YType::uint32, "authen-server-error-responses"},
    authen_incorrect_responses{YType::uint32, "authen-incorrect-responses"},
    auth_throttled_transactions{YType::uint32, "auth-throttled-transactions"},
    auth_max_transactions{YType::uint32, "auth-max-transactions"},
    total_test_auth_reqs{YType::uint32, "total-test-auth-reqs"},
    total_test_auth_timeouts{YType::uint32, "total-test-auth-timeouts"},
    total_test_auth_response{YType::uint32, "total-test-auth-response"},
    total_test_auth_pending{YType::uint32, "total-test-auth-pending"}
{

    yang_name = "authentication"; yang_parent_name = "authentication-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::~Authentication_()
{
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::has_data() const
{
    if (is_presence_container) return true;
    return access_requests.is_set
	|| pending_access_requests.is_set
	|| access_request_retransmits.is_set
	|| access_accepts.is_set
	|| access_rejects.is_set
	|| access_challenges.is_set
	|| access_timeouts.is_set
	|| bad_access_responses.is_set
	|| bad_access_authenticators.is_set
	|| unknown_access_types.is_set
	|| dropped_access_responses.is_set
	|| rtt.is_set
	|| authen_transaction_successess.is_set
	|| authen_transaction_failure.is_set
	|| authen_unexpected_responses.is_set
	|| authen_server_error_responses.is_set
	|| authen_incorrect_responses.is_set
	|| auth_throttled_transactions.is_set
	|| auth_max_transactions.is_set
	|| total_test_auth_reqs.is_set
	|| total_test_auth_timeouts.is_set
	|| total_test_auth_response.is_set
	|| total_test_auth_pending.is_set;
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_requests.yfilter)
	|| ydk::is_set(pending_access_requests.yfilter)
	|| ydk::is_set(access_request_retransmits.yfilter)
	|| ydk::is_set(access_accepts.yfilter)
	|| ydk::is_set(access_rejects.yfilter)
	|| ydk::is_set(access_challenges.yfilter)
	|| ydk::is_set(access_timeouts.yfilter)
	|| ydk::is_set(bad_access_responses.yfilter)
	|| ydk::is_set(bad_access_authenticators.yfilter)
	|| ydk::is_set(unknown_access_types.yfilter)
	|| ydk::is_set(dropped_access_responses.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(authen_transaction_successess.yfilter)
	|| ydk::is_set(authen_transaction_failure.yfilter)
	|| ydk::is_set(authen_unexpected_responses.yfilter)
	|| ydk::is_set(authen_server_error_responses.yfilter)
	|| ydk::is_set(authen_incorrect_responses.yfilter)
	|| ydk::is_set(auth_throttled_transactions.yfilter)
	|| ydk::is_set(auth_max_transactions.yfilter)
	|| ydk::is_set(total_test_auth_reqs.yfilter)
	|| ydk::is_set(total_test_auth_timeouts.yfilter)
	|| ydk::is_set(total_test_auth_response.yfilter)
	|| ydk::is_set(total_test_auth_pending.yfilter);
}

std::string Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_requests.is_set || is_set(access_requests.yfilter)) leaf_name_data.push_back(access_requests.get_name_leafdata());
    if (pending_access_requests.is_set || is_set(pending_access_requests.yfilter)) leaf_name_data.push_back(pending_access_requests.get_name_leafdata());
    if (access_request_retransmits.is_set || is_set(access_request_retransmits.yfilter)) leaf_name_data.push_back(access_request_retransmits.get_name_leafdata());
    if (access_accepts.is_set || is_set(access_accepts.yfilter)) leaf_name_data.push_back(access_accepts.get_name_leafdata());
    if (access_rejects.is_set || is_set(access_rejects.yfilter)) leaf_name_data.push_back(access_rejects.get_name_leafdata());
    if (access_challenges.is_set || is_set(access_challenges.yfilter)) leaf_name_data.push_back(access_challenges.get_name_leafdata());
    if (access_timeouts.is_set || is_set(access_timeouts.yfilter)) leaf_name_data.push_back(access_timeouts.get_name_leafdata());
    if (bad_access_responses.is_set || is_set(bad_access_responses.yfilter)) leaf_name_data.push_back(bad_access_responses.get_name_leafdata());
    if (bad_access_authenticators.is_set || is_set(bad_access_authenticators.yfilter)) leaf_name_data.push_back(bad_access_authenticators.get_name_leafdata());
    if (unknown_access_types.is_set || is_set(unknown_access_types.yfilter)) leaf_name_data.push_back(unknown_access_types.get_name_leafdata());
    if (dropped_access_responses.is_set || is_set(dropped_access_responses.yfilter)) leaf_name_data.push_back(dropped_access_responses.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (authen_transaction_successess.is_set || is_set(authen_transaction_successess.yfilter)) leaf_name_data.push_back(authen_transaction_successess.get_name_leafdata());
    if (authen_transaction_failure.is_set || is_set(authen_transaction_failure.yfilter)) leaf_name_data.push_back(authen_transaction_failure.get_name_leafdata());
    if (authen_unexpected_responses.is_set || is_set(authen_unexpected_responses.yfilter)) leaf_name_data.push_back(authen_unexpected_responses.get_name_leafdata());
    if (authen_server_error_responses.is_set || is_set(authen_server_error_responses.yfilter)) leaf_name_data.push_back(authen_server_error_responses.get_name_leafdata());
    if (authen_incorrect_responses.is_set || is_set(authen_incorrect_responses.yfilter)) leaf_name_data.push_back(authen_incorrect_responses.get_name_leafdata());
    if (auth_throttled_transactions.is_set || is_set(auth_throttled_transactions.yfilter)) leaf_name_data.push_back(auth_throttled_transactions.get_name_leafdata());
    if (auth_max_transactions.is_set || is_set(auth_max_transactions.yfilter)) leaf_name_data.push_back(auth_max_transactions.get_name_leafdata());
    if (total_test_auth_reqs.is_set || is_set(total_test_auth_reqs.yfilter)) leaf_name_data.push_back(total_test_auth_reqs.get_name_leafdata());
    if (total_test_auth_timeouts.is_set || is_set(total_test_auth_timeouts.yfilter)) leaf_name_data.push_back(total_test_auth_timeouts.get_name_leafdata());
    if (total_test_auth_response.is_set || is_set(total_test_auth_response.yfilter)) leaf_name_data.push_back(total_test_auth_response.get_name_leafdata());
    if (total_test_auth_pending.is_set || is_set(total_test_auth_pending.yfilter)) leaf_name_data.push_back(total_test_auth_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-requests")
    {
        access_requests = value;
        access_requests.value_namespace = name_space;
        access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests = value;
        pending_access_requests.value_namespace = name_space;
        pending_access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits = value;
        access_request_retransmits.value_namespace = name_space;
        access_request_retransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-accepts")
    {
        access_accepts = value;
        access_accepts.value_namespace = name_space;
        access_accepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-rejects")
    {
        access_rejects = value;
        access_rejects.value_namespace = name_space;
        access_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-challenges")
    {
        access_challenges = value;
        access_challenges.value_namespace = name_space;
        access_challenges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts = value;
        access_timeouts.value_namespace = name_space;
        access_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses = value;
        bad_access_responses.value_namespace = name_space;
        bad_access_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators = value;
        bad_access_authenticators.value_namespace = name_space;
        bad_access_authenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types = value;
        unknown_access_types.value_namespace = name_space;
        unknown_access_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses = value;
        dropped_access_responses.value_namespace = name_space;
        dropped_access_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess = value;
        authen_transaction_successess.value_namespace = name_space;
        authen_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure = value;
        authen_transaction_failure.value_namespace = name_space;
        authen_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses = value;
        authen_unexpected_responses.value_namespace = name_space;
        authen_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses = value;
        authen_server_error_responses.value_namespace = name_space;
        authen_server_error_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses = value;
        authen_incorrect_responses.value_namespace = name_space;
        authen_incorrect_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-throttled-transactions")
    {
        auth_throttled_transactions = value;
        auth_throttled_transactions.value_namespace = name_space;
        auth_throttled_transactions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-max-transactions")
    {
        auth_max_transactions = value;
        auth_max_transactions.value_namespace = name_space;
        auth_max_transactions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-auth-reqs")
    {
        total_test_auth_reqs = value;
        total_test_auth_reqs.value_namespace = name_space;
        total_test_auth_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-auth-timeouts")
    {
        total_test_auth_timeouts = value;
        total_test_auth_timeouts.value_namespace = name_space;
        total_test_auth_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-auth-response")
    {
        total_test_auth_response = value;
        total_test_auth_response.value_namespace = name_space;
        total_test_auth_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-auth-pending")
    {
        total_test_auth_pending = value;
        total_test_auth_pending.value_namespace = name_space;
        total_test_auth_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-requests")
    {
        access_requests.yfilter = yfilter;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests.yfilter = yfilter;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits.yfilter = yfilter;
    }
    if(value_path == "access-accepts")
    {
        access_accepts.yfilter = yfilter;
    }
    if(value_path == "access-rejects")
    {
        access_rejects.yfilter = yfilter;
    }
    if(value_path == "access-challenges")
    {
        access_challenges.yfilter = yfilter;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts.yfilter = yfilter;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses.yfilter = yfilter;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators.yfilter = yfilter;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types.yfilter = yfilter;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses.yfilter = yfilter;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses.yfilter = yfilter;
    }
    if(value_path == "auth-throttled-transactions")
    {
        auth_throttled_transactions.yfilter = yfilter;
    }
    if(value_path == "auth-max-transactions")
    {
        auth_max_transactions.yfilter = yfilter;
    }
    if(value_path == "total-test-auth-reqs")
    {
        total_test_auth_reqs.yfilter = yfilter;
    }
    if(value_path == "total-test-auth-timeouts")
    {
        total_test_auth_timeouts.yfilter = yfilter;
    }
    if(value_path == "total-test-auth-response")
    {
        total_test_auth_response.yfilter = yfilter;
    }
    if(value_path == "total-test-auth-pending")
    {
        total_test_auth_pending.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Authentication::AuthenticationGroup::Authentication_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-requests" || name == "pending-access-requests" || name == "access-request-retransmits" || name == "access-accepts" || name == "access-rejects" || name == "access-challenges" || name == "access-timeouts" || name == "bad-access-responses" || name == "bad-access-authenticators" || name == "unknown-access-types" || name == "dropped-access-responses" || name == "rtt" || name == "authen-transaction-successess" || name == "authen-transaction-failure" || name == "authen-unexpected-responses" || name == "authen-server-error-responses" || name == "authen-incorrect-responses" || name == "auth-throttled-transactions" || name == "auth-max-transactions" || name == "total-test-auth-reqs" || name == "total-test-auth-timeouts" || name == "total-test-auth-response" || name == "total-test-auth-pending")
        return true;
    return false;
}

Radius::Nodes::Node::Accounting::Accounting()
    :
    accounting_group(this, {})
{

    yang_name = "accounting"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::Accounting::~Accounting()
{
}

bool Radius::Nodes::Node::Accounting::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<accounting_group.len(); index++)
    {
        if(accounting_group[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::Accounting::has_operation() const
{
    for (std::size_t index=0; index<accounting_group.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-group")
    {
        auto ent_ = std::make_shared<Radius::Nodes::Node::Accounting::AccountingGroup>();
        ent_->parent = this;
        accounting_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : accounting_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    port{YType::uint32, "port"},
    ip_address{YType::str, "ip-address"},
    family{YType::str, "family"}
        ,
    accounting(std::make_shared<Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_>())
{
    accounting->parent = this;

    yang_name = "accounting-group"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::Accounting::AccountingGroup::~AccountingGroup()
{
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::has_data() const
{
    if (is_presence_container) return true;
    return port.is_set
	|| ip_address.is_set
	|| family.is_set
	|| (accounting !=  nullptr && accounting->has_data());
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(port.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(family.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string Radius::Nodes::Node::Accounting::AccountingGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-group";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::Accounting::AccountingGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port.is_set || is_set(port.yfilter)) leaf_name_data.push_back(port.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (family.is_set || is_set(family.yfilter)) leaf_name_data.push_back(family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::Accounting::AccountingGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::Accounting::AccountingGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    return _children;
}

void Radius::Nodes::Node::Accounting::AccountingGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "port")
    {
        port = value;
        port.value_namespace = name_space;
        port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "family")
    {
        family = value;
        family.value_namespace = name_space;
        family.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Accounting::AccountingGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "port")
    {
        port.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "family")
    {
        family.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "port" || name == "ip-address" || name == "family")
        return true;
    return false;
}

Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::Accounting_()
    :
    requests{YType::uint32, "requests"},
    pending_requests{YType::uint32, "pending-requests"},
    retransmits{YType::uint32, "retransmits"},
    responses{YType::uint32, "responses"},
    timeouts{YType::uint32, "timeouts"},
    bad_responses{YType::uint32, "bad-responses"},
    bad_authenticators{YType::uint32, "bad-authenticators"},
    unknown_packet_types{YType::uint32, "unknown-packet-types"},
    dropped_responses{YType::uint32, "dropped-responses"},
    rtt{YType::uint32, "rtt"},
    acct_unexpected_responses{YType::uint32, "acct-unexpected-responses"},
    acct_transaction_successess{YType::uint32, "acct-transaction-successess"},
    acct_transaction_failure{YType::uint32, "acct-transaction-failure"},
    acct_throttled_transactions{YType::uint32, "acct-throttled-transactions"},
    acct_max_throttle_trans{YType::uint32, "acct-max-throttle-trans"},
    total_test_acct_reqs{YType::uint32, "total-test-acct-reqs"},
    total_test_acct_timeouts{YType::uint32, "total-test-acct-timeouts"},
    total_test_acct_response{YType::uint32, "total-test-acct-response"},
    total_test_acct_pending{YType::uint32, "total-test-acct-pending"}
{

    yang_name = "accounting"; yang_parent_name = "accounting-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::~Accounting_()
{
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set
	|| pending_requests.is_set
	|| retransmits.is_set
	|| responses.is_set
	|| timeouts.is_set
	|| bad_responses.is_set
	|| bad_authenticators.is_set
	|| unknown_packet_types.is_set
	|| dropped_responses.is_set
	|| rtt.is_set
	|| acct_unexpected_responses.is_set
	|| acct_transaction_successess.is_set
	|| acct_transaction_failure.is_set
	|| acct_throttled_transactions.is_set
	|| acct_max_throttle_trans.is_set
	|| total_test_acct_reqs.is_set
	|| total_test_acct_timeouts.is_set
	|| total_test_acct_response.is_set
	|| total_test_acct_pending.is_set;
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(pending_requests.yfilter)
	|| ydk::is_set(retransmits.yfilter)
	|| ydk::is_set(responses.yfilter)
	|| ydk::is_set(timeouts.yfilter)
	|| ydk::is_set(bad_responses.yfilter)
	|| ydk::is_set(bad_authenticators.yfilter)
	|| ydk::is_set(unknown_packet_types.yfilter)
	|| ydk::is_set(dropped_responses.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(acct_unexpected_responses.yfilter)
	|| ydk::is_set(acct_transaction_successess.yfilter)
	|| ydk::is_set(acct_transaction_failure.yfilter)
	|| ydk::is_set(acct_throttled_transactions.yfilter)
	|| ydk::is_set(acct_max_throttle_trans.yfilter)
	|| ydk::is_set(total_test_acct_reqs.yfilter)
	|| ydk::is_set(total_test_acct_timeouts.yfilter)
	|| ydk::is_set(total_test_acct_response.yfilter)
	|| ydk::is_set(total_test_acct_pending.yfilter);
}

std::string Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (pending_requests.is_set || is_set(pending_requests.yfilter)) leaf_name_data.push_back(pending_requests.get_name_leafdata());
    if (retransmits.is_set || is_set(retransmits.yfilter)) leaf_name_data.push_back(retransmits.get_name_leafdata());
    if (responses.is_set || is_set(responses.yfilter)) leaf_name_data.push_back(responses.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.yfilter)) leaf_name_data.push_back(timeouts.get_name_leafdata());
    if (bad_responses.is_set || is_set(bad_responses.yfilter)) leaf_name_data.push_back(bad_responses.get_name_leafdata());
    if (bad_authenticators.is_set || is_set(bad_authenticators.yfilter)) leaf_name_data.push_back(bad_authenticators.get_name_leafdata());
    if (unknown_packet_types.is_set || is_set(unknown_packet_types.yfilter)) leaf_name_data.push_back(unknown_packet_types.get_name_leafdata());
    if (dropped_responses.is_set || is_set(dropped_responses.yfilter)) leaf_name_data.push_back(dropped_responses.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (acct_unexpected_responses.is_set || is_set(acct_unexpected_responses.yfilter)) leaf_name_data.push_back(acct_unexpected_responses.get_name_leafdata());
    if (acct_transaction_successess.is_set || is_set(acct_transaction_successess.yfilter)) leaf_name_data.push_back(acct_transaction_successess.get_name_leafdata());
    if (acct_transaction_failure.is_set || is_set(acct_transaction_failure.yfilter)) leaf_name_data.push_back(acct_transaction_failure.get_name_leafdata());
    if (acct_throttled_transactions.is_set || is_set(acct_throttled_transactions.yfilter)) leaf_name_data.push_back(acct_throttled_transactions.get_name_leafdata());
    if (acct_max_throttle_trans.is_set || is_set(acct_max_throttle_trans.yfilter)) leaf_name_data.push_back(acct_max_throttle_trans.get_name_leafdata());
    if (total_test_acct_reqs.is_set || is_set(total_test_acct_reqs.yfilter)) leaf_name_data.push_back(total_test_acct_reqs.get_name_leafdata());
    if (total_test_acct_timeouts.is_set || is_set(total_test_acct_timeouts.yfilter)) leaf_name_data.push_back(total_test_acct_timeouts.get_name_leafdata());
    if (total_test_acct_response.is_set || is_set(total_test_acct_response.yfilter)) leaf_name_data.push_back(total_test_acct_response.get_name_leafdata());
    if (total_test_acct_pending.is_set || is_set(total_test_acct_pending.yfilter)) leaf_name_data.push_back(total_test_acct_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-requests")
    {
        pending_requests = value;
        pending_requests.value_namespace = name_space;
        pending_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmits")
    {
        retransmits = value;
        retransmits.value_namespace = name_space;
        retransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responses")
    {
        responses = value;
        responses.value_namespace = name_space;
        responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
        timeouts.value_namespace = name_space;
        timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-responses")
    {
        bad_responses = value;
        bad_responses.value_namespace = name_space;
        bad_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-authenticators")
    {
        bad_authenticators = value;
        bad_authenticators.value_namespace = name_space;
        bad_authenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-packet-types")
    {
        unknown_packet_types = value;
        unknown_packet_types.value_namespace = name_space;
        unknown_packet_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-responses")
    {
        dropped_responses = value;
        dropped_responses.value_namespace = name_space;
        dropped_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses = value;
        acct_unexpected_responses.value_namespace = name_space;
        acct_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess = value;
        acct_transaction_successess.value_namespace = name_space;
        acct_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure = value;
        acct_transaction_failure.value_namespace = name_space;
        acct_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-throttled-transactions")
    {
        acct_throttled_transactions = value;
        acct_throttled_transactions.value_namespace = name_space;
        acct_throttled_transactions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-max-throttle-trans")
    {
        acct_max_throttle_trans = value;
        acct_max_throttle_trans.value_namespace = name_space;
        acct_max_throttle_trans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-acct-reqs")
    {
        total_test_acct_reqs = value;
        total_test_acct_reqs.value_namespace = name_space;
        total_test_acct_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-acct-timeouts")
    {
        total_test_acct_timeouts = value;
        total_test_acct_timeouts.value_namespace = name_space;
        total_test_acct_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-acct-response")
    {
        total_test_acct_response = value;
        total_test_acct_response.value_namespace = name_space;
        total_test_acct_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-acct-pending")
    {
        total_test_acct_pending = value;
        total_test_acct_pending.value_namespace = name_space;
        total_test_acct_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "pending-requests")
    {
        pending_requests.yfilter = yfilter;
    }
    if(value_path == "retransmits")
    {
        retransmits.yfilter = yfilter;
    }
    if(value_path == "responses")
    {
        responses.yfilter = yfilter;
    }
    if(value_path == "timeouts")
    {
        timeouts.yfilter = yfilter;
    }
    if(value_path == "bad-responses")
    {
        bad_responses.yfilter = yfilter;
    }
    if(value_path == "bad-authenticators")
    {
        bad_authenticators.yfilter = yfilter;
    }
    if(value_path == "unknown-packet-types")
    {
        unknown_packet_types.yfilter = yfilter;
    }
    if(value_path == "dropped-responses")
    {
        dropped_responses.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "acct-throttled-transactions")
    {
        acct_throttled_transactions.yfilter = yfilter;
    }
    if(value_path == "acct-max-throttle-trans")
    {
        acct_max_throttle_trans.yfilter = yfilter;
    }
    if(value_path == "total-test-acct-reqs")
    {
        total_test_acct_reqs.yfilter = yfilter;
    }
    if(value_path == "total-test-acct-timeouts")
    {
        total_test_acct_timeouts.yfilter = yfilter;
    }
    if(value_path == "total-test-acct-response")
    {
        total_test_acct_response.yfilter = yfilter;
    }
    if(value_path == "total-test-acct-pending")
    {
        total_test_acct_pending.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::Accounting::AccountingGroup::Accounting_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests" || name == "pending-requests" || name == "retransmits" || name == "responses" || name == "timeouts" || name == "bad-responses" || name == "bad-authenticators" || name == "unknown-packet-types" || name == "dropped-responses" || name == "rtt" || name == "acct-unexpected-responses" || name == "acct-transaction-successess" || name == "acct-transaction-failure" || name == "acct-throttled-transactions" || name == "acct-max-throttle-trans" || name == "total-test-acct-reqs" || name == "total-test-acct-timeouts" || name == "total-test-acct-response" || name == "total-test-acct-pending")
        return true;
    return false;
}

Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorizationClients()
    :
    dynamic_author_client(this, {})
{

    yang_name = "dynamic-authorization-clients"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::DynamicAuthorizationClients::~DynamicAuthorizationClients()
{
}

bool Radius::Nodes::Node::DynamicAuthorizationClients::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<dynamic_author_client.len(); index++)
    {
        if(dynamic_author_client[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::DynamicAuthorizationClients::has_operation() const
{
    for (std::size_t index=0; index<dynamic_author_client.len(); index++)
    {
        if(dynamic_author_client[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Radius::Nodes::Node::DynamicAuthorizationClients::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-authorization-clients";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::DynamicAuthorizationClients::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::DynamicAuthorizationClients::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-author-client")
    {
        auto ent_ = std::make_shared<Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient>();
        ent_->parent = this;
        dynamic_author_client.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::DynamicAuthorizationClients::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : dynamic_author_client.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Radius::Nodes::Node::DynamicAuthorizationClients::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Radius::Nodes::Node::DynamicAuthorizationClients::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Radius::Nodes::Node::DynamicAuthorizationClients::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dynamic-author-client")
        return true;
    return false;
}

Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::DynamicAuthorClient()
    :
    disc_reqs{YType::uint32, "disc-reqs"},
    disc_acks{YType::uint32, "disc-acks"},
    disc_naks{YType::uint32, "disc-naks"},
    disc_bad_auth{YType::uint32, "disc-bad-auth"},
    drop_disc_reqs{YType::uint32, "drop-disc-reqs"},
    coa_reqs{YType::uint32, "coa-reqs"},
    coa_acks{YType::uint32, "coa-acks"},
    coa_naks{YType::uint32, "coa-naks"},
    coa_bad_auth{YType::uint32, "coa-bad-auth"},
    drop_coa_reqs{YType::uint32, "drop-coa-reqs"},
    unknown_types{YType::uint32, "unknown-types"},
    internal_error{YType::uint32, "internal-error"},
    pak_decode_fail{YType::uint32, "pak-decode-fail"},
    vrf_parse_fail_err{YType::uint32, "vrf-parse-fail-err"},
    unknown_vsa_error{YType::uint32, "unknown-vsa-error"},
    send_msg_failed{YType::uint32, "send-msg-failed"},
    radius_to_ch{YType::uint32, "radius-to-ch"},
    ch_to_radius{YType::uint32, "ch-to-radius"},
    service_parse_fail{YType::uint32, "service-parse-fail"},
    multi_subs_error{YType::uint32, "multi-subs-error"},
    service_not_present{YType::uint32, "service-not-present"},
    send_to_ch_fail{YType::uint32, "send-to-ch-fail"},
    vrf_name{YType::str, "vrf-name"},
    client_address{YType::str, "client-address"}
{

    yang_name = "dynamic-author-client"; yang_parent_name = "dynamic-authorization-clients"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::~DynamicAuthorClient()
{
}

bool Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::has_data() const
{
    if (is_presence_container) return true;
    return disc_reqs.is_set
	|| disc_acks.is_set
	|| disc_naks.is_set
	|| disc_bad_auth.is_set
	|| drop_disc_reqs.is_set
	|| coa_reqs.is_set
	|| coa_acks.is_set
	|| coa_naks.is_set
	|| coa_bad_auth.is_set
	|| drop_coa_reqs.is_set
	|| unknown_types.is_set
	|| internal_error.is_set
	|| pak_decode_fail.is_set
	|| vrf_parse_fail_err.is_set
	|| unknown_vsa_error.is_set
	|| send_msg_failed.is_set
	|| radius_to_ch.is_set
	|| ch_to_radius.is_set
	|| service_parse_fail.is_set
	|| multi_subs_error.is_set
	|| service_not_present.is_set
	|| send_to_ch_fail.is_set
	|| vrf_name.is_set
	|| client_address.is_set;
}

bool Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disc_reqs.yfilter)
	|| ydk::is_set(disc_acks.yfilter)
	|| ydk::is_set(disc_naks.yfilter)
	|| ydk::is_set(disc_bad_auth.yfilter)
	|| ydk::is_set(drop_disc_reqs.yfilter)
	|| ydk::is_set(coa_reqs.yfilter)
	|| ydk::is_set(coa_acks.yfilter)
	|| ydk::is_set(coa_naks.yfilter)
	|| ydk::is_set(coa_bad_auth.yfilter)
	|| ydk::is_set(drop_coa_reqs.yfilter)
	|| ydk::is_set(unknown_types.yfilter)
	|| ydk::is_set(internal_error.yfilter)
	|| ydk::is_set(pak_decode_fail.yfilter)
	|| ydk::is_set(vrf_parse_fail_err.yfilter)
	|| ydk::is_set(unknown_vsa_error.yfilter)
	|| ydk::is_set(send_msg_failed.yfilter)
	|| ydk::is_set(radius_to_ch.yfilter)
	|| ydk::is_set(ch_to_radius.yfilter)
	|| ydk::is_set(service_parse_fail.yfilter)
	|| ydk::is_set(multi_subs_error.yfilter)
	|| ydk::is_set(service_not_present.yfilter)
	|| ydk::is_set(send_to_ch_fail.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(client_address.yfilter);
}

std::string Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-author-client";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disc_reqs.is_set || is_set(disc_reqs.yfilter)) leaf_name_data.push_back(disc_reqs.get_name_leafdata());
    if (disc_acks.is_set || is_set(disc_acks.yfilter)) leaf_name_data.push_back(disc_acks.get_name_leafdata());
    if (disc_naks.is_set || is_set(disc_naks.yfilter)) leaf_name_data.push_back(disc_naks.get_name_leafdata());
    if (disc_bad_auth.is_set || is_set(disc_bad_auth.yfilter)) leaf_name_data.push_back(disc_bad_auth.get_name_leafdata());
    if (drop_disc_reqs.is_set || is_set(drop_disc_reqs.yfilter)) leaf_name_data.push_back(drop_disc_reqs.get_name_leafdata());
    if (coa_reqs.is_set || is_set(coa_reqs.yfilter)) leaf_name_data.push_back(coa_reqs.get_name_leafdata());
    if (coa_acks.is_set || is_set(coa_acks.yfilter)) leaf_name_data.push_back(coa_acks.get_name_leafdata());
    if (coa_naks.is_set || is_set(coa_naks.yfilter)) leaf_name_data.push_back(coa_naks.get_name_leafdata());
    if (coa_bad_auth.is_set || is_set(coa_bad_auth.yfilter)) leaf_name_data.push_back(coa_bad_auth.get_name_leafdata());
    if (drop_coa_reqs.is_set || is_set(drop_coa_reqs.yfilter)) leaf_name_data.push_back(drop_coa_reqs.get_name_leafdata());
    if (unknown_types.is_set || is_set(unknown_types.yfilter)) leaf_name_data.push_back(unknown_types.get_name_leafdata());
    if (internal_error.is_set || is_set(internal_error.yfilter)) leaf_name_data.push_back(internal_error.get_name_leafdata());
    if (pak_decode_fail.is_set || is_set(pak_decode_fail.yfilter)) leaf_name_data.push_back(pak_decode_fail.get_name_leafdata());
    if (vrf_parse_fail_err.is_set || is_set(vrf_parse_fail_err.yfilter)) leaf_name_data.push_back(vrf_parse_fail_err.get_name_leafdata());
    if (unknown_vsa_error.is_set || is_set(unknown_vsa_error.yfilter)) leaf_name_data.push_back(unknown_vsa_error.get_name_leafdata());
    if (send_msg_failed.is_set || is_set(send_msg_failed.yfilter)) leaf_name_data.push_back(send_msg_failed.get_name_leafdata());
    if (radius_to_ch.is_set || is_set(radius_to_ch.yfilter)) leaf_name_data.push_back(radius_to_ch.get_name_leafdata());
    if (ch_to_radius.is_set || is_set(ch_to_radius.yfilter)) leaf_name_data.push_back(ch_to_radius.get_name_leafdata());
    if (service_parse_fail.is_set || is_set(service_parse_fail.yfilter)) leaf_name_data.push_back(service_parse_fail.get_name_leafdata());
    if (multi_subs_error.is_set || is_set(multi_subs_error.yfilter)) leaf_name_data.push_back(multi_subs_error.get_name_leafdata());
    if (service_not_present.is_set || is_set(service_not_present.yfilter)) leaf_name_data.push_back(service_not_present.get_name_leafdata());
    if (send_to_ch_fail.is_set || is_set(send_to_ch_fail.yfilter)) leaf_name_data.push_back(send_to_ch_fail.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.yfilter)) leaf_name_data.push_back(client_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "disc-reqs")
    {
        disc_reqs = value;
        disc_reqs.value_namespace = name_space;
        disc_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disc-acks")
    {
        disc_acks = value;
        disc_acks.value_namespace = name_space;
        disc_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disc-naks")
    {
        disc_naks = value;
        disc_naks.value_namespace = name_space;
        disc_naks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disc-bad-auth")
    {
        disc_bad_auth = value;
        disc_bad_auth.value_namespace = name_space;
        disc_bad_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-disc-reqs")
    {
        drop_disc_reqs = value;
        drop_disc_reqs.value_namespace = name_space;
        drop_disc_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coa-reqs")
    {
        coa_reqs = value;
        coa_reqs.value_namespace = name_space;
        coa_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coa-acks")
    {
        coa_acks = value;
        coa_acks.value_namespace = name_space;
        coa_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coa-naks")
    {
        coa_naks = value;
        coa_naks.value_namespace = name_space;
        coa_naks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coa-bad-auth")
    {
        coa_bad_auth = value;
        coa_bad_auth.value_namespace = name_space;
        coa_bad_auth.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "drop-coa-reqs")
    {
        drop_coa_reqs = value;
        drop_coa_reqs.value_namespace = name_space;
        drop_coa_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-types")
    {
        unknown_types = value;
        unknown_types.value_namespace = name_space;
        unknown_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "internal-error")
    {
        internal_error = value;
        internal_error.value_namespace = name_space;
        internal_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pak-decode-fail")
    {
        pak_decode_fail = value;
        pak_decode_fail.value_namespace = name_space;
        pak_decode_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-parse-fail-err")
    {
        vrf_parse_fail_err = value;
        vrf_parse_fail_err.value_namespace = name_space;
        vrf_parse_fail_err.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-vsa-error")
    {
        unknown_vsa_error = value;
        unknown_vsa_error.value_namespace = name_space;
        unknown_vsa_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-msg-failed")
    {
        send_msg_failed = value;
        send_msg_failed.value_namespace = name_space;
        send_msg_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "radius-to-ch")
    {
        radius_to_ch = value;
        radius_to_ch.value_namespace = name_space;
        radius_to_ch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ch-to-radius")
    {
        ch_to_radius = value;
        ch_to_radius.value_namespace = name_space;
        ch_to_radius.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-parse-fail")
    {
        service_parse_fail = value;
        service_parse_fail.value_namespace = name_space;
        service_parse_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "multi-subs-error")
    {
        multi_subs_error = value;
        multi_subs_error.value_namespace = name_space;
        multi_subs_error.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-not-present")
    {
        service_not_present = value;
        service_not_present.value_namespace = name_space;
        service_not_present.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "send-to-ch-fail")
    {
        send_to_ch_fail = value;
        send_to_ch_fail.value_namespace = name_space;
        send_to_ch_fail.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-address")
    {
        client_address = value;
        client_address.value_namespace = name_space;
        client_address.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "disc-reqs")
    {
        disc_reqs.yfilter = yfilter;
    }
    if(value_path == "disc-acks")
    {
        disc_acks.yfilter = yfilter;
    }
    if(value_path == "disc-naks")
    {
        disc_naks.yfilter = yfilter;
    }
    if(value_path == "disc-bad-auth")
    {
        disc_bad_auth.yfilter = yfilter;
    }
    if(value_path == "drop-disc-reqs")
    {
        drop_disc_reqs.yfilter = yfilter;
    }
    if(value_path == "coa-reqs")
    {
        coa_reqs.yfilter = yfilter;
    }
    if(value_path == "coa-acks")
    {
        coa_acks.yfilter = yfilter;
    }
    if(value_path == "coa-naks")
    {
        coa_naks.yfilter = yfilter;
    }
    if(value_path == "coa-bad-auth")
    {
        coa_bad_auth.yfilter = yfilter;
    }
    if(value_path == "drop-coa-reqs")
    {
        drop_coa_reqs.yfilter = yfilter;
    }
    if(value_path == "unknown-types")
    {
        unknown_types.yfilter = yfilter;
    }
    if(value_path == "internal-error")
    {
        internal_error.yfilter = yfilter;
    }
    if(value_path == "pak-decode-fail")
    {
        pak_decode_fail.yfilter = yfilter;
    }
    if(value_path == "vrf-parse-fail-err")
    {
        vrf_parse_fail_err.yfilter = yfilter;
    }
    if(value_path == "unknown-vsa-error")
    {
        unknown_vsa_error.yfilter = yfilter;
    }
    if(value_path == "send-msg-failed")
    {
        send_msg_failed.yfilter = yfilter;
    }
    if(value_path == "radius-to-ch")
    {
        radius_to_ch.yfilter = yfilter;
    }
    if(value_path == "ch-to-radius")
    {
        ch_to_radius.yfilter = yfilter;
    }
    if(value_path == "service-parse-fail")
    {
        service_parse_fail.yfilter = yfilter;
    }
    if(value_path == "multi-subs-error")
    {
        multi_subs_error.yfilter = yfilter;
    }
    if(value_path == "service-not-present")
    {
        service_not_present.yfilter = yfilter;
    }
    if(value_path == "send-to-ch-fail")
    {
        send_to_ch_fail.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "client-address")
    {
        client_address.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DynamicAuthorizationClients::DynamicAuthorClient::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disc-reqs" || name == "disc-acks" || name == "disc-naks" || name == "disc-bad-auth" || name == "drop-disc-reqs" || name == "coa-reqs" || name == "coa-acks" || name == "coa-naks" || name == "coa-bad-auth" || name == "drop-coa-reqs" || name == "unknown-types" || name == "internal-error" || name == "pak-decode-fail" || name == "vrf-parse-fail-err" || name == "unknown-vsa-error" || name == "send-msg-failed" || name == "radius-to-ch" || name == "ch-to-radius" || name == "service-parse-fail" || name == "multi-subs-error" || name == "service-not-present" || name == "send-to-ch-fail" || name == "vrf-name" || name == "client-address")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroups()
    :
    server_group(this, {"server_group_name"})
{

    yang_name = "server-groups"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::ServerGroups::~ServerGroups()
{
}

bool Radius::Nodes::Node::ServerGroups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server_group.len(); index++)
    {
        if(server_group[index]->has_data())
            return true;
    }
    return false;
}

bool Radius::Nodes::Node::ServerGroups::has_operation() const
{
    for (std::size_t index=0; index<server_group.len(); index++)
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

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::ServerGroups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::ServerGroups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-group")
    {
        auto ent_ = std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup>();
        ent_->parent = this;
        server_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::ServerGroups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    groups{YType::uint32, "groups"},
    vrf_name{YType::str, "vrf-name"},
    dead_time{YType::uint32, "dead-time"},
    servers{YType::uint32, "servers"}
        ,
    server_group(this, {})
{

    yang_name = "server-group"; yang_parent_name = "server-groups"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::ServerGroups::ServerGroup::~ServerGroup()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<server_group.len(); index++)
    {
        if(server_group[index]->has_data())
            return true;
    }
    return server_group_name.is_set
	|| groups.is_set
	|| vrf_name.is_set
	|| dead_time.is_set
	|| servers.is_set;
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::has_operation() const
{
    for (std::size_t index=0; index<server_group.len(); index++)
    {
        if(server_group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(server_group_name.yfilter)
	|| ydk::is_set(groups.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(dead_time.yfilter)
	|| ydk::is_set(servers.yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-group";
    ADD_KEY_TOKEN(server_group_name, "server-group-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::ServerGroups::ServerGroup::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (server_group_name.is_set || is_set(server_group_name.yfilter)) leaf_name_data.push_back(server_group_name.get_name_leafdata());
    if (groups.is_set || is_set(groups.yfilter)) leaf_name_data.push_back(groups.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (dead_time.is_set || is_set(dead_time.yfilter)) leaf_name_data.push_back(dead_time.get_name_leafdata());
    if (servers.is_set || is_set(servers.yfilter)) leaf_name_data.push_back(servers.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-group")
    {
        auto ent_ = std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_>();
        ent_->parent = this;
        server_group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : server_group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "server-group-name")
    {
        server_group_name = value;
        server_group_name.value_namespace = name_space;
        server_group_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "groups")
    {
        groups = value;
        groups.value_namespace = name_space;
        groups.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dead-time")
    {
        dead_time = value;
        dead_time.value_namespace = name_space;
        dead_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "servers")
    {
        servers = value;
        servers.value_namespace = name_space;
        servers.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "server-group-name")
    {
        server_group_name.yfilter = yfilter;
    }
    if(value_path == "groups")
    {
        groups.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "dead-time")
    {
        dead_time.yfilter = yfilter;
    }
    if(value_path == "servers")
    {
        servers.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "server-group" || name == "server-group-name" || name == "groups" || name == "vrf-name" || name == "dead-time" || name == "servers")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::ServerGroup_()
    :
    authentication_port{YType::uint32, "authentication-port"},
    accounting_port{YType::uint32, "accounting-port"},
    is_private{YType::boolean, "is-private"},
    ip_address{YType::str, "ip-address"},
    family{YType::str, "family"},
    redirected_requests{YType::uint32, "redirected-requests"}
        ,
    accounting(std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting>())
    , authentication(std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication>())
    , authorization(std::make_shared<Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization>())
{
    accounting->parent = this;
    authentication->parent = this;
    authorization->parent = this;

    yang_name = "server-group"; yang_parent_name = "server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::~ServerGroup_()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::has_data() const
{
    if (is_presence_container) return true;
    return authentication_port.is_set
	|| accounting_port.is_set
	|| is_private.is_set
	|| ip_address.is_set
	|| family.is_set
	|| redirected_requests.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data());
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_port.yfilter)
	|| ydk::is_set(accounting_port.yfilter)
	|| ydk::is_set(is_private.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(family.yfilter)
	|| ydk::is_set(redirected_requests.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation());
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-group";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_port.is_set || is_set(authentication_port.yfilter)) leaf_name_data.push_back(authentication_port.get_name_leafdata());
    if (accounting_port.is_set || is_set(accounting_port.yfilter)) leaf_name_data.push_back(accounting_port.get_name_leafdata());
    if (is_private.is_set || is_set(is_private.yfilter)) leaf_name_data.push_back(is_private.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (family.is_set || is_set(family.yfilter)) leaf_name_data.push_back(family.get_name_leafdata());
    if (redirected_requests.is_set || is_set(redirected_requests.yfilter)) leaf_name_data.push_back(redirected_requests.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    if(authentication != nullptr)
    {
        _children["authentication"] = authentication;
    }

    if(authorization != nullptr)
    {
        _children["authorization"] = authorization;
    }

    return _children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-port")
    {
        authentication_port = value;
        authentication_port.value_namespace = name_space;
        authentication_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-port")
    {
        accounting_port = value;
        accounting_port.value_namespace = name_space;
        accounting_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-private")
    {
        is_private = value;
        is_private.value_namespace = name_space;
        is_private.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "family")
    {
        family = value;
        family.value_namespace = name_space;
        family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirected-requests")
    {
        redirected_requests = value;
        redirected_requests.value_namespace = name_space;
        redirected_requests.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-port")
    {
        authentication_port.yfilter = yfilter;
    }
    if(value_path == "accounting-port")
    {
        accounting_port.yfilter = yfilter;
    }
    if(value_path == "is-private")
    {
        is_private.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "family")
    {
        family.yfilter = yfilter;
    }
    if(value_path == "redirected-requests")
    {
        redirected_requests.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "authentication" || name == "authorization" || name == "authentication-port" || name == "accounting-port" || name == "is-private" || name == "ip-address" || name == "family" || name == "redirected-requests")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::Accounting()
    :
    requests{YType::uint32, "requests"},
    pending_requests{YType::uint32, "pending-requests"},
    retransmits{YType::uint32, "retransmits"},
    responses{YType::uint32, "responses"},
    timeouts{YType::uint32, "timeouts"},
    bad_responses{YType::uint32, "bad-responses"},
    bad_authenticators{YType::uint32, "bad-authenticators"},
    unknown_packet_types{YType::uint32, "unknown-packet-types"},
    dropped_responses{YType::uint32, "dropped-responses"},
    rtt{YType::uint32, "rtt"},
    acct_unexpected_responses{YType::uint32, "acct-unexpected-responses"},
    acct_transaction_successess{YType::uint32, "acct-transaction-successess"},
    acct_transaction_failure{YType::uint32, "acct-transaction-failure"},
    acct_throttled_transactions{YType::uint32, "acct-throttled-transactions"},
    acct_max_throttle_trans{YType::uint32, "acct-max-throttle-trans"},
    total_test_acct_reqs{YType::uint32, "total-test-acct-reqs"},
    total_test_acct_timeouts{YType::uint32, "total-test-acct-timeouts"},
    total_test_acct_response{YType::uint32, "total-test-acct-response"},
    total_test_acct_pending{YType::uint32, "total-test-acct-pending"}
{

    yang_name = "accounting"; yang_parent_name = "server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::~Accounting()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::has_data() const
{
    if (is_presence_container) return true;
    return requests.is_set
	|| pending_requests.is_set
	|| retransmits.is_set
	|| responses.is_set
	|| timeouts.is_set
	|| bad_responses.is_set
	|| bad_authenticators.is_set
	|| unknown_packet_types.is_set
	|| dropped_responses.is_set
	|| rtt.is_set
	|| acct_unexpected_responses.is_set
	|| acct_transaction_successess.is_set
	|| acct_transaction_failure.is_set
	|| acct_throttled_transactions.is_set
	|| acct_max_throttle_trans.is_set
	|| total_test_acct_reqs.is_set
	|| total_test_acct_timeouts.is_set
	|| total_test_acct_response.is_set
	|| total_test_acct_pending.is_set;
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(requests.yfilter)
	|| ydk::is_set(pending_requests.yfilter)
	|| ydk::is_set(retransmits.yfilter)
	|| ydk::is_set(responses.yfilter)
	|| ydk::is_set(timeouts.yfilter)
	|| ydk::is_set(bad_responses.yfilter)
	|| ydk::is_set(bad_authenticators.yfilter)
	|| ydk::is_set(unknown_packet_types.yfilter)
	|| ydk::is_set(dropped_responses.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(acct_unexpected_responses.yfilter)
	|| ydk::is_set(acct_transaction_successess.yfilter)
	|| ydk::is_set(acct_transaction_failure.yfilter)
	|| ydk::is_set(acct_throttled_transactions.yfilter)
	|| ydk::is_set(acct_max_throttle_trans.yfilter)
	|| ydk::is_set(total_test_acct_reqs.yfilter)
	|| ydk::is_set(total_test_acct_timeouts.yfilter)
	|| ydk::is_set(total_test_acct_response.yfilter)
	|| ydk::is_set(total_test_acct_pending.yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (requests.is_set || is_set(requests.yfilter)) leaf_name_data.push_back(requests.get_name_leafdata());
    if (pending_requests.is_set || is_set(pending_requests.yfilter)) leaf_name_data.push_back(pending_requests.get_name_leafdata());
    if (retransmits.is_set || is_set(retransmits.yfilter)) leaf_name_data.push_back(retransmits.get_name_leafdata());
    if (responses.is_set || is_set(responses.yfilter)) leaf_name_data.push_back(responses.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.yfilter)) leaf_name_data.push_back(timeouts.get_name_leafdata());
    if (bad_responses.is_set || is_set(bad_responses.yfilter)) leaf_name_data.push_back(bad_responses.get_name_leafdata());
    if (bad_authenticators.is_set || is_set(bad_authenticators.yfilter)) leaf_name_data.push_back(bad_authenticators.get_name_leafdata());
    if (unknown_packet_types.is_set || is_set(unknown_packet_types.yfilter)) leaf_name_data.push_back(unknown_packet_types.get_name_leafdata());
    if (dropped_responses.is_set || is_set(dropped_responses.yfilter)) leaf_name_data.push_back(dropped_responses.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (acct_unexpected_responses.is_set || is_set(acct_unexpected_responses.yfilter)) leaf_name_data.push_back(acct_unexpected_responses.get_name_leafdata());
    if (acct_transaction_successess.is_set || is_set(acct_transaction_successess.yfilter)) leaf_name_data.push_back(acct_transaction_successess.get_name_leafdata());
    if (acct_transaction_failure.is_set || is_set(acct_transaction_failure.yfilter)) leaf_name_data.push_back(acct_transaction_failure.get_name_leafdata());
    if (acct_throttled_transactions.is_set || is_set(acct_throttled_transactions.yfilter)) leaf_name_data.push_back(acct_throttled_transactions.get_name_leafdata());
    if (acct_max_throttle_trans.is_set || is_set(acct_max_throttle_trans.yfilter)) leaf_name_data.push_back(acct_max_throttle_trans.get_name_leafdata());
    if (total_test_acct_reqs.is_set || is_set(total_test_acct_reqs.yfilter)) leaf_name_data.push_back(total_test_acct_reqs.get_name_leafdata());
    if (total_test_acct_timeouts.is_set || is_set(total_test_acct_timeouts.yfilter)) leaf_name_data.push_back(total_test_acct_timeouts.get_name_leafdata());
    if (total_test_acct_response.is_set || is_set(total_test_acct_response.yfilter)) leaf_name_data.push_back(total_test_acct_response.get_name_leafdata());
    if (total_test_acct_pending.is_set || is_set(total_test_acct_pending.yfilter)) leaf_name_data.push_back(total_test_acct_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "requests")
    {
        requests = value;
        requests.value_namespace = name_space;
        requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-requests")
    {
        pending_requests = value;
        pending_requests.value_namespace = name_space;
        pending_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retransmits")
    {
        retransmits = value;
        retransmits.value_namespace = name_space;
        retransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "responses")
    {
        responses = value;
        responses.value_namespace = name_space;
        responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
        timeouts.value_namespace = name_space;
        timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-responses")
    {
        bad_responses = value;
        bad_responses.value_namespace = name_space;
        bad_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-authenticators")
    {
        bad_authenticators = value;
        bad_authenticators.value_namespace = name_space;
        bad_authenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-packet-types")
    {
        unknown_packet_types = value;
        unknown_packet_types.value_namespace = name_space;
        unknown_packet_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-responses")
    {
        dropped_responses = value;
        dropped_responses.value_namespace = name_space;
        dropped_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses = value;
        acct_unexpected_responses.value_namespace = name_space;
        acct_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess = value;
        acct_transaction_successess.value_namespace = name_space;
        acct_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure = value;
        acct_transaction_failure.value_namespace = name_space;
        acct_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-throttled-transactions")
    {
        acct_throttled_transactions = value;
        acct_throttled_transactions.value_namespace = name_space;
        acct_throttled_transactions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acct-max-throttle-trans")
    {
        acct_max_throttle_trans = value;
        acct_max_throttle_trans.value_namespace = name_space;
        acct_max_throttle_trans.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-acct-reqs")
    {
        total_test_acct_reqs = value;
        total_test_acct_reqs.value_namespace = name_space;
        total_test_acct_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-acct-timeouts")
    {
        total_test_acct_timeouts = value;
        total_test_acct_timeouts.value_namespace = name_space;
        total_test_acct_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-acct-response")
    {
        total_test_acct_response = value;
        total_test_acct_response.value_namespace = name_space;
        total_test_acct_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-acct-pending")
    {
        total_test_acct_pending = value;
        total_test_acct_pending.value_namespace = name_space;
        total_test_acct_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "requests")
    {
        requests.yfilter = yfilter;
    }
    if(value_path == "pending-requests")
    {
        pending_requests.yfilter = yfilter;
    }
    if(value_path == "retransmits")
    {
        retransmits.yfilter = yfilter;
    }
    if(value_path == "responses")
    {
        responses.yfilter = yfilter;
    }
    if(value_path == "timeouts")
    {
        timeouts.yfilter = yfilter;
    }
    if(value_path == "bad-responses")
    {
        bad_responses.yfilter = yfilter;
    }
    if(value_path == "bad-authenticators")
    {
        bad_authenticators.yfilter = yfilter;
    }
    if(value_path == "unknown-packet-types")
    {
        unknown_packet_types.yfilter = yfilter;
    }
    if(value_path == "dropped-responses")
    {
        dropped_responses.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "acct-unexpected-responses")
    {
        acct_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "acct-transaction-successess")
    {
        acct_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "acct-transaction-failure")
    {
        acct_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "acct-throttled-transactions")
    {
        acct_throttled_transactions.yfilter = yfilter;
    }
    if(value_path == "acct-max-throttle-trans")
    {
        acct_max_throttle_trans.yfilter = yfilter;
    }
    if(value_path == "total-test-acct-reqs")
    {
        total_test_acct_reqs.yfilter = yfilter;
    }
    if(value_path == "total-test-acct-timeouts")
    {
        total_test_acct_timeouts.yfilter = yfilter;
    }
    if(value_path == "total-test-acct-response")
    {
        total_test_acct_response.yfilter = yfilter;
    }
    if(value_path == "total-test-acct-pending")
    {
        total_test_acct_pending.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "requests" || name == "pending-requests" || name == "retransmits" || name == "responses" || name == "timeouts" || name == "bad-responses" || name == "bad-authenticators" || name == "unknown-packet-types" || name == "dropped-responses" || name == "rtt" || name == "acct-unexpected-responses" || name == "acct-transaction-successess" || name == "acct-transaction-failure" || name == "acct-throttled-transactions" || name == "acct-max-throttle-trans" || name == "total-test-acct-reqs" || name == "total-test-acct-timeouts" || name == "total-test-acct-response" || name == "total-test-acct-pending")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::Authentication()
    :
    access_requests{YType::uint32, "access-requests"},
    pending_access_requests{YType::uint32, "pending-access-requests"},
    access_request_retransmits{YType::uint32, "access-request-retransmits"},
    access_accepts{YType::uint32, "access-accepts"},
    access_rejects{YType::uint32, "access-rejects"},
    access_challenges{YType::uint32, "access-challenges"},
    access_timeouts{YType::uint32, "access-timeouts"},
    bad_access_responses{YType::uint32, "bad-access-responses"},
    bad_access_authenticators{YType::uint32, "bad-access-authenticators"},
    unknown_access_types{YType::uint32, "unknown-access-types"},
    dropped_access_responses{YType::uint32, "dropped-access-responses"},
    rtt{YType::uint32, "rtt"},
    authen_transaction_successess{YType::uint32, "authen-transaction-successess"},
    authen_transaction_failure{YType::uint32, "authen-transaction-failure"},
    authen_unexpected_responses{YType::uint32, "authen-unexpected-responses"},
    authen_server_error_responses{YType::uint32, "authen-server-error-responses"},
    authen_incorrect_responses{YType::uint32, "authen-incorrect-responses"},
    auth_throttled_transactions{YType::uint32, "auth-throttled-transactions"},
    auth_max_transactions{YType::uint32, "auth-max-transactions"},
    total_test_auth_reqs{YType::uint32, "total-test-auth-reqs"},
    total_test_auth_timeouts{YType::uint32, "total-test-auth-timeouts"},
    total_test_auth_response{YType::uint32, "total-test-auth-response"},
    total_test_auth_pending{YType::uint32, "total-test-auth-pending"}
{

    yang_name = "authentication"; yang_parent_name = "server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::~Authentication()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::has_data() const
{
    if (is_presence_container) return true;
    return access_requests.is_set
	|| pending_access_requests.is_set
	|| access_request_retransmits.is_set
	|| access_accepts.is_set
	|| access_rejects.is_set
	|| access_challenges.is_set
	|| access_timeouts.is_set
	|| bad_access_responses.is_set
	|| bad_access_authenticators.is_set
	|| unknown_access_types.is_set
	|| dropped_access_responses.is_set
	|| rtt.is_set
	|| authen_transaction_successess.is_set
	|| authen_transaction_failure.is_set
	|| authen_unexpected_responses.is_set
	|| authen_server_error_responses.is_set
	|| authen_incorrect_responses.is_set
	|| auth_throttled_transactions.is_set
	|| auth_max_transactions.is_set
	|| total_test_auth_reqs.is_set
	|| total_test_auth_timeouts.is_set
	|| total_test_auth_response.is_set
	|| total_test_auth_pending.is_set;
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(access_requests.yfilter)
	|| ydk::is_set(pending_access_requests.yfilter)
	|| ydk::is_set(access_request_retransmits.yfilter)
	|| ydk::is_set(access_accepts.yfilter)
	|| ydk::is_set(access_rejects.yfilter)
	|| ydk::is_set(access_challenges.yfilter)
	|| ydk::is_set(access_timeouts.yfilter)
	|| ydk::is_set(bad_access_responses.yfilter)
	|| ydk::is_set(bad_access_authenticators.yfilter)
	|| ydk::is_set(unknown_access_types.yfilter)
	|| ydk::is_set(dropped_access_responses.yfilter)
	|| ydk::is_set(rtt.yfilter)
	|| ydk::is_set(authen_transaction_successess.yfilter)
	|| ydk::is_set(authen_transaction_failure.yfilter)
	|| ydk::is_set(authen_unexpected_responses.yfilter)
	|| ydk::is_set(authen_server_error_responses.yfilter)
	|| ydk::is_set(authen_incorrect_responses.yfilter)
	|| ydk::is_set(auth_throttled_transactions.yfilter)
	|| ydk::is_set(auth_max_transactions.yfilter)
	|| ydk::is_set(total_test_auth_reqs.yfilter)
	|| ydk::is_set(total_test_auth_timeouts.yfilter)
	|| ydk::is_set(total_test_auth_response.yfilter)
	|| ydk::is_set(total_test_auth_pending.yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (access_requests.is_set || is_set(access_requests.yfilter)) leaf_name_data.push_back(access_requests.get_name_leafdata());
    if (pending_access_requests.is_set || is_set(pending_access_requests.yfilter)) leaf_name_data.push_back(pending_access_requests.get_name_leafdata());
    if (access_request_retransmits.is_set || is_set(access_request_retransmits.yfilter)) leaf_name_data.push_back(access_request_retransmits.get_name_leafdata());
    if (access_accepts.is_set || is_set(access_accepts.yfilter)) leaf_name_data.push_back(access_accepts.get_name_leafdata());
    if (access_rejects.is_set || is_set(access_rejects.yfilter)) leaf_name_data.push_back(access_rejects.get_name_leafdata());
    if (access_challenges.is_set || is_set(access_challenges.yfilter)) leaf_name_data.push_back(access_challenges.get_name_leafdata());
    if (access_timeouts.is_set || is_set(access_timeouts.yfilter)) leaf_name_data.push_back(access_timeouts.get_name_leafdata());
    if (bad_access_responses.is_set || is_set(bad_access_responses.yfilter)) leaf_name_data.push_back(bad_access_responses.get_name_leafdata());
    if (bad_access_authenticators.is_set || is_set(bad_access_authenticators.yfilter)) leaf_name_data.push_back(bad_access_authenticators.get_name_leafdata());
    if (unknown_access_types.is_set || is_set(unknown_access_types.yfilter)) leaf_name_data.push_back(unknown_access_types.get_name_leafdata());
    if (dropped_access_responses.is_set || is_set(dropped_access_responses.yfilter)) leaf_name_data.push_back(dropped_access_responses.get_name_leafdata());
    if (rtt.is_set || is_set(rtt.yfilter)) leaf_name_data.push_back(rtt.get_name_leafdata());
    if (authen_transaction_successess.is_set || is_set(authen_transaction_successess.yfilter)) leaf_name_data.push_back(authen_transaction_successess.get_name_leafdata());
    if (authen_transaction_failure.is_set || is_set(authen_transaction_failure.yfilter)) leaf_name_data.push_back(authen_transaction_failure.get_name_leafdata());
    if (authen_unexpected_responses.is_set || is_set(authen_unexpected_responses.yfilter)) leaf_name_data.push_back(authen_unexpected_responses.get_name_leafdata());
    if (authen_server_error_responses.is_set || is_set(authen_server_error_responses.yfilter)) leaf_name_data.push_back(authen_server_error_responses.get_name_leafdata());
    if (authen_incorrect_responses.is_set || is_set(authen_incorrect_responses.yfilter)) leaf_name_data.push_back(authen_incorrect_responses.get_name_leafdata());
    if (auth_throttled_transactions.is_set || is_set(auth_throttled_transactions.yfilter)) leaf_name_data.push_back(auth_throttled_transactions.get_name_leafdata());
    if (auth_max_transactions.is_set || is_set(auth_max_transactions.yfilter)) leaf_name_data.push_back(auth_max_transactions.get_name_leafdata());
    if (total_test_auth_reqs.is_set || is_set(total_test_auth_reqs.yfilter)) leaf_name_data.push_back(total_test_auth_reqs.get_name_leafdata());
    if (total_test_auth_timeouts.is_set || is_set(total_test_auth_timeouts.yfilter)) leaf_name_data.push_back(total_test_auth_timeouts.get_name_leafdata());
    if (total_test_auth_response.is_set || is_set(total_test_auth_response.yfilter)) leaf_name_data.push_back(total_test_auth_response.get_name_leafdata());
    if (total_test_auth_pending.is_set || is_set(total_test_auth_pending.yfilter)) leaf_name_data.push_back(total_test_auth_pending.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "access-requests")
    {
        access_requests = value;
        access_requests.value_namespace = name_space;
        access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests = value;
        pending_access_requests.value_namespace = name_space;
        pending_access_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits = value;
        access_request_retransmits.value_namespace = name_space;
        access_request_retransmits.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-accepts")
    {
        access_accepts = value;
        access_accepts.value_namespace = name_space;
        access_accepts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-rejects")
    {
        access_rejects = value;
        access_rejects.value_namespace = name_space;
        access_rejects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-challenges")
    {
        access_challenges = value;
        access_challenges.value_namespace = name_space;
        access_challenges.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts = value;
        access_timeouts.value_namespace = name_space;
        access_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses = value;
        bad_access_responses.value_namespace = name_space;
        bad_access_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators = value;
        bad_access_authenticators.value_namespace = name_space;
        bad_access_authenticators.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types = value;
        unknown_access_types.value_namespace = name_space;
        unknown_access_types.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses = value;
        dropped_access_responses.value_namespace = name_space;
        dropped_access_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rtt")
    {
        rtt = value;
        rtt.value_namespace = name_space;
        rtt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess = value;
        authen_transaction_successess.value_namespace = name_space;
        authen_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure = value;
        authen_transaction_failure.value_namespace = name_space;
        authen_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses = value;
        authen_unexpected_responses.value_namespace = name_space;
        authen_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses = value;
        authen_server_error_responses.value_namespace = name_space;
        authen_server_error_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses = value;
        authen_incorrect_responses.value_namespace = name_space;
        authen_incorrect_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-throttled-transactions")
    {
        auth_throttled_transactions = value;
        auth_throttled_transactions.value_namespace = name_space;
        auth_throttled_transactions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-max-transactions")
    {
        auth_max_transactions = value;
        auth_max_transactions.value_namespace = name_space;
        auth_max_transactions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-auth-reqs")
    {
        total_test_auth_reqs = value;
        total_test_auth_reqs.value_namespace = name_space;
        total_test_auth_reqs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-auth-timeouts")
    {
        total_test_auth_timeouts = value;
        total_test_auth_timeouts.value_namespace = name_space;
        total_test_auth_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-auth-response")
    {
        total_test_auth_response = value;
        total_test_auth_response.value_namespace = name_space;
        total_test_auth_response.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-test-auth-pending")
    {
        total_test_auth_pending = value;
        total_test_auth_pending.value_namespace = name_space;
        total_test_auth_pending.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "access-requests")
    {
        access_requests.yfilter = yfilter;
    }
    if(value_path == "pending-access-requests")
    {
        pending_access_requests.yfilter = yfilter;
    }
    if(value_path == "access-request-retransmits")
    {
        access_request_retransmits.yfilter = yfilter;
    }
    if(value_path == "access-accepts")
    {
        access_accepts.yfilter = yfilter;
    }
    if(value_path == "access-rejects")
    {
        access_rejects.yfilter = yfilter;
    }
    if(value_path == "access-challenges")
    {
        access_challenges.yfilter = yfilter;
    }
    if(value_path == "access-timeouts")
    {
        access_timeouts.yfilter = yfilter;
    }
    if(value_path == "bad-access-responses")
    {
        bad_access_responses.yfilter = yfilter;
    }
    if(value_path == "bad-access-authenticators")
    {
        bad_access_authenticators.yfilter = yfilter;
    }
    if(value_path == "unknown-access-types")
    {
        unknown_access_types.yfilter = yfilter;
    }
    if(value_path == "dropped-access-responses")
    {
        dropped_access_responses.yfilter = yfilter;
    }
    if(value_path == "rtt")
    {
        rtt.yfilter = yfilter;
    }
    if(value_path == "authen-transaction-successess")
    {
        authen_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "authen-transaction-failure")
    {
        authen_transaction_failure.yfilter = yfilter;
    }
    if(value_path == "authen-unexpected-responses")
    {
        authen_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "authen-server-error-responses")
    {
        authen_server_error_responses.yfilter = yfilter;
    }
    if(value_path == "authen-incorrect-responses")
    {
        authen_incorrect_responses.yfilter = yfilter;
    }
    if(value_path == "auth-throttled-transactions")
    {
        auth_throttled_transactions.yfilter = yfilter;
    }
    if(value_path == "auth-max-transactions")
    {
        auth_max_transactions.yfilter = yfilter;
    }
    if(value_path == "total-test-auth-reqs")
    {
        total_test_auth_reqs.yfilter = yfilter;
    }
    if(value_path == "total-test-auth-timeouts")
    {
        total_test_auth_timeouts.yfilter = yfilter;
    }
    if(value_path == "total-test-auth-response")
    {
        total_test_auth_response.yfilter = yfilter;
    }
    if(value_path == "total-test-auth-pending")
    {
        total_test_auth_pending.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authentication::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-requests" || name == "pending-access-requests" || name == "access-request-retransmits" || name == "access-accepts" || name == "access-rejects" || name == "access-challenges" || name == "access-timeouts" || name == "bad-access-responses" || name == "bad-access-authenticators" || name == "unknown-access-types" || name == "dropped-access-responses" || name == "rtt" || name == "authen-transaction-successess" || name == "authen-transaction-failure" || name == "authen-unexpected-responses" || name == "authen-server-error-responses" || name == "authen-incorrect-responses" || name == "auth-throttled-transactions" || name == "auth-max-transactions" || name == "total-test-auth-reqs" || name == "total-test-auth-timeouts" || name == "total-test-auth-response" || name == "total-test-auth-pending")
        return true;
    return false;
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::Authorization()
    :
    author_requests{YType::uint32, "author-requests"},
    author_request_timeouts{YType::uint32, "author-request-timeouts"},
    author_unexpected_responses{YType::uint32, "author-unexpected-responses"},
    author_server_error_responses{YType::uint32, "author-server-error-responses"},
    author_incorrect_responses{YType::uint32, "author-incorrect-responses"},
    author_response_time{YType::uint32, "author-response-time"},
    author_transaction_successess{YType::uint32, "author-transaction-successess"},
    author_transaction_failure{YType::uint32, "author-transaction-failure"}
{

    yang_name = "authorization"; yang_parent_name = "server-group"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::~Authorization()
{
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::has_data() const
{
    if (is_presence_container) return true;
    return author_requests.is_set
	|| author_request_timeouts.is_set
	|| author_unexpected_responses.is_set
	|| author_server_error_responses.is_set
	|| author_incorrect_responses.is_set
	|| author_response_time.is_set
	|| author_transaction_successess.is_set
	|| author_transaction_failure.is_set;
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(author_requests.yfilter)
	|| ydk::is_set(author_request_timeouts.yfilter)
	|| ydk::is_set(author_unexpected_responses.yfilter)
	|| ydk::is_set(author_server_error_responses.yfilter)
	|| ydk::is_set(author_incorrect_responses.yfilter)
	|| ydk::is_set(author_response_time.yfilter)
	|| ydk::is_set(author_transaction_successess.yfilter)
	|| ydk::is_set(author_transaction_failure.yfilter);
}

std::string Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (author_requests.is_set || is_set(author_requests.yfilter)) leaf_name_data.push_back(author_requests.get_name_leafdata());
    if (author_request_timeouts.is_set || is_set(author_request_timeouts.yfilter)) leaf_name_data.push_back(author_request_timeouts.get_name_leafdata());
    if (author_unexpected_responses.is_set || is_set(author_unexpected_responses.yfilter)) leaf_name_data.push_back(author_unexpected_responses.get_name_leafdata());
    if (author_server_error_responses.is_set || is_set(author_server_error_responses.yfilter)) leaf_name_data.push_back(author_server_error_responses.get_name_leafdata());
    if (author_incorrect_responses.is_set || is_set(author_incorrect_responses.yfilter)) leaf_name_data.push_back(author_incorrect_responses.get_name_leafdata());
    if (author_response_time.is_set || is_set(author_response_time.yfilter)) leaf_name_data.push_back(author_response_time.get_name_leafdata());
    if (author_transaction_successess.is_set || is_set(author_transaction_successess.yfilter)) leaf_name_data.push_back(author_transaction_successess.get_name_leafdata());
    if (author_transaction_failure.is_set || is_set(author_transaction_failure.yfilter)) leaf_name_data.push_back(author_transaction_failure.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "author-requests")
    {
        author_requests = value;
        author_requests.value_namespace = name_space;
        author_requests.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-request-timeouts")
    {
        author_request_timeouts = value;
        author_request_timeouts.value_namespace = name_space;
        author_request_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-unexpected-responses")
    {
        author_unexpected_responses = value;
        author_unexpected_responses.value_namespace = name_space;
        author_unexpected_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-server-error-responses")
    {
        author_server_error_responses = value;
        author_server_error_responses.value_namespace = name_space;
        author_server_error_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-incorrect-responses")
    {
        author_incorrect_responses = value;
        author_incorrect_responses.value_namespace = name_space;
        author_incorrect_responses.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-response-time")
    {
        author_response_time = value;
        author_response_time.value_namespace = name_space;
        author_response_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-transaction-successess")
    {
        author_transaction_successess = value;
        author_transaction_successess.value_namespace = name_space;
        author_transaction_successess.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "author-transaction-failure")
    {
        author_transaction_failure = value;
        author_transaction_failure.value_namespace = name_space;
        author_transaction_failure.value_namespace_prefix = name_space_prefix;
    }
}

void Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "author-requests")
    {
        author_requests.yfilter = yfilter;
    }
    if(value_path == "author-request-timeouts")
    {
        author_request_timeouts.yfilter = yfilter;
    }
    if(value_path == "author-unexpected-responses")
    {
        author_unexpected_responses.yfilter = yfilter;
    }
    if(value_path == "author-server-error-responses")
    {
        author_server_error_responses.yfilter = yfilter;
    }
    if(value_path == "author-incorrect-responses")
    {
        author_incorrect_responses.yfilter = yfilter;
    }
    if(value_path == "author-response-time")
    {
        author_response_time.yfilter = yfilter;
    }
    if(value_path == "author-transaction-successess")
    {
        author_transaction_successess.yfilter = yfilter;
    }
    if(value_path == "author-transaction-failure")
    {
        author_transaction_failure.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::ServerGroups::ServerGroup::ServerGroup_::Authorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "author-requests" || name == "author-request-timeouts" || name == "author-unexpected-responses" || name == "author-server-error-responses" || name == "author-incorrect-responses" || name == "author-response-time" || name == "author-transaction-successess" || name == "author-transaction-failure")
        return true;
    return false;
}

Radius::Nodes::Node::DynamicAuthorization::DynamicAuthorization()
    :
    disconnected_invalid_requests{YType::uint32, "disconnected-invalid-requests"},
    invalid_coa_requests{YType::uint32, "invalid-coa-requests"},
    radius_context_not_found{YType::uint32, "radius-context-not-found"},
    client_context_not_found{YType::uint32, "client-context-not-found"}
{

    yang_name = "dynamic-authorization"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Radius::Nodes::Node::DynamicAuthorization::~DynamicAuthorization()
{
}

bool Radius::Nodes::Node::DynamicAuthorization::has_data() const
{
    if (is_presence_container) return true;
    return disconnected_invalid_requests.is_set
	|| invalid_coa_requests.is_set
	|| radius_context_not_found.is_set
	|| client_context_not_found.is_set;
}

bool Radius::Nodes::Node::DynamicAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(disconnected_invalid_requests.yfilter)
	|| ydk::is_set(invalid_coa_requests.yfilter)
	|| ydk::is_set(radius_context_not_found.yfilter)
	|| ydk::is_set(client_context_not_found.yfilter);
}

std::string Radius::Nodes::Node::DynamicAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Radius::Nodes::Node::DynamicAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disconnected_invalid_requests.is_set || is_set(disconnected_invalid_requests.yfilter)) leaf_name_data.push_back(disconnected_invalid_requests.get_name_leafdata());
    if (invalid_coa_requests.is_set || is_set(invalid_coa_requests.yfilter)) leaf_name_data.push_back(invalid_coa_requests.get_name_leafdata());
    if (radius_context_not_found.is_set || is_set(radius_context_not_found.yfilter)) leaf_name_data.push_back(radius_context_not_found.get_name_leafdata());
    if (client_context_not_found.is_set || is_set(client_context_not_found.yfilter)) leaf_name_data.push_back(client_context_not_found.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Radius::Nodes::Node::DynamicAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Radius::Nodes::Node::DynamicAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
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
    if(value_path == "radius-context-not-found")
    {
        radius_context_not_found = value;
        radius_context_not_found.value_namespace = name_space;
        radius_context_not_found.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-context-not-found")
    {
        client_context_not_found = value;
        client_context_not_found.value_namespace = name_space;
        client_context_not_found.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "radius-context-not-found")
    {
        radius_context_not_found.yfilter = yfilter;
    }
    if(value_path == "client-context-not-found")
    {
        client_context_not_found.yfilter = yfilter;
    }
}

bool Radius::Nodes::Node::DynamicAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "disconnected-invalid-requests" || name == "invalid-coa-requests" || name == "radius-context-not-found" || name == "client-context-not-found")
        return true;
    return false;
}


}
}

