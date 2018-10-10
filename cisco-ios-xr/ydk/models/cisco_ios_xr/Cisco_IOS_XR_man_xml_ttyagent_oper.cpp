
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_man_xml_ttyagent_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_man_xml_ttyagent_oper {

Netconf::Netconf()
    :
    agent(std::make_shared<Netconf::Agent>())
{
    agent->parent = this;

    yang_name = "netconf"; yang_parent_name = "Cisco-IOS-XR-man-xml-ttyagent-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Netconf::~Netconf()
{
}

bool Netconf::has_data() const
{
    if (is_presence_container) return true;
    return (agent !=  nullptr && agent->has_data());
}

bool Netconf::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string Netconf::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<Netconf::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    return children;
}

void Netconf::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Netconf::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> Netconf::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Netconf::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

Netconf::Agent::Agent()
    :
    tty(std::make_shared<Netconf::Agent::Tty>())
{
    tty->parent = this;

    yang_name = "agent"; yang_parent_name = "netconf"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Agent::~Agent()
{
}

bool Netconf::Agent::has_data() const
{
    if (is_presence_container) return true;
    return (tty !=  nullptr && tty->has_data());
}

bool Netconf::Agent::has_operation() const
{
    return is_set(yfilter)
	|| (tty !=  nullptr && tty->has_operation());
}

std::string Netconf::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tty")
    {
        if(tty == nullptr)
        {
            tty = std::make_shared<Netconf::Agent::Tty>();
        }
        return tty;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tty != nullptr)
    {
        children["tty"] = tty;
    }

    return children;
}

void Netconf::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Netconf::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Netconf::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tty")
        return true;
    return false;
}

Netconf::Agent::Tty::Tty()
    :
    sessions(std::make_shared<Netconf::Agent::Tty::Sessions>())
{
    sessions->parent = this;

    yang_name = "tty"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Agent::Tty::~Tty()
{
}

bool Netconf::Agent::Tty::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data());
}

bool Netconf::Agent::Tty::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string Netconf::Agent::Tty::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Agent::Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Agent::Tty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Netconf::Agent::Tty::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Agent::Tty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void Netconf::Agent::Tty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Netconf::Agent::Tty::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Netconf::Agent::Tty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

Netconf::Agent::Tty::Sessions::Sessions()
    :
    session(this, {"session_id"})
{

    yang_name = "sessions"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Agent::Tty::Sessions::~Sessions()
{
}

bool Netconf::Agent::Tty::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Netconf::Agent::Tty::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Netconf::Agent::Tty::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf/agent/tty/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Agent::Tty::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Agent::Tty::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<Netconf::Agent::Tty::Sessions::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Agent::Tty::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void Netconf::Agent::Tty::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Netconf::Agent::Tty::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Netconf::Agent::Tty::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Netconf::Agent::Tty::Sessions::Session::Session()
    :
    session_id{YType::uint32, "session-id"},
    username{YType::str, "username"},
    state{YType::enumeration, "state"},
    client_address{YType::str, "client-address"},
    client_port{YType::uint32, "client-port"},
    config_session_id{YType::str, "config-session-id"},
    admin_config_session_id{YType::str, "admin-config-session-id"},
    alarm_notification{YType::enumeration, "alarm-notification"},
    vrf_name{YType::str, "vrf-name"},
    start_time{YType::uint32, "start-time"},
    elapsed_time{YType::uint32, "elapsed-time"},
    last_state_change{YType::uint32, "last-state-change"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Netconf::Agent::Tty::Sessions::Session::~Session()
{
}

bool Netconf::Agent::Tty::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| username.is_set
	|| state.is_set
	|| client_address.is_set
	|| client_port.is_set
	|| config_session_id.is_set
	|| admin_config_session_id.is_set
	|| alarm_notification.is_set
	|| vrf_name.is_set
	|| start_time.is_set
	|| elapsed_time.is_set
	|| last_state_change.is_set;
}

bool Netconf::Agent::Tty::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(client_address.yfilter)
	|| ydk::is_set(client_port.yfilter)
	|| ydk::is_set(config_session_id.yfilter)
	|| ydk::is_set(admin_config_session_id.yfilter)
	|| ydk::is_set(alarm_notification.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(last_state_change.yfilter);
}

std::string Netconf::Agent::Tty::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:netconf/agent/tty/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Netconf::Agent::Tty::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Netconf::Agent::Tty::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.yfilter)) leaf_name_data.push_back(client_address.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.yfilter)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (config_session_id.is_set || is_set(config_session_id.yfilter)) leaf_name_data.push_back(config_session_id.get_name_leafdata());
    if (admin_config_session_id.is_set || is_set(admin_config_session_id.yfilter)) leaf_name_data.push_back(admin_config_session_id.get_name_leafdata());
    if (alarm_notification.is_set || is_set(alarm_notification.yfilter)) leaf_name_data.push_back(alarm_notification.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (last_state_change.is_set || is_set(last_state_change.yfilter)) leaf_name_data.push_back(last_state_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Netconf::Agent::Tty::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Netconf::Agent::Tty::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void Netconf::Agent::Tty::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-address")
    {
        client_address = value;
        client_address.value_namespace = name_space;
        client_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-port")
    {
        client_port = value;
        client_port.value_namespace = name_space;
        client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-session-id")
    {
        config_session_id = value;
        config_session_id.value_namespace = name_space;
        config_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id = value;
        admin_config_session_id.value_namespace = name_space;
        admin_config_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification = value;
        alarm_notification.value_namespace = name_space;
        alarm_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-change")
    {
        last_state_change = value;
        last_state_change.value_namespace = name_space;
        last_state_change.value_namespace_prefix = name_space_prefix;
    }
}

void Netconf::Agent::Tty::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "client-address")
    {
        client_address.yfilter = yfilter;
    }
    if(value_path == "client-port")
    {
        client_port.yfilter = yfilter;
    }
    if(value_path == "config-session-id")
    {
        config_session_id.yfilter = yfilter;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id.yfilter = yfilter;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "last-state-change")
    {
        last_state_change.yfilter = yfilter;
    }
}

bool Netconf::Agent::Tty::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "username" || name == "state" || name == "client-address" || name == "client-port" || name == "config-session-id" || name == "admin-config-session-id" || name == "alarm-notification" || name == "vrf-name" || name == "start-time" || name == "elapsed-time" || name == "last-state-change")
        return true;
    return false;
}

XrXml::XrXml()
    :
    agent(std::make_shared<XrXml::Agent>())
{
    agent->parent = this;

    yang_name = "xr-xml"; yang_parent_name = "Cisco-IOS-XR-man-xml-ttyagent-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

XrXml::~XrXml()
{
}

bool XrXml::has_data() const
{
    if (is_presence_container) return true;
    return (agent !=  nullptr && agent->has_data());
}

bool XrXml::has_operation() const
{
    return is_set(yfilter)
	|| (agent !=  nullptr && agent->has_operation());
}

std::string XrXml::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "agent")
    {
        if(agent == nullptr)
        {
            agent = std::make_shared<XrXml::Agent>();
        }
        return agent;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(agent != nullptr)
    {
        children["agent"] = agent;
    }

    return children;
}

void XrXml::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::set_filter(const std::string & value_path, YFilter yfilter)
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

std::map<std::pair<std::string, std::string>, std::string> XrXml::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool XrXml::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "agent")
        return true;
    return false;
}

XrXml::Agent::Agent()
    :
    tty(std::make_shared<XrXml::Agent::Tty>())
    , default_(std::make_shared<XrXml::Agent::Default>())
    , ssl(std::make_shared<XrXml::Agent::Ssl>())
{
    tty->parent = this;
    default_->parent = this;
    ssl->parent = this;

    yang_name = "agent"; yang_parent_name = "xr-xml"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::~Agent()
{
}

bool XrXml::Agent::has_data() const
{
    if (is_presence_container) return true;
    return (tty !=  nullptr && tty->has_data())
	|| (default_ !=  nullptr && default_->has_data())
	|| (ssl !=  nullptr && ssl->has_data());
}

bool XrXml::Agent::has_operation() const
{
    return is_set(yfilter)
	|| (tty !=  nullptr && tty->has_operation())
	|| (default_ !=  nullptr && default_->has_operation())
	|| (ssl !=  nullptr && ssl->has_operation());
}

std::string XrXml::Agent::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "agent";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tty")
    {
        if(tty == nullptr)
        {
            tty = std::make_shared<XrXml::Agent::Tty>();
        }
        return tty;
    }

    if(child_yang_name == "default")
    {
        if(default_ == nullptr)
        {
            default_ = std::make_shared<XrXml::Agent::Default>();
        }
        return default_;
    }

    if(child_yang_name == "ssl")
    {
        if(ssl == nullptr)
        {
            ssl = std::make_shared<XrXml::Agent::Ssl>();
        }
        return ssl;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(tty != nullptr)
    {
        children["tty"] = tty;
    }

    if(default_ != nullptr)
    {
        children["default"] = default_;
    }

    if(ssl != nullptr)
    {
        children["ssl"] = ssl;
    }

    return children;
}

void XrXml::Agent::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tty" || name == "default" || name == "ssl")
        return true;
    return false;
}

XrXml::Agent::Tty::Tty()
    :
    sessions(std::make_shared<XrXml::Agent::Tty::Sessions>())
{
    sessions->parent = this;

    yang_name = "tty"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Tty::~Tty()
{
}

bool XrXml::Agent::Tty::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data());
}

bool XrXml::Agent::Tty::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string XrXml::Agent::Tty::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Tty::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tty";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Tty::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<XrXml::Agent::Tty::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Tty::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void XrXml::Agent::Tty::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::Tty::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::Tty::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

XrXml::Agent::Tty::Sessions::Sessions()
    :
    session(this, {"session_id"})
{

    yang_name = "sessions"; yang_parent_name = "tty"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Tty::Sessions::~Sessions()
{
}

bool XrXml::Agent::Tty::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Tty::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string XrXml::Agent::Tty::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/tty/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Tty::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Tty::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<XrXml::Agent::Tty::Sessions::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Tty::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void XrXml::Agent::Tty::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::Tty::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::Tty::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

XrXml::Agent::Tty::Sessions::Session::Session()
    :
    session_id{YType::uint32, "session-id"},
    username{YType::str, "username"},
    state{YType::enumeration, "state"},
    client_address{YType::str, "client-address"},
    client_port{YType::uint32, "client-port"},
    config_session_id{YType::str, "config-session-id"},
    admin_config_session_id{YType::str, "admin-config-session-id"},
    alarm_notification{YType::enumeration, "alarm-notification"},
    vrf_name{YType::str, "vrf-name"},
    start_time{YType::uint32, "start-time"},
    elapsed_time{YType::uint32, "elapsed-time"},
    last_state_change{YType::uint32, "last-state-change"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Tty::Sessions::Session::~Session()
{
}

bool XrXml::Agent::Tty::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| username.is_set
	|| state.is_set
	|| client_address.is_set
	|| client_port.is_set
	|| config_session_id.is_set
	|| admin_config_session_id.is_set
	|| alarm_notification.is_set
	|| vrf_name.is_set
	|| start_time.is_set
	|| elapsed_time.is_set
	|| last_state_change.is_set;
}

bool XrXml::Agent::Tty::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(client_address.yfilter)
	|| ydk::is_set(client_port.yfilter)
	|| ydk::is_set(config_session_id.yfilter)
	|| ydk::is_set(admin_config_session_id.yfilter)
	|| ydk::is_set(alarm_notification.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(last_state_change.yfilter);
}

std::string XrXml::Agent::Tty::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/tty/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Tty::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Tty::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.yfilter)) leaf_name_data.push_back(client_address.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.yfilter)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (config_session_id.is_set || is_set(config_session_id.yfilter)) leaf_name_data.push_back(config_session_id.get_name_leafdata());
    if (admin_config_session_id.is_set || is_set(admin_config_session_id.yfilter)) leaf_name_data.push_back(admin_config_session_id.get_name_leafdata());
    if (alarm_notification.is_set || is_set(alarm_notification.yfilter)) leaf_name_data.push_back(alarm_notification.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (last_state_change.is_set || is_set(last_state_change.yfilter)) leaf_name_data.push_back(last_state_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Tty::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Tty::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Tty::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-address")
    {
        client_address = value;
        client_address.value_namespace = name_space;
        client_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-port")
    {
        client_port = value;
        client_port.value_namespace = name_space;
        client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-session-id")
    {
        config_session_id = value;
        config_session_id.value_namespace = name_space;
        config_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id = value;
        admin_config_session_id.value_namespace = name_space;
        admin_config_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification = value;
        alarm_notification.value_namespace = name_space;
        alarm_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-change")
    {
        last_state_change = value;
        last_state_change.value_namespace = name_space;
        last_state_change.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Tty::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "client-address")
    {
        client_address.yfilter = yfilter;
    }
    if(value_path == "client-port")
    {
        client_port.yfilter = yfilter;
    }
    if(value_path == "config-session-id")
    {
        config_session_id.yfilter = yfilter;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id.yfilter = yfilter;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "last-state-change")
    {
        last_state_change.yfilter = yfilter;
    }
}

bool XrXml::Agent::Tty::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "username" || name == "state" || name == "client-address" || name == "client-port" || name == "config-session-id" || name == "admin-config-session-id" || name == "alarm-notification" || name == "vrf-name" || name == "start-time" || name == "elapsed-time" || name == "last-state-change")
        return true;
    return false;
}

XrXml::Agent::Default::Default()
    :
    sessions(std::make_shared<XrXml::Agent::Default::Sessions>())
{
    sessions->parent = this;

    yang_name = "default"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Default::~Default()
{
}

bool XrXml::Agent::Default::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data());
}

bool XrXml::Agent::Default::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string XrXml::Agent::Default::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Default::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "default";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Default::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Default::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<XrXml::Agent::Default::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Default::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void XrXml::Agent::Default::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::Default::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::Default::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

XrXml::Agent::Default::Sessions::Sessions()
    :
    session(this, {"session_id"})
{

    yang_name = "sessions"; yang_parent_name = "default"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Default::Sessions::~Sessions()
{
}

bool XrXml::Agent::Default::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Default::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string XrXml::Agent::Default::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/default/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Default::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Default::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Default::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<XrXml::Agent::Default::Sessions::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Default::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void XrXml::Agent::Default::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::Default::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::Default::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

XrXml::Agent::Default::Sessions::Session::Session()
    :
    session_id{YType::uint32, "session-id"},
    username{YType::str, "username"},
    state{YType::enumeration, "state"},
    client_address{YType::str, "client-address"},
    client_port{YType::uint32, "client-port"},
    config_session_id{YType::str, "config-session-id"},
    admin_config_session_id{YType::str, "admin-config-session-id"},
    alarm_notification{YType::enumeration, "alarm-notification"},
    vrf_name{YType::str, "vrf-name"},
    start_time{YType::uint32, "start-time"},
    elapsed_time{YType::uint32, "elapsed-time"},
    last_state_change{YType::uint32, "last-state-change"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Default::Sessions::Session::~Session()
{
}

bool XrXml::Agent::Default::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| username.is_set
	|| state.is_set
	|| client_address.is_set
	|| client_port.is_set
	|| config_session_id.is_set
	|| admin_config_session_id.is_set
	|| alarm_notification.is_set
	|| vrf_name.is_set
	|| start_time.is_set
	|| elapsed_time.is_set
	|| last_state_change.is_set;
}

bool XrXml::Agent::Default::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(client_address.yfilter)
	|| ydk::is_set(client_port.yfilter)
	|| ydk::is_set(config_session_id.yfilter)
	|| ydk::is_set(admin_config_session_id.yfilter)
	|| ydk::is_set(alarm_notification.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(last_state_change.yfilter);
}

std::string XrXml::Agent::Default::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/default/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Default::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Default::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.yfilter)) leaf_name_data.push_back(client_address.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.yfilter)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (config_session_id.is_set || is_set(config_session_id.yfilter)) leaf_name_data.push_back(config_session_id.get_name_leafdata());
    if (admin_config_session_id.is_set || is_set(admin_config_session_id.yfilter)) leaf_name_data.push_back(admin_config_session_id.get_name_leafdata());
    if (alarm_notification.is_set || is_set(alarm_notification.yfilter)) leaf_name_data.push_back(alarm_notification.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (last_state_change.is_set || is_set(last_state_change.yfilter)) leaf_name_data.push_back(last_state_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Default::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Default::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Default::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-address")
    {
        client_address = value;
        client_address.value_namespace = name_space;
        client_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-port")
    {
        client_port = value;
        client_port.value_namespace = name_space;
        client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-session-id")
    {
        config_session_id = value;
        config_session_id.value_namespace = name_space;
        config_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id = value;
        admin_config_session_id.value_namespace = name_space;
        admin_config_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification = value;
        alarm_notification.value_namespace = name_space;
        alarm_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-change")
    {
        last_state_change = value;
        last_state_change.value_namespace = name_space;
        last_state_change.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Default::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "client-address")
    {
        client_address.yfilter = yfilter;
    }
    if(value_path == "client-port")
    {
        client_port.yfilter = yfilter;
    }
    if(value_path == "config-session-id")
    {
        config_session_id.yfilter = yfilter;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id.yfilter = yfilter;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "last-state-change")
    {
        last_state_change.yfilter = yfilter;
    }
}

bool XrXml::Agent::Default::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "username" || name == "state" || name == "client-address" || name == "client-port" || name == "config-session-id" || name == "admin-config-session-id" || name == "alarm-notification" || name == "vrf-name" || name == "start-time" || name == "elapsed-time" || name == "last-state-change")
        return true;
    return false;
}

XrXml::Agent::Ssl::Ssl()
    :
    sessions(std::make_shared<XrXml::Agent::Ssl::Sessions>())
{
    sessions->parent = this;

    yang_name = "ssl"; yang_parent_name = "agent"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Ssl::~Ssl()
{
}

bool XrXml::Agent::Ssl::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data());
}

bool XrXml::Agent::Ssl::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation());
}

std::string XrXml::Agent::Ssl::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Ssl::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ssl";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Ssl::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<XrXml::Agent::Ssl::Sessions>();
        }
        return sessions;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Ssl::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    if(sessions != nullptr)
    {
        children["sessions"] = sessions;
    }

    return children;
}

void XrXml::Agent::Ssl::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::Ssl::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::Ssl::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions")
        return true;
    return false;
}

XrXml::Agent::Ssl::Sessions::Sessions()
    :
    session(this, {"session_id"})
{

    yang_name = "sessions"; yang_parent_name = "ssl"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Ssl::Sessions::~Sessions()
{
}

bool XrXml::Agent::Ssl::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool XrXml::Agent::Ssl::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string XrXml::Agent::Ssl::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/ssl/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Ssl::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Ssl::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto c = std::make_shared<XrXml::Agent::Ssl::Sessions::Session>();
        c->parent = this;
        session.append(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Ssl::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    count = 0;
    for (auto c : session.entities())
    {
        if(children.find(c->get_segment_path()) == children.end())
            children[c->get_segment_path()] = c;
        else
            children[c->get_segment_path()+count++] = c;
    }

    return children;
}

void XrXml::Agent::Ssl::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void XrXml::Agent::Ssl::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool XrXml::Agent::Ssl::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

XrXml::Agent::Ssl::Sessions::Session::Session()
    :
    session_id{YType::uint32, "session-id"},
    username{YType::str, "username"},
    state{YType::enumeration, "state"},
    client_address{YType::str, "client-address"},
    client_port{YType::uint32, "client-port"},
    config_session_id{YType::str, "config-session-id"},
    admin_config_session_id{YType::str, "admin-config-session-id"},
    alarm_notification{YType::enumeration, "alarm-notification"},
    vrf_name{YType::str, "vrf-name"},
    start_time{YType::uint32, "start-time"},
    elapsed_time{YType::uint32, "elapsed-time"},
    last_state_change{YType::uint32, "last-state-change"}
{

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

XrXml::Agent::Ssl::Sessions::Session::~Session()
{
}

bool XrXml::Agent::Ssl::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session_id.is_set
	|| username.is_set
	|| state.is_set
	|| client_address.is_set
	|| client_port.is_set
	|| config_session_id.is_set
	|| admin_config_session_id.is_set
	|| alarm_notification.is_set
	|| vrf_name.is_set
	|| start_time.is_set
	|| elapsed_time.is_set
	|| last_state_change.is_set;
}

bool XrXml::Agent::Ssl::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(client_address.yfilter)
	|| ydk::is_set(client_port.yfilter)
	|| ydk::is_set(config_session_id.yfilter)
	|| ydk::is_set(admin_config_session_id.yfilter)
	|| ydk::is_set(alarm_notification.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(elapsed_time.yfilter)
	|| ydk::is_set(last_state_change.yfilter);
}

std::string XrXml::Agent::Ssl::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-man-xml-ttyagent-oper:xr-xml/agent/ssl/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string XrXml::Agent::Ssl::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > XrXml::Agent::Ssl::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (client_address.is_set || is_set(client_address.yfilter)) leaf_name_data.push_back(client_address.get_name_leafdata());
    if (client_port.is_set || is_set(client_port.yfilter)) leaf_name_data.push_back(client_port.get_name_leafdata());
    if (config_session_id.is_set || is_set(config_session_id.yfilter)) leaf_name_data.push_back(config_session_id.get_name_leafdata());
    if (admin_config_session_id.is_set || is_set(admin_config_session_id.yfilter)) leaf_name_data.push_back(admin_config_session_id.get_name_leafdata());
    if (alarm_notification.is_set || is_set(alarm_notification.yfilter)) leaf_name_data.push_back(alarm_notification.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (elapsed_time.is_set || is_set(elapsed_time.yfilter)) leaf_name_data.push_back(elapsed_time.get_name_leafdata());
    if (last_state_change.is_set || is_set(last_state_change.yfilter)) leaf_name_data.push_back(last_state_change.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> XrXml::Agent::Ssl::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> XrXml::Agent::Ssl::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    char count=0;
    return children;
}

void XrXml::Agent::Ssl::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-address")
    {
        client_address = value;
        client_address.value_namespace = name_space;
        client_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "client-port")
    {
        client_port = value;
        client_port.value_namespace = name_space;
        client_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "config-session-id")
    {
        config_session_id = value;
        config_session_id.value_namespace = name_space;
        config_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id = value;
        admin_config_session_id.value_namespace = name_space;
        admin_config_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification = value;
        alarm_notification.value_namespace = name_space;
        alarm_notification.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time = value;
        elapsed_time.value_namespace = name_space;
        elapsed_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-state-change")
    {
        last_state_change = value;
        last_state_change.value_namespace = name_space;
        last_state_change.value_namespace_prefix = name_space_prefix;
    }
}

void XrXml::Agent::Ssl::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "client-address")
    {
        client_address.yfilter = yfilter;
    }
    if(value_path == "client-port")
    {
        client_port.yfilter = yfilter;
    }
    if(value_path == "config-session-id")
    {
        config_session_id.yfilter = yfilter;
    }
    if(value_path == "admin-config-session-id")
    {
        admin_config_session_id.yfilter = yfilter;
    }
    if(value_path == "alarm-notification")
    {
        alarm_notification.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "elapsed-time")
    {
        elapsed_time.yfilter = yfilter;
    }
    if(value_path == "last-state-change")
    {
        last_state_change.yfilter = yfilter;
    }
}

bool XrXml::Agent::Ssl::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-id" || name == "username" || name == "state" || name == "client-address" || name == "client-port" || name == "config-session-id" || name == "admin-config-session-id" || name == "alarm-notification" || name == "vrf-name" || name == "start-time" || name == "elapsed-time" || name == "last-state-change")
        return true;
    return false;
}

const Enum::YLeaf XrXmlSessionAlarmRegister::registered {1, "registered"};
const Enum::YLeaf XrXmlSessionAlarmRegister::not_registered {2, "not-registered"};

const Enum::YLeaf XrXmlSessionState::idle {1, "idle"};
const Enum::YLeaf XrXmlSessionState::busy {2, "busy"};


}
}

