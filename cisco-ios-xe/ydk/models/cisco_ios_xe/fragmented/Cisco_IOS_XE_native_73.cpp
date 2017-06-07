
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XE_native_73.hpp"
#include "Cisco_IOS_XE_native_74.hpp"

namespace ydk {
namespace Cisco_IOS_XE_native {

Native::Logging::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::Logging::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Logging::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Logging::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Logging::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Logging::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/source-interface/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Logging::SnmpTrap::SnmpTrap()
    :
    alerts{YType::empty, "alerts"},
    critical{YType::empty, "critical"},
    debugging{YType::empty, "debugging"},
    emergencies{YType::empty, "emergencies"},
    errors{YType::empty, "errors"},
    informational{YType::empty, "informational"},
    notifications{YType::empty, "notifications"},
    warnings{YType::empty, "warnings"}
{
    yang_name = "snmp-trap"; yang_parent_name = "logging";
}

Native::Logging::SnmpTrap::~SnmpTrap()
{
}

bool Native::Logging::SnmpTrap::has_data() const
{
    return alerts.is_set
	|| critical.is_set
	|| debugging.is_set
	|| emergencies.is_set
	|| errors.is_set
	|| informational.is_set
	|| notifications.is_set
	|| warnings.is_set;
}

bool Native::Logging::SnmpTrap::has_operation() const
{
    return is_set(operation)
	|| is_set(alerts.operation)
	|| is_set(critical.operation)
	|| is_set(debugging.operation)
	|| is_set(emergencies.operation)
	|| is_set(errors.operation)
	|| is_set(informational.operation)
	|| is_set(notifications.operation)
	|| is_set(warnings.operation);
}

std::string Native::Logging::SnmpTrap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "snmp-trap";

    return path_buffer.str();

}

const EntityPath Native::Logging::SnmpTrap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alerts.is_set || is_set(alerts.operation)) leaf_name_data.push_back(alerts.get_name_leafdata());
    if (critical.is_set || is_set(critical.operation)) leaf_name_data.push_back(critical.get_name_leafdata());
    if (debugging.is_set || is_set(debugging.operation)) leaf_name_data.push_back(debugging.get_name_leafdata());
    if (emergencies.is_set || is_set(emergencies.operation)) leaf_name_data.push_back(emergencies.get_name_leafdata());
    if (errors.is_set || is_set(errors.operation)) leaf_name_data.push_back(errors.get_name_leafdata());
    if (informational.is_set || is_set(informational.operation)) leaf_name_data.push_back(informational.get_name_leafdata());
    if (notifications.is_set || is_set(notifications.operation)) leaf_name_data.push_back(notifications.get_name_leafdata());
    if (warnings.is_set || is_set(warnings.operation)) leaf_name_data.push_back(warnings.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::SnmpTrap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::SnmpTrap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::SnmpTrap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alerts")
    {
        alerts = value;
    }
    if(value_path == "critical")
    {
        critical = value;
    }
    if(value_path == "debugging")
    {
        debugging = value;
    }
    if(value_path == "emergencies")
    {
        emergencies = value;
    }
    if(value_path == "errors")
    {
        errors = value;
    }
    if(value_path == "informational")
    {
        informational = value;
    }
    if(value_path == "notifications")
    {
        notifications = value;
    }
    if(value_path == "warnings")
    {
        warnings = value;
    }
}

Native::Logging::Trap::Trap()
    :
    severity{YType::str, "severity"},
    trap_default{YType::empty, "trap-default"}
{
    yang_name = "trap"; yang_parent_name = "logging";
}

Native::Logging::Trap::~Trap()
{
}

bool Native::Logging::Trap::has_data() const
{
    return severity.is_set
	|| trap_default.is_set;
}

bool Native::Logging::Trap::has_operation() const
{
    return is_set(operation)
	|| is_set(severity.operation)
	|| is_set(trap_default.operation);
}

std::string Native::Logging::Trap::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "trap";

    return path_buffer.str();

}

const EntityPath Native::Logging::Trap::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());
    if (trap_default.is_set || is_set(trap_default.operation)) leaf_name_data.push_back(trap_default.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::Trap::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::Trap::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::Trap::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "severity")
    {
        severity = value;
    }
    if(value_path == "trap-default")
    {
        trap_default = value;
    }
}

Native::Logging::File::File()
    :
    max_size{YType::uint32, "max-size"},
    min_size{YType::uint32, "min-size"},
    name{YType::str, "name"},
    severity{YType::str, "severity"}
{
    yang_name = "file"; yang_parent_name = "logging";
}

Native::Logging::File::~File()
{
}

bool Native::Logging::File::has_data() const
{
    return max_size.is_set
	|| min_size.is_set
	|| name.is_set
	|| severity.is_set;
}

bool Native::Logging::File::has_operation() const
{
    return is_set(operation)
	|| is_set(max_size.operation)
	|| is_set(min_size.operation)
	|| is_set(name.operation)
	|| is_set(severity.operation);
}

std::string Native::Logging::File::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "file";

    return path_buffer.str();

}

const EntityPath Native::Logging::File::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/logging/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (max_size.is_set || is_set(max_size.operation)) leaf_name_data.push_back(max_size.get_name_leafdata());
    if (min_size.is_set || is_set(min_size.operation)) leaf_name_data.push_back(min_size.get_name_leafdata());
    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (severity.is_set || is_set(severity.operation)) leaf_name_data.push_back(severity.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Logging::File::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Logging::File::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Logging::File::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "max-size")
    {
        max_size = value;
    }
    if(value_path == "min-size")
    {
        min_size = value;
    }
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "severity")
    {
        severity = value;
    }
}

Native::Aaa::Aaa()
    :
    new_model{YType::empty, "Cisco-IOS-XE-aaa:new-model"},
    session_id{YType::enumeration, "Cisco-IOS-XE-aaa:session-id"}
    	,
    accounting(std::make_shared<Native::Aaa::Accounting>())
	,authentication(std::make_shared<Native::Aaa::Authentication>())
	,authorization(std::make_shared<Native::Aaa::Authorization>())
	,group(std::make_shared<Native::Aaa::Group>())
	,server(std::make_shared<Native::Aaa::Server>())
{
    accounting->parent = this;

    authentication->parent = this;

    authorization->parent = this;

    group->parent = this;

    server->parent = this;

    yang_name = "aaa"; yang_parent_name = "native";
}

Native::Aaa::~Aaa()
{
}

bool Native::Aaa::has_data() const
{
    return new_model.is_set
	|| session_id.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (authentication !=  nullptr && authentication->has_data())
	|| (authorization !=  nullptr && authorization->has_data())
	|| (group !=  nullptr && group->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Aaa::has_operation() const
{
    return is_set(operation)
	|| is_set(new_model.operation)
	|| is_set(session_id.operation)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (authentication !=  nullptr && authentication->has_operation())
	|| (authorization !=  nullptr && authorization->has_operation())
	|| (group !=  nullptr && group->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "aaa";

    return path_buffer.str();

}

const EntityPath Native::Aaa::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_model.is_set || is_set(new_model.operation)) leaf_name_data.push_back(new_model.get_name_leafdata());
    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Native::Aaa::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Authentication>();
        }
        return authentication;
    }

    if(child_yang_name == "authorization")
    {
        if(authorization == nullptr)
        {
            authorization = std::make_shared<Native::Aaa::Authorization>();
        }
        return authorization;
    }

    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Group>();
        }
        return group;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::get_children() const
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

    if(group != nullptr)
    {
        children["group"] = group;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Aaa::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "new-model")
    {
        new_model = value;
    }
    if(value_path == "session-id")
    {
        session_id = value;
    }
}

Native::Aaa::Group::Group()
    :
    server(std::make_shared<Native::Aaa::Group::Server>())
{
    server->parent = this;

    yang_name = "group"; yang_parent_name = "aaa";
}

Native::Aaa::Group::~Group()
{
}

bool Native::Aaa::Group::has_data() const
{
    return (server !=  nullptr && server->has_data());
}

bool Native::Aaa::Group::has_operation() const
{
    return is_set(operation)
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:group";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Group::Server>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Aaa::Group::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Group::Server::Server()
{
    yang_name = "server"; yang_parent_name = "group";
}

Native::Aaa::Group::Server::~Server()
{
}

bool Native::Aaa::Group::Server::has_data() const
{
    for (std::size_t index=0; index<radius.size(); index++)
    {
        if(radius[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tacacs.size(); index++)
    {
        if(tacacs[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<tacacsplus.size(); index++)
    {
        if(tacacsplus[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Group::Server::has_operation() const
{
    for (std::size_t index=0; index<radius.size(); index++)
    {
        if(radius[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tacacs.size(); index++)
    {
        if(tacacs[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<tacacsplus.size(); index++)
    {
        if(tacacsplus[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Aaa::Group::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        for(auto const & c : radius)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Radius>();
        c->parent = this;
        radius.push_back(c);
        return c;
    }

    if(child_yang_name == "tacacs")
    {
        for(auto const & c : tacacs)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Tacacs>();
        c->parent = this;
        tacacs.push_back(c);
        return c;
    }

    if(child_yang_name == "tacacsplus")
    {
        for(auto const & c : tacacsplus)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Tacacsplus>();
        c->parent = this;
        tacacsplus.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : radius)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tacacs)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : tacacsplus)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Group::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Group::Server::Tacacsplus::Tacacsplus()
    :
    name{YType::str, "name"}
    	,
    ip(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip>())
	,server(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Server_>())
{
    ip->parent = this;

    server->parent = this;

    yang_name = "tacacsplus"; yang_parent_name = "server";
}

Native::Aaa::Group::Server::Tacacsplus::~Tacacsplus()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::has_data() const
{
    for (std::size_t index=0; index<server_private.size(); index++)
    {
        if(server_private[index]->has_data())
            return true;
    }
    return name.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::has_operation() const
{
    for (std::size_t index=0; index<server_private.size(); index++)
    {
        if(server_private[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(name.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacsplus" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/server/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Server_>();
        }
        return server;
    }

    if(child_yang_name == "server-private")
    {
        for(auto const & c : server_private)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::ServerPrivate>();
        c->parent = this;
        server_private.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    for (auto const & c : server_private)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::Server_::Server_()
    :
    name{YType::str, "name"}
{
    yang_name = "server"; yang_parent_name = "tacacsplus";
}

Native::Aaa::Group::Server::Tacacsplus::Server_::~Server_()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Server_::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Server_::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Server_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Server_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Server_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Server_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Server_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::ServerPrivate()
    :
    name{YType::str, "name"},
    timeout{YType::uint16, "timeout"}
    	,
    key(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key>())
{
    key->parent = this;

    yang_name = "server-private"; yang_parent_name = "tacacsplus";
}

Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::~ServerPrivate()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::has_data() const
{
    return name.is_set
	|| timeout.is_set
	|| (key !=  nullptr && key->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(timeout.operation)
	|| (key !=  nullptr && key->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-private" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerPrivate' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (timeout.is_set || is_set(timeout.operation)) leaf_name_data.push_back(timeout.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "key")
    {
        if(key == nullptr)
        {
            key = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key>();
        }
        return key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(key != nullptr)
    {
        children["key"] = key;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "timeout")
    {
        timeout = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::Key()
    :
    encryption{YType::enumeration, "encryption"},
    key{YType::str, "key"}
{
    yang_name = "key"; yang_parent_name = "server-private";
}

Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::~Key()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::has_data() const
{
    return encryption.is_set
	|| key.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::has_operation() const
{
    return is_set(operation)
	|| is_set(encryption.operation)
	|| is_set(key.operation);
}

std::string Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "key";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Key' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (encryption.is_set || is_set(encryption.operation)) leaf_name_data.push_back(encryption.get_name_leafdata());
    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "encryption")
    {
        encryption = value;
    }
    if(value_path == "key")
    {
        key = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Ip()
    :
    tacacs(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs>())
	,vrf(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf>())
{
    tacacs->parent = this;

    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "tacacsplus";
}

Native::Aaa::Group::Server::Tacacsplus::Ip::~Ip()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::has_data() const
{
    return (tacacs !=  nullptr && tacacs->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::has_operation() const
{
    return is_set(operation)
	|| (tacacs !=  nullptr && tacacs->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tacacs")
    {
        if(tacacs == nullptr)
        {
            tacacs = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs>();
        }
        return tacacs;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(tacacs != nullptr)
    {
        children["tacacs"] = tacacs;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::Tacacs()
    :
    source_interface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface>())
{
    source_interface->parent = this;

    yang_name = "tacacs"; yang_parent_name = "ip";
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::~Tacacs()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::has_data() const
{
    return (source_interface !=  nullptr && source_interface->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::has_operation() const
{
    return is_set(operation)
	|| (source_interface !=  nullptr && source_interface->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Tacacs' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "source-interface")
    {
        if(source_interface == nullptr)
        {
            source_interface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface>();
        }
        return source_interface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(source_interface != nullptr)
    {
        children["source-interface"] = source_interface;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::SourceInterface()
    :
    appnav_compress{YType::uint16, "AppNav-Compress"},
    appnav_uncompress{YType::uint16, "AppNav-UnCompress"},
    atm{YType::str, "ATM"},
    atm_acr{YType::str, "ATM-ACR"},
    bdi{YType::str, "BDI"},
    cellular{YType::str, "Cellular"},
    cem{YType::str, "CEM"},
    cem_acr{YType::uint8, "CEM-ACR"},
    embedded_service_engine{YType::str, "Embedded-Service-Engine"},
    fastethernet{YType::str, "FastEthernet"},
    gigabitethernet{YType::str, "GigabitEthernet"},
    lisp{YType::uint16, "LISP"},
    loopback{YType::uint32, "Loopback"},
    multilink{YType::uint16, "Multilink"},
    nve{YType::uint16, "nve"},
    overlay{YType::uint16, "overlay"},
    port_channel{YType::uint32, "Port-channel"},
    pseudowire{YType::uint32, "pseudowire"},
    serial{YType::str, "Serial"},
    sm{YType::str, "SM"},
    tengigabitethernet{YType::str, "TenGigabitEthernet"},
    tunnel{YType::uint32, "Tunnel"},
    vasileft{YType::uint16, "vasileft"},
    vasiright{YType::uint16, "vasiright"},
    virtual_template{YType::uint16, "Virtual-Template"},
    virtualportgroup{YType::uint16, "VirtualPortGroup"},
    vlan{YType::uint16, "Vlan"}
    	,
    atm_acrsubinterface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface>())
	,atm_subinterface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface>())
	,lisp_subinterface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface>())
	,port_channel_subinterface(std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface>())
{
    atm_acrsubinterface->parent = this;

    atm_subinterface->parent = this;

    lisp_subinterface->parent = this;

    port_channel_subinterface->parent = this;

    yang_name = "source-interface"; yang_parent_name = "tacacs";
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::~SourceInterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::has_data() const
{
    return appnav_compress.is_set
	|| appnav_uncompress.is_set
	|| atm.is_set
	|| atm_acr.is_set
	|| bdi.is_set
	|| cellular.is_set
	|| cem.is_set
	|| cem_acr.is_set
	|| embedded_service_engine.is_set
	|| fastethernet.is_set
	|| gigabitethernet.is_set
	|| lisp.is_set
	|| loopback.is_set
	|| multilink.is_set
	|| nve.is_set
	|| overlay.is_set
	|| port_channel.is_set
	|| pseudowire.is_set
	|| serial.is_set
	|| sm.is_set
	|| tengigabitethernet.is_set
	|| tunnel.is_set
	|| vasileft.is_set
	|| vasiright.is_set
	|| virtual_template.is_set
	|| virtualportgroup.is_set
	|| vlan.is_set
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_data())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_data())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_data())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_data());
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(appnav_compress.operation)
	|| is_set(appnav_uncompress.operation)
	|| is_set(atm.operation)
	|| is_set(atm_acr.operation)
	|| is_set(bdi.operation)
	|| is_set(cellular.operation)
	|| is_set(cem.operation)
	|| is_set(cem_acr.operation)
	|| is_set(embedded_service_engine.operation)
	|| is_set(fastethernet.operation)
	|| is_set(gigabitethernet.operation)
	|| is_set(lisp.operation)
	|| is_set(loopback.operation)
	|| is_set(multilink.operation)
	|| is_set(nve.operation)
	|| is_set(overlay.operation)
	|| is_set(port_channel.operation)
	|| is_set(pseudowire.operation)
	|| is_set(serial.operation)
	|| is_set(sm.operation)
	|| is_set(tengigabitethernet.operation)
	|| is_set(tunnel.operation)
	|| is_set(vasileft.operation)
	|| is_set(vasiright.operation)
	|| is_set(virtual_template.operation)
	|| is_set(virtualportgroup.operation)
	|| is_set(vlan.operation)
	|| (atm_acrsubinterface !=  nullptr && atm_acrsubinterface->has_operation())
	|| (atm_subinterface !=  nullptr && atm_subinterface->has_operation())
	|| (lisp_subinterface !=  nullptr && lisp_subinterface->has_operation())
	|| (port_channel_subinterface !=  nullptr && port_channel_subinterface->has_operation());
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "source-interface";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'SourceInterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (appnav_compress.is_set || is_set(appnav_compress.operation)) leaf_name_data.push_back(appnav_compress.get_name_leafdata());
    if (appnav_uncompress.is_set || is_set(appnav_uncompress.operation)) leaf_name_data.push_back(appnav_uncompress.get_name_leafdata());
    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());
    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());
    if (bdi.is_set || is_set(bdi.operation)) leaf_name_data.push_back(bdi.get_name_leafdata());
    if (cellular.is_set || is_set(cellular.operation)) leaf_name_data.push_back(cellular.get_name_leafdata());
    if (cem.is_set || is_set(cem.operation)) leaf_name_data.push_back(cem.get_name_leafdata());
    if (cem_acr.is_set || is_set(cem_acr.operation)) leaf_name_data.push_back(cem_acr.get_name_leafdata());
    if (embedded_service_engine.is_set || is_set(embedded_service_engine.operation)) leaf_name_data.push_back(embedded_service_engine.get_name_leafdata());
    if (fastethernet.is_set || is_set(fastethernet.operation)) leaf_name_data.push_back(fastethernet.get_name_leafdata());
    if (gigabitethernet.is_set || is_set(gigabitethernet.operation)) leaf_name_data.push_back(gigabitethernet.get_name_leafdata());
    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());
    if (loopback.is_set || is_set(loopback.operation)) leaf_name_data.push_back(loopback.get_name_leafdata());
    if (multilink.is_set || is_set(multilink.operation)) leaf_name_data.push_back(multilink.get_name_leafdata());
    if (nve.is_set || is_set(nve.operation)) leaf_name_data.push_back(nve.get_name_leafdata());
    if (overlay.is_set || is_set(overlay.operation)) leaf_name_data.push_back(overlay.get_name_leafdata());
    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());
    if (pseudowire.is_set || is_set(pseudowire.operation)) leaf_name_data.push_back(pseudowire.get_name_leafdata());
    if (serial.is_set || is_set(serial.operation)) leaf_name_data.push_back(serial.get_name_leafdata());
    if (sm.is_set || is_set(sm.operation)) leaf_name_data.push_back(sm.get_name_leafdata());
    if (tengigabitethernet.is_set || is_set(tengigabitethernet.operation)) leaf_name_data.push_back(tengigabitethernet.get_name_leafdata());
    if (tunnel.is_set || is_set(tunnel.operation)) leaf_name_data.push_back(tunnel.get_name_leafdata());
    if (vasileft.is_set || is_set(vasileft.operation)) leaf_name_data.push_back(vasileft.get_name_leafdata());
    if (vasiright.is_set || is_set(vasiright.operation)) leaf_name_data.push_back(vasiright.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());
    if (virtualportgroup.is_set || is_set(virtualportgroup.operation)) leaf_name_data.push_back(virtualportgroup.get_name_leafdata());
    if (vlan.is_set || is_set(vlan.operation)) leaf_name_data.push_back(vlan.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ATM-ACRsubinterface")
    {
        if(atm_acrsubinterface == nullptr)
        {
            atm_acrsubinterface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface>();
        }
        return atm_acrsubinterface;
    }

    if(child_yang_name == "ATM-subinterface")
    {
        if(atm_subinterface == nullptr)
        {
            atm_subinterface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface>();
        }
        return atm_subinterface;
    }

    if(child_yang_name == "LISP-subinterface")
    {
        if(lisp_subinterface == nullptr)
        {
            lisp_subinterface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface>();
        }
        return lisp_subinterface;
    }

    if(child_yang_name == "Port-channel-subinterface")
    {
        if(port_channel_subinterface == nullptr)
        {
            port_channel_subinterface = std::make_shared<Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface>();
        }
        return port_channel_subinterface;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(atm_acrsubinterface != nullptr)
    {
        children["ATM-ACRsubinterface"] = atm_acrsubinterface;
    }

    if(atm_subinterface != nullptr)
    {
        children["ATM-subinterface"] = atm_subinterface;
    }

    if(lisp_subinterface != nullptr)
    {
        children["LISP-subinterface"] = lisp_subinterface;
    }

    if(port_channel_subinterface != nullptr)
    {
        children["Port-channel-subinterface"] = port_channel_subinterface;
    }

    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "AppNav-Compress")
    {
        appnav_compress = value;
    }
    if(value_path == "AppNav-UnCompress")
    {
        appnav_uncompress = value;
    }
    if(value_path == "ATM")
    {
        atm = value;
    }
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
    if(value_path == "BDI")
    {
        bdi = value;
    }
    if(value_path == "Cellular")
    {
        cellular = value;
    }
    if(value_path == "CEM")
    {
        cem = value;
    }
    if(value_path == "CEM-ACR")
    {
        cem_acr = value;
    }
    if(value_path == "Embedded-Service-Engine")
    {
        embedded_service_engine = value;
    }
    if(value_path == "FastEthernet")
    {
        fastethernet = value;
    }
    if(value_path == "GigabitEthernet")
    {
        gigabitethernet = value;
    }
    if(value_path == "LISP")
    {
        lisp = value;
    }
    if(value_path == "Loopback")
    {
        loopback = value;
    }
    if(value_path == "Multilink")
    {
        multilink = value;
    }
    if(value_path == "nve")
    {
        nve = value;
    }
    if(value_path == "overlay")
    {
        overlay = value;
    }
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
    if(value_path == "pseudowire")
    {
        pseudowire = value;
    }
    if(value_path == "Serial")
    {
        serial = value;
    }
    if(value_path == "SM")
    {
        sm = value;
    }
    if(value_path == "TenGigabitEthernet")
    {
        tengigabitethernet = value;
    }
    if(value_path == "Tunnel")
    {
        tunnel = value;
    }
    if(value_path == "vasileft")
    {
        vasileft = value;
    }
    if(value_path == "vasiright")
    {
        vasiright = value;
    }
    if(value_path == "Virtual-Template")
    {
        virtual_template = value;
    }
    if(value_path == "VirtualPortGroup")
    {
        virtualportgroup = value;
    }
    if(value_path == "Vlan")
    {
        vlan = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::AtmSubinterface()
    :
    atm{YType::str, "ATM"}
{
    yang_name = "ATM-subinterface"; yang_parent_name = "source-interface";
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::~AtmSubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::has_data() const
{
    return atm.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm.operation);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm.is_set || is_set(atm.operation)) leaf_name_data.push_back(atm.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM")
    {
        atm = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::AtmAcrsubinterface()
    :
    atm_acr{YType::str, "ATM-ACR"}
{
    yang_name = "ATM-ACRsubinterface"; yang_parent_name = "source-interface";
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::~AtmAcrsubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::has_data() const
{
    return atm_acr.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(atm_acr.operation);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ATM-ACRsubinterface";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'AtmAcrsubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (atm_acr.is_set || is_set(atm_acr.operation)) leaf_name_data.push_back(atm_acr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::AtmAcrsubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ATM-ACR")
    {
        atm_acr = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::LispSubinterface()
    :
    lisp{YType::str, "LISP"}
{
    yang_name = "LISP-subinterface"; yang_parent_name = "source-interface";
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::~LispSubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::has_data() const
{
    return lisp.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(lisp.operation);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "LISP-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LispSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (lisp.is_set || is_set(lisp.operation)) leaf_name_data.push_back(lisp.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::LispSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "LISP")
    {
        lisp = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::PortChannelSubinterface()
    :
    port_channel{YType::str, "Port-channel"}
{
    yang_name = "Port-channel-subinterface"; yang_parent_name = "source-interface";
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::~PortChannelSubinterface()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_data() const
{
    return port_channel.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::has_operation() const
{
    return is_set(operation)
	|| is_set(port_channel.operation);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Port-channel-subinterface";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'PortChannelSubinterface' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (port_channel.is_set || is_set(port_channel.operation)) leaf_name_data.push_back(port_channel.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Tacacs::SourceInterface::PortChannelSubinterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "Port-channel")
    {
        port_channel = value;
    }
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{
    yang_name = "vrf"; yang_parent_name = "ip";
}

Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::~Vrf()
{
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_entity_path(Entity* ancestor) const
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

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacsplus::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Aaa::Group::Server::Tacacs::Tacacs()
    :
    name{YType::str, "name"}
{
    yang_name = "tacacs"; yang_parent_name = "server";
}

Native::Aaa::Group::Server::Tacacs::~Tacacs()
{
}

bool Native::Aaa::Group::Server::Tacacs::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Group::Server::Tacacs::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Aaa::Group::Server::Tacacs::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tacacs" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Tacacs::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/server/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Group::Server::Tacacs::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Tacacs::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Tacacs::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Group::Server::Radius::Radius()
    :
    name{YType::str, "name"}
    	,
    ip(std::make_shared<Native::Aaa::Group::Server::Radius::Ip>())
	,load_balance(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance>())
	,server(std::make_shared<Native::Aaa::Group::Server::Radius::Server_>())
{
    ip->parent = this;

    load_balance->parent = this;

    server->parent = this;

    yang_name = "radius"; yang_parent_name = "server";
}

Native::Aaa::Group::Server::Radius::~Radius()
{
}

bool Native::Aaa::Group::Server::Radius::has_data() const
{
    return name.is_set
	|| (ip !=  nullptr && ip->has_data())
	|| (load_balance !=  nullptr && load_balance->has_data())
	|| (server !=  nullptr && server->has_data());
}

bool Native::Aaa::Group::Server::Radius::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (ip !=  nullptr && ip->has_operation())
	|| (load_balance !=  nullptr && load_balance->has_operation())
	|| (server !=  nullptr && server->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:group/server/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip")
    {
        if(ip == nullptr)
        {
            ip = std::make_shared<Native::Aaa::Group::Server::Radius::Ip>();
        }
        return ip;
    }

    if(child_yang_name == "load-balance")
    {
        if(load_balance == nullptr)
        {
            load_balance = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance>();
        }
        return load_balance;
    }

    if(child_yang_name == "server")
    {
        if(server == nullptr)
        {
            server = std::make_shared<Native::Aaa::Group::Server::Radius::Server_>();
        }
        return server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip != nullptr)
    {
        children["ip"] = ip;
    }

    if(load_balance != nullptr)
    {
        children["load-balance"] = load_balance;
    }

    if(server != nullptr)
    {
        children["server"] = server;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Group::Server::Radius::Server_::Server_()
{
    yang_name = "server"; yang_parent_name = "radius";
}

Native::Aaa::Group::Server::Radius::Server_::~Server_()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::has_data() const
{
    for (std::size_t index=0; index<direct.size(); index++)
    {
        if(direct[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Group::Server::Radius::Server_::has_operation() const
{
    for (std::size_t index=0; index<direct.size(); index++)
    {
        if(direct[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<name.size(); index++)
    {
        if(name[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Aaa::Group::Server::Radius::Server_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::Server_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Server_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "direct")
    {
        for(auto const & c : direct)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Radius::Server_::Direct>();
        c->parent = this;
        direct.push_back(c);
        return c;
    }

    if(child_yang_name == "name")
    {
        for(auto const & c : name)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Group::Server::Radius::Server_::Name>();
        c->parent = this;
        name.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : direct)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : name)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Group::Server::Radius::Server_::Name::Name()
    :
    name{YType::str, "name"}
{
    yang_name = "name"; yang_parent_name = "server";
}

Native::Aaa::Group::Server::Radius::Server_::Name::~Name()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::Name::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Group::Server::Radius::Server_::Name::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Aaa::Group::Server::Radius::Server_::Name::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "name" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::Server_::Name::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Name' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::Name::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::Name::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::Name::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Group::Server::Radius::Server_::Direct::Direct()
    :
    name{YType::str, "name"},
    acct_port{YType::uint16, "acct-port"},
    auth_port{YType::uint16, "auth-port"}
{
    yang_name = "direct"; yang_parent_name = "server";
}

Native::Aaa::Group::Server::Radius::Server_::Direct::~Direct()
{
}

bool Native::Aaa::Group::Server::Radius::Server_::Direct::has_data() const
{
    return name.is_set
	|| acct_port.is_set
	|| auth_port.is_set;
}

bool Native::Aaa::Group::Server::Radius::Server_::Direct::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(acct_port.operation)
	|| is_set(auth_port.operation);
}

std::string Native::Aaa::Group::Server::Radius::Server_::Direct::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "direct" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::Server_::Direct::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Direct' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (acct_port.is_set || is_set(acct_port.operation)) leaf_name_data.push_back(acct_port.get_name_leafdata());
    if (auth_port.is_set || is_set(auth_port.operation)) leaf_name_data.push_back(auth_port.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Server_::Direct::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Server_::Direct::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Server_::Direct::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "acct-port")
    {
        acct_port = value;
    }
    if(value_path == "auth-port")
    {
        auth_port = value;
    }
}

Native::Aaa::Group::Server::Radius::Ip::Ip()
    :
    radius(std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Radius_>())
	,vrf(std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Vrf>())
{
    radius->parent = this;

    vrf->parent = this;

    yang_name = "ip"; yang_parent_name = "radius";
}

Native::Aaa::Group::Server::Radius::Ip::~Ip()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::has_data() const
{
    return (radius !=  nullptr && radius->has_data())
	|| (vrf !=  nullptr && vrf->has_data());
}

bool Native::Aaa::Group::Server::Radius::Ip::has_operation() const
{
    return is_set(operation)
	|| (radius !=  nullptr && radius->has_operation())
	|| (vrf !=  nullptr && vrf->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::Ip::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::Ip::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Ip' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Radius_>();
        }
        return radius;
    }

    if(child_yang_name == "vrf")
    {
        if(vrf == nullptr)
        {
            vrf = std::make_shared<Native::Aaa::Group::Server::Radius::Ip::Vrf>();
        }
        return vrf;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    if(vrf != nullptr)
    {
        children["vrf"] = vrf;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Group::Server::Radius::Ip::Radius_::Radius_()
    :
    source_interface{YType::str, "source-interface"}
{
    yang_name = "radius"; yang_parent_name = "ip";
}

Native::Aaa::Group::Server::Radius::Ip::Radius_::~Radius_()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::Radius_::has_data() const
{
    return source_interface.is_set;
}

bool Native::Aaa::Group::Server::Radius::Ip::Radius_::has_operation() const
{
    return is_set(operation)
	|| is_set(source_interface.operation);
}

std::string Native::Aaa::Group::Server::Radius::Ip::Radius_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::Ip::Radius_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Radius_' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::Radius_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::Radius_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::Radius_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "source-interface")
    {
        source_interface = value;
    }
}

Native::Aaa::Group::Server::Radius::Ip::Vrf::Vrf()
    :
    forwarding{YType::str, "forwarding"}
{
    yang_name = "vrf"; yang_parent_name = "ip";
}

Native::Aaa::Group::Server::Radius::Ip::Vrf::~Vrf()
{
}

bool Native::Aaa::Group::Server::Radius::Ip::Vrf::has_data() const
{
    return forwarding.is_set;
}

bool Native::Aaa::Group::Server::Radius::Ip::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(forwarding.operation);
}

std::string Native::Aaa::Group::Server::Radius::Ip::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::Ip::Vrf::get_entity_path(Entity* ancestor) const
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

    if (forwarding.is_set || is_set(forwarding.operation)) leaf_name_data.push_back(forwarding.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::Ip::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::Ip::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::Ip::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "forwarding")
    {
        forwarding = value;
    }
}

Native::Aaa::Group::Server::Radius::LoadBalance::LoadBalance()
    :
    method(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method>())
{
    method->parent = this;

    yang_name = "load-balance"; yang_parent_name = "radius";
}

Native::Aaa::Group::Server::Radius::LoadBalance::~LoadBalance()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::has_data() const
{
    return (method !=  nullptr && method->has_data());
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::has_operation() const
{
    return is_set(operation)
	|| (method !=  nullptr && method->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "load-balance";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::LoadBalance::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LoadBalance' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "method")
    {
        if(method == nullptr)
        {
            method = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method>();
        }
        return method;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(method != nullptr)
    {
        children["method"] = method;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::Method()
    :
    least_outstanding(std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding>())
{
    least_outstanding->parent = this;

    yang_name = "method"; yang_parent_name = "load-balance";
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::~Method()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::has_data() const
{
    return (least_outstanding !=  nullptr && least_outstanding->has_data());
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::has_operation() const
{
    return is_set(operation)
	|| (least_outstanding !=  nullptr && least_outstanding->has_operation());
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "method";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Method' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "least-outstanding")
    {
        if(least_outstanding == nullptr)
        {
            least_outstanding = std::make_shared<Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding>();
        }
        return least_outstanding;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::Method::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(least_outstanding != nullptr)
    {
        children["least-outstanding"] = least_outstanding;
    }

    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::LeastOutstanding()
    :
    batch_size{YType::uint32, "batch-size"},
    ignore_preferred_server{YType::empty, "ignore-preferred-server"}
{
    yang_name = "least-outstanding"; yang_parent_name = "method";
}

Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::~LeastOutstanding()
{
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::has_data() const
{
    return batch_size.is_set
	|| ignore_preferred_server.is_set;
}

bool Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::has_operation() const
{
    return is_set(operation)
	|| is_set(batch_size.operation)
	|| is_set(ignore_preferred_server.operation);
}

std::string Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "least-outstanding";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'LeastOutstanding' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (batch_size.is_set || is_set(batch_size.operation)) leaf_name_data.push_back(batch_size.get_name_leafdata());
    if (ignore_preferred_server.is_set || is_set(ignore_preferred_server.operation)) leaf_name_data.push_back(ignore_preferred_server.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Group::Server::Radius::LoadBalance::Method::LeastOutstanding::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "batch-size")
    {
        batch_size = value;
    }
    if(value_path == "ignore-preferred-server")
    {
        ignore_preferred_server = value;
    }
}

Native::Aaa::Authentication::Authentication()
    :
    attempts(std::make_shared<Native::Aaa::Authentication::Attempts>())
	,banner(std::make_shared<Native::Aaa::Authentication::Banner>())
	,dot1x(std::make_shared<Native::Aaa::Authentication::Dot1X>())
	,enable(std::make_shared<Native::Aaa::Authentication::Enable>())
	,eou(std::make_shared<Native::Aaa::Authentication::Eou>())
	,fail_message(std::make_shared<Native::Aaa::Authentication::FailMessage>())
	,onep(std::make_shared<Native::Aaa::Authentication::Onep>())
{
    attempts->parent = this;

    banner->parent = this;

    dot1x->parent = this;

    enable->parent = this;

    eou->parent = this;

    fail_message->parent = this;

    onep->parent = this;

    yang_name = "authentication"; yang_parent_name = "aaa";
}

Native::Aaa::Authentication::~Authentication()
{
}

bool Native::Aaa::Authentication::has_data() const
{
    for (std::size_t index=0; index<login.size(); index++)
    {
        if(login[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_data())
            return true;
    }
    return (attempts !=  nullptr && attempts->has_data())
	|| (banner !=  nullptr && banner->has_data())
	|| (dot1x !=  nullptr && dot1x->has_data())
	|| (enable !=  nullptr && enable->has_data())
	|| (eou !=  nullptr && eou->has_data())
	|| (fail_message !=  nullptr && fail_message->has_data())
	|| (onep !=  nullptr && onep->has_data());
}

bool Native::Aaa::Authentication::has_operation() const
{
    for (std::size_t index=0; index<login.size(); index++)
    {
        if(login[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<ppp.size(); index++)
    {
        if(ppp[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (attempts !=  nullptr && attempts->has_operation())
	|| (banner !=  nullptr && banner->has_operation())
	|| (dot1x !=  nullptr && dot1x->has_operation())
	|| (enable !=  nullptr && enable->has_operation())
	|| (eou !=  nullptr && eou->has_operation())
	|| (fail_message !=  nullptr && fail_message->has_operation())
	|| (onep !=  nullptr && onep->has_operation());
}

std::string Native::Aaa::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:authentication";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "attempts")
    {
        if(attempts == nullptr)
        {
            attempts = std::make_shared<Native::Aaa::Authentication::Attempts>();
        }
        return attempts;
    }

    if(child_yang_name == "banner")
    {
        if(banner == nullptr)
        {
            banner = std::make_shared<Native::Aaa::Authentication::Banner>();
        }
        return banner;
    }

    if(child_yang_name == "dot1x")
    {
        if(dot1x == nullptr)
        {
            dot1x = std::make_shared<Native::Aaa::Authentication::Dot1X>();
        }
        return dot1x;
    }

    if(child_yang_name == "enable")
    {
        if(enable == nullptr)
        {
            enable = std::make_shared<Native::Aaa::Authentication::Enable>();
        }
        return enable;
    }

    if(child_yang_name == "eou")
    {
        if(eou == nullptr)
        {
            eou = std::make_shared<Native::Aaa::Authentication::Eou>();
        }
        return eou;
    }

    if(child_yang_name == "fail-message")
    {
        if(fail_message == nullptr)
        {
            fail_message = std::make_shared<Native::Aaa::Authentication::FailMessage>();
        }
        return fail_message;
    }

    if(child_yang_name == "login")
    {
        for(auto const & c : login)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Login>();
        c->parent = this;
        login.push_back(c);
        return c;
    }

    if(child_yang_name == "onep")
    {
        if(onep == nullptr)
        {
            onep = std::make_shared<Native::Aaa::Authentication::Onep>();
        }
        return onep;
    }

    if(child_yang_name == "ppp")
    {
        for(auto const & c : ppp)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Ppp>();
        c->parent = this;
        ppp.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(attempts != nullptr)
    {
        children["attempts"] = attempts;
    }

    if(banner != nullptr)
    {
        children["banner"] = banner;
    }

    if(dot1x != nullptr)
    {
        children["dot1x"] = dot1x;
    }

    if(enable != nullptr)
    {
        children["enable"] = enable;
    }

    if(eou != nullptr)
    {
        children["eou"] = eou;
    }

    if(fail_message != nullptr)
    {
        children["fail-message"] = fail_message;
    }

    for (auto const & c : login)
    {
        children[c->get_segment_path()] = c;
    }

    if(onep != nullptr)
    {
        children["onep"] = onep;
    }

    for (auto const & c : ppp)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authentication::Attempts::Attempts()
    :
    login{YType::uint8, "login"}
{
    yang_name = "attempts"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::Attempts::~Attempts()
{
}

bool Native::Aaa::Authentication::Attempts::has_data() const
{
    return login.is_set;
}

bool Native::Aaa::Authentication::Attempts::has_operation() const
{
    return is_set(operation)
	|| is_set(login.operation);
}

std::string Native::Aaa::Authentication::Attempts::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "attempts";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Attempts::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (login.is_set || is_set(login.operation)) leaf_name_data.push_back(login.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Attempts::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Attempts::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Attempts::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "login")
    {
        login = value;
    }
}

Native::Aaa::Authentication::Banner::Banner()
    :
    end_marker{YType::str, "end-marker"},
    message{YType::str, "message"},
    start_marker{YType::str, "start-marker"}
{
    yang_name = "banner"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::Banner::~Banner()
{
}

bool Native::Aaa::Authentication::Banner::has_data() const
{
    return end_marker.is_set
	|| message.is_set
	|| start_marker.is_set;
}

bool Native::Aaa::Authentication::Banner::has_operation() const
{
    return is_set(operation)
	|| is_set(end_marker.operation)
	|| is_set(message.operation)
	|| is_set(start_marker.operation);
}

std::string Native::Aaa::Authentication::Banner::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "banner";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Banner::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_marker.is_set || is_set(end_marker.operation)) leaf_name_data.push_back(end_marker.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (start_marker.is_set || is_set(start_marker.operation)) leaf_name_data.push_back(start_marker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Banner::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Banner::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Banner::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-marker")
    {
        end_marker = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "start-marker")
    {
        start_marker = value;
    }
}

Native::Aaa::Authentication::Dot1X::Dot1X()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Dot1X::Default_>())
{
    default_->parent = this;

    yang_name = "dot1x"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::Dot1X::~Dot1X()
{
}

bool Native::Aaa::Authentication::Dot1X::has_data() const
{
    for (std::size_t index=0; index<dot1x_list.size(); index++)
    {
        if(dot1x_list[index]->has_data())
            return true;
    }
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Dot1X::has_operation() const
{
    for (std::size_t index=0; index<dot1x_list.size(); index++)
    {
        if(dot1x_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Dot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Dot1X::Default_>();
        }
        return default_;
    }

    if(child_yang_name == "dot1x-list")
    {
        for(auto const & c : dot1x_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authentication::Dot1X::Dot1XList>();
        c->parent = this;
        dot1x_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    for (auto const & c : dot1x_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authentication::Dot1X::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authentication::Dot1X::Dot1XList::Dot1XList()
    :
    name{YType::str, "name"},
    group{YType::str, "group"}
{
    yang_name = "dot1x-list"; yang_parent_name = "dot1x";
}

Native::Aaa::Authentication::Dot1X::Dot1XList::~Dot1XList()
{
}

bool Native::Aaa::Authentication::Dot1X::Dot1XList::has_data() const
{
    return name.is_set
	|| group.is_set;
}

bool Native::Aaa::Authentication::Dot1X::Dot1XList::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Authentication::Dot1X::Dot1XList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x-list" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Dot1X::Dot1XList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/dot1x/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::Dot1XList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::Dot1XList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Dot1X::Dot1XList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Authentication::Dot1X::Default_::Default_()
    :
    group{YType::str, "group"}
{
    yang_name = "default"; yang_parent_name = "dot1x";
}

Native::Aaa::Authentication::Dot1X::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Dot1X::Default_::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Authentication::Dot1X::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Authentication::Dot1X::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Dot1X::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/dot1x/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Dot1X::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Dot1X::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Dot1X::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Authentication::Enable::Enable()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Enable::Default_>())
{
    default_->parent = this;

    yang_name = "enable"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::Enable::~Enable()
{
}

bool Native::Aaa::Authentication::Enable::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Enable::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Enable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "enable";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Enable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Enable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Enable::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Enable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Enable::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authentication::Enable::Default_::Default_()
    :
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    line{YType::empty, "line"},
    none{YType::empty, "none"}
{
    yang_name = "default"; yang_parent_name = "enable";
}

Native::Aaa::Authentication::Enable::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Enable::Default_::has_data() const
{
    return enable.is_set
	|| group.is_set
	|| line.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Enable::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation)
	|| is_set(group.operation)
	|| is_set(line.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Enable::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Enable::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/enable/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Enable::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Enable::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Enable::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authentication::Eou::Eou()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Eou::Default_>())
{
    default_->parent = this;

    yang_name = "eou"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::Eou::~Eou()
{
}

bool Native::Aaa::Authentication::Eou::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Eou::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Eou::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eou";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Eou::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Eou::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Eou::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authentication::Eou::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authentication::Eou::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "eou";
}

Native::Aaa::Authentication::Eou::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Eou::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authentication::Eou::Default_::has_operation() const
{
    return is_set(operation)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authentication::Eou::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Eou::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/eou/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authentication::Eou::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authentication::Eou::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authentication::Eou::Default_::Group::Group()
    :
    radius{YType::empty, "radius"}
{
    yang_name = "group"; yang_parent_name = "default";
}

Native::Aaa::Authentication::Eou::Default_::Group::~Group()
{
}

bool Native::Aaa::Authentication::Eou::Default_::Group::has_data() const
{
    return radius.is_set;
}

bool Native::Aaa::Authentication::Eou::Default_::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(radius.operation);
}

std::string Native::Aaa::Authentication::Eou::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Eou::Default_::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/eou/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (radius.is_set || is_set(radius.operation)) leaf_name_data.push_back(radius.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Eou::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Eou::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Eou::Default_::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "radius")
    {
        radius = value;
    }
}

Native::Aaa::Authentication::FailMessage::FailMessage()
    :
    end_marker{YType::str, "end-marker"},
    message{YType::str, "message"},
    start_marker{YType::str, "start-marker"}
{
    yang_name = "fail-message"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::FailMessage::~FailMessage()
{
}

bool Native::Aaa::Authentication::FailMessage::has_data() const
{
    return end_marker.is_set
	|| message.is_set
	|| start_marker.is_set;
}

bool Native::Aaa::Authentication::FailMessage::has_operation() const
{
    return is_set(operation)
	|| is_set(end_marker.operation)
	|| is_set(message.operation)
	|| is_set(start_marker.operation);
}

std::string Native::Aaa::Authentication::FailMessage::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "fail-message";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::FailMessage::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (end_marker.is_set || is_set(end_marker.operation)) leaf_name_data.push_back(end_marker.get_name_leafdata());
    if (message.is_set || is_set(message.operation)) leaf_name_data.push_back(message.get_name_leafdata());
    if (start_marker.is_set || is_set(start_marker.operation)) leaf_name_data.push_back(start_marker.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::FailMessage::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::FailMessage::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::FailMessage::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "end-marker")
    {
        end_marker = value;
    }
    if(value_path == "message")
    {
        message = value;
    }
    if(value_path == "start-marker")
    {
        start_marker = value;
    }
}

Native::Aaa::Authentication::Login::Login()
    :
    name{YType::str, "name"}
    	,
    a1(std::make_shared<Native::Aaa::Authentication::Login::A1>())
	,a2(std::make_shared<Native::Aaa::Authentication::Login::A2>())
	,a3(std::make_shared<Native::Aaa::Authentication::Login::A3>())
	,a4(std::make_shared<Native::Aaa::Authentication::Login::A4>())
{
    a1->parent = this;

    a2->parent = this;

    a3->parent = this;

    a4->parent = this;

    yang_name = "login"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::Login::~Login()
{
}

bool Native::Aaa::Authentication::Login::has_data() const
{
    return name.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authentication::Login::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authentication::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Login::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authentication::Login::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authentication::Login::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authentication::Login::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authentication::Login::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authentication::Login::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Authentication::Login::A1::A1()
    :
    cache{YType::str, "cache"},
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{
    yang_name = "a1"; yang_parent_name = "login";
}

Native::Aaa::Authentication::Login::A1::~A1()
{
}

bool Native::Aaa::Authentication::Login::A1::has_data() const
{
    return cache.is_set
	|| enable.is_set
	|| group.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Login::A1::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(enable.operation)
	|| is_set(group.operation)
	|| is_set(krb5.operation)
	|| is_set(krb5_telnet.operation)
	|| is_set(line.operation)
	|| is_set(local.operation)
	|| is_set(local_case.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Login::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Login::A1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.operation)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.operation)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.operation)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "local-case")
    {
        local_case = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authentication::Login::A2::A2()
    :
    cache{YType::str, "cache"},
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{
    yang_name = "a2"; yang_parent_name = "login";
}

Native::Aaa::Authentication::Login::A2::~A2()
{
}

bool Native::Aaa::Authentication::Login::A2::has_data() const
{
    return cache.is_set
	|| enable.is_set
	|| group.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Login::A2::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(enable.operation)
	|| is_set(group.operation)
	|| is_set(krb5.operation)
	|| is_set(krb5_telnet.operation)
	|| is_set(line.operation)
	|| is_set(local.operation)
	|| is_set(local_case.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Login::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Login::A2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.operation)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.operation)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.operation)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "local-case")
    {
        local_case = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authentication::Login::A3::A3()
    :
    cache{YType::str, "cache"},
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{
    yang_name = "a3"; yang_parent_name = "login";
}

Native::Aaa::Authentication::Login::A3::~A3()
{
}

bool Native::Aaa::Authentication::Login::A3::has_data() const
{
    return cache.is_set
	|| enable.is_set
	|| group.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Login::A3::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(enable.operation)
	|| is_set(group.operation)
	|| is_set(krb5.operation)
	|| is_set(krb5_telnet.operation)
	|| is_set(line.operation)
	|| is_set(local.operation)
	|| is_set(local_case.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Login::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Login::A3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.operation)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.operation)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.operation)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "local-case")
    {
        local_case = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authentication::Login::A4::A4()
    :
    cache{YType::str, "cache"},
    enable{YType::empty, "enable"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    krb5_telnet{YType::empty, "krb5-telnet"},
    line{YType::empty, "line"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{
    yang_name = "a4"; yang_parent_name = "login";
}

Native::Aaa::Authentication::Login::A4::~A4()
{
}

bool Native::Aaa::Authentication::Login::A4::has_data() const
{
    return cache.is_set
	|| enable.is_set
	|| group.is_set
	|| krb5.is_set
	|| krb5_telnet.is_set
	|| line.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Login::A4::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(enable.operation)
	|| is_set(group.operation)
	|| is_set(krb5.operation)
	|| is_set(krb5_telnet.operation)
	|| is_set(line.operation)
	|| is_set(local.operation)
	|| is_set(local_case.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Login::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Login::A4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.operation)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (krb5_telnet.is_set || is_set(krb5_telnet.operation)) leaf_name_data.push_back(krb5_telnet.get_name_leafdata());
    if (line.is_set || is_set(line.operation)) leaf_name_data.push_back(line.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.operation)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Login::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Login::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Login::A4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "enable")
    {
        enable = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
    }
    if(value_path == "krb5-telnet")
    {
        krb5_telnet = value;
    }
    if(value_path == "line")
    {
        line = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "local-case")
    {
        local_case = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authentication::Onep::Onep()
    :
    default_(std::make_shared<Native::Aaa::Authentication::Onep::Default_>())
{
    default_->parent = this;

    yang_name = "onep"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::Onep::~Onep()
{
}

bool Native::Aaa::Authentication::Onep::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authentication::Onep::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authentication::Onep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onep";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Onep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authentication::Onep::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authentication::Onep::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authentication::Onep::Default_::Default_()
    :
    local(nullptr) // presence node
{
    yang_name = "default"; yang_parent_name = "onep";
}

Native::Aaa::Authentication::Onep::Default_::~Default_()
{
}

bool Native::Aaa::Authentication::Onep::Default_::has_data() const
{
    return (local !=  nullptr && local->has_data());
}

bool Native::Aaa::Authentication::Onep::Default_::has_operation() const
{
    return is_set(operation)
	|| (local !=  nullptr && local->has_operation());
}

std::string Native::Aaa::Authentication::Onep::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Onep::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/onep/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "local")
    {
        if(local == nullptr)
        {
            local = std::make_shared<Native::Aaa::Authentication::Onep::Default_::Local>();
        }
        return local;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(local != nullptr)
    {
        children["local"] = local;
    }

    return children;
}

void Native::Aaa::Authentication::Onep::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authentication::Onep::Default_::Local::Local()
{
    yang_name = "local"; yang_parent_name = "default";
}

Native::Aaa::Authentication::Onep::Default_::Local::~Local()
{
}

bool Native::Aaa::Authentication::Onep::Default_::Local::has_data() const
{
    return false;
}

bool Native::Aaa::Authentication::Onep::Default_::Local::has_operation() const
{
    return is_set(operation);
}

std::string Native::Aaa::Authentication::Onep::Default_::Local::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "local";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Onep::Default_::Local::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/onep/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Onep::Default_::Local::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Onep::Default_::Local::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Onep::Default_::Local::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authentication::Ppp::Ppp()
    :
    id{YType::str, "id"}
    	,
    a1(std::make_shared<Native::Aaa::Authentication::Ppp::A1>())
	,a2(std::make_shared<Native::Aaa::Authentication::Ppp::A2>())
	,a3(std::make_shared<Native::Aaa::Authentication::Ppp::A3>())
	,a4(std::make_shared<Native::Aaa::Authentication::Ppp::A4>())
{
    a1->parent = this;

    a2->parent = this;

    a3->parent = this;

    a4->parent = this;

    yang_name = "ppp"; yang_parent_name = "authentication";
}

Native::Aaa::Authentication::Ppp::~Ppp()
{
}

bool Native::Aaa::Authentication::Ppp::has_data() const
{
    return id.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authentication::Ppp::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authentication::Ppp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ppp" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Ppp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authentication/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authentication::Ppp::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authentication::Ppp::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authentication::Ppp::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authentication::Ppp::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authentication::Ppp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Aaa::Authentication::Ppp::A1::A1()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_needed{YType::empty, "if-needed"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{
    yang_name = "a1"; yang_parent_name = "ppp";
}

Native::Aaa::Authentication::Ppp::A1::~A1()
{
}

bool Native::Aaa::Authentication::Ppp::A1::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_needed.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Ppp::A1::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_needed.operation)
	|| is_set(krb5.operation)
	|| is_set(local.operation)
	|| is_set(local_case.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Ppp::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Ppp::A1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_needed.is_set || is_set(if_needed.operation)) leaf_name_data.push_back(if_needed.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.operation)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.operation)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-needed")
    {
        if_needed = value;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "local-case")
    {
        local_case = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authentication::Ppp::A2::A2()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{
    yang_name = "a2"; yang_parent_name = "ppp";
}

Native::Aaa::Authentication::Ppp::A2::~A2()
{
}

bool Native::Aaa::Authentication::Ppp::A2::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Ppp::A2::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(krb5.operation)
	|| is_set(local.operation)
	|| is_set(local_case.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Ppp::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Ppp::A2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.operation)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.operation)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "local-case")
    {
        local_case = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authentication::Ppp::A3::A3()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{
    yang_name = "a3"; yang_parent_name = "ppp";
}

Native::Aaa::Authentication::Ppp::A3::~A3()
{
}

bool Native::Aaa::Authentication::Ppp::A3::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Ppp::A3::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(krb5.operation)
	|| is_set(local.operation)
	|| is_set(local_case.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Ppp::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Ppp::A3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.operation)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.operation)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "local-case")
    {
        local_case = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authentication::Ppp::A4::A4()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    krb5{YType::empty, "krb5"},
    local{YType::empty, "local"},
    local_case{YType::empty, "local-case"},
    none{YType::empty, "none"}
{
    yang_name = "a4"; yang_parent_name = "ppp";
}

Native::Aaa::Authentication::Ppp::A4::~A4()
{
}

bool Native::Aaa::Authentication::Ppp::A4::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| krb5.is_set
	|| local.is_set
	|| local_case.is_set
	|| none.is_set;
}

bool Native::Aaa::Authentication::Ppp::A4::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(krb5.operation)
	|| is_set(local.operation)
	|| is_set(local_case.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authentication::Ppp::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authentication::Ppp::A4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (krb5.is_set || is_set(krb5.operation)) leaf_name_data.push_back(krb5.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (local_case.is_set || is_set(local_case.operation)) leaf_name_data.push_back(local_case.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authentication::Ppp::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authentication::Ppp::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authentication::Ppp::A4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "krb5")
    {
        krb5 = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "local-case")
    {
        local_case = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Authorization()
    :
    config_commands{YType::empty, "config-commands"},
    console{YType::empty, "console"}
    	,
    auth_proxy(std::make_shared<Native::Aaa::Authorization::AuthProxy>())
	,auth_type(std::make_shared<Native::Aaa::Authorization::AuthType>())
	,onep(std::make_shared<Native::Aaa::Authorization::Onep>())
{
    auth_proxy->parent = this;

    auth_type->parent = this;

    onep->parent = this;

    yang_name = "authorization"; yang_parent_name = "aaa";
}

Native::Aaa::Authorization::~Authorization()
{
}

bool Native::Aaa::Authorization::has_data() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<eventmanager.size(); index++)
    {
        if(eventmanager[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return config_commands.is_set
	|| console.is_set
	|| (auth_proxy !=  nullptr && auth_proxy->has_data())
	|| (auth_type !=  nullptr && auth_type->has_data())
	|| (onep !=  nullptr && onep->has_data());
}

bool Native::Aaa::Authorization::has_operation() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<eventmanager.size(); index++)
    {
        if(eventmanager[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(config_commands.operation)
	|| is_set(console.operation)
	|| (auth_proxy !=  nullptr && auth_proxy->has_operation())
	|| (auth_type !=  nullptr && auth_type->has_operation())
	|| (onep !=  nullptr && onep->has_operation());
}

std::string Native::Aaa::Authorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:authorization";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (config_commands.is_set || is_set(config_commands.operation)) leaf_name_data.push_back(config_commands.get_name_leafdata());
    if (console.is_set || is_set(console.operation)) leaf_name_data.push_back(console.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-proxy")
    {
        if(auth_proxy == nullptr)
        {
            auth_proxy = std::make_shared<Native::Aaa::Authorization::AuthProxy>();
        }
        return auth_proxy;
    }

    if(child_yang_name == "auth-type")
    {
        if(auth_type == nullptr)
        {
            auth_type = std::make_shared<Native::Aaa::Authorization::AuthType>();
        }
        return auth_type;
    }

    if(child_yang_name == "commands")
    {
        for(auto const & c : commands)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Commands>();
        c->parent = this;
        commands.push_back(c);
        return c;
    }

    if(child_yang_name == "eventmanager")
    {
        for(auto const & c : eventmanager)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Eventmanager>();
        c->parent = this;
        eventmanager.push_back(c);
        return c;
    }

    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "onep")
    {
        if(onep == nullptr)
        {
            onep = std::make_shared<Native::Aaa::Authorization::Onep>();
        }
        return onep;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_proxy != nullptr)
    {
        children["auth-proxy"] = auth_proxy;
    }

    if(auth_type != nullptr)
    {
        children["auth-type"] = auth_type;
    }

    for (auto const & c : commands)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : eventmanager)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(onep != nullptr)
    {
        children["onep"] = onep;
    }

    return children;
}

void Native::Aaa::Authorization::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "config-commands")
    {
        config_commands = value;
    }
    if(value_path == "console")
    {
        console = value;
    }
}

Native::Aaa::Authorization::AuthType::AuthType()
    :
    default_(std::make_shared<Native::Aaa::Authorization::AuthType::Default_>())
{
    default_->parent = this;

    yang_name = "auth-type"; yang_parent_name = "authorization";
}

Native::Aaa::Authorization::AuthType::~AuthType()
{
}

bool Native::Aaa::Authorization::AuthType::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::AuthType::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::AuthType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-type";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::AuthType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::AuthType::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::AuthType::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authorization::AuthType::Default_::Default_()
    :
    group{YType::enumeration, "group"}
{
    yang_name = "default"; yang_parent_name = "auth-type";
}

Native::Aaa::Authorization::AuthType::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::AuthType::Default_::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Authorization::AuthType::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Authorization::AuthType::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::AuthType::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-type/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthType::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthType::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::AuthType::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Authorization::Commands::Commands()
    :
    level{YType::uint8, "level"},
    list_name{YType::str, "list-name"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "commands"; yang_parent_name = "authorization";
}

Native::Aaa::Authorization::Commands::~Commands()
{
}

bool Native::Aaa::Authorization::Commands::has_data() const
{
    return level.is_set
	|| list_name.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Commands::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(list_name.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands" <<"[level='" <<level <<"']" <<"[list-name='" <<list_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Commands::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.operation)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Commands::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "list-name")
    {
        list_name = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Exec::Exec()
    :
    name{YType::str, "name"}
    	,
    a1(std::make_shared<Native::Aaa::Authorization::Exec::A1>())
	,a2(std::make_shared<Native::Aaa::Authorization::Exec::A2>())
	,a3(std::make_shared<Native::Aaa::Authorization::Exec::A3>())
	,a4(std::make_shared<Native::Aaa::Authorization::Exec::A4>())
{
    a1->parent = this;

    a2->parent = this;

    a3->parent = this;

    a4->parent = this;

    yang_name = "exec"; yang_parent_name = "authorization";
}

Native::Aaa::Authorization::Exec::~Exec()
{
}

bool Native::Aaa::Authorization::Exec::has_data() const
{
    return name.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authorization::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authorization::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authorization::Exec::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authorization::Exec::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authorization::Exec::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authorization::Exec::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authorization::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Authorization::Exec::A1::A1()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "a1"; yang_parent_name = "exec";
}

Native::Aaa::Authorization::Exec::A1::~A1()
{
}

bool Native::Aaa::Authorization::Exec::A1::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Exec::A1::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(krb5_instance.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Exec::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Exec::A1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.operation)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Exec::A2::A2()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "a2"; yang_parent_name = "exec";
}

Native::Aaa::Authorization::Exec::A2::~A2()
{
}

bool Native::Aaa::Authorization::Exec::A2::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Exec::A2::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(krb5_instance.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Exec::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Exec::A2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.operation)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Exec::A3::A3()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "a3"; yang_parent_name = "exec";
}

Native::Aaa::Authorization::Exec::A3::~A3()
{
}

bool Native::Aaa::Authorization::Exec::A3::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Exec::A3::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(krb5_instance.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Exec::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Exec::A3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.operation)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Exec::A4::A4()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    krb5_instance{YType::empty, "krb5-instance"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "a4"; yang_parent_name = "exec";
}

Native::Aaa::Authorization::Exec::A4::~A4()
{
}

bool Native::Aaa::Authorization::Exec::A4::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| krb5_instance.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Exec::A4::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(krb5_instance.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Exec::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Exec::A4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (krb5_instance.is_set || is_set(krb5_instance.operation)) leaf_name_data.push_back(krb5_instance.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Exec::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Exec::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Exec::A4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "krb5-instance")
    {
        krb5_instance = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Eventmanager::Eventmanager()
    :
    name{YType::str, "name"},
    group{YType::str, "group"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "eventmanager"; yang_parent_name = "authorization";
}

Native::Aaa::Authorization::Eventmanager::~Eventmanager()
{
}

bool Native::Aaa::Authorization::Eventmanager::has_data() const
{
    return name.is_set
	|| group.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Eventmanager::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(group.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Eventmanager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "eventmanager" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Eventmanager::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Eventmanager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Eventmanager::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Eventmanager::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Network::Network()
    :
    id{YType::str, "id"}
    	,
    a1(std::make_shared<Native::Aaa::Authorization::Network::A1>())
	,a2(std::make_shared<Native::Aaa::Authorization::Network::A2>())
	,a3(std::make_shared<Native::Aaa::Authorization::Network::A3>())
	,a4(std::make_shared<Native::Aaa::Authorization::Network::A4>())
{
    a1->parent = this;

    a2->parent = this;

    a3->parent = this;

    a4->parent = this;

    yang_name = "network"; yang_parent_name = "authorization";
}

Native::Aaa::Authorization::Network::~Network()
{
}

bool Native::Aaa::Authorization::Network::has_data() const
{
    return id.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data());
}

bool Native::Aaa::Authorization::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation());
}

std::string Native::Aaa::Authorization::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Authorization::Network::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Authorization::Network::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Authorization::Network::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Authorization::Network::A4>();
        }
        return a4;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    return children;
}

void Native::Aaa::Authorization::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
}

Native::Aaa::Authorization::Network::A1::A1()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "a1"; yang_parent_name = "network";
}

Native::Aaa::Authorization::Network::A1::~A1()
{
}

bool Native::Aaa::Authorization::Network::A1::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Network::A1::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Network::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Network::A1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Network::A2::A2()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "a2"; yang_parent_name = "network";
}

Native::Aaa::Authorization::Network::A2::~A2()
{
}

bool Native::Aaa::Authorization::Network::A2::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Network::A2::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Network::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Network::A2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Network::A3::A3()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "a3"; yang_parent_name = "network";
}

Native::Aaa::Authorization::Network::A3::~A3()
{
}

bool Native::Aaa::Authorization::Network::A3::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Network::A3::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Network::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Network::A3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::Network::A4::A4()
    :
    cache{YType::str, "cache"},
    group{YType::str, "group"},
    if_authenticated{YType::empty, "if-authenticated"},
    local{YType::empty, "local"},
    none{YType::empty, "none"}
{
    yang_name = "a4"; yang_parent_name = "network";
}

Native::Aaa::Authorization::Network::A4::~A4()
{
}

bool Native::Aaa::Authorization::Network::A4::has_data() const
{
    return cache.is_set
	|| group.is_set
	|| if_authenticated.is_set
	|| local.is_set
	|| none.is_set;
}

bool Native::Aaa::Authorization::Network::A4::has_operation() const
{
    return is_set(operation)
	|| is_set(cache.operation)
	|| is_set(group.operation)
	|| is_set(if_authenticated.operation)
	|| is_set(local.operation)
	|| is_set(none.operation);
}

std::string Native::Aaa::Authorization::Network::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Network::A4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (cache.is_set || is_set(cache.operation)) leaf_name_data.push_back(cache.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());
    if (if_authenticated.is_set || is_set(if_authenticated.operation)) leaf_name_data.push_back(if_authenticated.get_name_leafdata());
    if (local.is_set || is_set(local.operation)) leaf_name_data.push_back(local.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Network::A4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "cache")
    {
        cache = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
    if(value_path == "if-authenticated")
    {
        if_authenticated = value;
    }
    if(value_path == "local")
    {
        local = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Authorization::AuthProxy::AuthProxy()
    :
    default_(std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_>())
{
    default_->parent = this;

    yang_name = "auth-proxy"; yang_parent_name = "authorization";
}

Native::Aaa::Authorization::AuthProxy::~AuthProxy()
{
}

bool Native::Aaa::Authorization::AuthProxy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::AuthProxy::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::AuthProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-proxy";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::AuthProxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::AuthProxy::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authorization::AuthProxy::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "auth-proxy";
}

Native::Aaa::Authorization::AuthProxy::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::AuthProxy::Default_::has_operation() const
{
    return is_set(operation)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::AuthProxy::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-proxy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::AuthProxy::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::AuthProxy::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authorization::AuthProxy::Default_::Group::Group()
    :
    group_name{YType::str, "group-name"},
    radius{YType::empty, "radius"}
{
    yang_name = "group"; yang_parent_name = "default";
}

Native::Aaa::Authorization::AuthProxy::Default_::Group::~Group()
{
}

bool Native::Aaa::Authorization::AuthProxy::Default_::Group::has_data() const
{
    return group_name.is_set
	|| radius.is_set;
}

bool Native::Aaa::Authorization::AuthProxy::Default_::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(group_name.operation)
	|| is_set(radius.operation);
}

std::string Native::Aaa::Authorization::AuthProxy::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::AuthProxy::Default_::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/auth-proxy/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_name.is_set || is_set(group_name.operation)) leaf_name_data.push_back(group_name.get_name_leafdata());
    if (radius.is_set || is_set(radius.operation)) leaf_name_data.push_back(radius.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::AuthProxy::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::AuthProxy::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::AuthProxy::Default_::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-name")
    {
        group_name = value;
    }
    if(value_path == "radius")
    {
        radius = value;
    }
}

Native::Aaa::Authorization::Onep::Onep()
    :
    default_(std::make_shared<Native::Aaa::Authorization::Onep::Default_>())
{
    default_->parent = this;

    yang_name = "onep"; yang_parent_name = "authorization";
}

Native::Aaa::Authorization::Onep::~Onep()
{
}

bool Native::Aaa::Authorization::Onep::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Authorization::Onep::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Authorization::Onep::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "onep";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Onep::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Authorization::Onep::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authorization::Onep::Default_::Default_()
    :
    group(std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group>())
{
    group->parent = this;

    yang_name = "default"; yang_parent_name = "onep";
}

Native::Aaa::Authorization::Onep::Default_::~Default_()
{
}

bool Native::Aaa::Authorization::Onep::Default_::has_data() const
{
    return (group !=  nullptr && group->has_data());
}

bool Native::Aaa::Authorization::Onep::Default_::has_operation() const
{
    return is_set(operation)
	|| (group !=  nullptr && group->has_operation());
}

std::string Native::Aaa::Authorization::Onep::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Onep::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        if(group == nullptr)
        {
            group = std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group>();
        }
        return group;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(group != nullptr)
    {
        children["group"] = group;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authorization::Onep::Default_::Group::Group()
{
    yang_name = "group"; yang_parent_name = "default";
}

Native::Aaa::Authorization::Onep::Default_::Group::~Group()
{
}

bool Native::Aaa::Authorization::Onep::Default_::Group::has_data() const
{
    for (std::size_t index=0; index<group_word.size(); index++)
    {
        if(group_word[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Authorization::Onep::Default_::Group::has_operation() const
{
    for (std::size_t index=0; index<group_word.size(); index++)
    {
        if(group_word[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Onep::Default_::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group-word")
    {
        for(auto const & c : group_word)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Authorization::Onep::Default_::Group::GroupWord>();
        c->parent = this;
        group_word.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : group_word)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Authorization::Onep::Default_::Group::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::GroupWord()
    :
    group_word{YType::str, "group-word"}
{
    yang_name = "group-word"; yang_parent_name = "group";
}

Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::~GroupWord()
{
}

bool Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::has_data() const
{
    return group_word.is_set;
}

bool Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::has_operation() const
{
    return is_set(operation)
	|| is_set(group_word.operation);
}

std::string Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group-word" <<"[group-word='" <<group_word <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:authorization/onep/default/group/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_word.is_set || is_set(group_word.operation)) leaf_name_data.push_back(group_word.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Authorization::Onep::Default_::Group::GroupWord::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-word")
    {
        group_word = value;
    }
}

Native::Aaa::Accounting::Accounting()
    :
    auth_proxy(std::make_shared<Native::Aaa::Accounting::AuthProxy>())
	,delay_start(std::make_shared<Native::Aaa::Accounting::DelayStart>())
	,exec_submode(std::make_shared<Native::Aaa::Accounting::ExecSubmode>())
	,send(std::make_shared<Native::Aaa::Accounting::Send>())
	,system(std::make_shared<Native::Aaa::Accounting::System>())
	,update(std::make_shared<Native::Aaa::Accounting::Update>())
{
    auth_proxy->parent = this;

    delay_start->parent = this;

    exec_submode->parent = this;

    send->parent = this;

    system->parent = this;

    update->parent = this;

    yang_name = "accounting"; yang_parent_name = "aaa";
}

Native::Aaa::Accounting::~Accounting()
{
}

bool Native::Aaa::Accounting::has_data() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<connection.size(); index++)
    {
        if(connection[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<dot1x.size(); index++)
    {
        if(dot1x[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_data())
            return true;
    }
    return (auth_proxy !=  nullptr && auth_proxy->has_data())
	|| (delay_start !=  nullptr && delay_start->has_data())
	|| (exec_submode !=  nullptr && exec_submode->has_data())
	|| (send !=  nullptr && send->has_data())
	|| (system !=  nullptr && system->has_data())
	|| (update !=  nullptr && update->has_data());
}

bool Native::Aaa::Accounting::has_operation() const
{
    for (std::size_t index=0; index<commands.size(); index++)
    {
        if(commands[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<connection.size(); index++)
    {
        if(connection[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<dot1x.size(); index++)
    {
        if(dot1x[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<network.size(); index++)
    {
        if(network[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| (auth_proxy !=  nullptr && auth_proxy->has_operation())
	|| (delay_start !=  nullptr && delay_start->has_operation())
	|| (exec_submode !=  nullptr && exec_submode->has_operation())
	|| (send !=  nullptr && send->has_operation())
	|| (system !=  nullptr && system->has_operation())
	|| (update !=  nullptr && update->has_operation());
}

std::string Native::Aaa::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:accounting";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auth-proxy")
    {
        if(auth_proxy == nullptr)
        {
            auth_proxy = std::make_shared<Native::Aaa::Accounting::AuthProxy>();
        }
        return auth_proxy;
    }

    if(child_yang_name == "commands")
    {
        for(auto const & c : commands)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Commands>();
        c->parent = this;
        commands.push_back(c);
        return c;
    }

    if(child_yang_name == "connection")
    {
        for(auto const & c : connection)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Connection>();
        c->parent = this;
        connection.push_back(c);
        return c;
    }

    if(child_yang_name == "delay-start")
    {
        if(delay_start == nullptr)
        {
            delay_start = std::make_shared<Native::Aaa::Accounting::DelayStart>();
        }
        return delay_start;
    }

    if(child_yang_name == "dot1x")
    {
        for(auto const & c : dot1x)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Dot1X>();
        c->parent = this;
        dot1x.push_back(c);
        return c;
    }

    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    if(child_yang_name == "exec-submode")
    {
        if(exec_submode == nullptr)
        {
            exec_submode = std::make_shared<Native::Aaa::Accounting::ExecSubmode>();
        }
        return exec_submode;
    }

    if(child_yang_name == "network")
    {
        for(auto const & c : network)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::Network>();
        c->parent = this;
        network.push_back(c);
        return c;
    }

    if(child_yang_name == "send")
    {
        if(send == nullptr)
        {
            send = std::make_shared<Native::Aaa::Accounting::Send>();
        }
        return send;
    }

    if(child_yang_name == "system")
    {
        if(system == nullptr)
        {
            system = std::make_shared<Native::Aaa::Accounting::System>();
        }
        return system;
    }

    if(child_yang_name == "update")
    {
        if(update == nullptr)
        {
            update = std::make_shared<Native::Aaa::Accounting::Update>();
        }
        return update;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auth_proxy != nullptr)
    {
        children["auth-proxy"] = auth_proxy;
    }

    for (auto const & c : commands)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : connection)
    {
        children[c->get_segment_path()] = c;
    }

    if(delay_start != nullptr)
    {
        children["delay-start"] = delay_start;
    }

    for (auto const & c : dot1x)
    {
        children[c->get_segment_path()] = c;
    }

    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    if(exec_submode != nullptr)
    {
        children["exec-submode"] = exec_submode;
    }

    for (auto const & c : network)
    {
        children[c->get_segment_path()] = c;
    }

    if(send != nullptr)
    {
        children["send"] = send;
    }

    if(system != nullptr)
    {
        children["system"] = system;
    }

    if(update != nullptr)
    {
        children["update"] = update;
    }

    return children;
}

void Native::Aaa::Accounting::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Accounting::Commands::Commands()
    :
    level{YType::uint8, "level"},
    list_name{YType::str, "list-name"},
    action_type{YType::enumeration, "action-type"},
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "commands"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::Commands::~Commands()
{
}

bool Native::Aaa::Accounting::Commands::has_data() const
{
    return level.is_set
	|| list_name.is_set
	|| action_type.is_set
	|| broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Commands::has_operation() const
{
    return is_set(operation)
	|| is_set(level.operation)
	|| is_set(list_name.operation)
	|| is_set(action_type.operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Commands::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "commands" <<"[level='" <<level <<"']" <<"[list-name='" <<list_name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Commands::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (level.is_set || is_set(level.operation)) leaf_name_data.push_back(level.get_name_leafdata());
    if (list_name.is_set || is_set(list_name.operation)) leaf_name_data.push_back(list_name.get_name_leafdata());
    if (action_type.is_set || is_set(action_type.operation)) leaf_name_data.push_back(action_type.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Commands::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Commands::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Commands::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "level")
    {
        level = value;
    }
    if(value_path == "list-name")
    {
        list_name = value;
    }
    if(value_path == "action-type")
    {
        action_type = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Connection::Connection()
    :
    name{YType::str, "name"},
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Connection::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>())
{
    start_stop->parent = this;

    stop_only->parent = this;

    yang_name = "connection"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::Connection::~Connection()
{
}

bool Native::Aaa::Accounting::Connection::has_data() const
{
    return name.is_set
	|| none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::Connection::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(none.operation)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::Connection::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "connection" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Connection::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Connection::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::Connection::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::Connection::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Accounting::Connection::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "start-stop"; yang_parent_name = "connection";
}

Native::Aaa::Accounting::Connection::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Connection::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Connection::StartStop::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Connection::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Connection::StartStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartStop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Connection::StartStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Connection::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "stop-only"; yang_parent_name = "connection";
}

Native::Aaa::Accounting::Connection::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Connection::StopOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Connection::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Connection::StopOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StopOnly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Connection::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Connection::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Connection::StopOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::DelayStart::DelayStart()
    :
    all{YType::empty, "all"},
    extended_delay{YType::uint8, "extended-delay"}
{
    yang_name = "delay-start"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::DelayStart::~DelayStart()
{
}

bool Native::Aaa::Accounting::DelayStart::has_data() const
{
    return all.is_set
	|| extended_delay.is_set;
}

bool Native::Aaa::Accounting::DelayStart::has_operation() const
{
    return is_set(operation)
	|| is_set(all.operation)
	|| is_set(extended_delay.operation);
}

std::string Native::Aaa::Accounting::DelayStart::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay-start";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::DelayStart::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (all.is_set || is_set(all.operation)) leaf_name_data.push_back(all.get_name_leafdata());
    if (extended_delay.is_set || is_set(extended_delay.operation)) leaf_name_data.push_back(extended_delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::DelayStart::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::DelayStart::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::DelayStart::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "all")
    {
        all = value;
    }
    if(value_path == "extended-delay")
    {
        extended_delay = value;
    }
}

Native::Aaa::Accounting::Dot1X::Dot1X()
    :
    name{YType::str, "name"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Dot1X::StartStop>())
{
    start_stop->parent = this;

    yang_name = "dot1x"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::Dot1X::~Dot1X()
{
}

bool Native::Aaa::Accounting::Dot1X::has_data() const
{
    return name.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Dot1X::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Dot1X::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dot1x" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Dot1X::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Accounting::Dot1X::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Dot1X::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Dot1X::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::Dot1X::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Accounting::Dot1X::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "start-stop"; yang_parent_name = "dot1x";
}

Native::Aaa::Accounting::Dot1X::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Dot1X::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Dot1X::StartStop::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Dot1X::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Dot1X::StartStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartStop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Dot1X::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Dot1X::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Dot1X::StartStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Exec::Exec()
    :
    name{YType::str, "name"},
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::Exec::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>())
{
    start_stop->parent = this;

    stop_only->parent = this;

    yang_name = "exec"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::Exec::~Exec()
{
}

bool Native::Aaa::Accounting::Exec::has_data() const
{
    return name.is_set
	|| none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| is_set(none.operation)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (name.is_set || is_set(name.operation)) leaf_name_data.push_back(name.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Exec::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::Exec::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Accounting::Exec::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "start-stop"; yang_parent_name = "exec";
}

Native::Aaa::Accounting::Exec::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Exec::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Exec::StartStop::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Exec::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Exec::StartStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartStop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Exec::StartStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Exec::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "stop-only"; yang_parent_name = "exec";
}

Native::Aaa::Accounting::Exec::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::Exec::StopOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Exec::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Exec::StopOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StopOnly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Exec::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Exec::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Exec::StopOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::ExecSubmode::ExecSubmode()
{
    yang_name = "exec-submode"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::ExecSubmode::~ExecSubmode()
{
}

bool Native::Aaa::Accounting::ExecSubmode::has_data() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Aaa::Accounting::ExecSubmode::has_operation() const
{
    for (std::size_t index=0; index<exec.size(); index++)
    {
        if(exec[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Aaa::Accounting::ExecSubmode::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec-submode";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::ExecSubmode::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        for(auto const & c : exec)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec>();
        c->parent = this;
        exec.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : exec)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Accounting::ExecSubmode::Exec::Exec()
    :
    name{YType::str, "name"}
    	,
    action_type(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType>())
{
    action_type->parent = this;

    yang_name = "exec"; yang_parent_name = "exec-submode";
}

Native::Aaa::Accounting::ExecSubmode::Exec::~Exec()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_data() const
{
    return name.is_set
	|| (action_type !=  nullptr && action_type->has_data());
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation)
	|| (action_type !=  nullptr && action_type->has_operation());
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::ExecSubmode::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/exec-submode/" << get_segment_path();
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

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "action-type")
    {
        if(action_type == nullptr)
        {
            action_type = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType>();
        }
        return action_type;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(action_type != nullptr)
    {
        children["action-type"] = action_type;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::ActionType()
    :
    none{YType::empty, "none"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop>())
	,stop_only(std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>())
{
    start_stop->parent = this;

    stop_only->parent = this;

    yang_name = "action-type"; yang_parent_name = "exec";
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::~ActionType()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_data() const
{
    return none.is_set
	|| (start_stop !=  nullptr && start_stop->has_data())
	|| (stop_only !=  nullptr && stop_only->has_data());
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| (start_stop !=  nullptr && start_stop->has_operation())
	|| (stop_only !=  nullptr && stop_only->has_operation());
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "action-type";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ActionType' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
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

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop>();
        }
        return start_stop;
    }

    if(child_yang_name == "stop-only")
    {
        if(stop_only == nullptr)
        {
            stop_only = std::make_shared<Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly>();
        }
        return stop_only;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    if(stop_only != nullptr)
    {
        children["stop-only"] = stop_only;
    }

    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "start-stop"; yang_parent_name = "action-type";
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartStop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::StopOnly()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "stop-only"; yang_parent_name = "action-type";
}

Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::~StopOnly()
{
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-only";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StopOnly' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Network::Network()
    :
    id{YType::str, "id"},
    broadcast{YType::empty, "broadcast"},
    mode{YType::enumeration, "mode"},
    none{YType::empty, "none"}
    	,
    a1(std::make_shared<Native::Aaa::Accounting::Network::A1>())
	,a2(std::make_shared<Native::Aaa::Accounting::Network::A2>())
	,a3(std::make_shared<Native::Aaa::Accounting::Network::A3>())
	,a4(std::make_shared<Native::Aaa::Accounting::Network::A4>())
	,start_stop(std::make_shared<Native::Aaa::Accounting::Network::StartStop>())
{
    a1->parent = this;

    a2->parent = this;

    a3->parent = this;

    a4->parent = this;

    start_stop->parent = this;

    yang_name = "network"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::Network::~Network()
{
}

bool Native::Aaa::Accounting::Network::has_data() const
{
    return id.is_set
	|| broadcast.is_set
	|| mode.is_set
	|| none.is_set
	|| (a1 !=  nullptr && a1->has_data())
	|| (a2 !=  nullptr && a2->has_data())
	|| (a3 !=  nullptr && a3->has_data())
	|| (a4 !=  nullptr && a4->has_data())
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::Network::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(broadcast.operation)
	|| is_set(mode.operation)
	|| is_set(none.operation)
	|| (a1 !=  nullptr && a1->has_operation())
	|| (a2 !=  nullptr && a2->has_operation())
	|| (a3 !=  nullptr && a3->has_operation())
	|| (a4 !=  nullptr && a4->has_operation())
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::Network::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "network" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Network::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());
    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "a1")
    {
        if(a1 == nullptr)
        {
            a1 = std::make_shared<Native::Aaa::Accounting::Network::A1>();
        }
        return a1;
    }

    if(child_yang_name == "a2")
    {
        if(a2 == nullptr)
        {
            a2 = std::make_shared<Native::Aaa::Accounting::Network::A2>();
        }
        return a2;
    }

    if(child_yang_name == "a3")
    {
        if(a3 == nullptr)
        {
            a3 = std::make_shared<Native::Aaa::Accounting::Network::A3>();
        }
        return a3;
    }

    if(child_yang_name == "a4")
    {
        if(a4 == nullptr)
        {
            a4 = std::make_shared<Native::Aaa::Accounting::Network::A4>();
        }
        return a4;
    }

    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::Network::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(a1 != nullptr)
    {
        children["a1"] = a1;
    }

    if(a2 != nullptr)
    {
        children["a2"] = a2;
    }

    if(a3 != nullptr)
    {
        children["a3"] = a3;
    }

    if(a4 != nullptr)
    {
        children["a4"] = a4;
    }

    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::Network::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
    if(value_path == "none")
    {
        none = value;
    }
}

Native::Aaa::Accounting::Network::StartStop::StartStop()
    :
    group{YType::str, "group"}
{
    yang_name = "start-stop"; yang_parent_name = "network";
}

Native::Aaa::Accounting::Network::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::Network::StartStop::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::StartStop::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Network::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Network::StartStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StartStop' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::StartStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Network::A1::A1()
    :
    group{YType::str, "group"}
{
    yang_name = "a1"; yang_parent_name = "network";
}

Native::Aaa::Accounting::Network::A1::~A1()
{
}

bool Native::Aaa::Accounting::Network::A1::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A1::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Network::A1::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a1";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Network::A1::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A1' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A1::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A1::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A1::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Network::A2::A2()
    :
    group{YType::str, "group"}
{
    yang_name = "a2"; yang_parent_name = "network";
}

Native::Aaa::Accounting::Network::A2::~A2()
{
}

bool Native::Aaa::Accounting::Network::A2::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A2::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Network::A2::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a2";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Network::A2::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A2' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A2::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A2::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A2::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Network::A3::A3()
    :
    group{YType::str, "group"}
{
    yang_name = "a3"; yang_parent_name = "network";
}

Native::Aaa::Accounting::Network::A3::~A3()
{
}

bool Native::Aaa::Accounting::Network::A3::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A3::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Network::A3::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a3";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Network::A3::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A3' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A3::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A3::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A3::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Network::A4::A4()
    :
    group{YType::str, "group"}
{
    yang_name = "a4"; yang_parent_name = "network";
}

Native::Aaa::Accounting::Network::A4::~A4()
{
}

bool Native::Aaa::Accounting::Network::A4::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::Network::A4::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::Network::A4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "a4";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Network::A4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'A4' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Network::A4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Network::A4::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Network::A4::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Send::Send()
    :
    counters(std::make_shared<Native::Aaa::Accounting::Send::Counters>())
	,stop_record(std::make_shared<Native::Aaa::Accounting::Send::StopRecord>())
{
    counters->parent = this;

    stop_record->parent = this;

    yang_name = "send"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::Send::~Send()
{
}

bool Native::Aaa::Accounting::Send::has_data() const
{
    return (counters !=  nullptr && counters->has_data())
	|| (stop_record !=  nullptr && stop_record->has_data());
}

bool Native::Aaa::Accounting::Send::has_operation() const
{
    return is_set(operation)
	|| (counters !=  nullptr && counters->has_operation())
	|| (stop_record !=  nullptr && stop_record->has_operation());
}

std::string Native::Aaa::Accounting::Send::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "send";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Send::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "counters")
    {
        if(counters == nullptr)
        {
            counters = std::make_shared<Native::Aaa::Accounting::Send::Counters>();
        }
        return counters;
    }

    if(child_yang_name == "stop-record")
    {
        if(stop_record == nullptr)
        {
            stop_record = std::make_shared<Native::Aaa::Accounting::Send::StopRecord>();
        }
        return stop_record;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(counters != nullptr)
    {
        children["counters"] = counters;
    }

    if(stop_record != nullptr)
    {
        children["stop-record"] = stop_record;
    }

    return children;
}

void Native::Aaa::Accounting::Send::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Accounting::Send::Counters::Counters()
    :
    ipv6{YType::empty, "ipv6"}
{
    yang_name = "counters"; yang_parent_name = "send";
}

Native::Aaa::Accounting::Send::Counters::~Counters()
{
}

bool Native::Aaa::Accounting::Send::Counters::has_data() const
{
    return ipv6.is_set;
}

bool Native::Aaa::Accounting::Send::Counters::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6.operation);
}

std::string Native::Aaa::Accounting::Send::Counters::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "counters";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Send::Counters::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6.is_set || is_set(ipv6.operation)) leaf_name_data.push_back(ipv6.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::Counters::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::Counters::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::Counters::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6")
    {
        ipv6 = value;
    }
}

Native::Aaa::Accounting::Send::StopRecord::StopRecord()
    :
    always{YType::empty, "always"}
    	,
    authentication(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication>())
{
    authentication->parent = this;

    yang_name = "stop-record"; yang_parent_name = "send";
}

Native::Aaa::Accounting::Send::StopRecord::~StopRecord()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::has_data() const
{
    return always.is_set
	|| (authentication !=  nullptr && authentication->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::has_operation() const
{
    return is_set(operation)
	|| is_set(always.operation)
	|| (authentication !=  nullptr && authentication->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stop-record";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Send::StopRecord::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (always.is_set || is_set(always.operation)) leaf_name_data.push_back(always.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication")
    {
        if(authentication == nullptr)
        {
            authentication = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication>();
        }
        return authentication;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(authentication != nullptr)
    {
        children["authentication"] = authentication;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "always")
    {
        always = value;
    }
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Authentication()
    :
    failure(nullptr) // presence node
	,success(std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>())
{
    success->parent = this;

    yang_name = "authentication"; yang_parent_name = "stop-record";
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::~Authentication()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_data() const
{
    return (failure !=  nullptr && failure->has_data())
	|| (success !=  nullptr && success->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::has_operation() const
{
    return is_set(operation)
	|| (failure !=  nullptr && failure->has_operation())
	|| (success !=  nullptr && success->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Send::StopRecord::Authentication::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "failure")
    {
        if(failure == nullptr)
        {
            failure = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure>();
        }
        return failure;
    }

    if(child_yang_name == "success")
    {
        if(success == nullptr)
        {
            success = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success>();
        }
        return success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(failure != nullptr)
    {
        children["failure"] = failure;
    }

    if(success != nullptr)
    {
        children["success"] = success;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::Failure()
    :
    vrf{YType::str, "vrf"}
{
    yang_name = "failure"; yang_parent_name = "authentication";
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::~Failure()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_data() const
{
    return vrf.is_set;
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "failure";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Failure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::Success()
    :
    remote_server(nullptr) // presence node
{
    yang_name = "success"; yang_parent_name = "authentication";
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::~Success()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_data() const
{
    return (remote_server !=  nullptr && remote_server->has_data());
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::has_operation() const
{
    return is_set(operation)
	|| (remote_server !=  nullptr && remote_server->has_operation());
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "success";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "remote-server")
    {
        if(remote_server == nullptr)
        {
            remote_server = std::make_shared<Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer>();
        }
        return remote_server;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(remote_server != nullptr)
    {
        children["remote-server"] = remote_server;
    }

    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::RemoteServer()
    :
    vrf{YType::str, "vrf"}
{
    yang_name = "remote-server"; yang_parent_name = "success";
}

Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::~RemoteServer()
{
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_data() const
{
    return vrf.is_set;
}

bool Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::has_operation() const
{
    return is_set(operation)
	|| is_set(vrf.operation);
}

std::string Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "remote-server";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/send/stop-record/authentication/success/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Send::StopRecord::Authentication::Success::RemoteServer::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Aaa::Accounting::System::System()
    :
    guarantee_first{YType::boolean, "guarantee-first"}
    	,
    default_(nullptr) // presence node
{
    yang_name = "system"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::System::~System()
{
}

bool Native::Aaa::Accounting::System::has_data() const
{
    return guarantee_first.is_set
	|| (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::System::has_operation() const
{
    return is_set(operation)
	|| is_set(guarantee_first.operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::System::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "system";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::System::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (guarantee_first.is_set || is_set(guarantee_first.operation)) leaf_name_data.push_back(guarantee_first.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::System::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Accounting::System::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "guarantee-first")
    {
        guarantee_first = value;
    }
}

Native::Aaa::Accounting::System::Default_::Default_()
    :
    none{YType::empty, "none"},
    vrf{YType::str, "vrf"}
    	,
    start_stop(std::make_shared<Native::Aaa::Accounting::System::Default_::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "system";
}

Native::Aaa::Accounting::System::Default_::~Default_()
{
}

bool Native::Aaa::Accounting::System::Default_::has_data() const
{
    return none.is_set
	|| vrf.is_set
	|| (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::System::Default_::has_operation() const
{
    return is_set(operation)
	|| is_set(none.operation)
	|| is_set(vrf.operation)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::System::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::System::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/system/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (none.is_set || is_set(none.operation)) leaf_name_data.push_back(none.get_name_leafdata());
    if (vrf.is_set || is_set(vrf.operation)) leaf_name_data.push_back(vrf.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::System::Default_::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::System::Default_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "none")
    {
        none = value;
    }
    if(value_path == "vrf")
    {
        vrf = value;
    }
}

Native::Aaa::Accounting::System::Default_::StartStop::StartStop()
    :
    broadcast{YType::empty, "broadcast"},
    group{YType::str, "group"}
{
    yang_name = "start-stop"; yang_parent_name = "default";
}

Native::Aaa::Accounting::System::Default_::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::System::Default_::StartStop::has_data() const
{
    return broadcast.is_set
	|| group.is_set;
}

bool Native::Aaa::Accounting::System::Default_::StartStop::has_operation() const
{
    return is_set(operation)
	|| is_set(broadcast.operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::System::Default_::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::System::Default_::StartStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/system/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (broadcast.is_set || is_set(broadcast.operation)) leaf_name_data.push_back(broadcast.get_name_leafdata());
    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::System::Default_::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::System::Default_::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::System::Default_::StartStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "broadcast")
    {
        broadcast = value;
    }
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Accounting::Update::Update()
    :
    periodic{YType::uint32, "periodic"}
{
    yang_name = "update"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::Update::~Update()
{
}

bool Native::Aaa::Accounting::Update::has_data() const
{
    return periodic.is_set;
}

bool Native::Aaa::Accounting::Update::has_operation() const
{
    return is_set(operation)
	|| is_set(periodic.operation);
}

std::string Native::Aaa::Accounting::Update::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "update";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::Update::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (periodic.is_set || is_set(periodic.operation)) leaf_name_data.push_back(periodic.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::Update::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::Update::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::Update::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "periodic")
    {
        periodic = value;
    }
}

Native::Aaa::Accounting::AuthProxy::AuthProxy()
    :
    default_(std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_>())
{
    default_->parent = this;

    yang_name = "auth-proxy"; yang_parent_name = "accounting";
}

Native::Aaa::Accounting::AuthProxy::~AuthProxy()
{
}

bool Native::Aaa::Accounting::AuthProxy::has_data() const
{
    return (default_ !=  nullptr && default_->has_data());
}

bool Native::Aaa::Accounting::AuthProxy::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation());
}

std::string Native::Aaa::Accounting::AuthProxy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auth-proxy";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::AuthProxy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_>();
        }
        return default_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    return children;
}

void Native::Aaa::Accounting::AuthProxy::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Accounting::AuthProxy::Default_::Default_()
    :
    start_stop(std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_::StartStop>())
{
    start_stop->parent = this;

    yang_name = "default"; yang_parent_name = "auth-proxy";
}

Native::Aaa::Accounting::AuthProxy::Default_::~Default_()
{
}

bool Native::Aaa::Accounting::AuthProxy::Default_::has_data() const
{
    return (start_stop !=  nullptr && start_stop->has_data());
}

bool Native::Aaa::Accounting::AuthProxy::Default_::has_operation() const
{
    return is_set(operation)
	|| (start_stop !=  nullptr && start_stop->has_operation());
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::AuthProxy::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/auth-proxy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "start-stop")
    {
        if(start_stop == nullptr)
        {
            start_stop = std::make_shared<Native::Aaa::Accounting::AuthProxy::Default_::StartStop>();
        }
        return start_stop;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::Default_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(start_stop != nullptr)
    {
        children["start-stop"] = start_stop;
    }

    return children;
}

void Native::Aaa::Accounting::AuthProxy::Default_::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Accounting::AuthProxy::Default_::StartStop::StartStop()
    :
    group{YType::str, "group"}
{
    yang_name = "start-stop"; yang_parent_name = "default";
}

Native::Aaa::Accounting::AuthProxy::Default_::StartStop::~StartStop()
{
}

bool Native::Aaa::Accounting::AuthProxy::Default_::StartStop::has_data() const
{
    return group.is_set;
}

bool Native::Aaa::Accounting::AuthProxy::Default_::StartStop::has_operation() const
{
    return is_set(operation)
	|| is_set(group.operation);
}

std::string Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "start-stop";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:accounting/auth-proxy/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group.is_set || is_set(group.operation)) leaf_name_data.push_back(group.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Accounting::AuthProxy::Default_::StartStop::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Accounting::AuthProxy::Default_::StartStop::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group")
    {
        group = value;
    }
}

Native::Aaa::Server::Server()
    :
    radius(std::make_shared<Native::Aaa::Server::Radius>())
{
    radius->parent = this;

    yang_name = "server"; yang_parent_name = "aaa";
}

Native::Aaa::Server::~Server()
{
}

bool Native::Aaa::Server::has_data() const
{
    return (radius !=  nullptr && radius->has_data());
}

bool Native::Aaa::Server::has_operation() const
{
    return is_set(operation)
	|| (radius !=  nullptr && radius->has_operation());
}

std::string Native::Aaa::Server::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XE-aaa:server";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Server::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "radius")
    {
        if(radius == nullptr)
        {
            radius = std::make_shared<Native::Aaa::Server::Radius>();
        }
        return radius;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(radius != nullptr)
    {
        children["radius"] = radius;
    }

    return children;
}

void Native::Aaa::Server::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Server::Radius::Radius()
    :
    dynamic_author(nullptr) // presence node
{
    yang_name = "radius"; yang_parent_name = "server";
}

Native::Aaa::Server::Radius::~Radius()
{
}

bool Native::Aaa::Server::Radius::has_data() const
{
    return (dynamic_author !=  nullptr && dynamic_author->has_data());
}

bool Native::Aaa::Server::Radius::has_operation() const
{
    return is_set(operation)
	|| (dynamic_author !=  nullptr && dynamic_author->has_operation());
}

std::string Native::Aaa::Server::Radius::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "radius";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::Radius::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "dynamic-author")
    {
        if(dynamic_author == nullptr)
        {
            dynamic_author = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor>();
        }
        return dynamic_author;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(dynamic_author != nullptr)
    {
        children["dynamic-author"] = dynamic_author;
    }

    return children;
}

void Native::Aaa::Server::Radius::set_value(const std::string & value_path, std::string value)
{
}

Native::Aaa::Server::Radius::DynamicAuthor::DynamicAuthor()
    :
    auth_type{YType::enumeration, "auth-type"}
    	,
    domain(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>())
	,server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>())
{
    domain->parent = this;

    server_key->parent = this;

    yang_name = "dynamic-author"; yang_parent_name = "radius";
}

Native::Aaa::Server::Radius::DynamicAuthor::~DynamicAuthor()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_data() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_data())
            return true;
    }
    return auth_type.is_set
	|| (domain !=  nullptr && domain->has_data())
	|| (server_key !=  nullptr && server_key->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::has_operation() const
{
    for (std::size_t index=0; index<client.size(); index++)
    {
        if(client[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(auth_type.operation)
	|| (domain !=  nullptr && domain->has_operation())
	|| (server_key !=  nullptr && server_key->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "dynamic-author";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::Radius::DynamicAuthor::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (auth_type.is_set || is_set(auth_type.operation)) leaf_name_data.push_back(auth_type.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "client")
    {
        for(auto const & c : client)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client>();
        c->parent = this;
        client.push_back(c);
        return c;
    }

    if(child_yang_name == "domain")
    {
        if(domain == nullptr)
        {
            domain = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain>();
        }
        return domain;
    }

    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::ServerKey>();
        }
        return server_key;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : client)
    {
        children[c->get_segment_path()] = c;
    }

    if(domain != nullptr)
    {
        children["domain"] = domain;
    }

    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "auth-type")
    {
        auth_type = value;
    }
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Client()
    :
    ip{YType::str, "ip"}
    	,
    server_key(std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>())
{
    server_key->parent = this;

    yang_name = "client"; yang_parent_name = "dynamic-author";
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::~Client()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_data() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_data())
            return true;
    }
    return ip.is_set
	|| (server_key !=  nullptr && server_key->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::has_operation() const
{
    for (std::size_t index=0; index<vrf.size(); index++)
    {
        if(vrf[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(ip.operation)
	|| (server_key !=  nullptr && server_key->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "client" <<"[ip='" <<ip <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::Radius::DynamicAuthor::Client::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ip.is_set || is_set(ip.operation)) leaf_name_data.push_back(ip.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "server-key")
    {
        if(server_key == nullptr)
        {
            server_key = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey>();
        }
        return server_key;
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
        auto c = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf>();
        c->parent = this;
        vrf.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(server_key != nullptr)
    {
        children["server-key"] = server_key;
    }

    for (auto const & c : vrf)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ip")
    {
        ip = value;
    }
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::Vrf()
    :
    name{YType::str, "name"}
{
    yang_name = "vrf"; yang_parent_name = "client";
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::~Vrf()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_data() const
{
    return name.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::has_operation() const
{
    return is_set(operation)
	|| is_set(name.operation);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf" <<"[name='" <<name <<"']";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::Vrf::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "name")
    {
        name = value;
    }
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{
    yang_name = "server-key"; yang_parent_name = "client";
}

Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(string.operation);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ServerKey' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::ServerKey()
    :
    key{YType::enumeration, "key"},
    string{YType::str, "string"}
{
    yang_name = "server-key"; yang_parent_name = "dynamic-author";
}

Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::~ServerKey()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_data() const
{
    return key.is_set
	|| string.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::has_operation() const
{
    return is_set(operation)
	|| is_set(key.operation)
	|| is_set(string.operation);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "server-key";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (key.is_set || is_set(key.operation)) leaf_name_data.push_back(key.get_name_leafdata());
    if (string.is_set || is_set(string.operation)) leaf_name_data.push_back(string.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "key")
    {
        key = value;
    }
    if(value_path == "string")
    {
        string = value;
    }
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Domain()
    :
    delimiter{YType::str, "delimiter"}
    	,
    stripping(nullptr) // presence node
{
    yang_name = "domain"; yang_parent_name = "dynamic-author";
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::~Domain()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_data() const
{
    return delimiter.is_set
	|| (stripping !=  nullptr && stripping->has_data());
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::has_operation() const
{
    return is_set(operation)
	|| is_set(delimiter.operation)
	|| (stripping !=  nullptr && stripping->has_operation());
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "domain";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delimiter.is_set || is_set(delimiter.operation)) leaf_name_data.push_back(delimiter.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "stripping")
    {
        if(stripping == nullptr)
        {
            stripping = std::make_shared<Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping>();
        }
        return stripping;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(stripping != nullptr)
    {
        children["stripping"] = stripping;
    }

    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delimiter")
    {
        delimiter = value;
    }
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::Stripping()
    :
    right_to_left{YType::empty, "right-to-left"}
{
    yang_name = "stripping"; yang_parent_name = "domain";
}

Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::~Stripping()
{
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_data() const
{
    return right_to_left.is_set;
}

bool Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::has_operation() const
{
    return is_set(operation)
	|| is_set(right_to_left.operation);
}

std::string Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "stripping";

    return path_buffer.str();

}

const EntityPath Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/aaa/Cisco-IOS-XE-aaa:server/radius/dynamic-author/domain/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (right_to_left.is_set || is_set(right_to_left.operation)) leaf_name_data.push_back(right_to_left.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Aaa::Server::Radius::DynamicAuthor::Domain::Stripping::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "right-to-left")
    {
        right_to_left = value;
    }
}

Native::Privilege::Privilege()
    :
    exec(std::make_shared<Native::Privilege::Exec>())
{
    exec->parent = this;

    yang_name = "privilege"; yang_parent_name = "native";
}

Native::Privilege::~Privilege()
{
}

bool Native::Privilege::has_data() const
{
    return (exec !=  nullptr && exec->has_data());
}

bool Native::Privilege::has_operation() const
{
    return is_set(operation)
	|| (exec !=  nullptr && exec->has_operation());
}

std::string Native::Privilege::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "privilege";

    return path_buffer.str();

}

const EntityPath Native::Privilege::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Privilege::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "exec")
    {
        if(exec == nullptr)
        {
            exec = std::make_shared<Native::Privilege::Exec>();
        }
        return exec;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(exec != nullptr)
    {
        children["exec"] = exec;
    }

    return children;
}

void Native::Privilege::set_value(const std::string & value_path, std::string value)
{
}

Native::Privilege::Exec::Exec()
{
    yang_name = "exec"; yang_parent_name = "privilege";
}

Native::Privilege::Exec::~Exec()
{
}

bool Native::Privilege::Exec::has_data() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_data())
            return true;
    }
    return false;
}

bool Native::Privilege::Exec::has_operation() const
{
    for (std::size_t index=0; index<level.size(); index++)
    {
        if(level[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::Privilege::Exec::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "exec";

    return path_buffer.str();

}

const EntityPath Native::Privilege::Exec::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/privilege/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Privilege::Exec::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "level")
    {
        for(auto const & c : level)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Privilege::Exec::Level>();
        c->parent = this;
        level.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : level)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Privilege::Exec::set_value(const std::string & value_path, std::string value)
{
}

Native::Privilege::Exec::Level::Level()
    :
    privilege{YType::uint8, "privilege"}
{
    yang_name = "level"; yang_parent_name = "exec";
}

Native::Privilege::Exec::Level::~Level()
{
}

bool Native::Privilege::Exec::Level::has_data() const
{
    for (std::size_t index=0; index<command_list.size(); index++)
    {
        if(command_list[index]->has_data())
            return true;
    }
    return privilege.is_set;
}

bool Native::Privilege::Exec::Level::has_operation() const
{
    for (std::size_t index=0; index<command_list.size(); index++)
    {
        if(command_list[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(privilege.operation);
}

std::string Native::Privilege::Exec::Level::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "level" <<"[privilege='" <<privilege <<"']";

    return path_buffer.str();

}

const EntityPath Native::Privilege::Exec::Level::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/privilege/exec/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (privilege.is_set || is_set(privilege.operation)) leaf_name_data.push_back(privilege.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Privilege::Exec::Level::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "command-list")
    {
        for(auto const & c : command_list)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::Privilege::Exec::Level::CommandList>();
        c->parent = this;
        command_list.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::Level::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : command_list)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::Privilege::Exec::Level::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "privilege")
    {
        privilege = value;
    }
}

Native::Privilege::Exec::Level::CommandList::CommandList()
    :
    command{YType::str, "command"}
{
    yang_name = "command-list"; yang_parent_name = "level";
}

Native::Privilege::Exec::Level::CommandList::~CommandList()
{
}

bool Native::Privilege::Exec::Level::CommandList::has_data() const
{
    return command.is_set;
}

bool Native::Privilege::Exec::Level::CommandList::has_operation() const
{
    return is_set(operation)
	|| is_set(command.operation);
}

std::string Native::Privilege::Exec::Level::CommandList::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "command-list" <<"[command='" <<command <<"']";

    return path_buffer.str();

}

const EntityPath Native::Privilege::Exec::Level::CommandList::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CommandList' in Cisco_IOS_XE_native cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (command.is_set || is_set(command.operation)) leaf_name_data.push_back(command.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Privilege::Exec::Level::CommandList::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Privilege::Exec::Level::CommandList::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Privilege::Exec::Level::CommandList::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "command")
    {
        command = value;
    }
}

Native::Login::Login()
    :
    delay{YType::uint8, "delay"}
    	,
    on_failure(nullptr) // presence node
	,on_success(nullptr) // presence node
{
    yang_name = "login"; yang_parent_name = "native";
}

Native::Login::~Login()
{
}

bool Native::Login::has_data() const
{
    return delay.is_set
	|| (on_failure !=  nullptr && on_failure->has_data())
	|| (on_success !=  nullptr && on_success->has_data());
}

bool Native::Login::has_operation() const
{
    return is_set(operation)
	|| is_set(delay.operation)
	|| (on_failure !=  nullptr && on_failure->has_operation())
	|| (on_success !=  nullptr && on_success->has_operation());
}

std::string Native::Login::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "login";

    return path_buffer.str();

}

const EntityPath Native::Login::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (delay.is_set || is_set(delay.operation)) leaf_name_data.push_back(delay.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Login::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "on-failure")
    {
        if(on_failure == nullptr)
        {
            on_failure = std::make_shared<Native::Login::OnFailure>();
        }
        return on_failure;
    }

    if(child_yang_name == "on-success")
    {
        if(on_success == nullptr)
        {
            on_success = std::make_shared<Native::Login::OnSuccess>();
        }
        return on_success;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(on_failure != nullptr)
    {
        children["on-failure"] = on_failure;
    }

    if(on_success != nullptr)
    {
        children["on-success"] = on_success;
    }

    return children;
}

void Native::Login::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "delay")
    {
        delay = value;
    }
}

Native::Login::OnFailure::OnFailure()
    :
    log(nullptr) // presence node
{
    yang_name = "on-failure"; yang_parent_name = "login";
}

Native::Login::OnFailure::~OnFailure()
{
}

bool Native::Login::OnFailure::has_data() const
{
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnFailure::has_operation() const
{
    return is_set(operation)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-failure";

    return path_buffer.str();

}

const EntityPath Native::Login::OnFailure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Login::OnFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnFailure::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Login::OnFailure::set_value(const std::string & value_path, std::string value)
{
}

Native::Login::OnFailure::Log::Log()
    :
    every{YType::uint16, "every"}
{
    yang_name = "log"; yang_parent_name = "on-failure";
}

Native::Login::OnFailure::Log::~Log()
{
}

bool Native::Login::OnFailure::Log::has_data() const
{
    return every.is_set;
}

bool Native::Login::OnFailure::Log::has_operation() const
{
    return is_set(operation)
	|| is_set(every.operation);
}

std::string Native::Login::OnFailure::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";

    return path_buffer.str();

}

const EntityPath Native::Login::OnFailure::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/login/on-failure/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.operation)) leaf_name_data.push_back(every.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Login::OnFailure::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnFailure::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Login::OnFailure::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "every")
    {
        every = value;
    }
}

Native::Login::OnSuccess::OnSuccess()
    :
    log(nullptr) // presence node
{
    yang_name = "on-success"; yang_parent_name = "login";
}

Native::Login::OnSuccess::~OnSuccess()
{
}

bool Native::Login::OnSuccess::has_data() const
{
    return (log !=  nullptr && log->has_data());
}

bool Native::Login::OnSuccess::has_operation() const
{
    return is_set(operation)
	|| (log !=  nullptr && log->has_operation());
}

std::string Native::Login::OnSuccess::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "on-success";

    return path_buffer.str();

}

const EntityPath Native::Login::OnSuccess::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/login/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Login::OnSuccess::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "log")
    {
        if(log == nullptr)
        {
            log = std::make_shared<Native::Login::OnSuccess::Log>();
        }
        return log;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnSuccess::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(log != nullptr)
    {
        children["log"] = log;
    }

    return children;
}

void Native::Login::OnSuccess::set_value(const std::string & value_path, std::string value)
{
}

Native::Login::OnSuccess::Log::Log()
    :
    every{YType::uint16, "every"}
{
    yang_name = "log"; yang_parent_name = "on-success";
}

Native::Login::OnSuccess::Log::~Log()
{
}

bool Native::Login::OnSuccess::Log::has_data() const
{
    return every.is_set;
}

bool Native::Login::OnSuccess::Log::has_operation() const
{
    return is_set(operation)
	|| is_set(every.operation);
}

std::string Native::Login::OnSuccess::Log::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "log";

    return path_buffer.str();

}

const EntityPath Native::Login::OnSuccess::Log::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/login/on-success/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (every.is_set || is_set(every.operation)) leaf_name_data.push_back(every.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Login::OnSuccess::Log::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Login::OnSuccess::Log::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Login::OnSuccess::Log::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "every")
    {
        every = value;
    }
}

Native::Multilink::Multilink()
    :
    bundle_name{YType::enumeration, "Cisco-IOS-XE-ppp:bundle-name"},
    virtual_template{YType::uint16, "Cisco-IOS-XE-ppp:virtual-template"}
{
    yang_name = "multilink"; yang_parent_name = "native";
}

Native::Multilink::~Multilink()
{
}

bool Native::Multilink::has_data() const
{
    return bundle_name.is_set
	|| virtual_template.is_set;
}

bool Native::Multilink::has_operation() const
{
    return is_set(operation)
	|| is_set(bundle_name.operation)
	|| is_set(virtual_template.operation);
}

std::string Native::Multilink::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "multilink";

    return path_buffer.str();

}

const EntityPath Native::Multilink::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bundle_name.is_set || is_set(bundle_name.operation)) leaf_name_data.push_back(bundle_name.get_name_leafdata());
    if (virtual_template.is_set || is_set(virtual_template.operation)) leaf_name_data.push_back(virtual_template.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Multilink::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Multilink::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Multilink::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bundle-name")
    {
        bundle_name = value;
    }
    if(value_path == "virtual-template")
    {
        virtual_template = value;
    }
}

Native::MacAddressTable::MacAddressTable()
    :
    evc_xconnect(std::make_shared<Native::MacAddressTable::EvcXconnect>())
	,learning(std::make_shared<Native::MacAddressTable::Learning>())
	,limit(std::make_shared<Native::MacAddressTable::Limit>())
{
    evc_xconnect->parent = this;

    learning->parent = this;

    limit->parent = this;

    yang_name = "mac-address-table"; yang_parent_name = "native";
}

Native::MacAddressTable::~MacAddressTable()
{
}

bool Native::MacAddressTable::has_data() const
{
    return (evc_xconnect !=  nullptr && evc_xconnect->has_data())
	|| (learning !=  nullptr && learning->has_data())
	|| (limit !=  nullptr && limit->has_data());
}

bool Native::MacAddressTable::has_operation() const
{
    return is_set(operation)
	|| (evc_xconnect !=  nullptr && evc_xconnect->has_operation())
	|| (learning !=  nullptr && learning->has_operation())
	|| (limit !=  nullptr && limit->has_operation());
}

std::string Native::MacAddressTable::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-address-table";

    return path_buffer.str();

}

const EntityPath Native::MacAddressTable::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::MacAddressTable::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "evc-xconnect")
    {
        if(evc_xconnect == nullptr)
        {
            evc_xconnect = std::make_shared<Native::MacAddressTable::EvcXconnect>();
        }
        return evc_xconnect;
    }

    if(child_yang_name == "learning")
    {
        if(learning == nullptr)
        {
            learning = std::make_shared<Native::MacAddressTable::Learning>();
        }
        return learning;
    }

    if(child_yang_name == "limit")
    {
        if(limit == nullptr)
        {
            limit = std::make_shared<Native::MacAddressTable::Limit>();
        }
        return limit;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(evc_xconnect != nullptr)
    {
        children["evc-xconnect"] = evc_xconnect;
    }

    if(learning != nullptr)
    {
        children["learning"] = learning;
    }

    if(limit != nullptr)
    {
        children["limit"] = limit;
    }

    return children;
}

void Native::MacAddressTable::set_value(const std::string & value_path, std::string value)
{
}

Native::MacAddressTable::EvcXconnect::EvcXconnect()
    :
    l2pt_forward_all{YType::empty, "l2pt-forward-all"}
{
    yang_name = "evc-xconnect"; yang_parent_name = "mac-address-table";
}

Native::MacAddressTable::EvcXconnect::~EvcXconnect()
{
}

bool Native::MacAddressTable::EvcXconnect::has_data() const
{
    return l2pt_forward_all.is_set;
}

bool Native::MacAddressTable::EvcXconnect::has_operation() const
{
    return is_set(operation)
	|| is_set(l2pt_forward_all.operation);
}

std::string Native::MacAddressTable::EvcXconnect::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "evc-xconnect";

    return path_buffer.str();

}

const EntityPath Native::MacAddressTable::EvcXconnect::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (l2pt_forward_all.is_set || is_set(l2pt_forward_all.operation)) leaf_name_data.push_back(l2pt_forward_all.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::MacAddressTable::EvcXconnect::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::EvcXconnect::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::EvcXconnect::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "l2pt-forward-all")
    {
        l2pt_forward_all = value;
    }
}

Native::MacAddressTable::Limit::Limit()
{
    yang_name = "limit"; yang_parent_name = "mac-address-table";
}

Native::MacAddressTable::Limit::~Limit()
{
}

bool Native::MacAddressTable::Limit::has_data() const
{
    for (std::size_t index=0; index<bdomain.size(); index++)
    {
        if(bdomain[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Limit::has_operation() const
{
    for (std::size_t index=0; index<bdomain.size(); index++)
    {
        if(bdomain[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::MacAddressTable::Limit::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "limit";

    return path_buffer.str();

}

const EntityPath Native::MacAddressTable::Limit::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::MacAddressTable::Limit::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bdomain")
    {
        for(auto const & c : bdomain)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Native::MacAddressTable::Limit::Bdomain>();
        c->parent = this;
        bdomain.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Limit::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : bdomain)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MacAddressTable::Limit::set_value(const std::string & value_path, std::string value)
{
}

Native::MacAddressTable::Limit::Bdomain::Bdomain()
    :
    number{YType::uint16, "number"},
    action{YType::enumeration, "action"},
    maximum{YType::uint32, "maximum"}
{
    yang_name = "bdomain"; yang_parent_name = "limit";
}

Native::MacAddressTable::Limit::Bdomain::~Bdomain()
{
}

bool Native::MacAddressTable::Limit::Bdomain::has_data() const
{
    return number.is_set
	|| action.is_set
	|| maximum.is_set;
}

bool Native::MacAddressTable::Limit::Bdomain::has_operation() const
{
    return is_set(operation)
	|| is_set(number.operation)
	|| is_set(action.operation)
	|| is_set(maximum.operation);
}

std::string Native::MacAddressTable::Limit::Bdomain::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bdomain" <<"[number='" <<number <<"']";

    return path_buffer.str();

}

const EntityPath Native::MacAddressTable::Limit::Bdomain::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/limit/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (number.is_set || is_set(number.operation)) leaf_name_data.push_back(number.get_name_leafdata());
    if (action.is_set || is_set(action.operation)) leaf_name_data.push_back(action.get_name_leafdata());
    if (maximum.is_set || is_set(maximum.operation)) leaf_name_data.push_back(maximum.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::MacAddressTable::Limit::Bdomain::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Limit::Bdomain::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::Limit::Bdomain::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "number")
    {
        number = value;
    }
    if(value_path == "action")
    {
        action = value;
    }
    if(value_path == "maximum")
    {
        maximum = value;
    }
}

Native::MacAddressTable::Learning::Learning()
{
    yang_name = "learning"; yang_parent_name = "mac-address-table";
}

Native::MacAddressTable::Learning::~Learning()
{
}

bool Native::MacAddressTable::Learning::has_data() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_data())
            return true;
    }
    return false;
}

bool Native::MacAddressTable::Learning::has_operation() const
{
    for (std::size_t index=0; index<vlan.size(); index++)
    {
        if(vlan[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Native::MacAddressTable::Learning::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "learning";

    return path_buffer.str();

}

const EntityPath Native::MacAddressTable::Learning::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::MacAddressTable::Learning::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
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
        auto c = std::make_shared<Native::MacAddressTable::Learning::Vlan>();
        c->parent = this;
        vlan.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Learning::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vlan)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Native::MacAddressTable::Learning::set_value(const std::string & value_path, std::string value)
{
}

Native::MacAddressTable::Learning::Vlan::Vlan()
    :
    id{YType::uint16, "id"},
    module{YType::uint8, "module"}
{
    yang_name = "vlan"; yang_parent_name = "learning";
}

Native::MacAddressTable::Learning::Vlan::~Vlan()
{
}

bool Native::MacAddressTable::Learning::Vlan::has_data() const
{
    return id.is_set
	|| module.is_set;
}

bool Native::MacAddressTable::Learning::Vlan::has_operation() const
{
    return is_set(operation)
	|| is_set(id.operation)
	|| is_set(module.operation);
}

std::string Native::MacAddressTable::Learning::Vlan::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vlan" <<"[id='" <<id <<"']";

    return path_buffer.str();

}

const EntityPath Native::MacAddressTable::Learning::Vlan::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/mac-address-table/learning/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (id.is_set || is_set(id.operation)) leaf_name_data.push_back(id.get_name_leafdata());
    if (module.is_set || is_set(module.operation)) leaf_name_data.push_back(module.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::MacAddressTable::Learning::Vlan::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::MacAddressTable::Learning::Vlan::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::MacAddressTable::Learning::Vlan::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "id")
    {
        id = value;
    }
    if(value_path == "module")
    {
        module = value;
    }
}

Native::Redundancy::Redundancy()
    :
    maintenance_mode{YType::empty, "maintenance-mode"},
    mode{YType::enumeration, "mode"}
    	,
    interchassis(std::make_shared<Native::Redundancy::Interchassis>())
	,main_cpu(nullptr) // presence node
	,policy(std::make_shared<Native::Redundancy::Policy>())
	,timer(std::make_shared<Native::Redundancy::Timer>())
{
    interchassis->parent = this;

    policy->parent = this;

    timer->parent = this;

    yang_name = "redundancy"; yang_parent_name = "native";
}

Native::Redundancy::~Redundancy()
{
}

bool Native::Redundancy::has_data() const
{
    return maintenance_mode.is_set
	|| mode.is_set
	|| (interchassis !=  nullptr && interchassis->has_data())
	|| (main_cpu !=  nullptr && main_cpu->has_data())
	|| (policy !=  nullptr && policy->has_data())
	|| (timer !=  nullptr && timer->has_data());
}

bool Native::Redundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(maintenance_mode.operation)
	|| is_set(mode.operation)
	|| (interchassis !=  nullptr && interchassis->has_operation())
	|| (main_cpu !=  nullptr && main_cpu->has_operation())
	|| (policy !=  nullptr && policy->has_operation())
	|| (timer !=  nullptr && timer->has_operation());
}

std::string Native::Redundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "redundancy";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (maintenance_mode.is_set || is_set(maintenance_mode.operation)) leaf_name_data.push_back(maintenance_mode.get_name_leafdata());
    if (mode.is_set || is_set(mode.operation)) leaf_name_data.push_back(mode.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interchassis")
    {
        if(interchassis == nullptr)
        {
            interchassis = std::make_shared<Native::Redundancy::Interchassis>();
        }
        return interchassis;
    }

    if(child_yang_name == "main-cpu")
    {
        if(main_cpu == nullptr)
        {
            main_cpu = std::make_shared<Native::Redundancy::MainCpu>();
        }
        return main_cpu;
    }

    if(child_yang_name == "policy")
    {
        if(policy == nullptr)
        {
            policy = std::make_shared<Native::Redundancy::Policy>();
        }
        return policy;
    }

    if(child_yang_name == "timer")
    {
        if(timer == nullptr)
        {
            timer = std::make_shared<Native::Redundancy::Timer>();
        }
        return timer;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(interchassis != nullptr)
    {
        children["interchassis"] = interchassis;
    }

    if(main_cpu != nullptr)
    {
        children["main-cpu"] = main_cpu;
    }

    if(policy != nullptr)
    {
        children["policy"] = policy;
    }

    if(timer != nullptr)
    {
        children["timer"] = timer;
    }

    return children;
}

void Native::Redundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "maintenance-mode")
    {
        maintenance_mode = value;
    }
    if(value_path == "mode")
    {
        mode = value;
    }
}

Native::Redundancy::MainCpu::MainCpu()
    :
    auto_sync(std::make_shared<Native::Redundancy::MainCpu::AutoSync>())
	,standby(std::make_shared<Native::Redundancy::MainCpu::Standby>())
{
    auto_sync->parent = this;

    standby->parent = this;

    yang_name = "main-cpu"; yang_parent_name = "redundancy";
}

Native::Redundancy::MainCpu::~MainCpu()
{
}

bool Native::Redundancy::MainCpu::has_data() const
{
    return (auto_sync !=  nullptr && auto_sync->has_data())
	|| (standby !=  nullptr && standby->has_data());
}

bool Native::Redundancy::MainCpu::has_operation() const
{
    return is_set(operation)
	|| (auto_sync !=  nullptr && auto_sync->has_operation())
	|| (standby !=  nullptr && standby->has_operation());
}

std::string Native::Redundancy::MainCpu::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "main-cpu";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::MainCpu::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "auto-sync")
    {
        if(auto_sync == nullptr)
        {
            auto_sync = std::make_shared<Native::Redundancy::MainCpu::AutoSync>();
        }
        return auto_sync;
    }

    if(child_yang_name == "standby")
    {
        if(standby == nullptr)
        {
            standby = std::make_shared<Native::Redundancy::MainCpu::Standby>();
        }
        return standby;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(auto_sync != nullptr)
    {
        children["auto-sync"] = auto_sync;
    }

    if(standby != nullptr)
    {
        children["standby"] = standby;
    }

    return children;
}

void Native::Redundancy::MainCpu::set_value(const std::string & value_path, std::string value)
{
}

Native::Redundancy::MainCpu::AutoSync::AutoSync()
    :
    bootvar{YType::empty, "bootvar"},
    config_register{YType::empty, "config-register"},
    running_config{YType::empty, "running-config"},
    standard{YType::empty, "standard"}
{
    yang_name = "auto-sync"; yang_parent_name = "main-cpu";
}

Native::Redundancy::MainCpu::AutoSync::~AutoSync()
{
}

bool Native::Redundancy::MainCpu::AutoSync::has_data() const
{
    return bootvar.is_set
	|| config_register.is_set
	|| running_config.is_set
	|| standard.is_set;
}

bool Native::Redundancy::MainCpu::AutoSync::has_operation() const
{
    return is_set(operation)
	|| is_set(bootvar.operation)
	|| is_set(config_register.operation)
	|| is_set(running_config.operation)
	|| is_set(standard.operation);
}

std::string Native::Redundancy::MainCpu::AutoSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "auto-sync";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::MainCpu::AutoSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bootvar.is_set || is_set(bootvar.operation)) leaf_name_data.push_back(bootvar.get_name_leafdata());
    if (config_register.is_set || is_set(config_register.operation)) leaf_name_data.push_back(config_register.get_name_leafdata());
    if (running_config.is_set || is_set(running_config.operation)) leaf_name_data.push_back(running_config.get_name_leafdata());
    if (standard.is_set || is_set(standard.operation)) leaf_name_data.push_back(standard.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::AutoSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::AutoSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::AutoSync::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bootvar")
    {
        bootvar = value;
    }
    if(value_path == "config-register")
    {
        config_register = value;
    }
    if(value_path == "running-config")
    {
        running_config = value;
    }
    if(value_path == "standard")
    {
        standard = value;
    }
}

Native::Redundancy::MainCpu::Standby::Standby()
    :
    console(std::make_shared<Native::Redundancy::MainCpu::Standby::Console>())
	,initialization(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>())
{
    console->parent = this;

    initialization->parent = this;

    yang_name = "standby"; yang_parent_name = "main-cpu";
}

Native::Redundancy::MainCpu::Standby::~Standby()
{
}

bool Native::Redundancy::MainCpu::Standby::has_data() const
{
    return (console !=  nullptr && console->has_data())
	|| (initialization !=  nullptr && initialization->has_data());
}

bool Native::Redundancy::MainCpu::Standby::has_operation() const
{
    return is_set(operation)
	|| (console !=  nullptr && console->has_operation())
	|| (initialization !=  nullptr && initialization->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "standby";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::MainCpu::Standby::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "console")
    {
        if(console == nullptr)
        {
            console = std::make_shared<Native::Redundancy::MainCpu::Standby::Console>();
        }
        return console;
    }

    if(child_yang_name == "initialization")
    {
        if(initialization == nullptr)
        {
            initialization = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization>();
        }
        return initialization;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(console != nullptr)
    {
        children["console"] = console;
    }

    if(initialization != nullptr)
    {
        children["initialization"] = initialization;
    }

    return children;
}

void Native::Redundancy::MainCpu::Standby::set_value(const std::string & value_path, std::string value)
{
}

Native::Redundancy::MainCpu::Standby::Console::Console()
    :
    enable{YType::empty, "enable"}
{
    yang_name = "console"; yang_parent_name = "standby";
}

Native::Redundancy::MainCpu::Standby::Console::~Console()
{
}

bool Native::Redundancy::MainCpu::Standby::Console::has_data() const
{
    return enable.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Console::has_operation() const
{
    return is_set(operation)
	|| is_set(enable.operation);
}

std::string Native::Redundancy::MainCpu::Standby::Console::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "console";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::MainCpu::Standby::Console::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (enable.is_set || is_set(enable.operation)) leaf_name_data.push_back(enable.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Console::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Console::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::Standby::Console::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "enable")
    {
        enable = value;
    }
}

Native::Redundancy::MainCpu::Standby::Initialization::Initialization()
    :
    delay(std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>())
{
    delay->parent = this;

    yang_name = "initialization"; yang_parent_name = "standby";
}

Native::Redundancy::MainCpu::Standby::Initialization::~Initialization()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_data() const
{
    return (delay !=  nullptr && delay->has_data());
}

bool Native::Redundancy::MainCpu::Standby::Initialization::has_operation() const
{
    return is_set(operation)
	|| (delay !=  nullptr && delay->has_operation());
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "initialization";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::MainCpu::Standby::Initialization::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Initialization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "delay")
    {
        if(delay == nullptr)
        {
            delay = std::make_shared<Native::Redundancy::MainCpu::Standby::Initialization::Delay>();
        }
        return delay;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Initialization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(delay != nullptr)
    {
        children["delay"] = delay;
    }

    return children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::set_value(const std::string & value_path, std::string value)
{
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::Delay()
    :
    boot_only{YType::empty, "boot-only"},
    second{YType::uint16, "second"}
{
    yang_name = "delay"; yang_parent_name = "initialization";
}

Native::Redundancy::MainCpu::Standby::Initialization::Delay::~Delay()
{
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_data() const
{
    return boot_only.is_set
	|| second.is_set;
}

bool Native::Redundancy::MainCpu::Standby::Initialization::Delay::has_operation() const
{
    return is_set(operation)
	|| is_set(boot_only.operation)
	|| is_set(second.operation);
}

std::string Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "delay";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/main-cpu/standby/initialization/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (boot_only.is_set || is_set(boot_only.operation)) leaf_name_data.push_back(boot_only.get_name_leafdata());
    if (second.is_set || is_set(second.operation)) leaf_name_data.push_back(second.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::MainCpu::Standby::Initialization::Delay::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::MainCpu::Standby::Initialization::Delay::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "boot-only")
    {
        boot_only = value;
    }
    if(value_path == "second")
    {
        second = value;
    }
}

Native::Redundancy::Policy::Policy()
    :
    config_sync(std::make_shared<Native::Redundancy::Policy::ConfigSync>())
{
    config_sync->parent = this;

    yang_name = "policy"; yang_parent_name = "redundancy";
}

Native::Redundancy::Policy::~Policy()
{
}

bool Native::Redundancy::Policy::has_data() const
{
    return (config_sync !=  nullptr && config_sync->has_data());
}

bool Native::Redundancy::Policy::has_operation() const
{
    return is_set(operation)
	|| (config_sync !=  nullptr && config_sync->has_operation());
}

std::string Native::Redundancy::Policy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "policy";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Policy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "config-sync")
    {
        if(config_sync == nullptr)
        {
            config_sync = std::make_shared<Native::Redundancy::Policy::ConfigSync>();
        }
        return config_sync;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(config_sync != nullptr)
    {
        children["config-sync"] = config_sync;
    }

    return children;
}

void Native::Redundancy::Policy::set_value(const std::string & value_path, std::string value)
{
}

Native::Redundancy::Policy::ConfigSync::ConfigSync()
    :
    bulk(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>())
	,lbl(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>())
{
    bulk->parent = this;

    lbl->parent = this;

    yang_name = "config-sync"; yang_parent_name = "policy";
}

Native::Redundancy::Policy::ConfigSync::~ConfigSync()
{
}

bool Native::Redundancy::Policy::ConfigSync::has_data() const
{
    return (bulk !=  nullptr && bulk->has_data())
	|| (lbl !=  nullptr && lbl->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::has_operation() const
{
    return is_set(operation)
	|| (bulk !=  nullptr && bulk->has_operation())
	|| (lbl !=  nullptr && lbl->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "config-sync";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Policy::ConfigSync::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bulk")
    {
        if(bulk == nullptr)
        {
            bulk = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk>();
        }
        return bulk;
    }

    if(child_yang_name == "lbl")
    {
        if(lbl == nullptr)
        {
            lbl = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl>();
        }
        return lbl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(bulk != nullptr)
    {
        children["bulk"] = bulk;
    }

    if(lbl != nullptr)
    {
        children["lbl"] = lbl;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::set_value(const std::string & value_path, std::string value)
{
}

Native::Redundancy::Policy::ConfigSync::Bulk::Bulk()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>())
{
    prc->parent = this;

    yang_name = "bulk"; yang_parent_name = "config-sync";
}

Native::Redundancy::Policy::ConfigSync::Bulk::~Bulk()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_data() const
{
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::has_operation() const
{
    return is_set(operation)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bulk";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Policy::ConfigSync::Bulk::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Bulk::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Bulk::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::set_value(const std::string & value_path, std::string value)
{
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::Prc()
    :
    reload{YType::boolean, "reload"}
{
    yang_name = "prc"; yang_parent_name = "bulk";
}

Native::Redundancy::Policy::ConfigSync::Bulk::Prc::~Prc()
{
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_data() const
{
    return reload.is_set;
}

bool Native::Redundancy::Policy::ConfigSync::Bulk::Prc::has_operation() const
{
    return is_set(operation)
	|| is_set(reload.operation);
}

std::string Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "prc";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/bulk/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (reload.is_set || is_set(reload.operation)) leaf_name_data.push_back(reload.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Bulk::Prc::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Native::Redundancy::Policy::ConfigSync::Bulk::Prc::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "reload")
    {
        reload = value;
    }
}

Native::Redundancy::Policy::ConfigSync::Lbl::Lbl()
    :
    prc(std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>())
{
    prc->parent = this;

    yang_name = "lbl"; yang_parent_name = "config-sync";
}

Native::Redundancy::Policy::ConfigSync::Lbl::~Lbl()
{
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_data() const
{
    return (prc !=  nullptr && prc->has_data());
}

bool Native::Redundancy::Policy::ConfigSync::Lbl::has_operation() const
{
    return is_set(operation)
	|| (prc !=  nullptr && prc->has_operation());
}

std::string Native::Redundancy::Policy::ConfigSync::Lbl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "lbl";

    return path_buffer.str();

}

const EntityPath Native::Redundancy::Policy::ConfigSync::Lbl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XE-native:native/redundancy/policy/config-sync/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Native::Redundancy::Policy::ConfigSync::Lbl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "prc")
    {
        if(prc == nullptr)
        {
            prc = std::make_shared<Native::Redundancy::Policy::ConfigSync::Lbl::Prc>();
        }
        return prc;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Native::Redundancy::Policy::ConfigSync::Lbl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(prc != nullptr)
    {
        children["prc"] = prc;
    }

    return children;
}

void Native::Redundancy::Policy::ConfigSync::Lbl::set_value(const std::string & value_path, std::string value)
{
}

const Enum::YLeaf Native::Logging::Trap::SeverityEnum::alerts {0, "alerts"};
const Enum::YLeaf Native::Logging::Trap::SeverityEnum::critical {1, "critical"};
const Enum::YLeaf Native::Logging::Trap::SeverityEnum::debugging {2, "debugging"};
const Enum::YLeaf Native::Logging::Trap::SeverityEnum::emergencies {3, "emergencies"};
const Enum::YLeaf Native::Logging::Trap::SeverityEnum::errors {4, "errors"};
const Enum::YLeaf Native::Logging::Trap::SeverityEnum::informational {5, "informational"};
const Enum::YLeaf Native::Logging::Trap::SeverityEnum::notifications {6, "notifications"};
const Enum::YLeaf Native::Logging::Trap::SeverityEnum::warnings {7, "warnings"};

const Enum::YLeaf Native::Aaa::SessionIdEnum::common {0, "common"};
const Enum::YLeaf Native::Aaa::SessionIdEnum::unique {1, "unique"};

const Enum::YLeaf Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::EncryptionEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Group::Server::Tacacsplus::ServerPrivate::Key::EncryptionEnum::Y_7 {1, "7"};

const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Dot1XList::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Dot1XList::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Default_::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Dot1X::Default_::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Enable::Default_::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Enable::Default_::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::NameEnum::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A1::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::GroupEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A1::CacheEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::CacheEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A1::CacheEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A2::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::GroupEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A2::CacheEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::CacheEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A2::CacheEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A3::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::GroupEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A3::CacheEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::CacheEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A3::CacheEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A4::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::GroupEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Login::A4::CacheEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::CacheEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Login::A4::CacheEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::CacheEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A1::CacheEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::CacheEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A2::CacheEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::CacheEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A3::CacheEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::CacheEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authentication::Ppp::A4::CacheEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::AuthType::Default_::GroupEnum::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Authorization::Commands::ListNameEnum::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::Commands::GroupEnum::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::GroupEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::CacheEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::CacheEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A1::CacheEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::GroupEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::CacheEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::CacheEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A2::CacheEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::GroupEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::CacheEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::CacheEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A3::CacheEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::GroupEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::CacheEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::CacheEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Exec::A4::CacheEnum::tacacs__PLUS__ {2, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Eventmanager::GroupEnum::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Authorization::Network::IdEnum::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A1::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A1::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A1::CacheEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A1::CacheEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A2::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A2::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A2::CacheEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A2::CacheEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A3::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A3::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A3::CacheEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A3::CacheEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A4::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A4::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Authorization::Network::A4::CacheEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Authorization::Network::A4::CacheEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ListNameEnum::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionTypeEnum::none {0, "none"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionTypeEnum::start_stop {1, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Commands::ActionTypeEnum::stop_only {2, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Commands::GroupEnum::tacacs__PLUS__ {0, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StartStop::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Connection::StopOnly::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Dot1X::StartStop::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Dot1X::StartStop::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Exec::StartStop::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Exec::StartStop::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Exec::StopOnly::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Exec::StopOnly::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StartStop::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::ExecSubmode::Exec::ActionType::StopOnly::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Accounting::Network::IdEnum::default_ {0, "default"};

const Enum::YLeaf Native::Aaa::Accounting::Network::ModeEnum::start_stop {0, "start-stop"};
const Enum::YLeaf Native::Aaa::Accounting::Network::ModeEnum::stop_only {1, "stop-only"};

const Enum::YLeaf Native::Aaa::Accounting::Network::StartStop::GroupEnum::radius {0, "radius"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A1::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A1::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A1::GroupEnum::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A2::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A2::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A2::GroupEnum::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A3::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A3::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A3::GroupEnum::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::Network::A4::GroupEnum::ldap {0, "ldap"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A4::GroupEnum::radius {1, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::Network::A4::GroupEnum::tacacs {2, "tacacs"};

const Enum::YLeaf Native::Aaa::Accounting::System::Default_::StartStop::GroupEnum::radius {0, "radius"};
const Enum::YLeaf Native::Aaa::Accounting::System::Default_::StartStop::GroupEnum::tacacs__PLUS__ {1, "tacacs+"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthTypeEnum::all {0, "all"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthTypeEnum::any {1, "any"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::AuthTypeEnum::session_key {2, "session-key"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::KeyEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::KeyEnum::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::Client::ServerKey::KeyEnum::Y_7 {2, "7"};

const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::KeyEnum::Y_0 {0, "0"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::KeyEnum::Y_6 {1, "6"};
const Enum::YLeaf Native::Aaa::Server::Radius::DynamicAuthor::ServerKey::KeyEnum::Y_7 {2, "7"};

const Enum::YLeaf Native::Multilink::BundleNameEnum::authenticated {0, "authenticated"};
const Enum::YLeaf Native::Multilink::BundleNameEnum::both {1, "both"};
const Enum::YLeaf Native::Multilink::BundleNameEnum::endpoint {2, "endpoint"};
const Enum::YLeaf Native::Multilink::BundleNameEnum::rfc {3, "rfc"};

const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::ActionEnum::warning {0, "warning"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::ActionEnum::limit {1, "limit"};
const Enum::YLeaf Native::MacAddressTable::Limit::Bdomain::ActionEnum::shutdown {2, "shutdown"};

const Enum::YLeaf Native::Redundancy::ModeEnum::rpr {0, "rpr"};
const Enum::YLeaf Native::Redundancy::ModeEnum::rpr_plus {1, "rpr-plus"};
const Enum::YLeaf Native::Redundancy::ModeEnum::sso {2, "sso"};
const Enum::YLeaf Native::Redundancy::ModeEnum::none {3, "none"};


}
}

