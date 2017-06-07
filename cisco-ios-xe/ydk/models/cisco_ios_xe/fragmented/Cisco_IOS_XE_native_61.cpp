
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_61.hpp"
#include "Cisco_IOS_XE_native_62.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Interface::Tunnel::Ip::RouteCache::RouteCache()
    :
    cef{YType::boolean, "cef"},
    flow{YType::boolean, "flow"},
    policy{YType::boolean, "policy"},
    same_interface{YType::boolean, "same-interface"}
{
    yang_name = "route-cache"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::RouteCache::~RouteCache()
{
}

bool Native::Interface::Tunnel::Ip::RouteCache::has_data() const
{
    return cef.is_set
	|| flow.is_set
	|| policy.is_set
	|| same_interface.is_set;
}

bool Native::Interface::Tunnel::Ip::RouteCache::has_operation() const
{
    return is_set(operation)
	|| is_set(cef.operation)
	|| is_set(flow.operation)
	|| is_set(policy.operation)
	|| is_set(same_interface.operation);
}

std::string Native::Interface::Tunnel::Ip::RouteCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "route-cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::RouteCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'RouteCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cef.is_set || is_set(cef.operation)) leaf_name_data.push_back(cef.get_name_leafdata());
    if (flow.is_set || is_set(flow.operation)) leaf_name_data.push_back(flow.get_name_leafdata());
    if (policy.is_set || is_set(policy.operation)) leaf_name_data.push_back(policy.get_name_leafdata());
    if (same_interface.is_set || is_set(same_interface.operation)) leaf_name_data.push_back(same_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::RouteCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::RouteCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::RouteCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cef")
    {
        cef = value;
    }
    if(value_path == "flow")
    {
        flow = value;
    }
    if(value_path == "policy")
    {
        policy = value;
    }
    if(value_path == "same-interface")
    {
        same_interface = value;
    }
}

Native::Interface::Tunnel::Ip::Router::Router()
    :
    isis(nullptr) // presence node
{
    yang_name = "router"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Router::~Router()
{
}

bool Native::Interface::Tunnel::Ip::Router::has_data() const
{
    return (isis !=  nullptr && isis->has_data());
}

bool Native::Interface::Tunnel::Ip::Router::has_operation() const
{
    return is_set(operation)
	|| (isis !=  nullptr && isis->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Router::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "router";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Router::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Router' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Router::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "isis")
    {
        if(isis == nullptr)
        {
            isis = std::make_shared<Native::Interface::Tunnel::Ip::Router::Isis>();
        }
        return isis;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Router::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(isis != nullptr)
    {
        children["isis"] = isis;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Router::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Router::Isis::Isis()
    :
    tag{YType::str, "tag"}
{
    yang_name = "isis"; yang_parent_name = "router";
}

Native::Interface::Tunnel::Ip::Router::Isis::~Isis()
{
}

bool Native::Interface::Tunnel::Ip::Router::Isis::has_data() const
{
    return tag.is_set;
}

bool Native::Interface::Tunnel::Ip::Router::Isis::has_operation() const
{
    return is_set(operation)
	|| is_set(tag.operation);
}

std::string Native::Interface::Tunnel::Ip::Router::Isis::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "isis";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Router::Isis::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Isis' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (tag.is_set || is_set(tag.operation)) leaf_name_data.push_back(tag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Router::Isis::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Router::Isis::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Router::Isis::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "tag")
    {
        tag = value;
    }
}

Native::Interface::Tunnel::Ip::Tcp::Tcp()
    :
    adjust_mss{YType::uint16, "adjust-mss"}
{
    yang_name = "tcp"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Tcp::~Tcp()
{
}

bool Native::Interface::Tunnel::Ip::Tcp::has_data() const
{
    return adjust_mss.is_set;
}

bool Native::Interface::Tunnel::Ip::Tcp::has_operation() const
{
    return is_set(operation)
	|| is_set(adjust_mss.operation);
}

std::string Native::Interface::Tunnel::Ip::Tcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Tcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (adjust_mss.is_set || is_set(adjust_mss.operation)) leaf_name_data.push_back(adjust_mss.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Tcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Tcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Tcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "adjust-mss")
    {
        adjust_mss = value;
    }
}

Native::Interface::Tunnel::Ip::VirtualReassembly::VirtualReassembly()
    :
    drop_fragments{YType::empty, "drop-fragments"},
    in{YType::empty, "in"},
    max_fragments{YType::uint32, "max-fragments"},
    max_reassemblies{YType::uint32, "max-reassemblies"},
    timeout{YType::uint32, "timeout"}
{
    yang_name = "virtual-reassembly"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::VirtualReassembly::~VirtualReassembly()
{
}

bool Native::Interface::Tunnel::Ip::VirtualReassembly::has_data() const
{
    return drop_fragments.is_set
	|| in.is_set
	|| max_fragments.is_set
	|| max_reassemblies.is_set
	|| timeout.is_set;
}

bool Native::Interface::Tunnel::Ip::VirtualReassembly::has_operation() const
{
    return is_set(operation)
	|| is_set(drop_fragments.operation)
	|| is_set(in.operation)
	|| is_set(max_fragments.operation)
	|| is_set(max_reassemblies.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Tunnel::Ip::VirtualReassembly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "virtual-reassembly";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::VirtualReassembly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VirtualReassembly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (drop_fragments.is_set || is_set(drop_fragments.operation)) leaf_name_data.push_back(drop_fragments.get_name_leafdata());
    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (max_fragments.is_set || is_set(max_fragments.operation)) leaf_name_data.push_back(max_fragments.get_name_leafdata());
    if (max_reassemblies.is_set || is_set(max_reassemblies.operation)) leaf_name_data.push_back(max_reassemblies.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::VirtualReassembly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::VirtualReassembly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::VirtualReassembly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "drop-fragments")
    {
        drop_fragments = value;
    }
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "max-fragments")
    {
        max_fragments = value;
    }
    if(value_path == "max-reassemblies")
    {
        max_reassemblies = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Dhcp()
    :
    client(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client>())
	,relay(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay>())
	,snooping(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping>())
{
    client->parent = this;

    relay->parent = this;

    snooping->parent = this;

    yang_name = "dhcp"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::has_data() const
{
    return (client !=  nullptr && client->has_data())
	|| (relay !=  nullptr && relay->has_data())
	|| (snooping !=  nullptr && snooping->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::has_operation() const
{
    return is_set(operation)
	|| (client !=  nullptr && client->has_operation())
	|| (relay !=  nullptr && relay->has_operation())
	|| (snooping !=  nullptr && snooping->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        if(client == nullptr)
        {
            client = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Client>();
        }
        return client;
    }

    if(child_yang_name == "relay")
    {
        if(relay == nullptr)
        {
            relay = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay>();
        }
        return relay;
    }

    if(child_yang_name == "snooping")
    {
        if(snooping == nullptr)
        {
            snooping = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping>();
        }
        return snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(client != nullptr)
    {
        children["client"] = client;
    }

    if(relay != nullptr)
    {
        children["relay"] = relay;
    }

    if(snooping != nullptr)
    {
        children["snooping"] = snooping;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Dhcp::Client::Client()
    :
    hostname{YType::str, "hostname"}
{
    yang_name = "client"; yang_parent_name = "dhcp";
}

Native::Interface::Tunnel::Ip::Dhcp::Client::~Client()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::has_data() const
{
    return hostname.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Client::has_operation() const
{
    return is_set(operation)
	|| is_set(hostname.operation);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:client";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Client' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hostname.is_set || is_set(hostname.operation)) leaf_name_data.push_back(hostname.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hostname")
    {
        hostname = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Relay()
    :
    source_interface{YType::str, "source-interface"}
    	,
    information(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information>())
{
    information->parent = this;

    yang_name = "relay"; yang_parent_name = "dhcp";
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::~Relay()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::has_data() const
{
    return source_interface.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:relay";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Relay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Relay' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_interface.is_set || is_set(source_interface.operation)) leaf_name_data.push_back(source_interface.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Information()
    :
    policy_action{YType::enumeration, "policy-action"},
    trusted{YType::empty, "trusted"}
    	,
    check_reply(nullptr) // presence node
	,option(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option>())
	,option_insert(nullptr) // presence node
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "relay";
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::~Information()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::has_data() const
{
    return policy_action.is_set
	|| trusted.is_set
	|| (check_reply !=  nullptr && check_reply->has_data())
	|| (option !=  nullptr && option->has_data())
	|| (option_insert !=  nullptr && option_insert->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::has_operation() const
{
    return is_set(operation)
	|| is_set(policy_action.operation)
	|| is_set(trusted.operation)
	|| (check_reply !=  nullptr && check_reply->has_operation())
	|| (option !=  nullptr && option->has_operation())
	|| (option_insert !=  nullptr && option_insert->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_action.is_set || is_set(policy_action.operation)) leaf_name_data.push_back(policy_action.get_name_leafdata());
    if (trusted.is_set || is_set(trusted.operation)) leaf_name_data.push_back(trusted.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "check-reply")
    {
        if(check_reply == nullptr)
        {
            check_reply = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply>();
        }
        return check_reply;
    }

    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option>();
        }
        return option;
    }

    if(child_yang_name == "option-insert")
    {
        if(option_insert == nullptr)
        {
            option_insert = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert>();
        }
        return option_insert;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(check_reply != nullptr)
    {
        children["check-reply"] = check_reply;
    }

    if(option != nullptr)
    {
        children["option"] = option;
    }

    if(option_insert != nullptr)
    {
        children["option-insert"] = option_insert;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "policy-action")
    {
        policy_action = value;
    }
    if(value_path == "trusted")
    {
        trusted = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::CheckReply()
    :
    none{YType::empty, "none"}
{
    yang_name = "check-reply"; yang_parent_name = "information";
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::~CheckReply()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "check-reply";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CheckReply' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::CheckReply::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::Option()
    :
    subscriber_id{YType::str, "subscriber-id"}
{
    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::~Option()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::has_data() const
{
    return subscriber_id.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::has_operation() const
{
    return is_set(operation)
	|| is_set(subscriber_id.operation);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (subscriber_id.is_set || is_set(subscriber_id.operation)) leaf_name_data.push_back(subscriber_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::Option::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "subscriber-id")
    {
        subscriber_id = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::OptionInsert()
    :
    none{YType::empty, "none"}
{
    yang_name = "option-insert"; yang_parent_name = "information";
}

Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::~OptionInsert()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::has_data() const
{
    return none.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option-insert";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'OptionInsert' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::OptionInsert::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Snooping()
    :
    trust{YType::empty, "trust"}
    	,
    limit(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit>())
{
    limit->parent = this;

    yang_name = "snooping"; yang_parent_name = "dhcp";
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::~Snooping()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return trust.is_set
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(trust.operation)
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:snooping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Snooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Snooping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (trust.is_set || is_set(trust.operation)) leaf_name_data.push_back(trust.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit>();
        }
        return limit;
    }

    if(child_yang_name == "vlan")
    {
        for(auto const & c : vlan)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "trust")
    {
        trust = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::Limit()
    :
    rate{YType::uint16, "rate"}
{
    yang_name = "limit"; yang_parent_name = "snooping";
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::~Limit()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::has_data() const
{
    return rate.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::has_operation() const
{
    return is_set(operation)
	|| is_set(rate.operation);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Limit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rate.is_set || is_set(rate.operation)) leaf_name_data.push_back(rate.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Limit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rate")
    {
        rate = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Vlan()
    :
    id{YType::uint16, "id"}
    	,
    information(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information>())
{
    information->parent = this;

    yang_name = "vlan"; yang_parent_name = "snooping";
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::~Vlan()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::has_data() const
{
    return id.is_set
	|| (information !=  nullptr && information->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (information !=  nullptr && information->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "information")
    {
        if(information == nullptr)
        {
            information = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information>();
        }
        return information;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(information != nullptr)
    {
        children["information"] = information;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Information()
    :
    option(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option>())
{
    option->parent = this;

    yang_name = "information"; yang_parent_name = "vlan";
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::~Information()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::has_data() const
{
    return (option !=  nullptr && option->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::has_operation() const
{
    return is_set(operation)
	|| (option !=  nullptr && option->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "information";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Information' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "option")
    {
        if(option == nullptr)
        {
            option = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option>();
        }
        return option;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(option != nullptr)
    {
        children["option"] = option;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::Option()
    :
    format_type(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>())
{
    format_type->parent = this;

    yang_name = "option"; yang_parent_name = "information";
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::~Option()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::has_data() const
{
    return (format_type !=  nullptr && format_type->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::has_operation() const
{
    return is_set(operation)
	|| (format_type !=  nullptr && format_type->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "option";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Option' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "format-type")
    {
        if(format_type == nullptr)
        {
            format_type = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType>();
        }
        return format_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(format_type != nullptr)
    {
        children["format-type"] = format_type;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::FormatType()
    :
    circuit_id(std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>())
{
    circuit_id->parent = this;

    yang_name = "format-type"; yang_parent_name = "option";
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::~FormatType()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_data() const
{
    return (circuit_id !=  nullptr && circuit_id->has_data());
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::has_operation() const
{
    return is_set(operation)
	|| (circuit_id !=  nullptr && circuit_id->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "format-type";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FormatType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "circuit-id")
    {
        if(circuit_id == nullptr)
        {
            circuit_id = std::make_shared<Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId>();
        }
        return circuit_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(circuit_id != nullptr)
    {
        children["circuit-id"] = circuit_id;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::CircuitId()
    :
    string{YType::str, "string"}
{
    yang_name = "circuit-id"; yang_parent_name = "format-type";
}

Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::~CircuitId()
{
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_data() const
{
    return string.is_set;
}

bool Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::has_operation() const
{
    return is_set(operation)
	|| is_set(string.operation);
}

std::string Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "circuit-id";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CircuitId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Dhcp::Snooping::Vlan::Information::Option::FormatType::CircuitId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Interface::Tunnel::Ip::SummaryAddress::SummaryAddress()
{
    yang_name = "summary-address"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::SummaryAddress::~SummaryAddress()
{
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::has_data() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::has_operation() const
{
    for (std::size_t index=0; index<eigrp.size(); index++)
    {
        if(eigrp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::SummaryAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary-address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::SummaryAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SummaryAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::SummaryAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "eigrp")
    {
        for(auto const & c : eigrp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp>();
        c->parent = this;
        eigrp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::SummaryAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : eigrp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::SummaryAddress::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::Eigrp()
    :
    id{YType::str, "id"},
    ip{YType::str, "ip"},
    mask{YType::str, "mask"},
    metric{YType::uint32, "metric"}
{
    yang_name = "eigrp"; yang_parent_name = "summary-address";
}

Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::~Eigrp()
{
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::has_data() const
{
    return id.is_set
	|| ip.is_set
	|| mask.is_set
	|| metric.is_set;
}

bool Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(ip.operation)
	|| is_set(mask.operation)
	|| is_set(metric.operation);
}

std::string Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eigrp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Eigrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());
    if (mask.is_set || is_set(mask.operation)) leaf_name_data.push_back(mask.get_name_leafdata());
    if (metric.is_set || is_set(metric.operation)) leaf_name_data.push_back(metric.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::SummaryAddress::Eigrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "ip")
    {
        ip = value;
    }
    if(value_path == "mask")
    {
        mask = value;
    }
    if(value_path == "metric")
    {
        metric = value;
    }
}

Native::Interface::Tunnel::Ip::Verify::Verify()
    :
    source(nullptr) // presence node
	,unicast(std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast>())
{
    unicast->parent = this;

    yang_name = "verify"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Verify::~Verify()
{
}

bool Native::Interface::Tunnel::Ip::Verify::has_data() const
{
    return (source !=  nullptr && source->has_data())
	|| (unicast !=  nullptr && unicast->has_data());
}

bool Native::Interface::Tunnel::Ip::Verify::has_operation() const
{
    return is_set(operation)
	|| (source !=  nullptr && source->has_operation())
	|| (unicast !=  nullptr && unicast->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Verify::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "verify";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Verify::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Verify' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Verify::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Source>();
        }
        return source;
    }

    if(child_yang_name == "unicast")
    {
        if(unicast == nullptr)
        {
            unicast = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast>();
        }
        return unicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Verify::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source != nullptr)
    {
        children["source"] = source;
    }

    if(unicast != nullptr)
    {
        children["unicast"] = unicast;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Verify::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Verify::Source::Source()
    :
    vlan(std::make_shared<Native::Interface::Tunnel::Ip::Verify::Source::Vlan>())
{
    vlan->parent = this;

    yang_name = "source"; yang_parent_name = "verify";
}

Native::Interface::Tunnel::Ip::Verify::Source::~Source()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Source::has_data() const
{
    return (vlan !=  nullptr && vlan->has_data());
}

bool Native::Interface::Tunnel::Ip::Verify::Source::has_operation() const
{
    return is_set(operation)
	|| (vlan !=  nullptr && vlan->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Verify::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Verify::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Verify::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vlan")
    {
        if(vlan == nullptr)
        {
            vlan = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Source::Vlan>();
        }
        return vlan;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Verify::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(vlan != nullptr)
    {
        children["vlan"] = vlan;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Verify::Source::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Verify::Source::Vlan::Vlan()
    :
    dhcp_snooping(nullptr) // presence node
{
    yang_name = "vlan"; yang_parent_name = "source";
}

Native::Interface::Tunnel::Ip::Verify::Source::Vlan::~Vlan()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::has_data() const
{
    return (dhcp_snooping !=  nullptr && dhcp_snooping->has_data());
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::has_operation() const
{
    return is_set(operation)
	|| (dhcp_snooping !=  nullptr && dhcp_snooping->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Verify::Source::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Verify::Source::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vlan' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Verify::Source::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dhcp-snooping")
    {
        if(dhcp_snooping == nullptr)
        {
            dhcp_snooping = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping>();
        }
        return dhcp_snooping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Verify::Source::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dhcp_snooping != nullptr)
    {
        children["dhcp-snooping"] = dhcp_snooping;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Verify::Source::Vlan::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::DhcpSnooping()
    :
    port_security{YType::empty, "port-security"}
{
    yang_name = "dhcp-snooping"; yang_parent_name = "vlan";
}

Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::~DhcpSnooping()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::has_data() const
{
    return port_security.is_set;
}

bool Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::has_operation() const
{
    return is_set(operation)
	|| is_set(port_security.operation);
}

std::string Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp-snooping";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DhcpSnooping' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_security.is_set || is_set(port_security.operation)) leaf_name_data.push_back(port_security.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Verify::Source::Vlan::DhcpSnooping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "port-security")
    {
        port_security = value;
    }
}

Native::Interface::Tunnel::Ip::Verify::Unicast::Unicast()
    :
    reverse_path(nullptr) // presence node
	,source(std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast::Source>())
{
    source->parent = this;

    yang_name = "unicast"; yang_parent_name = "verify";
}

Native::Interface::Tunnel::Ip::Verify::Unicast::~Unicast()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::has_data() const
{
    return (reverse_path !=  nullptr && reverse_path->has_data())
	|| (source !=  nullptr && source->has_data());
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::has_operation() const
{
    return is_set(operation)
	|| (reverse_path !=  nullptr && reverse_path->has_operation())
	|| (source !=  nullptr && source->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Verify::Unicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "unicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Verify::Unicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Unicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Verify::Unicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reverse-path")
    {
        if(reverse_path == nullptr)
        {
            reverse_path = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath>();
        }
        return reverse_path;
    }

    if(child_yang_name == "source")
    {
        if(source == nullptr)
        {
            source = std::make_shared<Native::Interface::Tunnel::Ip::Verify::Unicast::Source>();
        }
        return source;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Verify::Unicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(reverse_path != nullptr)
    {
        children["reverse-path"] = reverse_path;
    }

    if(source != nullptr)
    {
        children["source"] = source;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::ReversePath()
{
    yang_name = "reverse-path"; yang_parent_name = "unicast";
}

Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::~ReversePath()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::has_data() const
{
    return false;
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::has_operation() const
{
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reverse-path";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ReversePath' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::ReversePath::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Verify::Unicast::Source::Source()
    :
    allow_default{YType::empty, "allow-default"},
    allow_self_ping{YType::empty, "allow-self-ping"},
    reachable_via{YType::enumeration, "reachable-via"}
{
    yang_name = "source"; yang_parent_name = "unicast";
}

Native::Interface::Tunnel::Ip::Verify::Unicast::Source::~Source()
{
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::Source::has_data() const
{
    return allow_default.is_set
	|| allow_self_ping.is_set
	|| reachable_via.is_set;
}

bool Native::Interface::Tunnel::Ip::Verify::Unicast::Source::has_operation() const
{
    return is_set(operation)
	|| is_set(allow_default.operation)
	|| is_set(allow_self_ping.operation)
	|| is_set(reachable_via.operation);
}

std::string Native::Interface::Tunnel::Ip::Verify::Unicast::Source::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Verify::Unicast::Source::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Source' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (allow_default.is_set || is_set(allow_default.operation)) leaf_name_data.push_back(allow_default.get_name_leafdata());
    if (allow_self_ping.is_set || is_set(allow_self_ping.operation)) leaf_name_data.push_back(allow_self_ping.get_name_leafdata());
    if (reachable_via.is_set || is_set(reachable_via.operation)) leaf_name_data.push_back(reachable_via.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Verify::Unicast::Source::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Verify::Unicast::Source::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Verify::Unicast::Source::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "allow-default")
    {
        allow_default = value;
    }
    if(value_path == "allow-self-ping")
    {
        allow_self_ping = value;
    }
    if(value_path == "reachable-via")
    {
        reachable_via = value;
    }
}

Native::Interface::Tunnel::Ip::Flow::Flow()
    :
    egress{YType::empty, "egress"},
    ingress{YType::empty, "ingress"}
{
    yang_name = "flow"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Flow::~Flow()
{
}

bool Native::Interface::Tunnel::Ip::Flow::has_data() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_data())
            return true;
    }
    return egress.is_set
	|| ingress.is_set;
}

bool Native::Interface::Tunnel::Ip::Flow::has_operation() const
{
    for (std::size_t index=0; index<monitor.size(); index++)
    {
        if(monitor[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(egress.operation)
	|| is_set(ingress.operation);
}

std::string Native::Interface::Tunnel::Ip::Flow::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-flow:flow";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Flow::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Flow' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (egress.is_set || is_set(egress.operation)) leaf_name_data.push_back(egress.get_name_leafdata());
    if (ingress.is_set || is_set(ingress.operation)) leaf_name_data.push_back(ingress.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Flow::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "monitor")
    {
        for(auto const & c : monitor)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Flow::Monitor>();
        c->parent = this;
        monitor.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Flow::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : monitor)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Flow::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "egress")
    {
        egress = value;
    }
    if(value_path == "ingress")
    {
        ingress = value;
    }
}

Native::Interface::Tunnel::Ip::Flow::Monitor::Monitor()
    :
    name{YType::str, "name"},
    input{YType::empty, "input"},
    multicast{YType::empty, "multicast"},
    output{YType::empty, "output"},
    unicast{YType::empty, "unicast"}
{
    yang_name = "monitor"; yang_parent_name = "flow";
}

Native::Interface::Tunnel::Ip::Flow::Monitor::~Monitor()
{
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::has_data() const
{
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_data())
            return true;
    }
    return name.is_set
	|| input.is_set
	|| multicast.is_set
	|| output.is_set
	|| unicast.is_set;
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::has_operation() const
{
    for (std::size_t index=0; index<sampler.size(); index++)
    {
        if(sampler[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(input.operation)
	|| is_set(multicast.operation)
	|| is_set(output.operation)
	|| is_set(unicast.operation);
}

std::string Native::Interface::Tunnel::Ip::Flow::Monitor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "monitor" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Flow::Monitor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Monitor' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (input.is_set || is_set(input.operation)) leaf_name_data.push_back(input.get_name_leafdata());
    if (multicast.is_set || is_set(multicast.operation)) leaf_name_data.push_back(multicast.get_name_leafdata());
    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());
    if (unicast.is_set || is_set(unicast.operation)) leaf_name_data.push_back(unicast.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Flow::Monitor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sampler")
    {
        for(auto const & c : sampler)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler>();
        c->parent = this;
        sampler.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Flow::Monitor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : sampler)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Flow::Monitor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "input")
    {
        input = value;
    }
    if(value_path == "multicast")
    {
        multicast = value;
    }
    if(value_path == "output")
    {
        output = value;
    }
    if(value_path == "unicast")
    {
        unicast = value;
    }
}

Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::Sampler()
    :
    direction{YType::enumeration, "direction"},
    name{YType::str, "name"}
{
    yang_name = "sampler"; yang_parent_name = "monitor";
}

Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::~Sampler()
{
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::has_data() const
{
    return direction.is_set
	|| name.is_set;
}

bool Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::has_operation() const
{
    return is_set(operation)
	|| is_set(direction.operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sampler" <<"[direction='" <<direction <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Sampler' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (direction.is_set || is_set(direction.operation)) leaf_name_data.push_back(direction.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "direction")
    {
        direction = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tunnel::Ip::Igmp::Igmp()
    :
    version{YType::uint8, "version"}
    	,
    static_group(std::make_shared<Native::Interface::Tunnel::Ip::Igmp::StaticGroup>())
{
    static_group->parent = this;

    yang_name = "igmp"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Igmp::~Igmp()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::has_data() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_data())
            return true;
    }
    return version.is_set
	|| (static_group !=  nullptr && static_group->has_data());
}

bool Native::Interface::Tunnel::Ip::Igmp::has_operation() const
{
    for (std::size_t index=0; index<join_group.size(); index++)
    {
        if(join_group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(version.operation)
	|| (static_group !=  nullptr && static_group->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Igmp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-igmp:igmp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Igmp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Igmp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Igmp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "join-group")
    {
        for(auto const & c : join_group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Igmp::JoinGroup>();
        c->parent = this;
        join_group.push_back(c);
        return c;
    }

    if(child_yang_name == "static-group")
    {
        if(static_group == nullptr)
        {
            static_group = std::make_shared<Native::Interface::Tunnel::Ip::Igmp::StaticGroup>();
        }
        return static_group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Igmp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : join_group)
    {
        children[c->get_segment_path()] = c;
    }

    if(static_group != nullptr)
    {
        children["static-group"] = static_group;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Igmp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "version")
    {
        version = value;
    }
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::StaticGroup()
{
    yang_name = "static-group"; yang_parent_name = "igmp";
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::~StaticGroup()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::has_data() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<groups.size(); index++)
    {
        if(groups[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::has_operation() const
{
    for (std::size_t index=0; index<class_map.size(); index++)
    {
        if(class_map[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<groups.size(); index++)
    {
        if(groups[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Igmp::StaticGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "static-group";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Igmp::StaticGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StaticGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "class-map")
    {
        for(auto const & c : class_map)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap>();
        c->parent = this;
        class_map.push_back(c);
        return c;
    }

    if(child_yang_name == "groups")
    {
        for(auto const & c : groups)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups>();
        c->parent = this;
        groups.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : class_map)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : groups)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::Groups()
    :
    name{YType::str, "name"}
{
    yang_name = "groups"; yang_parent_name = "static-group";
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::~Groups()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Groups' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::ClassMap()
    :
    id{YType::str, "id"}
{
    yang_name = "class-map"; yang_parent_name = "static-group";
}

Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::~ClassMap()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::has_data() const
{
    return id.is_set;
}

bool Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "class-map" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClassMap' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Igmp::StaticGroup::ClassMap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Tunnel::Ip::Igmp::JoinGroup::JoinGroup()
    :
    ip_group_address{YType::str, "ip-group-address"},
    source{YType::str, "source"}
{
    yang_name = "join-group"; yang_parent_name = "igmp";
}

Native::Interface::Tunnel::Ip::Igmp::JoinGroup::~JoinGroup()
{
}

bool Native::Interface::Tunnel::Ip::Igmp::JoinGroup::has_data() const
{
    return ip_group_address.is_set
	|| source.is_set;
}

bool Native::Interface::Tunnel::Ip::Igmp::JoinGroup::has_operation() const
{
    return is_set(operation)
	|| is_set(ip_group_address.operation)
	|| is_set(source.operation);
}

std::string Native::Interface::Tunnel::Ip::Igmp::JoinGroup::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "join-group" <<"[ip-group-address='" <<ip_group_address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Igmp::JoinGroup::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'JoinGroup' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip_group_address.is_set || is_set(ip_group_address.operation)) leaf_name_data.push_back(ip_group_address.get_name_leafdata());
    if (source.is_set || is_set(source.operation)) leaf_name_data.push_back(source.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Igmp::JoinGroup::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Igmp::JoinGroup::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Igmp::JoinGroup::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip-group-address")
    {
        ip_group_address = value;
    }
    if(value_path == "source")
    {
        source = value;
    }
}

Native::Interface::Tunnel::Ip::Lisp::Lisp()
    :
    source_locator{YType::str, "source-locator"}
{
    yang_name = "lisp"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Lisp::~Lisp()
{
}

bool Native::Interface::Tunnel::Ip::Lisp::has_data() const
{
    return source_locator.is_set;
}

bool Native::Interface::Tunnel::Ip::Lisp::has_operation() const
{
    return is_set(operation)
	|| is_set(source_locator.operation);
}

std::string Native::Interface::Tunnel::Ip::Lisp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-lisp:lisp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Lisp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lisp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (source_locator.is_set || is_set(source_locator.operation)) leaf_name_data.push_back(source_locator.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Lisp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Lisp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Lisp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-locator")
    {
        source_locator = value;
    }
}

Native::Interface::Tunnel::Ip::Nbar::Nbar()
    :
    protocol_discovery(nullptr) // presence node
{
    yang_name = "nbar"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Nbar::~Nbar()
{
}

bool Native::Interface::Tunnel::Ip::Nbar::has_data() const
{
    return (protocol_discovery !=  nullptr && protocol_discovery->has_data());
}

bool Native::Interface::Tunnel::Ip::Nbar::has_operation() const
{
    return is_set(operation)
	|| (protocol_discovery !=  nullptr && protocol_discovery->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nbar::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nbar:nbar";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nbar::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nbar' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nbar::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "protocol-discovery")
    {
        if(protocol_discovery == nullptr)
        {
            protocol_discovery = std::make_shared<Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery>();
        }
        return protocol_discovery;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nbar::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(protocol_discovery != nullptr)
    {
        children["protocol-discovery"] = protocol_discovery;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nbar::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::ProtocolDiscovery()
    :
    ipv4_ipv6{YType::enumeration, "ipv4-ipv6"}
{
    yang_name = "protocol-discovery"; yang_parent_name = "nbar";
}

Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::~ProtocolDiscovery()
{
}

bool Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::has_data() const
{
    return ipv4_ipv6.is_set;
}

bool Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4_ipv6.operation);
}

std::string Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protocol-discovery";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProtocolDiscovery' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_ipv6.is_set || is_set(ipv4_ipv6.operation)) leaf_name_data.push_back(ipv4_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4-ipv6")
    {
        ipv4_ipv6 = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhrp()
    :
    authentication{YType::str, "authentication"},
    connect{YType::uint16, "connect"},
    group{YType::str, "group"},
    holdtime{YType::uint16, "holdtime"},
    network_id{YType::uint32, "network-id"},
    record{YType::empty, "record"},
    use{YType::uint16, "use"}
    	,
    attribute(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute>())
	,cache(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Cache>())
	,interest(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Interest>())
	,map(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map>())
	,max_send(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::MaxSend>())
	,nhs(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs>())
	,redirect(nullptr) // presence node
	,registration(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Registration>())
	,reject(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Reject>())
	,responder(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Responder>())
	,server_only(nullptr) // presence node
	,shortcut(nullptr) // presence node
	,trigger_svc(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc>())
{
    attribute->parent = this;

    cache->parent = this;

    interest->parent = this;

    map->parent = this;

    max_send->parent = this;

    nhs->parent = this;

    registration->parent = this;

    reject->parent = this;

    responder->parent = this;

    trigger_svc->parent = this;

    yang_name = "nhrp"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Nhrp::~Nhrp()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::has_data() const
{
    return authentication.is_set
	|| connect.is_set
	|| group.is_set
	|| holdtime.is_set
	|| network_id.is_set
	|| record.is_set
	|| use.is_set
	|| (attribute !=  nullptr && attribute->has_data())
	|| (cache !=  nullptr && cache->has_data())
	|| (interest !=  nullptr && interest->has_data())
	|| (map !=  nullptr && map->has_data())
	|| (max_send !=  nullptr && max_send->has_data())
	|| (nhs !=  nullptr && nhs->has_data())
	|| (redirect !=  nullptr && redirect->has_data())
	|| (registration !=  nullptr && registration->has_data())
	|| (reject !=  nullptr && reject->has_data())
	|| (responder !=  nullptr && responder->has_data())
	|| (server_only !=  nullptr && server_only->has_data())
	|| (shortcut !=  nullptr && shortcut->has_data())
	|| (trigger_svc !=  nullptr && trigger_svc->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::has_operation() const
{
    return is_set(operation)
	|| is_set(authentication.operation)
	|| is_set(connect.operation)
	|| is_set(group.operation)
	|| is_set(holdtime.operation)
	|| is_set(network_id.operation)
	|| is_set(record.operation)
	|| is_set(use.operation)
	|| (attribute !=  nullptr && attribute->has_operation())
	|| (cache !=  nullptr && cache->has_operation())
	|| (interest !=  nullptr && interest->has_operation())
	|| (map !=  nullptr && map->has_operation())
	|| (max_send !=  nullptr && max_send->has_operation())
	|| (nhs !=  nullptr && nhs->has_operation())
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (registration !=  nullptr && registration->has_operation())
	|| (reject !=  nullptr && reject->has_operation())
	|| (responder !=  nullptr && responder->has_operation())
	|| (server_only !=  nullptr && server_only->has_operation())
	|| (shortcut !=  nullptr && shortcut->has_operation())
	|| (trigger_svc !=  nullptr && trigger_svc->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-nhrp:nhrp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nhrp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication.is_set || is_set(authentication.operation)) leaf_name_data.push_back(authentication.get_name_leafdata());
    if (connect.is_set || is_set(connect.operation)) leaf_name_data.push_back(connect.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (holdtime.is_set || is_set(holdtime.operation)) leaf_name_data.push_back(holdtime.get_name_leafdata());
    if (network_id.is_set || is_set(network_id.operation)) leaf_name_data.push_back(network_id.get_name_leafdata());
    if (record.is_set || is_set(record.operation)) leaf_name_data.push_back(record.get_name_leafdata());
    if (use.is_set || is_set(use.operation)) leaf_name_data.push_back(use.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attribute")
    {
        if(attribute == nullptr)
        {
            attribute = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute>();
        }
        return attribute;
    }

    if(child_yang_name == "cache")
    {
        if(cache == nullptr)
        {
            cache = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Cache>();
        }
        return cache;
    }

    if(child_yang_name == "interest")
    {
        if(interest == nullptr)
        {
            interest = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Interest>();
        }
        return interest;
    }

    if(child_yang_name == "map")
    {
        if(map == nullptr)
        {
            map = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map>();
        }
        return map;
    }

    if(child_yang_name == "max-send")
    {
        if(max_send == nullptr)
        {
            max_send = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::MaxSend>();
        }
        return max_send;
    }

    if(child_yang_name == "nhs")
    {
        if(nhs == nullptr)
        {
            nhs = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs>();
        }
        return nhs;
    }

    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "registration")
    {
        if(registration == nullptr)
        {
            registration = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Registration>();
        }
        return registration;
    }

    if(child_yang_name == "reject")
    {
        if(reject == nullptr)
        {
            reject = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Reject>();
        }
        return reject;
    }

    if(child_yang_name == "responder")
    {
        if(responder == nullptr)
        {
            responder = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Responder>();
        }
        return responder;
    }

    if(child_yang_name == "server-only")
    {
        if(server_only == nullptr)
        {
            server_only = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::ServerOnly>();
        }
        return server_only;
    }

    if(child_yang_name == "shortcut")
    {
        if(shortcut == nullptr)
        {
            shortcut = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Shortcut>();
        }
        return shortcut;
    }

    if(child_yang_name == "trigger-svc")
    {
        if(trigger_svc == nullptr)
        {
            trigger_svc = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc>();
        }
        return trigger_svc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attribute != nullptr)
    {
        children["attribute"] = attribute;
    }

    if(cache != nullptr)
    {
        children["cache"] = cache;
    }

    if(interest != nullptr)
    {
        children["interest"] = interest;
    }

    if(map != nullptr)
    {
        children["map"] = map;
    }

    if(max_send != nullptr)
    {
        children["max-send"] = max_send;
    }

    if(nhs != nullptr)
    {
        children["nhs"] = nhs;
    }

    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    if(registration != nullptr)
    {
        children["registration"] = registration;
    }

    if(reject != nullptr)
    {
        children["reject"] = reject;
    }

    if(responder != nullptr)
    {
        children["responder"] = responder;
    }

    if(server_only != nullptr)
    {
        children["server-only"] = server_only;
    }

    if(shortcut != nullptr)
    {
        children["shortcut"] = shortcut;
    }

    if(trigger_svc != nullptr)
    {
        children["trigger-svc"] = trigger_svc;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "authentication")
    {
        authentication = value;
    }
    if(value_path == "connect")
    {
        connect = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "holdtime")
    {
        holdtime = value;
    }
    if(value_path == "network-id")
    {
        network_id = value;
    }
    if(value_path == "record")
    {
        record = value;
    }
    if(value_path == "use")
    {
        use = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Attribute()
    :
    set(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set>())
{
    set->parent = this;

    yang_name = "attribute"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::~Attribute()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::has_data() const
{
    return (set !=  nullptr && set->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::has_operation() const
{
    return is_set(operation)
	|| (set !=  nullptr && set->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Attribute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attribute";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Attribute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Attribute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Attribute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "set")
    {
        if(set == nullptr)
        {
            set = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set>();
        }
        return set;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Attribute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(set != nullptr)
    {
        children["set"] = set;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::Set()
{
    yang_name = "set"; yang_parent_name = "attribute";
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::~Set()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::has_data() const
{
    for (std::size_t index=0; index<attr_type.size(); index++)
    {
        if(attr_type[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::has_operation() const
{
    for (std::size_t index=0; index<attr_type.size(); index++)
    {
        if(attr_type[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "set";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Set' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attr-type")
    {
        for(auto const & c : attr_type)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType>();
        c->parent = this;
        attr_type.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : attr_type)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::AttrType()
    :
    attr_type{YType::str, "attr-type"},
    attr_val{YType::str, "attr-val"}
{
    yang_name = "attr-type"; yang_parent_name = "set";
}

Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::~AttrType()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::has_data() const
{
    return attr_type.is_set
	|| attr_val.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::has_operation() const
{
    return is_set(operation)
	|| is_set(attr_type.operation)
	|| is_set(attr_val.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attr-type" <<"[attr-type='" <<attr_type <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AttrType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attr_type.is_set || is_set(attr_type.operation)) leaf_name_data.push_back(attr_type.get_name_leafdata());
    if (attr_val.is_set || is_set(attr_val.operation)) leaf_name_data.push_back(attr_val.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Attribute::Set::AttrType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attr-type")
    {
        attr_type = value;
    }
    if(value_path == "attr-val")
    {
        attr_val = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Cache::Cache()
    :
    non_authoritative{YType::empty, "non-authoritative"}
{
    yang_name = "cache"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Cache::~Cache()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Cache::has_data() const
{
    return non_authoritative.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Cache::has_operation() const
{
    return is_set(operation)
	|| is_set(non_authoritative.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Cache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Cache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_authoritative.is_set || is_set(non_authoritative.operation)) leaf_name_data.push_back(non_authoritative.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Cache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Cache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Cache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-authoritative")
    {
        non_authoritative = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Interest::Interest()
    :
    acl_range{YType::uint8, "acl-range"},
    none{YType::empty, "none"}
{
    yang_name = "interest"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Interest::~Interest()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Interest::has_data() const
{
    return acl_range.is_set
	|| none.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Interest::has_operation() const
{
    return is_set(operation)
	|| is_set(acl_range.operation)
	|| is_set(none.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Interest::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interest";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Interest::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Interest' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acl_range.is_set || is_set(acl_range.operation)) leaf_name_data.push_back(acl_range.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Interest::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Interest::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Interest::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acl-range")
    {
        acl_range = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Map()
    :
    multicast(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast>())
{
    multicast->parent = this;

    yang_name = "map"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Map::~Map()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::has_data() const
{
    for (std::size_t index=0; index<dest_ipv4.size(); index++)
    {
        if(dest_ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return (multicast !=  nullptr && multicast->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::has_operation() const
{
    for (std::size_t index=0; index<dest_ipv4.size(); index++)
    {
        if(dest_ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (multicast !=  nullptr && multicast->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "map";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Map::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Map' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-ipv4")
    {
        for(auto const & c : dest_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4>();
        c->parent = this;
        dest_ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Group>();
        c->parent = this;
        group.push_back(c);
        return c;
    }

    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast>();
        }
        return multicast;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dest_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : group)
    {
        children[c->get_segment_path()] = c;
    }

    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestIpv4()
    :
    dest_ipv4{YType::str, "dest-ipv4"},
    nbma_ipv6{YType::str, "nbma-ipv6"}
{
    yang_name = "dest-ipv4"; yang_parent_name = "map";
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::~DestIpv4()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::has_data() const
{
    for (std::size_t index=0; index<dest_mask.size(); index++)
    {
        if(dest_mask[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nbma_ipv4.size(); index++)
    {
        if(nbma_ipv4[index]->has_data())
            return true;
    }
    return dest_ipv4.is_set
	|| nbma_ipv6.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::has_operation() const
{
    for (std::size_t index=0; index<dest_mask.size(); index++)
    {
        if(dest_mask[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nbma_ipv4.size(); index++)
    {
        if(nbma_ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(dest_ipv4.operation)
	|| is_set(nbma_ipv6.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-ipv4" <<"[dest-ipv4='" <<dest_ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestIpv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_ipv4.is_set || is_set(dest_ipv4.operation)) leaf_name_data.push_back(dest_ipv4.get_name_leafdata());
    if (nbma_ipv6.is_set || is_set(nbma_ipv6.operation)) leaf_name_data.push_back(nbma_ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dest-mask")
    {
        for(auto const & c : dest_mask)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask>();
        c->parent = this;
        dest_mask.push_back(c);
        return c;
    }

    if(child_yang_name == "nbma-ipv4")
    {
        for(auto const & c : nbma_ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4>();
        c->parent = this;
        nbma_ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dest_mask)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nbma_ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-ipv4")
    {
        dest_ipv4 = value;
    }
    if(value_path == "nbma-ipv6")
    {
        nbma_ipv6 = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::NbmaIpv4()
    :
    nbma_ipv4{YType::str, "nbma-ipv4"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "nbma-ipv4"; yang_parent_name = "dest-ipv4";
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::~NbmaIpv4()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::has_data() const
{
    return nbma_ipv4.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::has_operation() const
{
    return is_set(operation)
	|| is_set(nbma_ipv4.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbma-ipv4" <<"[nbma-ipv4='" <<nbma_ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NbmaIpv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nbma_ipv4.is_set || is_set(nbma_ipv4.operation)) leaf_name_data.push_back(nbma_ipv4.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::NbmaIpv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nbma-ipv4")
    {
        nbma_ipv4 = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::DestMask()
    :
    dest_mask{YType::str, "dest-mask"},
    ipv4{YType::str, "ipv4"},
    ipv6{YType::str, "ipv6"}
{
    yang_name = "dest-mask"; yang_parent_name = "dest-ipv4";
}

Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::~DestMask()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::has_data() const
{
    return dest_mask.is_set
	|| ipv4.is_set
	|| ipv6.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::has_operation() const
{
    return is_set(operation)
	|| is_set(dest_mask.operation)
	|| is_set(ipv4.operation)
	|| is_set(ipv6.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dest-mask" <<"[dest-mask='" <<dest_mask <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestMask' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dest_mask.is_set || is_set(dest_mask.operation)) leaf_name_data.push_back(dest_mask.get_name_leafdata());
    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::DestIpv4::DestMask::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dest-mask")
    {
        dest_mask = value;
    }
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::Multicast()
    :
    dynamic{YType::empty, "dynamic"},
    nbma_ipv4{YType::str, "nbma_ipv4"},
    nbma_ipv6{YType::str, "nbma_ipv6"}
{
    yang_name = "multicast"; yang_parent_name = "map";
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::has_data() const
{
    for (auto const & leaf : nbma_ipv4.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    for (auto const & leaf : nbma_ipv6.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return dynamic.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::has_operation() const
{
    for (auto const & leaf : nbma_ipv4.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    for (auto const & leaf : nbma_ipv6.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(dynamic.operation)
	|| is_set(nbma_ipv4.operation)
	|| is_set(nbma_ipv6.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dynamic.is_set || is_set(dynamic.operation)) leaf_name_data.push_back(dynamic.get_name_leafdata());

    auto nbma_ipv4_name_datas = nbma_ipv4.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nbma_ipv4_name_datas.begin(), nbma_ipv4_name_datas.end());
    auto nbma_ipv6_name_datas = nbma_ipv6.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nbma_ipv6_name_datas.begin(), nbma_ipv6_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dynamic")
    {
        dynamic = value;
    }
    if(value_path == "nbma_ipv4")
    {
        nbma_ipv4.append(value);
    }
    if(value_path == "nbma_ipv6")
    {
        nbma_ipv6.append(value);
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Group::Group()
    :
    name{YType::str, "name"}
    	,
    service_policy(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy>())
{
    service_policy->parent = this;

    yang_name = "group"; yang_parent_name = "map";
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Group::~Group()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::has_data() const
{
    return name.is_set
	|| (service_policy !=  nullptr && service_policy->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (service_policy !=  nullptr && service_policy->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Map::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "service-policy")
    {
        if(service_policy == nullptr)
        {
            service_policy = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy>();
        }
        return service_policy;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(service_policy != nullptr)
    {
        children["service-policy"] = service_policy;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::ServicePolicy()
    :
    output{YType::str, "output"}
{
    yang_name = "service-policy"; yang_parent_name = "group";
}

Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::~ServicePolicy()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::has_data() const
{
    return output.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::has_operation() const
{
    return is_set(operation)
	|| is_set(output.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "service-policy";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServicePolicy' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (output.is_set || is_set(output.operation)) leaf_name_data.push_back(output.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Map::Group::ServicePolicy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "output")
    {
        output = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::MaxSend::MaxSend()
{
    yang_name = "max-send"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::MaxSend::~MaxSend()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::has_data() const
{
    for (std::size_t index=0; index<pkt_count.size(); index++)
    {
        if(pkt_count[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::has_operation() const
{
    for (std::size_t index=0; index<pkt_count.size(); index++)
    {
        if(pkt_count[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::MaxSend::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "max-send";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::MaxSend::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MaxSend' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::MaxSend::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pkt-count")
    {
        for(auto const & c : pkt_count)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount>();
        c->parent = this;
        pkt_count.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::MaxSend::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pkt_count)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::MaxSend::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::PktCount()
    :
    pkt_count{YType::uint16, "pkt-count"},
    every{YType::uint16, "every"}
{
    yang_name = "pkt-count"; yang_parent_name = "max-send";
}

Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::~PktCount()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::has_data() const
{
    return pkt_count.is_set
	|| every.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::has_operation() const
{
    return is_set(operation)
	|| is_set(pkt_count.operation)
	|| is_set(every.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pkt-count" <<"[pkt-count='" <<pkt_count <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PktCount' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pkt_count.is_set || is_set(pkt_count.operation)) leaf_name_data.push_back(pkt_count.get_name_leafdata());
    if (every.is_set || is_set(every.operation)) leaf_name_data.push_back(every.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::MaxSend::PktCount::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pkt-count")
    {
        pkt_count = value;
    }
    if(value_path == "every")
    {
        every = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Nhs()
    :
    fallback{YType::uint8, "fallback"}
    	,
    cluster(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster>())
	,dynamic(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic>())
{
    cluster->parent = this;

    dynamic->parent = this;

    yang_name = "nhs"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::~Nhs()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    return fallback.is_set
	|| (cluster !=  nullptr && cluster->has_data())
	|| (dynamic !=  nullptr && dynamic->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(fallback.operation)
	|| (cluster !=  nullptr && cluster->has_operation())
	|| (dynamic !=  nullptr && dynamic->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nhs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (fallback.is_set || is_set(fallback.operation)) leaf_name_data.push_back(fallback.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "cluster")
    {
        if(cluster == nullptr)
        {
            cluster = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster>();
        }
        return cluster;
    }

    if(child_yang_name == "dynamic")
    {
        if(dynamic == nullptr)
        {
            dynamic = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic>();
        }
        return dynamic;
    }

    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(cluster != nullptr)
    {
        children["cluster"] = cluster;
    }

    if(dynamic != nullptr)
    {
        children["dynamic"] = dynamic;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "fallback")
    {
        fallback = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    cluster{YType::uint8, "cluster"}
    	,
    nbma(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma>())
	,priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority>())
{
    nbma->parent = this;

    priority->parent = this;

    yang_name = "ipv4"; yang_parent_name = "nhs";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::~Ipv4()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::has_data() const
{
    return ipv4.is_set
	|| cluster.is_set
	|| (nbma !=  nullptr && nbma->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(cluster.operation)
	|| (nbma !=  nullptr && nbma->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbma")
    {
        if(nbma == nullptr)
        {
            nbma = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma>();
        }
        return nbma;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nbma != nullptr)
    {
        children["nbma"] = nbma;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Nbma()
{
    yang_name = "nbma"; yang_parent_name = "ipv4";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::~Nbma()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::has_data() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<nhs_fqdn.size(); index++)
    {
        if(nhs_fqdn[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::has_operation() const
{
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<nhs_fqdn.size(); index++)
    {
        if(nhs_fqdn[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbma";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nbma' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    if(child_yang_name == "nhs-fqdn")
    {
        for(auto const & c : nhs_fqdn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn>();
        c->parent = this;
        nhs_fqdn.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : nhs_fqdn)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Ipv4_()
    :
    ipv4{YType::str, "ipv4"},
    cluster{YType::uint8, "cluster"}
    	,
    multicast(nullptr) // presence node
	,priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority>())
{
    priority->parent = this;

    yang_name = "ipv4"; yang_parent_name = "nbma";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::~Ipv4_()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::has_data() const
{
    return ipv4.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(cluster.operation)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
    	,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv4";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::has_data() const
{
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "multicast";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::has_data() const
{
    for (std::size_t index=0; index<prior.size(); index++)
    {
        if(prior[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<prior.size(); index++)
    {
        if(prior[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prior")
    {
        for(auto const & c : prior)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior>();
        c->parent = this;
        prior.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : prior)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::Prior()
    :
    prior{YType::uint8, "prior"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "prior"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::~Prior()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::has_data() const
{
    return prior.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::has_operation() const
{
    return is_set(operation)
	|| is_set(prior.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prior" <<"[prior='" <<prior <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Prior' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prior.is_set || is_set(prior.operation)) leaf_name_data.push_back(prior.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Multicast::Priority::Prior::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prior")
    {
        prior = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "ipv4";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::has_data() const
{
    for (std::size_t index=0; index<pri.size(); index++)
    {
        if(pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::has_operation() const
{
    for (std::size_t index=0; index<pri.size(); index++)
    {
        if(pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pri")
    {
        for(auto const & c : pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri>();
        c->parent = this;
        pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::Pri()
    :
    pri{YType::uint8, "pri"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "pri"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::~Pri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::has_data() const
{
    return pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::has_operation() const
{
    return is_set(operation)
	|| is_set(pri.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pri" <<"[pri='" <<pri <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Pri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pri.is_set || is_set(pri.operation)) leaf_name_data.push_back(pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv4_::Priority::Pri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pri")
    {
        pri = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::NhsFqdn()
    :
    nhs_fqdn{YType::str, "nhs-fqdn"},
    cluster{YType::uint8, "cluster"}
    	,
    multicast(nullptr) // presence node
	,priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority>())
{
    priority->parent = this;

    yang_name = "nhs-fqdn"; yang_parent_name = "nbma";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::~NhsFqdn()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::has_data() const
{
    return nhs_fqdn.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::has_operation() const
{
    return is_set(operation)
	|| is_set(nhs_fqdn.operation)
	|| is_set(cluster.operation)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs-fqdn" <<"[nhs-fqdn='" <<nhs_fqdn <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhsFqdn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhs_fqdn.is_set || is_set(nhs_fqdn.operation)) leaf_name_data.push_back(nhs_fqdn.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhs-fqdn")
    {
        nhs_fqdn = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
    	,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "nhs-fqdn";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::has_data() const
{
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "multicast";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::has_data() const
{
    for (std::size_t index=0; index<mc_pri.size(); index++)
    {
        if(mc_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<mc_pri.size(); index++)
    {
        if(mc_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mc-pri")
    {
        for(auto const & c : mc_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri>();
        c->parent = this;
        mc_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mc_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::McPri()
    :
    mc_pri{YType::uint8, "mc-pri"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "mc-pri"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::~McPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::has_data() const
{
    return mc_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::has_operation() const
{
    return is_set(operation)
	|| is_set(mc_pri.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-pri" <<"[mc-pri='" <<mc_pri <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McPri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_pri.is_set || is_set(mc_pri.operation)) leaf_name_data.push_back(mc_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Multicast::Priority::McPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mc-pri")
    {
        mc_pri = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "nhs-fqdn";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::has_data() const
{
    for (std::size_t index=0; index<nhs_pri.size(); index++)
    {
        if(nhs_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::has_operation() const
{
    for (std::size_t index=0; index<nhs_pri.size(); index++)
    {
        if(nhs_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nhs-pri")
    {
        for(auto const & c : nhs_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri>();
        c->parent = this;
        nhs_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : nhs_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::NhsPri()
    :
    nhs_pri{YType::uint8, "nhs-pri"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "nhs-pri"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::~NhsPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::has_data() const
{
    return nhs_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::has_operation() const
{
    return is_set(operation)
	|| is_set(nhs_pri.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nhs-pri" <<"[nhs-pri='" <<nhs_pri <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NhsPri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nhs_pri.is_set || is_set(nhs_pri.operation)) leaf_name_data.push_back(nhs_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::NhsFqdn::Priority::NhsPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nhs-pri")
    {
        nhs_pri = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    cluster{YType::uint8, "cluster"}
    	,
    multicast(nullptr) // presence node
	,priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority>())
{
    priority->parent = this;

    yang_name = "ipv6"; yang_parent_name = "nbma";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::has_data() const
{
    return ipv6.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6.operation)
	|| is_set(cluster.operation)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
    	,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv6";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::has_data() const
{
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "multicast";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::has_data() const
{
    for (std::size_t index=0; index<mc_pri.size(); index++)
    {
        if(mc_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<mc_pri.size(); index++)
    {
        if(mc_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mc-pri")
    {
        for(auto const & c : mc_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri>();
        c->parent = this;
        mc_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mc_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::McPri()
    :
    mc_pri{YType::uint8, "mc-pri"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "mc-pri"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::~McPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::has_data() const
{
    return mc_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::has_operation() const
{
    return is_set(operation)
	|| is_set(mc_pri.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-pri" <<"[mc-pri='" <<mc_pri <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McPri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_pri.is_set || is_set(mc_pri.operation)) leaf_name_data.push_back(mc_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Multicast::Priority::McPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mc-pri")
    {
        mc_pri = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "ipv6";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::has_data() const
{
    for (std::size_t index=0; index<mc_prior.size(); index++)
    {
        if(mc_prior[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::has_operation() const
{
    for (std::size_t index=0; index<mc_prior.size(); index++)
    {
        if(mc_prior[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mc-prior")
    {
        for(auto const & c : mc_prior)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior>();
        c->parent = this;
        mc_prior.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mc_prior)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::McPrior()
    :
    mc_prior{YType::uint8, "mc-prior"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "mc-prior"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::~McPrior()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::has_data() const
{
    return mc_prior.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::has_operation() const
{
    return is_set(operation)
	|| is_set(mc_prior.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mc-prior" <<"[mc-prior='" <<mc_prior <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'McPrior' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mc_prior.is_set || is_set(mc_prior.operation)) leaf_name_data.push_back(mc_prior.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Nbma::Ipv6::Priority::McPrior::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "mc-prior")
    {
        mc_prior = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "ipv4";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::has_data() const
{
    for (std::size_t index=0; index<pri_range.size(); index++)
    {
        if(pri_range[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::has_operation() const
{
    for (std::size_t index=0; index<pri_range.size(); index++)
    {
        if(pri_range[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pri-range")
    {
        for(auto const & c : pri_range)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange>();
        c->parent = this;
        pri_range.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : pri_range)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::PriRange()
    :
    pri_range{YType::uint8, "pri-range"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "pri-range"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::~PriRange()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::has_data() const
{
    return pri_range.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::has_operation() const
{
    return is_set(operation)
	|| is_set(pri_range.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pri-range" <<"[pri-range='" <<pri_range <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PriRange' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (pri_range.is_set || is_set(pri_range.operation)) leaf_name_data.push_back(pri_range.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Ipv4::Priority::PriRange::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "pri-range")
    {
        pri_range = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::Cluster()
{
    yang_name = "cluster"; yang_parent_name = "nhs";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::~Cluster()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::has_data() const
{
    for (std::size_t index=0; index<clus_num.size(); index++)
    {
        if(clus_num[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::has_operation() const
{
    for (std::size_t index=0; index<clus_num.size(); index++)
    {
        if(clus_num[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "cluster";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Cluster' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "clus-num")
    {
        for(auto const & c : clus_num)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum>();
        c->parent = this;
        clus_num.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : clus_num)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::ClusNum()
    :
    clus_num{YType::uint8, "clus-num"},
    max_connections{YType::uint8, "max-connections"}
{
    yang_name = "clus-num"; yang_parent_name = "cluster";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::~ClusNum()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::has_data() const
{
    return clus_num.is_set
	|| max_connections.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::has_operation() const
{
    return is_set(operation)
	|| is_set(clus_num.operation)
	|| is_set(max_connections.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "clus-num" <<"[clus-num='" <<clus_num <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ClusNum' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (clus_num.is_set || is_set(clus_num.operation)) leaf_name_data.push_back(clus_num.get_name_leafdata());
    if (max_connections.is_set || is_set(max_connections.operation)) leaf_name_data.push_back(max_connections.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Cluster::ClusNum::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "clus-num")
    {
        clus_num = value;
    }
    if(value_path == "max-connections")
    {
        max_connections = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Dynamic()
    :
    nbma(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma>())
{
    nbma->parent = this;

    yang_name = "dynamic"; yang_parent_name = "nhs";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::~Dynamic()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::has_data() const
{
    return (nbma !=  nullptr && nbma->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::has_operation() const
{
    return is_set(operation)
	|| (nbma !=  nullptr && nbma->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dynamic' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nbma")
    {
        if(nbma == nullptr)
        {
            nbma = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma>();
        }
        return nbma;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(nbma != nullptr)
    {
        children["nbma"] = nbma;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Nbma()
{
    yang_name = "nbma"; yang_parent_name = "dynamic";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::~Nbma()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::has_data() const
{
    for (std::size_t index=0; index<dyn_fqdn.size(); index++)
    {
        if(dyn_fqdn[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::has_operation() const
{
    for (std::size_t index=0; index<dyn_fqdn.size(); index++)
    {
        if(dyn_fqdn[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv4.size(); index++)
    {
        if(ipv4[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ipv6.size(); index++)
    {
        if(ipv6[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nbma";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Nbma' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dyn-fqdn")
    {
        for(auto const & c : dyn_fqdn)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn>();
        c->parent = this;
        dyn_fqdn.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv4")
    {
        for(auto const & c : ipv4)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4>();
        c->parent = this;
        ipv4.push_back(c);
        return c;
    }

    if(child_yang_name == "ipv6")
    {
        for(auto const & c : ipv6)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6>();
        c->parent = this;
        ipv6.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dyn_fqdn)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv4)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : ipv6)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Ipv4()
    :
    ipv4{YType::str, "ipv4"},
    cluster{YType::uint8, "cluster"}
    	,
    multicast(nullptr) // presence node
	,priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority>())
{
    priority->parent = this;

    yang_name = "ipv4"; yang_parent_name = "nbma";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::~Ipv4()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::has_data() const
{
    return ipv4.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv4.operation)
	|| is_set(cluster.operation)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4" <<"[ipv4='" <<ipv4 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4.is_set || is_set(ipv4.operation)) leaf_name_data.push_back(ipv4.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv4")
    {
        ipv4 = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
    	,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv4";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::has_data() const
{
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "multicast";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::has_data() const
{
    for (std::size_t index=0; index<dyn_pri.size(); index++)
    {
        if(dyn_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<dyn_pri.size(); index++)
    {
        if(dyn_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dyn-pri")
    {
        for(auto const & c : dyn_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri>();
        c->parent = this;
        dyn_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dyn_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::DynPri()
    :
    dyn_pri{YType::uint8, "dyn-pri"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "dyn-pri"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::~DynPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::has_data() const
{
    return dyn_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::has_operation() const
{
    return is_set(operation)
	|| is_set(dyn_pri.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dyn-pri" <<"[dyn-pri='" <<dyn_pri <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynPri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dyn_pri.is_set || is_set(dyn_pri.operation)) leaf_name_data.push_back(dyn_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Multicast::Priority::DynPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dyn-pri")
    {
        dyn_pri = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "ipv4";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::has_data() const
{
    for (std::size_t index=0; index<n_prior.size(); index++)
    {
        if(n_prior[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::has_operation() const
{
    for (std::size_t index=0; index<n_prior.size(); index++)
    {
        if(n_prior[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "n-prior")
    {
        for(auto const & c : n_prior)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior>();
        c->parent = this;
        n_prior.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : n_prior)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::NPrior()
    :
    n_prior{YType::uint8, "n-prior"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "n-prior"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::~NPrior()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::has_data() const
{
    return n_prior.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::has_operation() const
{
    return is_set(operation)
	|| is_set(n_prior.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "n-prior" <<"[n-prior='" <<n_prior <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'NPrior' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (n_prior.is_set || is_set(n_prior.operation)) leaf_name_data.push_back(n_prior.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv4::Priority::NPrior::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "n-prior")
    {
        n_prior = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::DynFqdn()
    :
    dyn_fqdn{YType::str, "dyn-fqdn"},
    cluster{YType::uint8, "cluster"}
    	,
    multicast(nullptr) // presence node
	,priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority>())
{
    priority->parent = this;

    yang_name = "dyn-fqdn"; yang_parent_name = "nbma";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::~DynFqdn()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::has_data() const
{
    return dyn_fqdn.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::has_operation() const
{
    return is_set(operation)
	|| is_set(dyn_fqdn.operation)
	|| is_set(cluster.operation)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dyn-fqdn" <<"[dyn-fqdn='" <<dyn_fqdn <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynFqdn' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dyn_fqdn.is_set || is_set(dyn_fqdn.operation)) leaf_name_data.push_back(dyn_fqdn.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dyn-fqdn")
    {
        dyn_fqdn = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
    	,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "dyn-fqdn";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::has_data() const
{
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "multicast";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::has_data() const
{
    for (std::size_t index=0; index<dyn_mc_pri.size(); index++)
    {
        if(dyn_mc_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<dyn_mc_pri.size(); index++)
    {
        if(dyn_mc_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dyn-mc-pri")
    {
        for(auto const & c : dyn_mc_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri>();
        c->parent = this;
        dyn_mc_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dyn_mc_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::DynMcPri()
    :
    dyn_mc_pri{YType::uint8, "dyn-mc-pri"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "dyn-mc-pri"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::~DynMcPri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::has_data() const
{
    return dyn_mc_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::has_operation() const
{
    return is_set(operation)
	|| is_set(dyn_mc_pri.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dyn-mc-pri" <<"[dyn-mc-pri='" <<dyn_mc_pri <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DynMcPri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dyn_mc_pri.is_set || is_set(dyn_mc_pri.operation)) leaf_name_data.push_back(dyn_mc_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Multicast::Priority::DynMcPri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dyn-mc-pri")
    {
        dyn_mc_pri = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "dyn-fqdn";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::has_data() const
{
    for (std::size_t index=0; index<dp.size(); index++)
    {
        if(dp[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::has_operation() const
{
    for (std::size_t index=0; index<dp.size(); index++)
    {
        if(dp[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dp")
    {
        for(auto const & c : dp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp>();
        c->parent = this;
        dp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : dp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::Dp()
    :
    dp{YType::uint8, "dp"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "dp"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::~Dp()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::has_data() const
{
    return dp.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::has_operation() const
{
    return is_set(operation)
	|| is_set(dp.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dp" <<"[dp='" <<dp <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dp.is_set || is_set(dp.operation)) leaf_name_data.push_back(dp.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::DynFqdn::Priority::Dp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dp")
    {
        dp = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Ipv6()
    :
    ipv6{YType::str, "ipv6"},
    cluster{YType::uint8, "cluster"}
    	,
    multicast(nullptr) // presence node
	,priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority>())
{
    priority->parent = this;

    yang_name = "ipv6"; yang_parent_name = "nbma";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::has_data() const
{
    return ipv6.is_set
	|| cluster.is_set
	|| (multicast !=  nullptr && multicast->has_data())
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6.operation)
	|| is_set(cluster.operation)
	|| (multicast !=  nullptr && multicast->has_operation())
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6" <<"[ipv6='" <<ipv6 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "multicast")
    {
        if(multicast == nullptr)
        {
            multicast = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast>();
        }
        return multicast;
    }

    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(multicast != nullptr)
    {
        children["multicast"] = multicast;
    }

    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Multicast()
    :
    cluster{YType::uint8, "cluster"}
    	,
    priority(std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority>())
{
    priority->parent = this;

    yang_name = "multicast"; yang_parent_name = "ipv6";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::~Multicast()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::has_data() const
{
    return cluster.is_set
	|| (priority !=  nullptr && priority->has_data());
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::has_operation() const
{
    return is_set(operation)
	|| is_set(cluster.operation)
	|| (priority !=  nullptr && priority->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multicast";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Multicast' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "priority")
    {
        if(priority == nullptr)
        {
            priority = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority>();
        }
        return priority;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(priority != nullptr)
    {
        children["priority"] = priority;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "multicast";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::has_data() const
{
    for (std::size_t index=0; index<v6_pri.size(); index++)
    {
        if(v6_pri[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::has_operation() const
{
    for (std::size_t index=0; index<v6_pri.size(); index++)
    {
        if(v6_pri[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v6-pri")
    {
        for(auto const & c : v6_pri)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri>();
        c->parent = this;
        v6_pri.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : v6_pri)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::V6Pri()
    :
    v6_pri{YType::uint8, "v6-pri"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "v6-pri"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::~V6Pri()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::has_data() const
{
    return v6_pri.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::has_operation() const
{
    return is_set(operation)
	|| is_set(v6_pri.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-pri" <<"[v6-pri='" <<v6_pri <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V6Pri' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v6_pri.is_set || is_set(v6_pri.operation)) leaf_name_data.push_back(v6_pri.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Multicast::Priority::V6Pri::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "v6-pri")
    {
        v6_pri = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::Priority()
{
    yang_name = "priority"; yang_parent_name = "ipv6";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::~Priority()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::has_data() const
{
    for (std::size_t index=0; index<v6_pri2.size(); index++)
    {
        if(v6_pri2[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::has_operation() const
{
    for (std::size_t index=0; index<v6_pri2.size(); index++)
    {
        if(v6_pri2[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "priority";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Priority' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "v6-pri2")
    {
        for(auto const & c : v6_pri2)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2>();
        c->parent = this;
        v6_pri2.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : v6_pri2)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::V6Pri2()
    :
    v6_pri2{YType::uint8, "v6-pri2"},
    cluster{YType::uint8, "cluster"}
{
    yang_name = "v6-pri2"; yang_parent_name = "priority";
}

Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::~V6Pri2()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::has_data() const
{
    return v6_pri2.is_set
	|| cluster.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::has_operation() const
{
    return is_set(operation)
	|| is_set(v6_pri2.operation)
	|| is_set(cluster.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "v6-pri2" <<"[v6-pri2='" <<v6_pri2 <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'V6Pri2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (v6_pri2.is_set || is_set(v6_pri2.operation)) leaf_name_data.push_back(v6_pri2.get_name_leafdata());
    if (cluster.is_set || is_set(cluster.operation)) leaf_name_data.push_back(cluster.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Nhs::Dynamic::Nbma::Ipv6::Priority::V6Pri2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "v6-pri2")
    {
        v6_pri2 = value;
    }
    if(value_path == "cluster")
    {
        cluster = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Redirect::Redirect()
    :
    timeout{YType::uint8, "timeout"}
{
    yang_name = "redirect"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Redirect::has_data() const
{
    return timeout.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Registration::Registration()
    :
    no_unique{YType::empty, "no-unique"},
    timeout{YType::uint16, "timeout"}
{
    yang_name = "registration"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Registration::~Registration()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Registration::has_data() const
{
    return no_unique.is_set
	|| timeout.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Registration::has_operation() const
{
    return is_set(operation)
	|| is_set(no_unique.operation)
	|| is_set(timeout.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Registration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "registration";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Registration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Registration' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (no_unique.is_set || is_set(no_unique.operation)) leaf_name_data.push_back(no_unique.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Registration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Registration::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Registration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "no-unique")
    {
        no_unique = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Reject::Reject()
{
    yang_name = "reject"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Reject::~Reject()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::has_data() const
{
    for (std::size_t index=0; index<reqid.size(); index++)
    {
        if(reqid[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::has_operation() const
{
    for (std::size_t index=0; index<reqid.size(); index++)
    {
        if(reqid[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Reject::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reject";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Reject::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reject' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Reject::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "reqid")
    {
        for(auto const & c : reqid)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid>();
        c->parent = this;
        reqid.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Reject::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : reqid)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Reject::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::Reqid()
    :
    reqid{YType::uint16, "reqid"},
    rej_secs{YType::uint16, "rej-secs"}
{
    yang_name = "reqid"; yang_parent_name = "reject";
}

Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::~Reqid()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::has_data() const
{
    return reqid.is_set
	|| rej_secs.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::has_operation() const
{
    return is_set(operation)
	|| is_set(reqid.operation)
	|| is_set(rej_secs.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "reqid" <<"[reqid='" <<reqid <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Reqid' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reqid.is_set || is_set(reqid.operation)) leaf_name_data.push_back(reqid.get_name_leafdata());
    if (rej_secs.is_set || is_set(rej_secs.operation)) leaf_name_data.push_back(rej_secs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Reject::Reqid::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reqid")
    {
        reqid = value;
    }
    if(value_path == "rej-secs")
    {
        rej_secs = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Responder::Responder()
    :
    analysis_module{YType::uint8, "Analysis-Module"},
    fcpa{YType::uint8, "Fcpa"},
    res_int{YType::str, "res-int"},
    sbc{YType::uint32, "SBC"},
    service_engine{YType::uint8, "Service-Engine"},
    sonet_acr{YType::uint8, "SONET_ACR"},
    tb_controller{YType::str, "TB-controller"},
    tunnel{YType::uint32, "Tunnel"},
    tunnel_tp{YType::uint16, "Tunnel-tp"},
    ucse{YType::uint8, "ucse"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_tokenring{YType::uint32, "Virtual-TokenRing"},
    virtualportgroup{YType::uint8, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"},
    vpn{YType::uint32, "VPN"}
{
    yang_name = "responder"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Responder::~Responder()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Responder::has_data() const
{
    return analysis_module.is_set
	|| fcpa.is_set
	|| res_int.is_set
	|| sbc.is_set
	|| service_engine.is_set
	|| sonet_acr.is_set
	|| tb_controller.is_set
	|| tunnel.is_set
	|| tunnel_tp.is_set
	|| ucse.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_tokenring.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| vpn.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Responder::has_operation() const
{
    return is_set(operation)
	|| is_set(analysis_module.operation)
	|| is_set(fcpa.operation)
	|| is_set(res_int.operation)
	|| is_set(sbc.operation)
	|| is_set(service_engine.operation)
	|| is_set(sonet_acr.operation)
	|| is_set(tb_controller.operation)
	|| is_set(tunnel.operation)
	|| is_set(tunnel_tp.operation)
	|| is_set(ucse.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_tokenring.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| is_set(vpn.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Responder::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "responder";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Responder::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Responder' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (analysis_module.is_set || is_set(analysis_module.operation)) leaf_name_data.push_back(analysis_module.get_name_leafdata());
    if (fcpa.is_set || is_set(fcpa.operation)) leaf_name_data.push_back(fcpa.get_name_leafdata());
    if (res_int.is_set || is_set(res_int.operation)) leaf_name_data.push_back(res_int.get_name_leafdata());
    if (sbc.is_set || is_set(sbc.operation)) leaf_name_data.push_back(sbc.get_name_leafdata());
    if (service_engine.is_set || is_set(service_engine.operation)) leaf_name_data.push_back(service_engine.get_name_leafdata());
    if (sonet_acr.is_set || is_set(sonet_acr.operation)) leaf_name_data.push_back(sonet_acr.get_name_leafdata());
    if (tb_controller.is_set || is_set(tb_controller.operation)) leaf_name_data.push_back(tb_controller.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (tunnel_tp.is_set || is_set(tunnel_tp.operation)) leaf_name_data.push_back(tunnel_tp.get_name_leafdata());
    if (ucse.is_set || is_set(ucse.operation)) leaf_name_data.push_back(ucse.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_tokenring.is_set || is_set(virtual_tokenring.operation)) leaf_name_data.push_back(virtual_tokenring.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());
    if (vpn.is_set || is_set(vpn.operation)) leaf_name_data.push_back(vpn.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Responder::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Responder::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Responder::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Analysis-Module")
    {
        analysis_module = value;
    }
    if(value_path == "Fcpa")
    {
        fcpa = value;
    }
    if(value_path == "res-int")
    {
        res_int = value;
    }
    if(value_path == "SBC")
    {
        sbc = value;
    }
    if(value_path == "Service-Engine")
    {
        service_engine = value;
    }
    if(value_path == "SONET_ACR")
    {
        sonet_acr = value;
    }
    if(value_path == "TB-controller")
    {
        tb_controller = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "Tunnel-tp")
    {
        tunnel_tp = value;
    }
    if(value_path == "ucse")
    {
        ucse = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-TokenRing")
    {
        virtual_tokenring = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
    if(value_path == "VPN")
    {
        vpn = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::ServerOnly()
    :
    non_caching{YType::empty, "non-caching"}
{
    yang_name = "server-only"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::~ServerOnly()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::has_data() const
{
    return non_caching.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(non_caching.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-only";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerOnly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (non_caching.is_set || is_set(non_caching.operation)) leaf_name_data.push_back(non_caching.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::ServerOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "non-caching")
    {
        non_caching = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::Shortcut::Shortcut()
    :
    virtual_template{YType::uint16, "virtual-template"}
{
    yang_name = "shortcut"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::Shortcut::~Shortcut()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::Shortcut::has_data() const
{
    return virtual_template.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::Shortcut::has_operation() const
{
    return is_set(operation)
	|| is_set(virtual_template.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::Shortcut::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "shortcut";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::Shortcut::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Shortcut' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::Shortcut::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::Shortcut::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::Shortcut::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "virtual-template")
    {
        virtual_template = value;
    }
}

Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::TriggerSvc()
{
    yang_name = "trigger-svc"; yang_parent_name = "nhrp";
}

Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::~TriggerSvc()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::has_data() const
{
    for (std::size_t index=0; index<kbps.size(); index++)
    {
        if(kbps[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::has_operation() const
{
    for (std::size_t index=0; index<kbps.size(); index++)
    {
        if(kbps[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trigger-svc";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TriggerSvc' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "kbps")
    {
        for(auto const & c : kbps)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps>();
        c->parent = this;
        kbps.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : kbps)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::Kbps()
    :
    kbps{YType::uint32, "kbps"},
    tear_kbps{YType::uint32, "tear-kbps"}
{
    yang_name = "kbps"; yang_parent_name = "trigger-svc";
}

Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::~Kbps()
{
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::has_data() const
{
    return kbps.is_set
	|| tear_kbps.is_set;
}

bool Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::has_operation() const
{
    return is_set(operation)
	|| is_set(kbps.operation)
	|| is_set(tear_kbps.operation);
}

std::string Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "kbps" <<"[kbps='" <<kbps <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Kbps' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (kbps.is_set || is_set(kbps.operation)) leaf_name_data.push_back(kbps.get_name_leafdata());
    if (tear_kbps.is_set || is_set(tear_kbps.operation)) leaf_name_data.push_back(tear_kbps.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Nhrp::TriggerSvc::Kbps::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "kbps")
    {
        kbps = value;
    }
    if(value_path == "tear-kbps")
    {
        tear_kbps = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::Ospf()
    :
    cost{YType::uint16, "cost"},
    flood_reduction{YType::empty, "flood-reduction"},
    hello_interval{YType::uint32, "hello-interval"},
    mtu_ignore{YType::empty, "mtu-ignore"},
    network{YType::enumeration, "network"},
    priority{YType::uint8, "priority"},
    resync_timeout{YType::uint32, "resync-timeout"},
    retransmit_interval{YType::uint32, "retransmit-interval"},
    shutdown{YType::empty, "shutdown"},
    transmit_delay{YType::uint32, "transmit-delay"}
    	,
    authentication(nullptr) // presence node
	,authentication_key(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey>())
	,bfd(nullptr) // presence node
	,database_filter(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter>())
	,dead_interval(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DeadInterval>())
	,demand_circuit(nullptr) // presence node
	,fast_reroute(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute>())
	,lls(nullptr) // presence node
	,multi_area(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MultiArea>())
	,prefix_suppression(nullptr) // presence node
	,ttl_security(nullptr) // presence node
{
    authentication_key->parent = this;

    database_filter->parent = this;

    dead_interval->parent = this;

    fast_reroute->parent = this;

    multi_area->parent = this;

    yang_name = "ospf"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Ospf::~Ospf()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::has_data() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_data())
            return true;
    }
    return cost.is_set
	|| flood_reduction.is_set
	|| hello_interval.is_set
	|| mtu_ignore.is_set
	|| network.is_set
	|| priority.is_set
	|| resync_timeout.is_set
	|| retransmit_interval.is_set
	|| shutdown.is_set
	|| transmit_delay.is_set
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authentication_key !=  nullptr && authentication_key->has_data())
	|| (bfd !=  nullptr && bfd->has_data())
	|| (database_filter !=  nullptr && database_filter->has_data())
	|| (dead_interval !=  nullptr && dead_interval->has_data())
	|| (demand_circuit !=  nullptr && demand_circuit->has_data())
	|| (fast_reroute !=  nullptr && fast_reroute->has_data())
	|| (lls !=  nullptr && lls->has_data())
	|| (multi_area !=  nullptr && multi_area->has_data())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_data())
	|| (ttl_security !=  nullptr && ttl_security->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::has_operation() const
{
    for (std::size_t index=0; index<message_digest_key.size(); index++)
    {
        if(message_digest_key[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<process_id.size(); index++)
    {
        if(process_id[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(flood_reduction.operation)
	|| is_set(hello_interval.operation)
	|| is_set(mtu_ignore.operation)
	|| is_set(network.operation)
	|| is_set(priority.operation)
	|| is_set(resync_timeout.operation)
	|| is_set(retransmit_interval.operation)
	|| is_set(shutdown.operation)
	|| is_set(transmit_delay.operation)
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authentication_key !=  nullptr && authentication_key->has_operation())
	|| (bfd !=  nullptr && bfd->has_operation())
	|| (database_filter !=  nullptr && database_filter->has_operation())
	|| (dead_interval !=  nullptr && dead_interval->has_operation())
	|| (demand_circuit !=  nullptr && demand_circuit->has_operation())
	|| (fast_reroute !=  nullptr && fast_reroute->has_operation())
	|| (lls !=  nullptr && lls->has_operation())
	|| (multi_area !=  nullptr && multi_area->has_operation())
	|| (prefix_suppression !=  nullptr && prefix_suppression->has_operation())
	|| (ttl_security !=  nullptr && ttl_security->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-ospf:ospf";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ospf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (flood_reduction.is_set || is_set(flood_reduction.operation)) leaf_name_data.push_back(flood_reduction.get_name_leafdata());
    if (hello_interval.is_set || is_set(hello_interval.operation)) leaf_name_data.push_back(hello_interval.get_name_leafdata());
    if (mtu_ignore.is_set || is_set(mtu_ignore.operation)) leaf_name_data.push_back(mtu_ignore.get_name_leafdata());
    if (network.is_set || is_set(network.operation)) leaf_name_data.push_back(network.get_name_leafdata());
    if (priority.is_set || is_set(priority.operation)) leaf_name_data.push_back(priority.get_name_leafdata());
    if (resync_timeout.is_set || is_set(resync_timeout.operation)) leaf_name_data.push_back(resync_timeout.get_name_leafdata());
    if (retransmit_interval.is_set || is_set(retransmit_interval.operation)) leaf_name_data.push_back(retransmit_interval.get_name_leafdata());
    if (shutdown.is_set || is_set(shutdown.operation)) leaf_name_data.push_back(shutdown.get_name_leafdata());
    if (transmit_delay.is_set || is_set(transmit_delay.operation)) leaf_name_data.push_back(transmit_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authentication-key")
    {
        if(authentication_key == nullptr)
        {
            authentication_key = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey>();
        }
        return authentication_key;
    }

    if(child_yang_name == "bfd")
    {
        if(bfd == nullptr)
        {
            bfd = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Bfd>();
        }
        return bfd;
    }

    if(child_yang_name == "database-filter")
    {
        if(database_filter == nullptr)
        {
            database_filter = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter>();
        }
        return database_filter;
    }

    if(child_yang_name == "dead-interval")
    {
        if(dead_interval == nullptr)
        {
            dead_interval = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DeadInterval>();
        }
        return dead_interval;
    }

    if(child_yang_name == "demand-circuit")
    {
        if(demand_circuit == nullptr)
        {
            demand_circuit = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DemandCircuit>();
        }
        return demand_circuit;
    }

    if(child_yang_name == "fast-reroute")
    {
        if(fast_reroute == nullptr)
        {
            fast_reroute = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute>();
        }
        return fast_reroute;
    }

    if(child_yang_name == "lls")
    {
        if(lls == nullptr)
        {
            lls = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Lls>();
        }
        return lls;
    }

    if(child_yang_name == "message-digest-key")
    {
        for(auto const & c : message_digest_key)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey>();
        c->parent = this;
        message_digest_key.push_back(c);
        return c;
    }

    if(child_yang_name == "multi-area")
    {
        if(multi_area == nullptr)
        {
            multi_area = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MultiArea>();
        }
        return multi_area;
    }

    if(child_yang_name == "prefix-suppression")
    {
        if(prefix_suppression == nullptr)
        {
            prefix_suppression = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression>();
        }
        return prefix_suppression;
    }

    if(child_yang_name == "process-id")
    {
        for(auto const & c : process_id)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::ProcessId>();
        c->parent = this;
        process_id.push_back(c);
        return c;
    }

    if(child_yang_name == "ttl-security")
    {
        if(ttl_security == nullptr)
        {
            ttl_security = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::TtlSecurity>();
        }
        return ttl_security;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    if(authentication_key != nullptr)
    {
        children["authentication-key"] = authentication_key;
    }

    if(bfd != nullptr)
    {
        children["bfd"] = bfd;
    }

    if(database_filter != nullptr)
    {
        children["database-filter"] = database_filter;
    }

    if(dead_interval != nullptr)
    {
        children["dead-interval"] = dead_interval;
    }

    if(demand_circuit != nullptr)
    {
        children["demand-circuit"] = demand_circuit;
    }

    if(fast_reroute != nullptr)
    {
        children["fast-reroute"] = fast_reroute;
    }

    if(lls != nullptr)
    {
        children["lls"] = lls;
    }

    for (auto const & c : message_digest_key)
    {
        children[c->get_segment_path()] = c;
    }

    if(multi_area != nullptr)
    {
        children["multi-area"] = multi_area;
    }

    if(prefix_suppression != nullptr)
    {
        children["prefix-suppression"] = prefix_suppression;
    }

    for (auto const & c : process_id)
    {
        children[c->get_segment_path()] = c;
    }

    if(ttl_security != nullptr)
    {
        children["ttl-security"] = ttl_security;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "flood-reduction")
    {
        flood_reduction = value;
    }
    if(value_path == "hello-interval")
    {
        hello_interval = value;
    }
    if(value_path == "mtu-ignore")
    {
        mtu_ignore = value;
    }
    if(value_path == "network")
    {
        network = value;
    }
    if(value_path == "priority")
    {
        priority = value;
    }
    if(value_path == "resync-timeout")
    {
        resync_timeout = value;
    }
    if(value_path == "retransmit-interval")
    {
        retransmit_interval = value;
    }
    if(value_path == "shutdown")
    {
        shutdown = value;
    }
    if(value_path == "transmit-delay")
    {
        transmit_delay = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::ProcessId::ProcessId()
    :
    id{YType::uint16, "id"},
    area{YType::str, "area"},
    none{YType::empty, "none"},
    secondaries{YType::empty, "secondaries"}
{
    yang_name = "process-id"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::ProcessId::~ProcessId()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::ProcessId::has_data() const
{
    return id.is_set
	|| area.is_set
	|| none.is_set
	|| secondaries.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::ProcessId::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(area.operation)
	|| is_set(none.operation)
	|| is_set(secondaries.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::ProcessId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "process-id" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::ProcessId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ProcessId' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (area.is_set || is_set(area.operation)) leaf_name_data.push_back(area.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (secondaries.is_set || is_set(secondaries.operation)) leaf_name_data.push_back(secondaries.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::ProcessId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::ProcessId::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::ProcessId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "area")
    {
        area = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "secondaries")
    {
        secondaries = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::Authentication::Authentication()
    :
    message_digest{YType::empty, "message-digest"},
    null{YType::empty, "null"}
    	,
    key_chain(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain>())
{
    key_chain->parent = this;

    yang_name = "authentication"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::Authentication::~Authentication()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::has_data() const
{
    return message_digest.is_set
	|| null.is_set
	|| (key_chain !=  nullptr && key_chain->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::has_operation() const
{
    return is_set(operation)
	|| is_set(message_digest.operation)
	|| is_set(null.operation)
	|| (key_chain !=  nullptr && key_chain->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Authentication' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (message_digest.is_set || is_set(message_digest.operation)) leaf_name_data.push_back(message_digest.get_name_leafdata());
    if (null.is_set || is_set(null.operation)) leaf_name_data.push_back(null.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key-chain")
    {
        if(key_chain == nullptr)
        {
            key_chain = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain>();
        }
        return key_chain;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key_chain != nullptr)
    {
        children["key-chain"] = key_chain;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::Authentication::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "message-digest")
    {
        message_digest = value;
    }
    if(value_path == "null")
    {
        null = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::KeyChain()
    :
    name{YType::str, "name"}
{
    yang_name = "key-chain"; yang_parent_name = "authentication";
}

Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::~KeyChain()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::has_data() const
{
    return name.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key-chain";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'KeyChain' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::Authentication::KeyChain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::AuthenticationKey()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{
    yang_name = "authentication-key"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::~AuthenticationKey()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_key.operation)
	|| is_set(auth_type.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-key";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AuthenticationKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.operation)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.operation)) leaf_name_data.push_back(auth_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::AuthenticationKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::Bfd::Bfd()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "bfd"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::Bfd::~Bfd()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::Bfd::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::Bfd::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::Bfd::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::Bfd::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Bfd' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::Bfd::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::Bfd::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::Bfd::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::DatabaseFilter()
    :
    all{YType::empty, "all"},
    out{YType::empty, "out"}
{
    yang_name = "database-filter"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::~DatabaseFilter()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::has_data() const
{
    return all.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "database-filter";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DatabaseFilter' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::DatabaseFilter::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::DeadInterval::DeadInterval()
    :
    value_{YType::uint32, "value"}
    	,
    minimal(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal>())
{
    minimal->parent = this;

    yang_name = "dead-interval"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::DeadInterval::~DeadInterval()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::has_data() const
{
    return value_.is_set
	|| (minimal !=  nullptr && minimal->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::has_operation() const
{
    return is_set(operation)
	|| is_set(value_.operation)
	|| (minimal !=  nullptr && minimal->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::DeadInterval::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dead-interval";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::DeadInterval::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DeadInterval' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (value_.is_set || is_set(value_.operation)) leaf_name_data.push_back(value_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::DeadInterval::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "minimal")
    {
        if(minimal == nullptr)
        {
            minimal = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal>();
        }
        return minimal;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::DeadInterval::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(minimal != nullptr)
    {
        children["minimal"] = minimal;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::DeadInterval::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "value")
    {
        value_ = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::Minimal()
    :
    hello_multiplier{YType::uint8, "hello-multiplier"}
{
    yang_name = "minimal"; yang_parent_name = "dead-interval";
}

Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::~Minimal()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::has_data() const
{
    return hello_multiplier.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::has_operation() const
{
    return is_set(operation)
	|| is_set(hello_multiplier.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "minimal";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Minimal' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hello_multiplier.is_set || is_set(hello_multiplier.operation)) leaf_name_data.push_back(hello_multiplier.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::DeadInterval::Minimal::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hello-multiplier")
    {
        hello_multiplier = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::DemandCircuit()
    :
    ignore{YType::empty, "ignore"}
{
    yang_name = "demand-circuit"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::~DemandCircuit()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::has_data() const
{
    return ignore.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::has_operation() const
{
    return is_set(operation)
	|| is_set(ignore.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "demand-circuit";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DemandCircuit' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ignore.is_set || is_set(ignore.operation)) leaf_name_data.push_back(ignore.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::DemandCircuit::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ignore")
    {
        ignore = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::FastReroute()
    :
    per_prefix(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix>())
{
    per_prefix->parent = this;

    yang_name = "fast-reroute"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::~FastReroute()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::has_data() const
{
    return (per_prefix !=  nullptr && per_prefix->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::has_operation() const
{
    return is_set(operation)
	|| (per_prefix !=  nullptr && per_prefix->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::FastReroute::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fast-reroute";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::FastReroute::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'FastReroute' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::FastReroute::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "per-prefix")
    {
        if(per_prefix == nullptr)
        {
            per_prefix = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix>();
        }
        return per_prefix;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::FastReroute::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(per_prefix != nullptr)
    {
        children["per-prefix"] = per_prefix;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::PerPrefix()
    :
    candidate(nullptr) // presence node
	,protection(nullptr) // presence node
{
    yang_name = "per-prefix"; yang_parent_name = "fast-reroute";
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::~PerPrefix()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::has_data() const
{
    return (candidate !=  nullptr && candidate->has_data())
	|| (protection !=  nullptr && protection->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::has_operation() const
{
    return is_set(operation)
	|| (candidate !=  nullptr && candidate->has_operation())
	|| (protection !=  nullptr && protection->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "per-prefix";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PerPrefix' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "candidate")
    {
        if(candidate == nullptr)
        {
            candidate = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate>();
        }
        return candidate;
    }

    if(child_yang_name == "protection")
    {
        if(protection == nullptr)
        {
            protection = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection>();
        }
        return protection;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(candidate != nullptr)
    {
        children["candidate"] = candidate;
    }

    if(protection != nullptr)
    {
        children["protection"] = protection;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::Candidate()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "candidate"; yang_parent_name = "per-prefix";
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::~Candidate()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "candidate";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Candidate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Candidate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::Protection()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "protection"; yang_parent_name = "per-prefix";
}

Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::~Protection()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "protection";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Protection' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::FastReroute::PerPrefix::Protection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::Lls::Lls()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "lls"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::Lls::~Lls()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::Lls::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::Lls::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::Lls::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lls";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::Lls::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Lls' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::Lls::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::Lls::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::Lls::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::MessageDigestKey()
    :
    id{YType::uint8, "id"}
    	,
    md5(std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5>())
{
    md5->parent = this;

    yang_name = "message-digest-key"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::~MessageDigestKey()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::has_data() const
{
    return id.is_set
	|| (md5 !=  nullptr && md5->has_data());
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (md5 !=  nullptr && md5->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "message-digest-key" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MessageDigestKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "md5")
    {
        if(md5 == nullptr)
        {
            md5 = std::make_shared<Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5>();
        }
        return md5;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(md5 != nullptr)
    {
        children["md5"] = md5;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::Md5()
    :
    auth_key{YType::str, "auth-key"},
    auth_type{YType::uint8, "auth-type"}
{
    yang_name = "md5"; yang_parent_name = "message-digest-key";
}

Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::~Md5()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::has_data() const
{
    return auth_key.is_set
	|| auth_type.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::has_operation() const
{
    return is_set(operation)
	|| is_set(auth_key.operation)
	|| is_set(auth_type.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "md5";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Md5' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_key.is_set || is_set(auth_key.operation)) leaf_name_data.push_back(auth_key.get_name_leafdata());
    if (auth_type.is_set || is_set(auth_type.operation)) leaf_name_data.push_back(auth_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::MessageDigestKey::Md5::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-key")
    {
        auth_key = value;
    }
    if(value_path == "auth-type")
    {
        auth_type = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::MultiArea::MultiArea()
    :
    cost{YType::uint32, "cost"},
    id{YType::str, "id"}
{
    yang_name = "multi-area"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::MultiArea::~MultiArea()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::MultiArea::has_data() const
{
    return cost.is_set
	|| id.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::MultiArea::has_operation() const
{
    return is_set(operation)
	|| is_set(cost.operation)
	|| is_set(id.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::MultiArea::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multi-area";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::MultiArea::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'MultiArea' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cost.is_set || is_set(cost.operation)) leaf_name_data.push_back(cost.get_name_leafdata());
    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::MultiArea::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::MultiArea::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::MultiArea::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cost")
    {
        cost = value;
    }
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::PrefixSuppression()
    :
    disable{YType::empty, "disable"}
{
    yang_name = "prefix-suppression"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::~PrefixSuppression()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::has_data() const
{
    return disable.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::has_operation() const
{
    return is_set(operation)
	|| is_set(disable.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-suppression";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixSuppression' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (disable.is_set || is_set(disable.operation)) leaf_name_data.push_back(disable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::PrefixSuppression::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "disable")
    {
        disable = value;
    }
}

Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::TtlSecurity()
    :
    diable{YType::empty, "diable"},
    hops{YType::uint8, "hops"}
{
    yang_name = "ttl-security"; yang_parent_name = "ospf";
}

Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::~TtlSecurity()
{
}

bool Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::has_data() const
{
    return diable.is_set
	|| hops.is_set;
}

bool Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::has_operation() const
{
    return is_set(operation)
	|| is_set(diable.operation)
	|| is_set(hops.operation);
}

std::string Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ttl-security";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'TtlSecurity' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (diable.is_set || is_set(diable.operation)) leaf_name_data.push_back(diable.get_name_leafdata());
    if (hops.is_set || is_set(hops.operation)) leaf_name_data.push_back(hops.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Ospf::TtlSecurity::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "diable")
    {
        diable = value;
    }
    if(value_path == "hops")
    {
        hops = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::Wccp()
    :
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Redirect>())
	,web_cache(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WebCache>())
{
    redirect->parent = this;

    web_cache->parent = this;

    yang_name = "wccp"; yang_parent_name = "ip";
}

Native::Interface::Tunnel::Ip::Wccp::~Wccp()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return (redirect !=  nullptr && redirect->has_data())
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (redirect !=  nullptr && redirect->has_operation())
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-wccp:wccp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Wccp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Redirect>();
        }
        return redirect;
    }

    if(child_yang_name == "vrf")
    {
        for(auto const & c : vrf)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    if(child_yang_name == "wccp-list")
    {
        for(auto const & c : wccp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : wccp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(web_cache != nullptr)
    {
        children["web-cache"] = web_cache;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Wccp::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "wccp";
}

Native::Interface::Tunnel::Ip::Wccp::WccpList::~WccpList()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::has_data() const
{
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(group_listen.operation)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::WccpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WccpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.operation)) leaf_name_data.push_back(group_listen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::WccpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "redirect"; yang_parent_name = "wccp-list";
}

Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::WccpList::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "wccp";
}

Native::Interface::Tunnel::Ip::Wccp::WebCache::~WebCache()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::has_data() const
{
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_listen.operation)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::WebCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WebCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.operation)) leaf_name_data.push_back(group_listen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::WebCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "redirect"; yang_parent_name = "web-cache";
}

Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::WebCache::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::Redirect::Redirect()
    :
    exclude(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude>())
{
    exclude->parent = this;

    yang_name = "redirect"; yang_parent_name = "wccp";
}

Native::Interface::Tunnel::Ip::Wccp::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::has_data() const
{
    return (exclude !=  nullptr && exclude->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::has_operation() const
{
    return is_set(operation)
	|| (exclude !=  nullptr && exclude->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exclude")
    {
        if(exclude == nullptr)
        {
            exclude = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude>();
        }
        return exclude;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exclude != nullptr)
    {
        children["exclude"] = exclude;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::Redirect::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::Exclude()
    :
    in{YType::empty, "in"}
{
    yang_name = "exclude"; yang_parent_name = "redirect";
}

Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::~Exclude()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::has_data() const
{
    return in.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation);
}

std::string Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exclude";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Exclude' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::Redirect::Exclude::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::Vrf()
    :
    name{YType::str, "name"}
    	,
    web_cache(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache>())
{
    web_cache->parent = this;

    yang_name = "vrf"; yang_parent_name = "wccp";
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::~Vrf()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::has_data() const
{
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_data())
            return true;
    }
    return name.is_set
	|| (web_cache !=  nullptr && web_cache->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::has_operation() const
{
    for (std::size_t index=0; index<wccp_list.size(); index++)
    {
        if(wccp_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (web_cache !=  nullptr && web_cache->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::Vrf::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Vrf' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "wccp-list")
    {
        for(auto const & c : wccp_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList>();
        c->parent = this;
        wccp_list.push_back(c);
        return c;
    }

    if(child_yang_name == "web-cache")
    {
        if(web_cache == nullptr)
        {
            web_cache = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache>();
        }
        return web_cache;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : wccp_list)
    {
        children[c->get_segment_path()] = c;
    }

    if(web_cache != nullptr)
    {
        children["web-cache"] = web_cache;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::WccpList()
    :
    id{YType::uint8, "id"},
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect>())
{
    redirect->parent = this;

    yang_name = "wccp-list"; yang_parent_name = "vrf";
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::~WccpList()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::has_data() const
{
    return id.is_set
	|| group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(group_listen.operation)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "wccp-list" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WccpList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (group_listen.is_set || is_set(group_listen.operation)) leaf_name_data.push_back(group_listen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "group-listen")
    {
        group_listen = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "redirect"; yang_parent_name = "wccp-list";
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WccpList::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::WebCache()
    :
    group_listen{YType::empty, "group-listen"}
    	,
    redirect(std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect>())
{
    redirect->parent = this;

    yang_name = "web-cache"; yang_parent_name = "vrf";
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::~WebCache()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::has_data() const
{
    return group_listen.is_set
	|| (redirect !=  nullptr && redirect->has_data());
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::has_operation() const
{
    return is_set(operation)
	|| is_set(group_listen.operation)
	|| (redirect !=  nullptr && redirect->has_operation());
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "web-cache";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'WebCache' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_listen.is_set || is_set(group_listen.operation)) leaf_name_data.push_back(group_listen.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "redirect")
    {
        if(redirect == nullptr)
        {
            redirect = std::make_shared<Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect>();
        }
        return redirect;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(redirect != nullptr)
    {
        children["redirect"] = redirect;
    }

    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-listen")
    {
        group_listen = value;
    }
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::Redirect()
    :
    in{YType::empty, "in"},
    out{YType::empty, "out"}
{
    yang_name = "redirect"; yang_parent_name = "web-cache";
}

Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::~Redirect()
{
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::has_data() const
{
    return in.is_set
	|| out.is_set;
}

bool Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::has_operation() const
{
    return is_set(operation)
	|| is_set(in.operation)
	|| is_set(out.operation);
}

std::string Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redirect";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Redirect' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in.is_set || is_set(in.operation)) leaf_name_data.push_back(in.get_name_leafdata());
    if (out.is_set || is_set(out.operation)) leaf_name_data.push_back(out.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ip::Wccp::Vrf::WebCache::Redirect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "in")
    {
        in = value;
    }
    if(value_path == "out")
    {
        out = value;
    }
}

Native::Interface::Tunnel::Ipv6::Ipv6()
    :
    enable{YType::empty, "enable"},
    mtu{YType::uint16, "mtu"},
    redirects{YType::boolean, "redirects"},
    unreachables{YType::boolean, "Cisco-IOS-XE-icmp:unreachables"}
    	,
    address(std::make_shared<Native::Interface::Tunnel::Ipv6::Address>())
	,destination_guard(nullptr) // presence node
	,dhcp(std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp>())
	,flow(std::make_shared<Native::Interface::Tunnel::Ipv6::Flow>())
	,nd(std::make_shared<Native::Interface::Tunnel::Ipv6::Nd>())
	,no_pim(std::make_shared<Native::Interface::Tunnel::Ipv6::NoPim>())
	,ospf(std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf>())
	,pim(std::make_shared<Native::Interface::Tunnel::Ipv6::Pim>())
{
    address->parent = this;

    dhcp->parent = this;

    flow->parent = this;

    nd->parent = this;

    no_pim->parent = this;

    ospf->parent = this;

    pim->parent = this;

    yang_name = "ipv6"; yang_parent_name = "Tunnel";
}

Native::Interface::Tunnel::Ipv6::~Ipv6()
{
}

bool Native::Interface::Tunnel::Ipv6::has_data() const
{
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_data())
            return true;
    }
    return enable.is_set
	|| mtu.is_set
	|| redirects.is_set
	|| unreachables.is_set
	|| (address !=  nullptr && address->has_data())
	|| (destination_guard !=  nullptr && destination_guard->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data())
	|| (flow !=  nullptr && flow->has_data())
	|| (nd !=  nullptr && nd->has_data())
	|| (no_pim !=  nullptr && no_pim->has_data())
	|| (ospf !=  nullptr && ospf->has_data())
	|| (pim !=  nullptr && pim->has_data());
}

bool Native::Interface::Tunnel::Ipv6::has_operation() const
{
    for (std::size_t index=0; index<rip.size(); index++)
    {
        if(rip[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<traffic_filter.size(); index++)
    {
        if(traffic_filter[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(mtu.operation)
	|| is_set(redirects.operation)
	|| is_set(unreachables.operation)
	|| (address !=  nullptr && address->has_operation())
	|| (destination_guard !=  nullptr && destination_guard->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation())
	|| (flow !=  nullptr && flow->has_operation())
	|| (nd !=  nullptr && nd->has_operation())
	|| (no_pim !=  nullptr && no_pim->has_operation())
	|| (ospf !=  nullptr && ospf->has_operation())
	|| (pim !=  nullptr && pim->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ipv6' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (mtu.is_set || is_set(mtu.operation)) leaf_name_data.push_back(mtu.get_name_leafdata());
    if (redirects.is_set || is_set(redirects.operation)) leaf_name_data.push_back(redirects.get_name_leafdata());
    if (unreachables.is_set || is_set(unreachables.operation)) leaf_name_data.push_back(unreachables.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address")
    {
        if(address == nullptr)
        {
            address = std::make_shared<Native::Interface::Tunnel::Ipv6::Address>();
        }
        return address;
    }

    if(child_yang_name == "destination-guard")
    {
        if(destination_guard == nullptr)
        {
            destination_guard = std::make_shared<Native::Interface::Tunnel::Ipv6::DestinationGuard>();
        }
        return destination_guard;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "flow")
    {
        if(flow == nullptr)
        {
            flow = std::make_shared<Native::Interface::Tunnel::Ipv6::Flow>();
        }
        return flow;
    }

    if(child_yang_name == "nd")
    {
        if(nd == nullptr)
        {
            nd = std::make_shared<Native::Interface::Tunnel::Ipv6::Nd>();
        }
        return nd;
    }

    if(child_yang_name == "no-pim")
    {
        if(no_pim == nullptr)
        {
            no_pim = std::make_shared<Native::Interface::Tunnel::Ipv6::NoPim>();
        }
        return no_pim;
    }

    if(child_yang_name == "ospf")
    {
        if(ospf == nullptr)
        {
            ospf = std::make_shared<Native::Interface::Tunnel::Ipv6::Ospf>();
        }
        return ospf;
    }

    if(child_yang_name == "pim")
    {
        if(pim == nullptr)
        {
            pim = std::make_shared<Native::Interface::Tunnel::Ipv6::Pim>();
        }
        return pim;
    }

    if(child_yang_name == "rip")
    {
        for(auto const & c : rip)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ipv6::Rip>();
        c->parent = this;
        rip.push_back(c);
        return c;
    }

    if(child_yang_name == "traffic-filter")
    {
        for(auto const & c : traffic_filter)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ipv6::TrafficFilter>();
        c->parent = this;
        traffic_filter.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address != nullptr)
    {
        children["address"] = address;
    }

    if(destination_guard != nullptr)
    {
        children["destination-guard"] = destination_guard;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    if(flow != nullptr)
    {
        children["flow"] = flow;
    }

    if(nd != nullptr)
    {
        children["nd"] = nd;
    }

    if(no_pim != nullptr)
    {
        children["no-pim"] = no_pim;
    }

    if(ospf != nullptr)
    {
        children["ospf"] = ospf;
    }

    if(pim != nullptr)
    {
        children["pim"] = pim;
    }

    for (auto const & c : rip)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : traffic_filter)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ipv6::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "mtu")
    {
        mtu = value;
    }
    if(value_path == "redirects")
    {
        redirects = value;
    }
    if(value_path == "unreachables")
    {
        unreachables = value;
    }
}

Native::Interface::Tunnel::Ipv6::DestinationGuard::DestinationGuard()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "destination-guard"; yang_parent_name = "ipv6";
}

Native::Interface::Tunnel::Ipv6::DestinationGuard::~DestinationGuard()
{
}

bool Native::Interface::Tunnel::Ipv6::DestinationGuard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Tunnel::Ipv6::DestinationGuard::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Tunnel::Ipv6::DestinationGuard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "destination-guard";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::DestinationGuard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'DestinationGuard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::DestinationGuard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::DestinationGuard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ipv6::DestinationGuard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Tunnel::Ipv6::Dhcp::Dhcp()
    :
    guard(nullptr) // presence node
{
    yang_name = "dhcp"; yang_parent_name = "ipv6";
}

Native::Interface::Tunnel::Ipv6::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::has_data() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_data())
            return true;
    }
    return (guard !=  nullptr && guard->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::has_operation() const
{
    for (std::size_t index=0; index<server.size(); index++)
    {
        if(server[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (guard !=  nullptr && guard->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "guard")
    {
        if(guard == nullptr)
        {
            guard = std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp::Guard>();
        }
        return guard;
    }

    if(child_yang_name == "server")
    {
        for(auto const & c : server)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ipv6::Dhcp::Server>();
        c->parent = this;
        server.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(guard != nullptr)
    {
        children["guard"] = guard;
    }

    for (auto const & c : server)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ipv6::Dhcp::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ipv6::Dhcp::Server::Server()
    :
    word{YType::str, "word"},
    preference{YType::uint8, "preference"}
{
    yang_name = "server"; yang_parent_name = "dhcp";
}

Native::Interface::Tunnel::Ipv6::Dhcp::Server::~Server()
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Server::has_data() const
{
    return word.is_set
	|| preference.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Server::has_operation() const
{
    return is_set(operation)
	|| is_set(word.operation)
	|| is_set(preference.operation);
}

std::string Native::Interface::Tunnel::Ipv6::Dhcp::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:server" <<"[word='" <<word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::Dhcp::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (word.is_set || is_set(word.operation)) leaf_name_data.push_back(word.get_name_leafdata());
    if (preference.is_set || is_set(preference.operation)) leaf_name_data.push_back(preference.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::Dhcp::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::Dhcp::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Server::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "word")
    {
        word = value;
    }
    if(value_path == "preference")
    {
        preference = value;
    }
}

Native::Interface::Tunnel::Ipv6::Dhcp::Guard::Guard()
    :
    attach_policy{YType::str, "attach-policy"}
{
    yang_name = "guard"; yang_parent_name = "dhcp";
}

Native::Interface::Tunnel::Ipv6::Dhcp::Guard::~Guard()
{
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Guard::has_data() const
{
    return attach_policy.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Dhcp::Guard::has_operation() const
{
    return is_set(operation)
	|| is_set(attach_policy.operation);
}

std::string Native::Interface::Tunnel::Ipv6::Dhcp::Guard::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-dhcp:guard";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::Dhcp::Guard::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Guard' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (attach_policy.is_set || is_set(attach_policy.operation)) leaf_name_data.push_back(attach_policy.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::Dhcp::Guard::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::Dhcp::Guard::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ipv6::Dhcp::Guard::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "attach-policy")
    {
        attach_policy = value;
    }
}

Native::Interface::Tunnel::Ipv6::Address::Address()
    :
    autoconfig(nullptr) // presence node
	,dhcp(nullptr) // presence node
{
    yang_name = "address"; yang_parent_name = "ipv6";
}

Native::Interface::Tunnel::Ipv6::Address::~Address()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::has_data() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_data())
            return true;
    }
    return (autoconfig !=  nullptr && autoconfig->has_data())
	|| (dhcp !=  nullptr && dhcp->has_data());
}

bool Native::Interface::Tunnel::Ipv6::Address::has_operation() const
{
    for (std::size_t index=0; index<link_local_address.size(); index++)
    {
        if(link_local_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<prefix_list.size(); index++)
    {
        if(prefix_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (autoconfig !=  nullptr && autoconfig->has_operation())
	|| (dhcp !=  nullptr && dhcp->has_operation());
}

std::string Native::Interface::Tunnel::Ipv6::Address::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::Address::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Address' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::Address::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "autoconfig")
    {
        if(autoconfig == nullptr)
        {
            autoconfig = std::make_shared<Native::Interface::Tunnel::Ipv6::Address::Autoconfig>();
        }
        return autoconfig;
    }

    if(child_yang_name == "dhcp")
    {
        if(dhcp == nullptr)
        {
            dhcp = std::make_shared<Native::Interface::Tunnel::Ipv6::Address::Dhcp>();
        }
        return dhcp;
    }

    if(child_yang_name == "link-local-address")
    {
        for(auto const & c : link_local_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress>();
        c->parent = this;
        link_local_address.push_back(c);
        return c;
    }

    if(child_yang_name == "prefix-list")
    {
        for(auto const & c : prefix_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Interface::Tunnel::Ipv6::Address::PrefixList>();
        c->parent = this;
        prefix_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::Address::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(autoconfig != nullptr)
    {
        children["autoconfig"] = autoconfig;
    }

    if(dhcp != nullptr)
    {
        children["dhcp"] = dhcp;
    }

    for (auto const & c : link_local_address)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : prefix_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Interface::Tunnel::Ipv6::Address::set_value(const std::string & value_path, std::string value)
{
}

Native::Interface::Tunnel::Ipv6::Address::Dhcp::Dhcp()
    :
    rapid_commit{YType::empty, "rapid-commit"}
{
    yang_name = "dhcp"; yang_parent_name = "address";
}

Native::Interface::Tunnel::Ipv6::Address::Dhcp::~Dhcp()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::Dhcp::has_data() const
{
    return rapid_commit.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Address::Dhcp::has_operation() const
{
    return is_set(operation)
	|| is_set(rapid_commit.operation);
}

std::string Native::Interface::Tunnel::Ipv6::Address::Dhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dhcp";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::Address::Dhcp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Dhcp' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (rapid_commit.is_set || is_set(rapid_commit.operation)) leaf_name_data.push_back(rapid_commit.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::Address::Dhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::Address::Dhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ipv6::Address::Dhcp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "rapid-commit")
    {
        rapid_commit = value;
    }
}

Native::Interface::Tunnel::Ipv6::Address::Autoconfig::Autoconfig()
    :
    default_{YType::empty, "default"}
{
    yang_name = "autoconfig"; yang_parent_name = "address";
}

Native::Interface::Tunnel::Ipv6::Address::Autoconfig::~Autoconfig()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::Autoconfig::has_data() const
{
    return default_.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Address::Autoconfig::has_operation() const
{
    return is_set(operation)
	|| is_set(default_.operation);
}

std::string Native::Interface::Tunnel::Ipv6::Address::Autoconfig::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "autoconfig";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::Address::Autoconfig::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Autoconfig' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (default_.is_set || is_set(default_.operation)) leaf_name_data.push_back(default_.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::Address::Autoconfig::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::Address::Autoconfig::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ipv6::Address::Autoconfig::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "default")
    {
        default_ = value;
    }
}

Native::Interface::Tunnel::Ipv6::Address::PrefixList::PrefixList()
    :
    prefix{YType::str, "prefix"},
    anycast{YType::empty, "anycast"},
    eui_64{YType::empty, "eui-64"}
{
    yang_name = "prefix-list"; yang_parent_name = "address";
}

Native::Interface::Tunnel::Ipv6::Address::PrefixList::~PrefixList()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::PrefixList::has_data() const
{
    return prefix.is_set
	|| anycast.is_set
	|| eui_64.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Address::PrefixList::has_operation() const
{
    return is_set(operation)
	|| is_set(prefix.operation)
	|| is_set(anycast.operation)
	|| is_set(eui_64.operation);
}

std::string Native::Interface::Tunnel::Ipv6::Address::PrefixList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prefix-list" <<"[prefix='" <<prefix <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::Address::PrefixList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PrefixList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (prefix.is_set || is_set(prefix.operation)) leaf_name_data.push_back(prefix.get_name_leafdata());
    if (anycast.is_set || is_set(anycast.operation)) leaf_name_data.push_back(anycast.get_name_leafdata());
    if (eui_64.is_set || is_set(eui_64.operation)) leaf_name_data.push_back(eui_64.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::Address::PrefixList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::Address::PrefixList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ipv6::Address::PrefixList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "prefix")
    {
        prefix = value;
    }
    if(value_path == "anycast")
    {
        anycast = value;
    }
    if(value_path == "eui-64")
    {
        eui_64 = value;
    }
}

Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::LinkLocalAddress()
    :
    address{YType::str, "address"},
    link_local{YType::empty, "link-local"}
{
    yang_name = "link-local-address"; yang_parent_name = "address";
}

Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::~LinkLocalAddress()
{
}

bool Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::has_data() const
{
    return address.is_set
	|| link_local.is_set;
}

bool Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(link_local.operation);
}

std::string Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "link-local-address" <<"[address='" <<address <<"']";

    return path_buffer.str();

}

const EntityPath Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LinkLocalAddress' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (link_local.is_set || is_set(link_local.operation)) leaf_name_data.push_back(link_local.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Interface::Tunnel::Ipv6::Address::LinkLocalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "link-local")
    {
        link_local = value;
    }
}

const Enum::YLeaf Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyActionEnum::drop {0, "drop"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyActionEnum::encapsulate {1, "encapsulate"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyActionEnum::keep {2, "keep"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Dhcp::Relay::Information::PolicyActionEnum::replace {3, "replace"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Verify::Unicast::Source::ReachableViaEnum::any {0, "any"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Verify::Unicast::Source::ReachableViaEnum::rx {1, "rx"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::DirectionEnum::input {0, "input"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Flow::Monitor::Sampler::DirectionEnum::output {1, "output"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Igmp::StaticGroup::Groups::NameEnum::Y__STAR__ {0, "*"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum::ipv4 {0, "ipv4"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Nbar::ProtocolDiscovery::Ipv4Ipv6Enum::ipv6 {1, "ipv6"};

const Enum::YLeaf Native::Interface::Tunnel::Ip::Ospf::NetworkEnum::broadcast {0, "broadcast"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Ospf::NetworkEnum::non_broadcast {1, "non-broadcast"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Ospf::NetworkEnum::point_to_multipoint {2, "point-to-multipoint"};
const Enum::YLeaf Native::Interface::Tunnel::Ip::Ospf::NetworkEnum::point_to_point {3, "point-to-point"};


}
}

