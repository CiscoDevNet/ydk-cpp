
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_xml_ttyagent_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_man_xml_ttyagent_oper {

Netconf::Netconf()
    :
    agent(std::make_shared<Netconf::Agent>())
{
    agent->parent = this;
    children["agent"] = agent;

    yang_name = "netconf"; yang_parent_name = "Cisco-IOS-XR-man-xml-ttyagent-oper";
}

Netconf::~Netconf()
{
}

bool Netconf::has_data() const
{
    return (agent !=  nullptr && agent->has_data());
}

bool Netconf::has_operation() const
{
    return is_set(operation)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf";

    return path_buffer.str();

}

EntityPath Netconf::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "agent")
    {
        if(agent != nullptr)
        {
            children["agent"] = agent;
        }
        else
        {
            agent = std::make_shared<Netconf::Agent>();
            agent->parent = this;
            children["agent"] = agent;
        }
        return children.at("agent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Netconf::get_children()
{
    if(children.find("agent") == children.end())
    {
        if(agent != nullptr)
        {
            children["agent"] = agent;
        }
    }

    return children;
}

void Netconf::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Netconf::clone_ptr() const
{
    return std::make_shared<Netconf>();
}

std::string Netconf::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Netconf::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Netconf::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Netconf::Agent::Agent()
    :
    tty(std::make_shared<Netconf::Agent::Tty>())
{
    tty->parent = this;
    children["tty"] = tty;

    yang_name = "agent"; yang_parent_name = "netconf";
}

Netconf::Agent::~Agent()
{
}

bool Netconf::Agent::has_data() const
{
    return (tty !=  nullptr && tty->has_data());
}

bool Netconf::Agent::has_operation() const
{
    return is_set(operation)
	|| (tty !=  nullptr && tty->has_operation());
}

std::string Netconf::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";

    return path_buffer.str();

}

EntityPath Netconf::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Netconf::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tty")
    {
        if(tty != nullptr)
        {
            children["tty"] = tty;
        }
        else
        {
            tty = std::make_shared<Netconf::Agent::Tty>();
            tty->parent = this;
            children["tty"] = tty;
        }
        return children.at("tty");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Netconf::Agent::get_children()
{
    if(children.find("tty") == children.end())
    {
        if(tty != nullptr)
        {
            children["tty"] = tty;
        }
    }

    return children;
}

void Netconf::Agent::set_value(const std::string & value_path, std::string value)
{
}

Netconf::Agent::Tty::Tty()
    :
    sessions(std::make_shared<Netconf::Agent::Tty::Sessions>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    yang_name = "tty"; yang_parent_name = "agent";
}

Netconf::Agent::Tty::~Tty()
{
}

bool Netconf::Agent::Tty::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool Netconf::Agent::Tty::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string Netconf::Agent::Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty";

    return path_buffer.str();

}

EntityPath Netconf::Agent::Tty::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf/agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<Netconf::Agent::Tty::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Netconf::Agent::Tty::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    return children;
}

void Netconf::Agent::Tty::set_value(const std::string & value_path, std::string value)
{
}

Netconf::Agent::Tty::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "tty";
}

Netconf::Agent::Tty::Sessions::~Sessions()
{
}

bool Netconf::Agent::Tty::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Netconf::Agent::Tty::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Netconf::Agent::Tty::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Netconf::Agent::Tty::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf/agent/tty/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Netconf::Agent::Tty::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Netconf::Agent::Tty::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Netconf::Agent::Tty::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Netconf::Agent::Tty::Sessions::Session::Session()
    :
    session_id{YType::int32, "session-id"},
    admin_config_session_id{YType::str, "admin-config-session-id"},
    alarm_notification{YType::enumeration, "alarm-notification"},
    client_address{YType::str, "client-address"},
    client_port{YType::uint32, "client-port"},
    config_session_id{YType::str, "config-session-id"},
    elapsed_time{YType::uint32, "elapsed-time"},
    last_state_change{YType::uint32, "last-state-change"},
    start_time{YType::uint32, "start-time"},
    state{YType::enumeration, "state"},
    username{YType::str, "username"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

Netconf::Agent::Tty::Sessions::Session::~Session()
{
}

bool Netconf::Agent::Tty::Sessions::Session::has_data() const
{
    return session_id.is_set
	|| admin_config_session_id.is_set
	|| alarm_notification.is_set
	|| client_address.is_set
	|| client_port.is_set
	|| config_session_id.is_set
	|| elapsed_time.is_set
	|| last_state_change.is_set
	|| start_time.is_set
	|| state.is_set
	|| username.is_set
	|| vrf_name.is_set;
}

bool Netconf::Agent::Tty::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(admin_config_session_id.operation)
	|| is_set(alarm_notification.operation)
	|| is_set(client_address.operation)
	|| is_set(client_port.operation)
	|| is_set(config_session_id.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(last_state_change.operation)
	|| is_set(start_time.operation)
	|| is_set(state.operation)
	|| is_set(username.operation)
	|| is_set(vrf_name.operation);
}

std::string Netconf::Agent::Tty::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

EntityPath Netconf::Agent::Tty::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf/agent/tty/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (admin_config_session_id.is_set || is_set(admin_config_session_id.operation)) leaf_name_data.push_back(admin_config_session_id.get_name_leafdata());
    if (alarm_notification.is_set || is_set(alarm_notification.operation)) leaf_name_data.push_back(alarm_notification.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.operation)) leaf_name_data.push_back(client_address.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.operation)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (config_session_id.is_set || is_set(config_session_id.operation)) leaf_name_data.push_back(config_session_id.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (last_state_change.is_set || is_set(last_state_change.operation)) leaf_name_data.push_back(last_state_change.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Netconf::Agent::Tty::Sessions::Session::get_children()
{
    return children;
}

void Netconf::Agent::Tty::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id = value;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification = value;
    }
    if(value_path == "client-address")
    {
        client_address = value;
    }
    if(value_path == "client-port")
    {
        client_port = value;
    }
    if(value_path == "config-session-id")
    {
        config_session_id = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "last-state-change")
    {
        last_state_change = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

XrXml::XrXml()
    :
    agent(std::make_shared<XrXml::Agent>())
{
    agent->parent = this;
    children["agent"] = agent;

    yang_name = "xr-xml"; yang_parent_name = "Cisco-IOS-XR-man-xml-ttyagent-oper";
}

XrXml::~XrXml()
{
}

bool XrXml::has_data() const
{
    return (agent !=  nullptr && agent->has_data());
}

bool XrXml::has_operation() const
{
    return is_set(operation)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml";

    return path_buffer.str();

}

EntityPath XrXml::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "agent")
    {
        if(agent != nullptr)
        {
            children["agent"] = agent;
        }
        else
        {
            agent = std::make_shared<XrXml::Agent>();
            agent->parent = this;
            children["agent"] = agent;
        }
        return children.at("agent");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & XrXml::get_children()
{
    if(children.find("agent") == children.end())
    {
        if(agent != nullptr)
        {
            children["agent"] = agent;
        }
    }

    return children;
}

void XrXml::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> XrXml::clone_ptr() const
{
    return std::make_shared<XrXml>();
}

std::string XrXml::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string XrXml::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function XrXml::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

XrXml::Agent::Agent()
    :
    default_(std::make_shared<XrXml::Agent::Default_>())
	,ssl(std::make_shared<XrXml::Agent::Ssl>())
	,tty(std::make_shared<XrXml::Agent::Tty>())
{
    default_->parent = this;
    children["default"] = default_;

    ssl->parent = this;
    children["ssl"] = ssl;

    tty->parent = this;
    children["tty"] = tty;

    yang_name = "agent"; yang_parent_name = "xr-xml";
}

XrXml::Agent::~Agent()
{
}

bool XrXml::Agent::has_data() const
{
    return (default_ !=  nullptr && default_->has_data())
	|| (ssl !=  nullptr && ssl->has_data())
	|| (tty !=  nullptr && tty->has_data());
}

bool XrXml::Agent::has_operation() const
{
    return is_set(operation)
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation())
	|| (tty !=  nullptr && tty->has_operation());
}

std::string XrXml::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";

    return path_buffer.str();

}

EntityPath XrXml::Agent::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "default")
    {
        if(default_ != nullptr)
        {
            children["default"] = default_;
        }
        else
        {
            default_ = std::make_shared<XrXml::Agent::Default_>();
            default_->parent = this;
            children["default"] = default_;
        }
        return children.at("default");
    }

    if(child_yang_name == "ssl")
    {
        if(ssl != nullptr)
        {
            children["ssl"] = ssl;
        }
        else
        {
            ssl = std::make_shared<XrXml::Agent::Ssl>();
            ssl->parent = this;
            children["ssl"] = ssl;
        }
        return children.at("ssl");
    }

    if(child_yang_name == "tty")
    {
        if(tty != nullptr)
        {
            children["tty"] = tty;
        }
        else
        {
            tty = std::make_shared<XrXml::Agent::Tty>();
            tty->parent = this;
            children["tty"] = tty;
        }
        return children.at("tty");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::get_children()
{
    if(children.find("default") == children.end())
    {
        if(default_ != nullptr)
        {
            children["default"] = default_;
        }
    }

    if(children.find("ssl") == children.end())
    {
        if(ssl != nullptr)
        {
            children["ssl"] = ssl;
        }
    }

    if(children.find("tty") == children.end())
    {
        if(tty != nullptr)
        {
            children["tty"] = tty;
        }
    }

    return children;
}

void XrXml::Agent::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Tty::Tty()
    :
    sessions(std::make_shared<XrXml::Agent::Tty::Sessions>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    yang_name = "tty"; yang_parent_name = "agent";
}

XrXml::Agent::Tty::~Tty()
{
}

bool XrXml::Agent::Tty::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool XrXml::Agent::Tty::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string XrXml::Agent::Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Tty::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<XrXml::Agent::Tty::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Tty::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    return children;
}

void XrXml::Agent::Tty::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Tty::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "tty";
}

XrXml::Agent::Tty::Sessions::~Sessions()
{
}

bool XrXml::Agent::Tty::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Tty::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string XrXml::Agent::Tty::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Tty::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/tty/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<XrXml::Agent::Tty::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Tty::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void XrXml::Agent::Tty::Sessions::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Tty::Sessions::Session::Session()
    :
    session_id{YType::int32, "session-id"},
    admin_config_session_id{YType::str, "admin-config-session-id"},
    alarm_notification{YType::enumeration, "alarm-notification"},
    client_address{YType::str, "client-address"},
    client_port{YType::uint32, "client-port"},
    config_session_id{YType::str, "config-session-id"},
    elapsed_time{YType::uint32, "elapsed-time"},
    last_state_change{YType::uint32, "last-state-change"},
    start_time{YType::uint32, "start-time"},
    state{YType::enumeration, "state"},
    username{YType::str, "username"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

XrXml::Agent::Tty::Sessions::Session::~Session()
{
}

bool XrXml::Agent::Tty::Sessions::Session::has_data() const
{
    return session_id.is_set
	|| admin_config_session_id.is_set
	|| alarm_notification.is_set
	|| client_address.is_set
	|| client_port.is_set
	|| config_session_id.is_set
	|| elapsed_time.is_set
	|| last_state_change.is_set
	|| start_time.is_set
	|| state.is_set
	|| username.is_set
	|| vrf_name.is_set;
}

bool XrXml::Agent::Tty::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(admin_config_session_id.operation)
	|| is_set(alarm_notification.operation)
	|| is_set(client_address.operation)
	|| is_set(client_port.operation)
	|| is_set(config_session_id.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(last_state_change.operation)
	|| is_set(start_time.operation)
	|| is_set(state.operation)
	|| is_set(username.operation)
	|| is_set(vrf_name.operation);
}

std::string XrXml::Agent::Tty::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Tty::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/tty/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (admin_config_session_id.is_set || is_set(admin_config_session_id.operation)) leaf_name_data.push_back(admin_config_session_id.get_name_leafdata());
    if (alarm_notification.is_set || is_set(alarm_notification.operation)) leaf_name_data.push_back(alarm_notification.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.operation)) leaf_name_data.push_back(client_address.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.operation)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (config_session_id.is_set || is_set(config_session_id.operation)) leaf_name_data.push_back(config_session_id.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (last_state_change.is_set || is_set(last_state_change.operation)) leaf_name_data.push_back(last_state_change.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Tty::Sessions::Session::get_children()
{
    return children;
}

void XrXml::Agent::Tty::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id = value;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification = value;
    }
    if(value_path == "client-address")
    {
        client_address = value;
    }
    if(value_path == "client-port")
    {
        client_port = value;
    }
    if(value_path == "config-session-id")
    {
        config_session_id = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "last-state-change")
    {
        last_state_change = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

XrXml::Agent::Default_::Default_()
    :
    sessions(std::make_shared<XrXml::Agent::Default_::Sessions>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    yang_name = "default"; yang_parent_name = "agent";
}

XrXml::Agent::Default_::~Default_()
{
}

bool XrXml::Agent::Default_::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool XrXml::Agent::Default_::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string XrXml::Agent::Default_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Default_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Default_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<XrXml::Agent::Default_::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Default_::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    return children;
}

void XrXml::Agent::Default_::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Default_::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "default";
}

XrXml::Agent::Default_::Sessions::~Sessions()
{
}

bool XrXml::Agent::Default_::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Default_::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string XrXml::Agent::Default_::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Default_::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/default/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Default_::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<XrXml::Agent::Default_::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Default_::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void XrXml::Agent::Default_::Sessions::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Default_::Sessions::Session::Session()
    :
    session_id{YType::int32, "session-id"},
    admin_config_session_id{YType::str, "admin-config-session-id"},
    alarm_notification{YType::enumeration, "alarm-notification"},
    client_address{YType::str, "client-address"},
    client_port{YType::uint32, "client-port"},
    config_session_id{YType::str, "config-session-id"},
    elapsed_time{YType::uint32, "elapsed-time"},
    last_state_change{YType::uint32, "last-state-change"},
    start_time{YType::uint32, "start-time"},
    state{YType::enumeration, "state"},
    username{YType::str, "username"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

XrXml::Agent::Default_::Sessions::Session::~Session()
{
}

bool XrXml::Agent::Default_::Sessions::Session::has_data() const
{
    return session_id.is_set
	|| admin_config_session_id.is_set
	|| alarm_notification.is_set
	|| client_address.is_set
	|| client_port.is_set
	|| config_session_id.is_set
	|| elapsed_time.is_set
	|| last_state_change.is_set
	|| start_time.is_set
	|| state.is_set
	|| username.is_set
	|| vrf_name.is_set;
}

bool XrXml::Agent::Default_::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(admin_config_session_id.operation)
	|| is_set(alarm_notification.operation)
	|| is_set(client_address.operation)
	|| is_set(client_port.operation)
	|| is_set(config_session_id.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(last_state_change.operation)
	|| is_set(start_time.operation)
	|| is_set(state.operation)
	|| is_set(username.operation)
	|| is_set(vrf_name.operation);
}

std::string XrXml::Agent::Default_::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Default_::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/default/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (admin_config_session_id.is_set || is_set(admin_config_session_id.operation)) leaf_name_data.push_back(admin_config_session_id.get_name_leafdata());
    if (alarm_notification.is_set || is_set(alarm_notification.operation)) leaf_name_data.push_back(alarm_notification.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.operation)) leaf_name_data.push_back(client_address.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.operation)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (config_session_id.is_set || is_set(config_session_id.operation)) leaf_name_data.push_back(config_session_id.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (last_state_change.is_set || is_set(last_state_change.operation)) leaf_name_data.push_back(last_state_change.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Default_::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Default_::Sessions::Session::get_children()
{
    return children;
}

void XrXml::Agent::Default_::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id = value;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification = value;
    }
    if(value_path == "client-address")
    {
        client_address = value;
    }
    if(value_path == "client-port")
    {
        client_port = value;
    }
    if(value_path == "config-session-id")
    {
        config_session_id = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "last-state-change")
    {
        last_state_change = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

XrXml::Agent::Ssl::Ssl()
    :
    sessions(std::make_shared<XrXml::Agent::Ssl::Sessions>())
{
    sessions->parent = this;
    children["sessions"] = sessions;

    yang_name = "ssl"; yang_parent_name = "agent";
}

XrXml::Agent::Ssl::~Ssl()
{
}

bool XrXml::Agent::Ssl::has_data() const
{
    return (sessions !=  nullptr && sessions->has_data());
}

bool XrXml::Agent::Ssl::has_operation() const
{
    return is_set(operation)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string XrXml::Agent::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Ssl::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<XrXml::Agent::Ssl::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Ssl::get_children()
{
    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    return children;
}

void XrXml::Agent::Ssl::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Ssl::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "ssl";
}

XrXml::Agent::Ssl::Sessions::~Sessions()
{
}

bool XrXml::Agent::Ssl::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Ssl::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string XrXml::Agent::Ssl::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Ssl::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/ssl/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<XrXml::Agent::Ssl::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Ssl::Sessions::get_children()
{
    for (auto const & c : session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void XrXml::Agent::Ssl::Sessions::set_value(const std::string & value_path, std::string value)
{
}

XrXml::Agent::Ssl::Sessions::Session::Session()
    :
    session_id{YType::int32, "session-id"},
    admin_config_session_id{YType::str, "admin-config-session-id"},
    alarm_notification{YType::enumeration, "alarm-notification"},
    client_address{YType::str, "client-address"},
    client_port{YType::uint32, "client-port"},
    config_session_id{YType::str, "config-session-id"},
    elapsed_time{YType::uint32, "elapsed-time"},
    last_state_change{YType::uint32, "last-state-change"},
    start_time{YType::uint32, "start-time"},
    state{YType::enumeration, "state"},
    username{YType::str, "username"},
    vrf_name{YType::str, "vrf-name"}
{
    yang_name = "session"; yang_parent_name = "sessions";
}

XrXml::Agent::Ssl::Sessions::Session::~Session()
{
}

bool XrXml::Agent::Ssl::Sessions::Session::has_data() const
{
    return session_id.is_set
	|| admin_config_session_id.is_set
	|| alarm_notification.is_set
	|| client_address.is_set
	|| client_port.is_set
	|| config_session_id.is_set
	|| elapsed_time.is_set
	|| last_state_change.is_set
	|| start_time.is_set
	|| state.is_set
	|| username.is_set
	|| vrf_name.is_set;
}

bool XrXml::Agent::Ssl::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_id.operation)
	|| is_set(admin_config_session_id.operation)
	|| is_set(alarm_notification.operation)
	|| is_set(client_address.operation)
	|| is_set(client_port.operation)
	|| is_set(config_session_id.operation)
	|| is_set(elapsed_time.operation)
	|| is_set(last_state_change.operation)
	|| is_set(start_time.operation)
	|| is_set(state.operation)
	|| is_set(username.operation)
	|| is_set(vrf_name.operation);
}

std::string XrXml::Agent::Ssl::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']";

    return path_buffer.str();

}

EntityPath XrXml::Agent::Ssl::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/ssl/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.operation)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (admin_config_session_id.is_set || is_set(admin_config_session_id.operation)) leaf_name_data.push_back(admin_config_session_id.get_name_leafdata());
    if (alarm_notification.is_set || is_set(alarm_notification.operation)) leaf_name_data.push_back(alarm_notification.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.operation)) leaf_name_data.push_back(client_address.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.operation)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (config_session_id.is_set || is_set(config_session_id.operation)) leaf_name_data.push_back(config_session_id.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.operation)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (last_state_change.is_set || is_set(last_state_change.operation)) leaf_name_data.push_back(last_state_change.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & XrXml::Agent::Ssl::Sessions::Session::get_children()
{
    return children;
}

void XrXml::Agent::Ssl::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-id")
    {
        session_id = value;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id = value;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification = value;
    }
    if(value_path == "client-address")
    {
        client_address = value;
    }
    if(value_path == "client-port")
    {
        client_port = value;
    }
    if(value_path == "config-session-id")
    {
        config_session_id = value;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
    }
    if(value_path == "last-state-change")
    {
        last_state_change = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

const Enum::YLeaf XrXmlSessionAlarmRegisterEnum::registered {1, "registered"};
const Enum::YLeaf XrXmlSessionAlarmRegisterEnum::not_registered {2, "not-registered"};

const Enum::YLeaf XrXmlSessionStateEnum::idle {1, "idle"};
const Enum::YLeaf XrXmlSessionStateEnum::busy {2, "busy"};


}
}

