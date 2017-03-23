
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_vpdn_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_tunnel_vpdn_oper {

Vpdn::Vpdn()
    :
    history_failures(std::make_shared<Vpdn::HistoryFailures>())
	,sessions(std::make_shared<Vpdn::Sessions>())
	,tunnel_destinations(std::make_shared<Vpdn::TunnelDestinations>())
	,vpdn_mirroring(std::make_shared<Vpdn::VpdnMirroring>())
	,vpdn_redundancy(std::make_shared<Vpdn::VpdnRedundancy>())
{
    history_failures->parent = this;
    children["history-failures"] = history_failures;

    sessions->parent = this;
    children["sessions"] = sessions;

    tunnel_destinations->parent = this;
    children["tunnel-destinations"] = tunnel_destinations;

    vpdn_mirroring->parent = this;
    children["vpdn-mirroring"] = vpdn_mirroring;

    vpdn_redundancy->parent = this;
    children["vpdn-redundancy"] = vpdn_redundancy;

    yang_name = "vpdn"; yang_parent_name = "Cisco-IOS-XR-tunnel-vpdn-oper";
}

Vpdn::~Vpdn()
{
}

bool Vpdn::has_data() const
{
    return (history_failures !=  nullptr && history_failures->has_data())
	|| (sessions !=  nullptr && sessions->has_data())
	|| (tunnel_destinations !=  nullptr && tunnel_destinations->has_data())
	|| (vpdn_mirroring !=  nullptr && vpdn_mirroring->has_data())
	|| (vpdn_redundancy !=  nullptr && vpdn_redundancy->has_data());
}

bool Vpdn::has_operation() const
{
    return is_set(operation)
	|| (history_failures !=  nullptr && history_failures->has_operation())
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tunnel_destinations !=  nullptr && tunnel_destinations->has_operation())
	|| (vpdn_mirroring !=  nullptr && vpdn_mirroring->has_operation())
	|| (vpdn_redundancy !=  nullptr && vpdn_redundancy->has_operation());
}

std::string Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn";

    return path_buffer.str();

}

EntityPath Vpdn::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "history-failures")
    {
        if(history_failures != nullptr)
        {
            children["history-failures"] = history_failures;
        }
        else
        {
            history_failures = std::make_shared<Vpdn::HistoryFailures>();
            history_failures->parent = this;
            children["history-failures"] = history_failures;
        }
        return children.at("history-failures");
    }

    if(child_yang_name == "sessions")
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
        else
        {
            sessions = std::make_shared<Vpdn::Sessions>();
            sessions->parent = this;
            children["sessions"] = sessions;
        }
        return children.at("sessions");
    }

    if(child_yang_name == "tunnel-destinations")
    {
        if(tunnel_destinations != nullptr)
        {
            children["tunnel-destinations"] = tunnel_destinations;
        }
        else
        {
            tunnel_destinations = std::make_shared<Vpdn::TunnelDestinations>();
            tunnel_destinations->parent = this;
            children["tunnel-destinations"] = tunnel_destinations;
        }
        return children.at("tunnel-destinations");
    }

    if(child_yang_name == "vpdn-mirroring")
    {
        if(vpdn_mirroring != nullptr)
        {
            children["vpdn-mirroring"] = vpdn_mirroring;
        }
        else
        {
            vpdn_mirroring = std::make_shared<Vpdn::VpdnMirroring>();
            vpdn_mirroring->parent = this;
            children["vpdn-mirroring"] = vpdn_mirroring;
        }
        return children.at("vpdn-mirroring");
    }

    if(child_yang_name == "vpdn-redundancy")
    {
        if(vpdn_redundancy != nullptr)
        {
            children["vpdn-redundancy"] = vpdn_redundancy;
        }
        else
        {
            vpdn_redundancy = std::make_shared<Vpdn::VpdnRedundancy>();
            vpdn_redundancy->parent = this;
            children["vpdn-redundancy"] = vpdn_redundancy;
        }
        return children.at("vpdn-redundancy");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::get_children()
{
    if(children.find("history-failures") == children.end())
    {
        if(history_failures != nullptr)
        {
            children["history-failures"] = history_failures;
        }
    }

    if(children.find("sessions") == children.end())
    {
        if(sessions != nullptr)
        {
            children["sessions"] = sessions;
        }
    }

    if(children.find("tunnel-destinations") == children.end())
    {
        if(tunnel_destinations != nullptr)
        {
            children["tunnel-destinations"] = tunnel_destinations;
        }
    }

    if(children.find("vpdn-mirroring") == children.end())
    {
        if(vpdn_mirroring != nullptr)
        {
            children["vpdn-mirroring"] = vpdn_mirroring;
        }
    }

    if(children.find("vpdn-redundancy") == children.end())
    {
        if(vpdn_redundancy != nullptr)
        {
            children["vpdn-redundancy"] = vpdn_redundancy;
        }
    }

    return children;
}

void Vpdn::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Vpdn::clone_ptr() const
{
    return std::make_shared<Vpdn>();
}

std::string Vpdn::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Vpdn::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Vpdn::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Vpdn::Sessions::Sessions()
{
    yang_name = "sessions"; yang_parent_name = "vpdn";
}

Vpdn::Sessions::~Sessions()
{
}

bool Vpdn::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vpdn::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";

    return path_buffer.str();

}

EntityPath Vpdn::Sessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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
        auto c = std::make_shared<Vpdn::Sessions::Session>();
        c->parent = this;
        session.push_back(std::move(c));
        children[segment_path] = session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Sessions::get_children()
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

void Vpdn::Sessions::set_value(const std::string & value_path, std::string value)
{
}

Vpdn::Sessions::Session::Session()
    :
    session_label{YType::str, "session-label"},
    parent_interface_name{YType::str, "parent-interface-name"},
    setup_time{YType::uint32, "setup-time"}
    	,
    configuration(std::make_shared<Vpdn::Sessions::Session::Configuration>())
	,l2tp(std::make_shared<Vpdn::Sessions::Session::L2Tp>())
	,session(std::make_shared<Vpdn::Sessions::Session::Session_>())
	,subscriber(std::make_shared<Vpdn::Sessions::Session::Subscriber>())
{
    configuration->parent = this;
    children["configuration"] = configuration;

    l2tp->parent = this;
    children["l2tp"] = l2tp;

    session->parent = this;
    children["session"] = session;

    subscriber->parent = this;
    children["subscriber"] = subscriber;

    yang_name = "session"; yang_parent_name = "sessions";
}

Vpdn::Sessions::Session::~Session()
{
}

bool Vpdn::Sessions::Session::has_data() const
{
    return session_label.is_set
	|| parent_interface_name.is_set
	|| setup_time.is_set
	|| (configuration !=  nullptr && configuration->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (session !=  nullptr && session->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data());
}

bool Vpdn::Sessions::Session::has_operation() const
{
    return is_set(operation)
	|| is_set(session_label.operation)
	|| is_set(parent_interface_name.operation)
	|| is_set(setup_time.operation)
	|| (configuration !=  nullptr && configuration->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (session !=  nullptr && session->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation());
}

std::string Vpdn::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-label='" <<session_label <<"']";

    return path_buffer.str();

}

EntityPath Vpdn::Sessions::Session::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_label.is_set || is_set(session_label.operation)) leaf_name_data.push_back(session_label.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.operation)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (setup_time.is_set || is_set(setup_time.operation)) leaf_name_data.push_back(setup_time.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "configuration")
    {
        if(configuration != nullptr)
        {
            children["configuration"] = configuration;
        }
        else
        {
            configuration = std::make_shared<Vpdn::Sessions::Session::Configuration>();
            configuration->parent = this;
            children["configuration"] = configuration;
        }
        return children.at("configuration");
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
        else
        {
            l2tp = std::make_shared<Vpdn::Sessions::Session::L2Tp>();
            l2tp->parent = this;
            children["l2tp"] = l2tp;
        }
        return children.at("l2tp");
    }

    if(child_yang_name == "session")
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
        else
        {
            session = std::make_shared<Vpdn::Sessions::Session::Session_>();
            session->parent = this;
            children["session"] = session;
        }
        return children.at("session");
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber != nullptr)
        {
            children["subscriber"] = subscriber;
        }
        else
        {
            subscriber = std::make_shared<Vpdn::Sessions::Session::Subscriber>();
            subscriber->parent = this;
            children["subscriber"] = subscriber;
        }
        return children.at("subscriber");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Sessions::Session::get_children()
{
    if(children.find("configuration") == children.end())
    {
        if(configuration != nullptr)
        {
            children["configuration"] = configuration;
        }
    }

    if(children.find("l2tp") == children.end())
    {
        if(l2tp != nullptr)
        {
            children["l2tp"] = l2tp;
        }
    }

    if(children.find("session") == children.end())
    {
        if(session != nullptr)
        {
            children["session"] = session;
        }
    }

    if(children.find("subscriber") == children.end())
    {
        if(subscriber != nullptr)
        {
            children["subscriber"] = subscriber;
        }
    }

    return children;
}

void Vpdn::Sessions::Session::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-label")
    {
        session_label = value;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
    }
    if(value_path == "setup-time")
    {
        setup_time = value;
    }
}

Vpdn::Sessions::Session::Session_::Session_()
    :
    domain_name{YType::str, "domain-name"},
    interface_name{YType::str, "interface-name"},
    l2tp_session_id{YType::uint16, "l2tp-session-id"},
    l2tp_tunnel_id{YType::uint16, "l2tp-tunnel-id"},
    last_change{YType::str, "last-change"},
    srg_slave{YType::boolean, "srg-slave"},
    state{YType::enumeration, "state"},
    username{YType::str, "username"}
{
    yang_name = "session"; yang_parent_name = "session";
}

Vpdn::Sessions::Session::Session_::~Session_()
{
}

bool Vpdn::Sessions::Session::Session_::has_data() const
{
    return domain_name.is_set
	|| interface_name.is_set
	|| l2tp_session_id.is_set
	|| l2tp_tunnel_id.is_set
	|| last_change.is_set
	|| srg_slave.is_set
	|| state.is_set
	|| username.is_set;
}

bool Vpdn::Sessions::Session::Session_::has_operation() const
{
    return is_set(operation)
	|| is_set(domain_name.operation)
	|| is_set(interface_name.operation)
	|| is_set(l2tp_session_id.operation)
	|| is_set(l2tp_tunnel_id.operation)
	|| is_set(last_change.operation)
	|| is_set(srg_slave.operation)
	|| is_set(state.operation)
	|| is_set(username.operation);
}

std::string Vpdn::Sessions::Session::Session_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";

    return path_buffer.str();

}

EntityPath Vpdn::Sessions::Session::Session_::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Session_' in Cisco_IOS_XR_tunnel_vpdn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (l2tp_session_id.is_set || is_set(l2tp_session_id.operation)) leaf_name_data.push_back(l2tp_session_id.get_name_leafdata());
    if (l2tp_tunnel_id.is_set || is_set(l2tp_tunnel_id.operation)) leaf_name_data.push_back(l2tp_tunnel_id.get_name_leafdata());
    if (last_change.is_set || is_set(last_change.operation)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (srg_slave.is_set || is_set(srg_slave.operation)) leaf_name_data.push_back(srg_slave.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Sessions::Session::Session_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Sessions::Session::Session_::get_children()
{
    return children;
}

void Vpdn::Sessions::Session::Session_::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "l2tp-session-id")
    {
        l2tp_session_id = value;
    }
    if(value_path == "l2tp-tunnel-id")
    {
        l2tp_tunnel_id = value;
    }
    if(value_path == "last-change")
    {
        last_change = value;
    }
    if(value_path == "srg-slave")
    {
        srg_slave = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
}

Vpdn::Sessions::Session::L2Tp::L2Tp()
    :
    call_serial_number{YType::uint32, "call-serial-number"},
    is_l2tp_class_attribute_mask_set{YType::boolean, "is-l2tp-class-attribute-mask-set"},
    is_tunnel_authentication_enabled{YType::boolean, "is-tunnel-authentication-enabled"},
    local_endpoint{YType::str, "local-endpoint"},
    local_session_id{YType::uint16, "local-session-id"},
    local_tunnel_id{YType::uint16, "local-tunnel-id"},
    remote_endpoint{YType::str, "remote-endpoint"},
    remote_port{YType::uint16, "remote-port"},
    remote_session_id{YType::uint16, "remote-session-id"},
    remote_tunnel_id{YType::uint16, "remote-tunnel-id"},
    tunnel_assignment_id{YType::str, "tunnel-assignment-id"},
    tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
    tunnel_server_authentication_id{YType::str, "tunnel-server-authentication-id"}
{
    yang_name = "l2tp"; yang_parent_name = "session";
}

Vpdn::Sessions::Session::L2Tp::~L2Tp()
{
}

bool Vpdn::Sessions::Session::L2Tp::has_data() const
{
    return call_serial_number.is_set
	|| is_l2tp_class_attribute_mask_set.is_set
	|| is_tunnel_authentication_enabled.is_set
	|| local_endpoint.is_set
	|| local_session_id.is_set
	|| local_tunnel_id.is_set
	|| remote_endpoint.is_set
	|| remote_port.is_set
	|| remote_session_id.is_set
	|| remote_tunnel_id.is_set
	|| tunnel_assignment_id.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_server_authentication_id.is_set;
}

bool Vpdn::Sessions::Session::L2Tp::has_operation() const
{
    return is_set(operation)
	|| is_set(call_serial_number.operation)
	|| is_set(is_l2tp_class_attribute_mask_set.operation)
	|| is_set(is_tunnel_authentication_enabled.operation)
	|| is_set(local_endpoint.operation)
	|| is_set(local_session_id.operation)
	|| is_set(local_tunnel_id.operation)
	|| is_set(remote_endpoint.operation)
	|| is_set(remote_port.operation)
	|| is_set(remote_session_id.operation)
	|| is_set(remote_tunnel_id.operation)
	|| is_set(tunnel_assignment_id.operation)
	|| is_set(tunnel_client_authentication_id.operation)
	|| is_set(tunnel_server_authentication_id.operation);
}

std::string Vpdn::Sessions::Session::L2Tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";

    return path_buffer.str();

}

EntityPath Vpdn::Sessions::Session::L2Tp::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'L2Tp' in Cisco_IOS_XR_tunnel_vpdn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (call_serial_number.is_set || is_set(call_serial_number.operation)) leaf_name_data.push_back(call_serial_number.get_name_leafdata());
    if (is_l2tp_class_attribute_mask_set.is_set || is_set(is_l2tp_class_attribute_mask_set.operation)) leaf_name_data.push_back(is_l2tp_class_attribute_mask_set.get_name_leafdata());
    if (is_tunnel_authentication_enabled.is_set || is_set(is_tunnel_authentication_enabled.operation)) leaf_name_data.push_back(is_tunnel_authentication_enabled.get_name_leafdata());
    if (local_endpoint.is_set || is_set(local_endpoint.operation)) leaf_name_data.push_back(local_endpoint.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.operation)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.operation)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_endpoint.is_set || is_set(remote_endpoint.operation)) leaf_name_data.push_back(remote_endpoint.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.operation)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.operation)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.operation)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (tunnel_assignment_id.is_set || is_set(tunnel_assignment_id.operation)) leaf_name_data.push_back(tunnel_assignment_id.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.operation)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_server_authentication_id.is_set || is_set(tunnel_server_authentication_id.operation)) leaf_name_data.push_back(tunnel_server_authentication_id.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Sessions::Session::L2Tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Sessions::Session::L2Tp::get_children()
{
    return children;
}

void Vpdn::Sessions::Session::L2Tp::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "call-serial-number")
    {
        call_serial_number = value;
    }
    if(value_path == "is-l2tp-class-attribute-mask-set")
    {
        is_l2tp_class_attribute_mask_set = value;
    }
    if(value_path == "is-tunnel-authentication-enabled")
    {
        is_tunnel_authentication_enabled = value;
    }
    if(value_path == "local-endpoint")
    {
        local_endpoint = value;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
    }
    if(value_path == "remote-endpoint")
    {
        remote_endpoint = value;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
    }
    if(value_path == "tunnel-assignment-id")
    {
        tunnel_assignment_id = value;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id = value;
    }
    if(value_path == "tunnel-server-authentication-id")
    {
        tunnel_server_authentication_id = value;
    }
}

Vpdn::Sessions::Session::Subscriber::Subscriber()
    :
    nas_port{YType::uint8, "nas-port"},
    nas_port_type{YType::enumeration, "nas-port-type"},
    physical_channel_id{YType::uint32, "physical-channel-id"},
    receive_connect_speed{YType::uint64, "receive-connect-speed"},
    transmit_connect_speed{YType::uint64, "transmit-connect-speed"}
{
    yang_name = "subscriber"; yang_parent_name = "session";
}

Vpdn::Sessions::Session::Subscriber::~Subscriber()
{
}

bool Vpdn::Sessions::Session::Subscriber::has_data() const
{
    for (auto const & leaf : nas_port.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return nas_port_type.is_set
	|| physical_channel_id.is_set
	|| receive_connect_speed.is_set
	|| transmit_connect_speed.is_set;
}

bool Vpdn::Sessions::Session::Subscriber::has_operation() const
{
    for (auto const & leaf : nas_port.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(nas_port.operation)
	|| is_set(nas_port_type.operation)
	|| is_set(physical_channel_id.operation)
	|| is_set(receive_connect_speed.operation)
	|| is_set(transmit_connect_speed.operation);
}

std::string Vpdn::Sessions::Session::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber";

    return path_buffer.str();

}

EntityPath Vpdn::Sessions::Session::Subscriber::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Subscriber' in Cisco_IOS_XR_tunnel_vpdn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_type.is_set || is_set(nas_port_type.operation)) leaf_name_data.push_back(nas_port_type.get_name_leafdata());
    if (physical_channel_id.is_set || is_set(physical_channel_id.operation)) leaf_name_data.push_back(physical_channel_id.get_name_leafdata());
    if (receive_connect_speed.is_set || is_set(receive_connect_speed.operation)) leaf_name_data.push_back(receive_connect_speed.get_name_leafdata());
    if (transmit_connect_speed.is_set || is_set(transmit_connect_speed.operation)) leaf_name_data.push_back(transmit_connect_speed.get_name_leafdata());

    auto nas_port_name_datas = nas_port.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), nas_port_name_datas.begin(), nas_port_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Sessions::Session::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Sessions::Session::Subscriber::get_children()
{
    return children;
}

void Vpdn::Sessions::Session::Subscriber::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nas-port")
    {
        nas_port.append(value);
    }
    if(value_path == "nas-port-type")
    {
        nas_port_type = value;
    }
    if(value_path == "physical-channel-id")
    {
        physical_channel_id = value;
    }
    if(value_path == "receive-connect-speed")
    {
        receive_connect_speed = value;
    }
    if(value_path == "transmit-connect-speed")
    {
        transmit_connect_speed = value;
    }
}

Vpdn::Sessions::Session::Configuration::Configuration()
    :
    dsl_line_forwarding{YType::boolean, "dsl-line-forwarding"},
    l2tp_busy_timeout{YType::uint16, "l2tp-busy-timeout"},
    template_name{YType::str, "template-name"},
    tos{YType::uint8, "tos"},
    tos_mode{YType::enumeration, "tos-mode"},
    vrf_name{YType::str, "vrf-name"}
    	,
    vpn_id(std::make_shared<Vpdn::Sessions::Session::Configuration::VpnId>())
{
    vpn_id->parent = this;
    children["vpn-id"] = vpn_id;

    yang_name = "configuration"; yang_parent_name = "session";
}

Vpdn::Sessions::Session::Configuration::~Configuration()
{
}

bool Vpdn::Sessions::Session::Configuration::has_data() const
{
    return dsl_line_forwarding.is_set
	|| l2tp_busy_timeout.is_set
	|| template_name.is_set
	|| tos.is_set
	|| tos_mode.is_set
	|| vrf_name.is_set
	|| (vpn_id !=  nullptr && vpn_id->has_data());
}

bool Vpdn::Sessions::Session::Configuration::has_operation() const
{
    return is_set(operation)
	|| is_set(dsl_line_forwarding.operation)
	|| is_set(l2tp_busy_timeout.operation)
	|| is_set(template_name.operation)
	|| is_set(tos.operation)
	|| is_set(tos_mode.operation)
	|| is_set(vrf_name.operation)
	|| (vpn_id !=  nullptr && vpn_id->has_operation());
}

std::string Vpdn::Sessions::Session::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";

    return path_buffer.str();

}

EntityPath Vpdn::Sessions::Session::Configuration::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Configuration' in Cisco_IOS_XR_tunnel_vpdn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dsl_line_forwarding.is_set || is_set(dsl_line_forwarding.operation)) leaf_name_data.push_back(dsl_line_forwarding.get_name_leafdata());
    if (l2tp_busy_timeout.is_set || is_set(l2tp_busy_timeout.operation)) leaf_name_data.push_back(l2tp_busy_timeout.get_name_leafdata());
    if (template_name.is_set || is_set(template_name.operation)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (tos.is_set || is_set(tos.operation)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.operation)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Sessions::Session::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "vpn-id")
    {
        if(vpn_id != nullptr)
        {
            children["vpn-id"] = vpn_id;
        }
        else
        {
            vpn_id = std::make_shared<Vpdn::Sessions::Session::Configuration::VpnId>();
            vpn_id->parent = this;
            children["vpn-id"] = vpn_id;
        }
        return children.at("vpn-id");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Sessions::Session::Configuration::get_children()
{
    if(children.find("vpn-id") == children.end())
    {
        if(vpn_id != nullptr)
        {
            children["vpn-id"] = vpn_id;
        }
    }

    return children;
}

void Vpdn::Sessions::Session::Configuration::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding = value;
    }
    if(value_path == "l2tp-busy-timeout")
    {
        l2tp_busy_timeout = value;
    }
    if(value_path == "template-name")
    {
        template_name = value;
    }
    if(value_path == "tos")
    {
        tos = value;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
}

Vpdn::Sessions::Session::Configuration::VpnId::VpnId()
    :
    index_{YType::uint32, "index"},
    oui{YType::uint32, "oui"}
{
    yang_name = "vpn-id"; yang_parent_name = "configuration";
}

Vpdn::Sessions::Session::Configuration::VpnId::~VpnId()
{
}

bool Vpdn::Sessions::Session::Configuration::VpnId::has_data() const
{
    return index_.is_set
	|| oui.is_set;
}

bool Vpdn::Sessions::Session::Configuration::VpnId::has_operation() const
{
    return is_set(operation)
	|| is_set(index_.operation)
	|| is_set(oui.operation);
}

std::string Vpdn::Sessions::Session::Configuration::VpnId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-id";

    return path_buffer.str();

}

EntityPath Vpdn::Sessions::Session::Configuration::VpnId::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'VpnId' in Cisco_IOS_XR_tunnel_vpdn_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (index_.is_set || is_set(index_.operation)) leaf_name_data.push_back(index_.get_name_leafdata());
    if (oui.is_set || is_set(oui.operation)) leaf_name_data.push_back(oui.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::Sessions::Session::Configuration::VpnId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::Sessions::Session::Configuration::VpnId::get_children()
{
    return children;
}

void Vpdn::Sessions::Session::Configuration::VpnId::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "index")
    {
        index_ = value;
    }
    if(value_path == "oui")
    {
        oui = value;
    }
}

Vpdn::TunnelDestinations::TunnelDestinations()
{
    yang_name = "tunnel-destinations"; yang_parent_name = "vpdn";
}

Vpdn::TunnelDestinations::~TunnelDestinations()
{
}

bool Vpdn::TunnelDestinations::has_data() const
{
    for (std::size_t index=0; index<tunnel_destination.size(); index++)
    {
        if(tunnel_destination[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::TunnelDestinations::has_operation() const
{
    for (std::size_t index=0; index<tunnel_destination.size(); index++)
    {
        if(tunnel_destination[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vpdn::TunnelDestinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-destinations";

    return path_buffer.str();

}

EntityPath Vpdn::TunnelDestinations::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::TunnelDestinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tunnel-destination")
    {
        for(auto const & c : tunnel_destination)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vpdn::TunnelDestinations::TunnelDestination>();
        c->parent = this;
        tunnel_destination.push_back(std::move(c));
        children[segment_path] = tunnel_destination.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::TunnelDestinations::get_children()
{
    for (auto const & c : tunnel_destination)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vpdn::TunnelDestinations::set_value(const std::string & value_path, std::string value)
{
}

Vpdn::TunnelDestinations::TunnelDestination::TunnelDestination()
    :
    address{YType::str, "address"},
    connects{YType::uint32, "connects"},
    disconnects{YType::uint32, "disconnects"},
    load{YType::uint32, "load"},
    retry{YType::uint32, "retry"},
    status{YType::enumeration, "status"},
    status_change_time{YType::uint32, "status-change-time"},
    vrf_name{YType::str, "vrf-name"},
    vrf_name_xr{YType::str, "vrf-name-xr"}
{
    yang_name = "tunnel-destination"; yang_parent_name = "tunnel-destinations";
}

Vpdn::TunnelDestinations::TunnelDestination::~TunnelDestination()
{
}

bool Vpdn::TunnelDestinations::TunnelDestination::has_data() const
{
    return address.is_set
	|| connects.is_set
	|| disconnects.is_set
	|| load.is_set
	|| retry.is_set
	|| status.is_set
	|| status_change_time.is_set
	|| vrf_name.is_set
	|| vrf_name_xr.is_set;
}

bool Vpdn::TunnelDestinations::TunnelDestination::has_operation() const
{
    return is_set(operation)
	|| is_set(address.operation)
	|| is_set(connects.operation)
	|| is_set(disconnects.operation)
	|| is_set(load.operation)
	|| is_set(retry.operation)
	|| is_set(status.operation)
	|| is_set(status_change_time.operation)
	|| is_set(vrf_name.operation)
	|| is_set(vrf_name_xr.operation);
}

std::string Vpdn::TunnelDestinations::TunnelDestination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-destination";

    return path_buffer.str();

}

EntityPath Vpdn::TunnelDestinations::TunnelDestination::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/tunnel-destinations/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.operation)) leaf_name_data.push_back(address.get_name_leafdata());
    if (connects.is_set || is_set(connects.operation)) leaf_name_data.push_back(connects.get_name_leafdata());
    if (disconnects.is_set || is_set(disconnects.operation)) leaf_name_data.push_back(disconnects.get_name_leafdata());
    if (load.is_set || is_set(load.operation)) leaf_name_data.push_back(load.get_name_leafdata());
    if (retry.is_set || is_set(retry.operation)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (status.is_set || is_set(status.operation)) leaf_name_data.push_back(status.get_name_leafdata());
    if (status_change_time.is_set || is_set(status_change_time.operation)) leaf_name_data.push_back(status_change_time.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.operation)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.operation)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::TunnelDestinations::TunnelDestination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::TunnelDestinations::TunnelDestination::get_children()
{
    return children;
}

void Vpdn::TunnelDestinations::TunnelDestination::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "address")
    {
        address = value;
    }
    if(value_path == "connects")
    {
        connects = value;
    }
    if(value_path == "disconnects")
    {
        disconnects = value;
    }
    if(value_path == "load")
    {
        load = value;
    }
    if(value_path == "retry")
    {
        retry = value;
    }
    if(value_path == "status")
    {
        status = value;
    }
    if(value_path == "status-change-time")
    {
        status_change_time = value;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
    }
}

Vpdn::VpdnMirroring::VpdnMirroring()
    :
    alloc_cnt{YType::uint32, "alloc-cnt"},
    alloc_err_cnt{YType::uint32, "alloc-err-cnt"},
    sso_batch_err_cnt{YType::uint32, "sso-batch-err-cnt"},
    sso_err_cnt{YType::uint32, "sso-err-cnt"},
    sync_not_conn_cnt{YType::uint32, "sync-not-conn-cnt"}
    	,
    qad_recv_stats(std::make_shared<Vpdn::VpdnMirroring::QadRecvStats>())
	,qad_recv_stats_last_clear(std::make_shared<Vpdn::VpdnMirroring::QadRecvStatsLastClear>())
	,qad_send_stats(std::make_shared<Vpdn::VpdnMirroring::QadSendStats>())
	,qad_send_stats_last_clear(std::make_shared<Vpdn::VpdnMirroring::QadSendStatsLastClear>())
{
    qad_recv_stats->parent = this;
    children["qad-recv-stats"] = qad_recv_stats;

    qad_recv_stats_last_clear->parent = this;
    children["qad-recv-stats-last-clear"] = qad_recv_stats_last_clear;

    qad_send_stats->parent = this;
    children["qad-send-stats"] = qad_send_stats;

    qad_send_stats_last_clear->parent = this;
    children["qad-send-stats-last-clear"] = qad_send_stats_last_clear;

    yang_name = "vpdn-mirroring"; yang_parent_name = "vpdn";
}

Vpdn::VpdnMirroring::~VpdnMirroring()
{
}

bool Vpdn::VpdnMirroring::has_data() const
{
    return alloc_cnt.is_set
	|| alloc_err_cnt.is_set
	|| sso_batch_err_cnt.is_set
	|| sso_err_cnt.is_set
	|| sync_not_conn_cnt.is_set
	|| (qad_recv_stats !=  nullptr && qad_recv_stats->has_data())
	|| (qad_recv_stats_last_clear !=  nullptr && qad_recv_stats_last_clear->has_data())
	|| (qad_send_stats !=  nullptr && qad_send_stats->has_data())
	|| (qad_send_stats_last_clear !=  nullptr && qad_send_stats_last_clear->has_data());
}

bool Vpdn::VpdnMirroring::has_operation() const
{
    return is_set(operation)
	|| is_set(alloc_cnt.operation)
	|| is_set(alloc_err_cnt.operation)
	|| is_set(sso_batch_err_cnt.operation)
	|| is_set(sso_err_cnt.operation)
	|| is_set(sync_not_conn_cnt.operation)
	|| (qad_recv_stats !=  nullptr && qad_recv_stats->has_operation())
	|| (qad_recv_stats_last_clear !=  nullptr && qad_recv_stats_last_clear->has_operation())
	|| (qad_send_stats !=  nullptr && qad_send_stats->has_operation())
	|| (qad_send_stats_last_clear !=  nullptr && qad_send_stats_last_clear->has_operation());
}

std::string Vpdn::VpdnMirroring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpdn-mirroring";

    return path_buffer.str();

}

EntityPath Vpdn::VpdnMirroring::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (alloc_cnt.is_set || is_set(alloc_cnt.operation)) leaf_name_data.push_back(alloc_cnt.get_name_leafdata());
    if (alloc_err_cnt.is_set || is_set(alloc_err_cnt.operation)) leaf_name_data.push_back(alloc_err_cnt.get_name_leafdata());
    if (sso_batch_err_cnt.is_set || is_set(sso_batch_err_cnt.operation)) leaf_name_data.push_back(sso_batch_err_cnt.get_name_leafdata());
    if (sso_err_cnt.is_set || is_set(sso_err_cnt.operation)) leaf_name_data.push_back(sso_err_cnt.get_name_leafdata());
    if (sync_not_conn_cnt.is_set || is_set(sync_not_conn_cnt.operation)) leaf_name_data.push_back(sync_not_conn_cnt.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdnMirroring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "qad-recv-stats")
    {
        if(qad_recv_stats != nullptr)
        {
            children["qad-recv-stats"] = qad_recv_stats;
        }
        else
        {
            qad_recv_stats = std::make_shared<Vpdn::VpdnMirroring::QadRecvStats>();
            qad_recv_stats->parent = this;
            children["qad-recv-stats"] = qad_recv_stats;
        }
        return children.at("qad-recv-stats");
    }

    if(child_yang_name == "qad-recv-stats-last-clear")
    {
        if(qad_recv_stats_last_clear != nullptr)
        {
            children["qad-recv-stats-last-clear"] = qad_recv_stats_last_clear;
        }
        else
        {
            qad_recv_stats_last_clear = std::make_shared<Vpdn::VpdnMirroring::QadRecvStatsLastClear>();
            qad_recv_stats_last_clear->parent = this;
            children["qad-recv-stats-last-clear"] = qad_recv_stats_last_clear;
        }
        return children.at("qad-recv-stats-last-clear");
    }

    if(child_yang_name == "qad-send-stats")
    {
        if(qad_send_stats != nullptr)
        {
            children["qad-send-stats"] = qad_send_stats;
        }
        else
        {
            qad_send_stats = std::make_shared<Vpdn::VpdnMirroring::QadSendStats>();
            qad_send_stats->parent = this;
            children["qad-send-stats"] = qad_send_stats;
        }
        return children.at("qad-send-stats");
    }

    if(child_yang_name == "qad-send-stats-last-clear")
    {
        if(qad_send_stats_last_clear != nullptr)
        {
            children["qad-send-stats-last-clear"] = qad_send_stats_last_clear;
        }
        else
        {
            qad_send_stats_last_clear = std::make_shared<Vpdn::VpdnMirroring::QadSendStatsLastClear>();
            qad_send_stats_last_clear->parent = this;
            children["qad-send-stats-last-clear"] = qad_send_stats_last_clear;
        }
        return children.at("qad-send-stats-last-clear");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdnMirroring::get_children()
{
    if(children.find("qad-recv-stats") == children.end())
    {
        if(qad_recv_stats != nullptr)
        {
            children["qad-recv-stats"] = qad_recv_stats;
        }
    }

    if(children.find("qad-recv-stats-last-clear") == children.end())
    {
        if(qad_recv_stats_last_clear != nullptr)
        {
            children["qad-recv-stats-last-clear"] = qad_recv_stats_last_clear;
        }
    }

    if(children.find("qad-send-stats") == children.end())
    {
        if(qad_send_stats != nullptr)
        {
            children["qad-send-stats"] = qad_send_stats;
        }
    }

    if(children.find("qad-send-stats-last-clear") == children.end())
    {
        if(qad_send_stats_last_clear != nullptr)
        {
            children["qad-send-stats-last-clear"] = qad_send_stats_last_clear;
        }
    }

    return children;
}

void Vpdn::VpdnMirroring::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "alloc-cnt")
    {
        alloc_cnt = value;
    }
    if(value_path == "alloc-err-cnt")
    {
        alloc_err_cnt = value;
    }
    if(value_path == "sso-batch-err-cnt")
    {
        sso_batch_err_cnt = value;
    }
    if(value_path == "sso-err-cnt")
    {
        sso_err_cnt = value;
    }
    if(value_path == "sync-not-conn-cnt")
    {
        sync_not_conn_cnt = value;
    }
}

Vpdn::VpdnMirroring::QadSendStats::QadSendStats()
    :
    acks_failed{YType::uint32, "acks-failed"},
    acks_sent{YType::uint32, "acks-sent"},
    msgs_sent{YType::uint32, "msgs-sent"},
    no_partner{YType::uint32, "no-partner"},
    pending_acks{YType::uint32, "pending-acks"},
    qad_ack_count{YType::uint32, "qad-ack-count"},
    qad_frag_count{YType::uint32, "qad-frag-count"},
    qad_last_seq_number{YType::uint32, "qad-last-seq-number"},
    qad_rx_count{YType::uint32, "qad-rx-count"},
    qad_rx_first_seq_number{YType::uint32, "qad-rx-first-seq-number"},
    qad_rx_list_count{YType::uint32, "qad-rx-list-count"},
    qad_rx_list_q_size{YType::uint32, "qad-rx-list-q-size"},
    qad_timeouts{YType::uint32, "qad-timeouts"},
    qad_unknown_acks{YType::uint32, "qad-unknown-acks"},
    resumes{YType::uint32, "resumes"},
    sends_failed{YType::uint32, "sends-failed"},
    sends_fragment{YType::uint32, "sends-fragment"},
    suspends{YType::uint32, "suspends"},
    timeouts{YType::uint32, "timeouts"}
{
    yang_name = "qad-send-stats"; yang_parent_name = "vpdn-mirroring";
}

Vpdn::VpdnMirroring::QadSendStats::~QadSendStats()
{
}

bool Vpdn::VpdnMirroring::QadSendStats::has_data() const
{
    return acks_failed.is_set
	|| acks_sent.is_set
	|| msgs_sent.is_set
	|| no_partner.is_set
	|| pending_acks.is_set
	|| qad_ack_count.is_set
	|| qad_frag_count.is_set
	|| qad_last_seq_number.is_set
	|| qad_rx_count.is_set
	|| qad_rx_first_seq_number.is_set
	|| qad_rx_list_count.is_set
	|| qad_rx_list_q_size.is_set
	|| qad_timeouts.is_set
	|| qad_unknown_acks.is_set
	|| resumes.is_set
	|| sends_failed.is_set
	|| sends_fragment.is_set
	|| suspends.is_set
	|| timeouts.is_set;
}

bool Vpdn::VpdnMirroring::QadSendStats::has_operation() const
{
    return is_set(operation)
	|| is_set(acks_failed.operation)
	|| is_set(acks_sent.operation)
	|| is_set(msgs_sent.operation)
	|| is_set(no_partner.operation)
	|| is_set(pending_acks.operation)
	|| is_set(qad_ack_count.operation)
	|| is_set(qad_frag_count.operation)
	|| is_set(qad_last_seq_number.operation)
	|| is_set(qad_rx_count.operation)
	|| is_set(qad_rx_first_seq_number.operation)
	|| is_set(qad_rx_list_count.operation)
	|| is_set(qad_rx_list_q_size.operation)
	|| is_set(qad_timeouts.operation)
	|| is_set(qad_unknown_acks.operation)
	|| is_set(resumes.operation)
	|| is_set(sends_failed.operation)
	|| is_set(sends_fragment.operation)
	|| is_set(suspends.operation)
	|| is_set(timeouts.operation);
}

std::string Vpdn::VpdnMirroring::QadSendStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qad-send-stats";

    return path_buffer.str();

}

EntityPath Vpdn::VpdnMirroring::QadSendStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/vpdn-mirroring/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acks_failed.is_set || is_set(acks_failed.operation)) leaf_name_data.push_back(acks_failed.get_name_leafdata());
    if (acks_sent.is_set || is_set(acks_sent.operation)) leaf_name_data.push_back(acks_sent.get_name_leafdata());
    if (msgs_sent.is_set || is_set(msgs_sent.operation)) leaf_name_data.push_back(msgs_sent.get_name_leafdata());
    if (no_partner.is_set || is_set(no_partner.operation)) leaf_name_data.push_back(no_partner.get_name_leafdata());
    if (pending_acks.is_set || is_set(pending_acks.operation)) leaf_name_data.push_back(pending_acks.get_name_leafdata());
    if (qad_ack_count.is_set || is_set(qad_ack_count.operation)) leaf_name_data.push_back(qad_ack_count.get_name_leafdata());
    if (qad_frag_count.is_set || is_set(qad_frag_count.operation)) leaf_name_data.push_back(qad_frag_count.get_name_leafdata());
    if (qad_last_seq_number.is_set || is_set(qad_last_seq_number.operation)) leaf_name_data.push_back(qad_last_seq_number.get_name_leafdata());
    if (qad_rx_count.is_set || is_set(qad_rx_count.operation)) leaf_name_data.push_back(qad_rx_count.get_name_leafdata());
    if (qad_rx_first_seq_number.is_set || is_set(qad_rx_first_seq_number.operation)) leaf_name_data.push_back(qad_rx_first_seq_number.get_name_leafdata());
    if (qad_rx_list_count.is_set || is_set(qad_rx_list_count.operation)) leaf_name_data.push_back(qad_rx_list_count.get_name_leafdata());
    if (qad_rx_list_q_size.is_set || is_set(qad_rx_list_q_size.operation)) leaf_name_data.push_back(qad_rx_list_q_size.get_name_leafdata());
    if (qad_timeouts.is_set || is_set(qad_timeouts.operation)) leaf_name_data.push_back(qad_timeouts.get_name_leafdata());
    if (qad_unknown_acks.is_set || is_set(qad_unknown_acks.operation)) leaf_name_data.push_back(qad_unknown_acks.get_name_leafdata());
    if (resumes.is_set || is_set(resumes.operation)) leaf_name_data.push_back(resumes.get_name_leafdata());
    if (sends_failed.is_set || is_set(sends_failed.operation)) leaf_name_data.push_back(sends_failed.get_name_leafdata());
    if (sends_fragment.is_set || is_set(sends_fragment.operation)) leaf_name_data.push_back(sends_fragment.get_name_leafdata());
    if (suspends.is_set || is_set(suspends.operation)) leaf_name_data.push_back(suspends.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.operation)) leaf_name_data.push_back(timeouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdnMirroring::QadSendStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdnMirroring::QadSendStats::get_children()
{
    return children;
}

void Vpdn::VpdnMirroring::QadSendStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acks-failed")
    {
        acks_failed = value;
    }
    if(value_path == "acks-sent")
    {
        acks_sent = value;
    }
    if(value_path == "msgs-sent")
    {
        msgs_sent = value;
    }
    if(value_path == "no-partner")
    {
        no_partner = value;
    }
    if(value_path == "pending-acks")
    {
        pending_acks = value;
    }
    if(value_path == "qad-ack-count")
    {
        qad_ack_count = value;
    }
    if(value_path == "qad-frag-count")
    {
        qad_frag_count = value;
    }
    if(value_path == "qad-last-seq-number")
    {
        qad_last_seq_number = value;
    }
    if(value_path == "qad-rx-count")
    {
        qad_rx_count = value;
    }
    if(value_path == "qad-rx-first-seq-number")
    {
        qad_rx_first_seq_number = value;
    }
    if(value_path == "qad-rx-list-count")
    {
        qad_rx_list_count = value;
    }
    if(value_path == "qad-rx-list-q-size")
    {
        qad_rx_list_q_size = value;
    }
    if(value_path == "qad-timeouts")
    {
        qad_timeouts = value;
    }
    if(value_path == "qad-unknown-acks")
    {
        qad_unknown_acks = value;
    }
    if(value_path == "resumes")
    {
        resumes = value;
    }
    if(value_path == "sends-failed")
    {
        sends_failed = value;
    }
    if(value_path == "sends-fragment")
    {
        sends_fragment = value;
    }
    if(value_path == "suspends")
    {
        suspends = value;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
    }
}

Vpdn::VpdnMirroring::QadRecvStats::QadRecvStats()
    :
    acks_recvd{YType::uint32, "acks-recvd"},
    init_drops{YType::uint32, "init-drops"},
    msg_drops{YType::uint32, "msg-drops"},
    msgs_recvd{YType::uint32, "msgs-recvd"},
    ooo_drops{YType::uint32, "ooo-drops"},
    recvd_acks_failed{YType::uint32, "recvd-acks-failed"},
    stale_msgs{YType::uint32, "stale-msgs"}
{
    yang_name = "qad-recv-stats"; yang_parent_name = "vpdn-mirroring";
}

Vpdn::VpdnMirroring::QadRecvStats::~QadRecvStats()
{
}

bool Vpdn::VpdnMirroring::QadRecvStats::has_data() const
{
    return acks_recvd.is_set
	|| init_drops.is_set
	|| msg_drops.is_set
	|| msgs_recvd.is_set
	|| ooo_drops.is_set
	|| recvd_acks_failed.is_set
	|| stale_msgs.is_set;
}

bool Vpdn::VpdnMirroring::QadRecvStats::has_operation() const
{
    return is_set(operation)
	|| is_set(acks_recvd.operation)
	|| is_set(init_drops.operation)
	|| is_set(msg_drops.operation)
	|| is_set(msgs_recvd.operation)
	|| is_set(ooo_drops.operation)
	|| is_set(recvd_acks_failed.operation)
	|| is_set(stale_msgs.operation);
}

std::string Vpdn::VpdnMirroring::QadRecvStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qad-recv-stats";

    return path_buffer.str();

}

EntityPath Vpdn::VpdnMirroring::QadRecvStats::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/vpdn-mirroring/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acks_recvd.is_set || is_set(acks_recvd.operation)) leaf_name_data.push_back(acks_recvd.get_name_leafdata());
    if (init_drops.is_set || is_set(init_drops.operation)) leaf_name_data.push_back(init_drops.get_name_leafdata());
    if (msg_drops.is_set || is_set(msg_drops.operation)) leaf_name_data.push_back(msg_drops.get_name_leafdata());
    if (msgs_recvd.is_set || is_set(msgs_recvd.operation)) leaf_name_data.push_back(msgs_recvd.get_name_leafdata());
    if (ooo_drops.is_set || is_set(ooo_drops.operation)) leaf_name_data.push_back(ooo_drops.get_name_leafdata());
    if (recvd_acks_failed.is_set || is_set(recvd_acks_failed.operation)) leaf_name_data.push_back(recvd_acks_failed.get_name_leafdata());
    if (stale_msgs.is_set || is_set(stale_msgs.operation)) leaf_name_data.push_back(stale_msgs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdnMirroring::QadRecvStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdnMirroring::QadRecvStats::get_children()
{
    return children;
}

void Vpdn::VpdnMirroring::QadRecvStats::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acks-recvd")
    {
        acks_recvd = value;
    }
    if(value_path == "init-drops")
    {
        init_drops = value;
    }
    if(value_path == "msg-drops")
    {
        msg_drops = value;
    }
    if(value_path == "msgs-recvd")
    {
        msgs_recvd = value;
    }
    if(value_path == "ooo-drops")
    {
        ooo_drops = value;
    }
    if(value_path == "recvd-acks-failed")
    {
        recvd_acks_failed = value;
    }
    if(value_path == "stale-msgs")
    {
        stale_msgs = value;
    }
}

Vpdn::VpdnMirroring::QadSendStatsLastClear::QadSendStatsLastClear()
    :
    acks_failed{YType::uint32, "acks-failed"},
    acks_sent{YType::uint32, "acks-sent"},
    msgs_sent{YType::uint32, "msgs-sent"},
    no_partner{YType::uint32, "no-partner"},
    pending_acks{YType::uint32, "pending-acks"},
    qad_ack_count{YType::uint32, "qad-ack-count"},
    qad_frag_count{YType::uint32, "qad-frag-count"},
    qad_last_seq_number{YType::uint32, "qad-last-seq-number"},
    qad_rx_count{YType::uint32, "qad-rx-count"},
    qad_rx_first_seq_number{YType::uint32, "qad-rx-first-seq-number"},
    qad_rx_list_count{YType::uint32, "qad-rx-list-count"},
    qad_rx_list_q_size{YType::uint32, "qad-rx-list-q-size"},
    qad_timeouts{YType::uint32, "qad-timeouts"},
    qad_unknown_acks{YType::uint32, "qad-unknown-acks"},
    resumes{YType::uint32, "resumes"},
    sends_failed{YType::uint32, "sends-failed"},
    sends_fragment{YType::uint32, "sends-fragment"},
    suspends{YType::uint32, "suspends"},
    timeouts{YType::uint32, "timeouts"}
{
    yang_name = "qad-send-stats-last-clear"; yang_parent_name = "vpdn-mirroring";
}

Vpdn::VpdnMirroring::QadSendStatsLastClear::~QadSendStatsLastClear()
{
}

bool Vpdn::VpdnMirroring::QadSendStatsLastClear::has_data() const
{
    return acks_failed.is_set
	|| acks_sent.is_set
	|| msgs_sent.is_set
	|| no_partner.is_set
	|| pending_acks.is_set
	|| qad_ack_count.is_set
	|| qad_frag_count.is_set
	|| qad_last_seq_number.is_set
	|| qad_rx_count.is_set
	|| qad_rx_first_seq_number.is_set
	|| qad_rx_list_count.is_set
	|| qad_rx_list_q_size.is_set
	|| qad_timeouts.is_set
	|| qad_unknown_acks.is_set
	|| resumes.is_set
	|| sends_failed.is_set
	|| sends_fragment.is_set
	|| suspends.is_set
	|| timeouts.is_set;
}

bool Vpdn::VpdnMirroring::QadSendStatsLastClear::has_operation() const
{
    return is_set(operation)
	|| is_set(acks_failed.operation)
	|| is_set(acks_sent.operation)
	|| is_set(msgs_sent.operation)
	|| is_set(no_partner.operation)
	|| is_set(pending_acks.operation)
	|| is_set(qad_ack_count.operation)
	|| is_set(qad_frag_count.operation)
	|| is_set(qad_last_seq_number.operation)
	|| is_set(qad_rx_count.operation)
	|| is_set(qad_rx_first_seq_number.operation)
	|| is_set(qad_rx_list_count.operation)
	|| is_set(qad_rx_list_q_size.operation)
	|| is_set(qad_timeouts.operation)
	|| is_set(qad_unknown_acks.operation)
	|| is_set(resumes.operation)
	|| is_set(sends_failed.operation)
	|| is_set(sends_fragment.operation)
	|| is_set(suspends.operation)
	|| is_set(timeouts.operation);
}

std::string Vpdn::VpdnMirroring::QadSendStatsLastClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qad-send-stats-last-clear";

    return path_buffer.str();

}

EntityPath Vpdn::VpdnMirroring::QadSendStatsLastClear::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/vpdn-mirroring/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acks_failed.is_set || is_set(acks_failed.operation)) leaf_name_data.push_back(acks_failed.get_name_leafdata());
    if (acks_sent.is_set || is_set(acks_sent.operation)) leaf_name_data.push_back(acks_sent.get_name_leafdata());
    if (msgs_sent.is_set || is_set(msgs_sent.operation)) leaf_name_data.push_back(msgs_sent.get_name_leafdata());
    if (no_partner.is_set || is_set(no_partner.operation)) leaf_name_data.push_back(no_partner.get_name_leafdata());
    if (pending_acks.is_set || is_set(pending_acks.operation)) leaf_name_data.push_back(pending_acks.get_name_leafdata());
    if (qad_ack_count.is_set || is_set(qad_ack_count.operation)) leaf_name_data.push_back(qad_ack_count.get_name_leafdata());
    if (qad_frag_count.is_set || is_set(qad_frag_count.operation)) leaf_name_data.push_back(qad_frag_count.get_name_leafdata());
    if (qad_last_seq_number.is_set || is_set(qad_last_seq_number.operation)) leaf_name_data.push_back(qad_last_seq_number.get_name_leafdata());
    if (qad_rx_count.is_set || is_set(qad_rx_count.operation)) leaf_name_data.push_back(qad_rx_count.get_name_leafdata());
    if (qad_rx_first_seq_number.is_set || is_set(qad_rx_first_seq_number.operation)) leaf_name_data.push_back(qad_rx_first_seq_number.get_name_leafdata());
    if (qad_rx_list_count.is_set || is_set(qad_rx_list_count.operation)) leaf_name_data.push_back(qad_rx_list_count.get_name_leafdata());
    if (qad_rx_list_q_size.is_set || is_set(qad_rx_list_q_size.operation)) leaf_name_data.push_back(qad_rx_list_q_size.get_name_leafdata());
    if (qad_timeouts.is_set || is_set(qad_timeouts.operation)) leaf_name_data.push_back(qad_timeouts.get_name_leafdata());
    if (qad_unknown_acks.is_set || is_set(qad_unknown_acks.operation)) leaf_name_data.push_back(qad_unknown_acks.get_name_leafdata());
    if (resumes.is_set || is_set(resumes.operation)) leaf_name_data.push_back(resumes.get_name_leafdata());
    if (sends_failed.is_set || is_set(sends_failed.operation)) leaf_name_data.push_back(sends_failed.get_name_leafdata());
    if (sends_fragment.is_set || is_set(sends_fragment.operation)) leaf_name_data.push_back(sends_fragment.get_name_leafdata());
    if (suspends.is_set || is_set(suspends.operation)) leaf_name_data.push_back(suspends.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.operation)) leaf_name_data.push_back(timeouts.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdnMirroring::QadSendStatsLastClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdnMirroring::QadSendStatsLastClear::get_children()
{
    return children;
}

void Vpdn::VpdnMirroring::QadSendStatsLastClear::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acks-failed")
    {
        acks_failed = value;
    }
    if(value_path == "acks-sent")
    {
        acks_sent = value;
    }
    if(value_path == "msgs-sent")
    {
        msgs_sent = value;
    }
    if(value_path == "no-partner")
    {
        no_partner = value;
    }
    if(value_path == "pending-acks")
    {
        pending_acks = value;
    }
    if(value_path == "qad-ack-count")
    {
        qad_ack_count = value;
    }
    if(value_path == "qad-frag-count")
    {
        qad_frag_count = value;
    }
    if(value_path == "qad-last-seq-number")
    {
        qad_last_seq_number = value;
    }
    if(value_path == "qad-rx-count")
    {
        qad_rx_count = value;
    }
    if(value_path == "qad-rx-first-seq-number")
    {
        qad_rx_first_seq_number = value;
    }
    if(value_path == "qad-rx-list-count")
    {
        qad_rx_list_count = value;
    }
    if(value_path == "qad-rx-list-q-size")
    {
        qad_rx_list_q_size = value;
    }
    if(value_path == "qad-timeouts")
    {
        qad_timeouts = value;
    }
    if(value_path == "qad-unknown-acks")
    {
        qad_unknown_acks = value;
    }
    if(value_path == "resumes")
    {
        resumes = value;
    }
    if(value_path == "sends-failed")
    {
        sends_failed = value;
    }
    if(value_path == "sends-fragment")
    {
        sends_fragment = value;
    }
    if(value_path == "suspends")
    {
        suspends = value;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
    }
}

Vpdn::VpdnMirroring::QadRecvStatsLastClear::QadRecvStatsLastClear()
    :
    acks_recvd{YType::uint32, "acks-recvd"},
    init_drops{YType::uint32, "init-drops"},
    msg_drops{YType::uint32, "msg-drops"},
    msgs_recvd{YType::uint32, "msgs-recvd"},
    ooo_drops{YType::uint32, "ooo-drops"},
    recvd_acks_failed{YType::uint32, "recvd-acks-failed"},
    stale_msgs{YType::uint32, "stale-msgs"}
{
    yang_name = "qad-recv-stats-last-clear"; yang_parent_name = "vpdn-mirroring";
}

Vpdn::VpdnMirroring::QadRecvStatsLastClear::~QadRecvStatsLastClear()
{
}

bool Vpdn::VpdnMirroring::QadRecvStatsLastClear::has_data() const
{
    return acks_recvd.is_set
	|| init_drops.is_set
	|| msg_drops.is_set
	|| msgs_recvd.is_set
	|| ooo_drops.is_set
	|| recvd_acks_failed.is_set
	|| stale_msgs.is_set;
}

bool Vpdn::VpdnMirroring::QadRecvStatsLastClear::has_operation() const
{
    return is_set(operation)
	|| is_set(acks_recvd.operation)
	|| is_set(init_drops.operation)
	|| is_set(msg_drops.operation)
	|| is_set(msgs_recvd.operation)
	|| is_set(ooo_drops.operation)
	|| is_set(recvd_acks_failed.operation)
	|| is_set(stale_msgs.operation);
}

std::string Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qad-recv-stats-last-clear";

    return path_buffer.str();

}

EntityPath Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/vpdn-mirroring/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (acks_recvd.is_set || is_set(acks_recvd.operation)) leaf_name_data.push_back(acks_recvd.get_name_leafdata());
    if (init_drops.is_set || is_set(init_drops.operation)) leaf_name_data.push_back(init_drops.get_name_leafdata());
    if (msg_drops.is_set || is_set(msg_drops.operation)) leaf_name_data.push_back(msg_drops.get_name_leafdata());
    if (msgs_recvd.is_set || is_set(msgs_recvd.operation)) leaf_name_data.push_back(msgs_recvd.get_name_leafdata());
    if (ooo_drops.is_set || is_set(ooo_drops.operation)) leaf_name_data.push_back(ooo_drops.get_name_leafdata());
    if (recvd_acks_failed.is_set || is_set(recvd_acks_failed.operation)) leaf_name_data.push_back(recvd_acks_failed.get_name_leafdata());
    if (stale_msgs.is_set || is_set(stale_msgs.operation)) leaf_name_data.push_back(stale_msgs.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_children()
{
    return children;
}

void Vpdn::VpdnMirroring::QadRecvStatsLastClear::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "acks-recvd")
    {
        acks_recvd = value;
    }
    if(value_path == "init-drops")
    {
        init_drops = value;
    }
    if(value_path == "msg-drops")
    {
        msg_drops = value;
    }
    if(value_path == "msgs-recvd")
    {
        msgs_recvd = value;
    }
    if(value_path == "ooo-drops")
    {
        ooo_drops = value;
    }
    if(value_path == "recvd-acks-failed")
    {
        recvd_acks_failed = value;
    }
    if(value_path == "stale-msgs")
    {
        stale_msgs = value;
    }
}

Vpdn::VpdnRedundancy::VpdnRedundancy()
    :
    abort_time{YType::uint64, "abort-time"},
    finish_time{YType::uint64, "finish-time"},
    session_synced{YType::uint32, "session-synced"},
    session_total{YType::uint32, "session-total"},
    start_time{YType::uint64, "start-time"},
    state{YType::enumeration, "state"}
{
    yang_name = "vpdn-redundancy"; yang_parent_name = "vpdn";
}

Vpdn::VpdnRedundancy::~VpdnRedundancy()
{
}

bool Vpdn::VpdnRedundancy::has_data() const
{
    return abort_time.is_set
	|| finish_time.is_set
	|| session_synced.is_set
	|| session_total.is_set
	|| start_time.is_set
	|| state.is_set;
}

bool Vpdn::VpdnRedundancy::has_operation() const
{
    return is_set(operation)
	|| is_set(abort_time.operation)
	|| is_set(finish_time.operation)
	|| is_set(session_synced.operation)
	|| is_set(session_total.operation)
	|| is_set(start_time.operation)
	|| is_set(state.operation);
}

std::string Vpdn::VpdnRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpdn-redundancy";

    return path_buffer.str();

}

EntityPath Vpdn::VpdnRedundancy::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (abort_time.is_set || is_set(abort_time.operation)) leaf_name_data.push_back(abort_time.get_name_leafdata());
    if (finish_time.is_set || is_set(finish_time.operation)) leaf_name_data.push_back(finish_time.get_name_leafdata());
    if (session_synced.is_set || is_set(session_synced.operation)) leaf_name_data.push_back(session_synced.get_name_leafdata());
    if (session_total.is_set || is_set(session_total.operation)) leaf_name_data.push_back(session_total.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.operation)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (state.is_set || is_set(state.operation)) leaf_name_data.push_back(state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::VpdnRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::VpdnRedundancy::get_children()
{
    return children;
}

void Vpdn::VpdnRedundancy::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "abort-time")
    {
        abort_time = value;
    }
    if(value_path == "finish-time")
    {
        finish_time = value;
    }
    if(value_path == "session-synced")
    {
        session_synced = value;
    }
    if(value_path == "session-total")
    {
        session_total = value;
    }
    if(value_path == "start-time")
    {
        start_time = value;
    }
    if(value_path == "state")
    {
        state = value;
    }
}

Vpdn::HistoryFailures::HistoryFailures()
{
    yang_name = "history-failures"; yang_parent_name = "vpdn";
}

Vpdn::HistoryFailures::~HistoryFailures()
{
}

bool Vpdn::HistoryFailures::has_data() const
{
    for (std::size_t index=0; index<history_failure.size(); index++)
    {
        if(history_failure[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::HistoryFailures::has_operation() const
{
    for (std::size_t index=0; index<history_failure.size(); index++)
    {
        if(history_failure[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Vpdn::HistoryFailures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-failures";

    return path_buffer.str();

}

EntityPath Vpdn::HistoryFailures::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::HistoryFailures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "history-failure")
    {
        for(auto const & c : history_failure)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Vpdn::HistoryFailures::HistoryFailure>();
        c->parent = this;
        history_failure.push_back(std::move(c));
        children[segment_path] = history_failure.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::HistoryFailures::get_children()
{
    for (auto const & c : history_failure)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Vpdn::HistoryFailures::set_value(const std::string & value_path, std::string value)
{
}

Vpdn::HistoryFailures::HistoryFailure::HistoryFailure()
    :
    destination_address{YType::str, "destination-address"},
    domain_name{YType::str, "domain-name"},
    error_repeat_count{YType::uint16, "error-repeat-count"},
    event_time{YType::str, "event-time"},
    failure_type{YType::enumeration, "failure-type"},
    home_gateway{YType::str, "home-gateway"},
    local_client_id{YType::uint16, "local-client-id"},
    mid{YType::uint16, "mid"},
    nas{YType::str, "nas"},
    remote_client_id{YType::uint16, "remote-client-id"},
    remote_name{YType::str, "remote-name"},
    source_address{YType::str, "source-address"},
    username{YType::str, "username"},
    username_xr{YType::str, "username-xr"}
{
    yang_name = "history-failure"; yang_parent_name = "history-failures";
}

Vpdn::HistoryFailures::HistoryFailure::~HistoryFailure()
{
}

bool Vpdn::HistoryFailures::HistoryFailure::has_data() const
{
    return destination_address.is_set
	|| domain_name.is_set
	|| error_repeat_count.is_set
	|| event_time.is_set
	|| failure_type.is_set
	|| home_gateway.is_set
	|| local_client_id.is_set
	|| mid.is_set
	|| nas.is_set
	|| remote_client_id.is_set
	|| remote_name.is_set
	|| source_address.is_set
	|| username.is_set
	|| username_xr.is_set;
}

bool Vpdn::HistoryFailures::HistoryFailure::has_operation() const
{
    return is_set(operation)
	|| is_set(destination_address.operation)
	|| is_set(domain_name.operation)
	|| is_set(error_repeat_count.operation)
	|| is_set(event_time.operation)
	|| is_set(failure_type.operation)
	|| is_set(home_gateway.operation)
	|| is_set(local_client_id.operation)
	|| is_set(mid.operation)
	|| is_set(nas.operation)
	|| is_set(remote_client_id.operation)
	|| is_set(remote_name.operation)
	|| is_set(source_address.operation)
	|| is_set(username.operation)
	|| is_set(username_xr.operation);
}

std::string Vpdn::HistoryFailures::HistoryFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-failure";

    return path_buffer.str();

}

EntityPath Vpdn::HistoryFailures::HistoryFailure::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/history-failures/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.operation)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (error_repeat_count.is_set || is_set(error_repeat_count.operation)) leaf_name_data.push_back(error_repeat_count.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.operation)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (failure_type.is_set || is_set(failure_type.operation)) leaf_name_data.push_back(failure_type.get_name_leafdata());
    if (home_gateway.is_set || is_set(home_gateway.operation)) leaf_name_data.push_back(home_gateway.get_name_leafdata());
    if (local_client_id.is_set || is_set(local_client_id.operation)) leaf_name_data.push_back(local_client_id.get_name_leafdata());
    if (mid.is_set || is_set(mid.operation)) leaf_name_data.push_back(mid.get_name_leafdata());
    if (nas.is_set || is_set(nas.operation)) leaf_name_data.push_back(nas.get_name_leafdata());
    if (remote_client_id.is_set || is_set(remote_client_id.operation)) leaf_name_data.push_back(remote_client_id.get_name_leafdata());
    if (remote_name.is_set || is_set(remote_name.operation)) leaf_name_data.push_back(remote_name.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.operation)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (username.is_set || is_set(username.operation)) leaf_name_data.push_back(username.get_name_leafdata());
    if (username_xr.is_set || is_set(username_xr.operation)) leaf_name_data.push_back(username_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Vpdn::HistoryFailures::HistoryFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Vpdn::HistoryFailures::HistoryFailure::get_children()
{
    return children;
}

void Vpdn::HistoryFailures::HistoryFailure::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
    }
    if(value_path == "error-repeat-count")
    {
        error_repeat_count = value;
    }
    if(value_path == "event-time")
    {
        event_time = value;
    }
    if(value_path == "failure-type")
    {
        failure_type = value;
    }
    if(value_path == "home-gateway")
    {
        home_gateway = value;
    }
    if(value_path == "local-client-id")
    {
        local_client_id = value;
    }
    if(value_path == "mid")
    {
        mid = value;
    }
    if(value_path == "nas")
    {
        nas = value;
    }
    if(value_path == "remote-client-id")
    {
        remote_client_id = value;
    }
    if(value_path == "remote-name")
    {
        remote_name = value;
    }
    if(value_path == "source-address")
    {
        source_address = value;
    }
    if(value_path == "username")
    {
        username = value;
    }
    if(value_path == "username-xr")
    {
        username_xr = value;
    }
}

const Enum::YLeaf SessionStateEnum::idle {0, "idle"};
const Enum::YLeaf SessionStateEnum::connected {1, "connected"};
const Enum::YLeaf SessionStateEnum::established {2, "established"};

const Enum::YLeaf VpdnStateEnum::initial_state {0, "initial-state"};
const Enum::YLeaf VpdnStateEnum::init_sync_in_progress {1, "init-sync-in-progress"};
const Enum::YLeaf VpdnStateEnum::steady_state {2, "steady-state"};

const Enum::YLeaf VpdnFailcodeEnum::unknown {0, "unknown"};
const Enum::YLeaf VpdnFailcodeEnum::peer_action {1, "peer-action"};
const Enum::YLeaf VpdnFailcodeEnum::authentication {2, "authentication"};
const Enum::YLeaf VpdnFailcodeEnum::authentication_error {3, "authentication-error"};
const Enum::YLeaf VpdnFailcodeEnum::authentication_failed {4, "authentication-failed"};
const Enum::YLeaf VpdnFailcodeEnum::authorization {5, "authorization"};
const Enum::YLeaf VpdnFailcodeEnum::authorization_failed {6, "authorization-failed"};
const Enum::YLeaf VpdnFailcodeEnum::home_gatewayfailure {7, "home-gatewayfailure"};
const Enum::YLeaf VpdnFailcodeEnum::connection_termination {8, "connection-termination"};
const Enum::YLeaf VpdnFailcodeEnum::no_resources_available {9, "no-resources-available"};
const Enum::YLeaf VpdnFailcodeEnum::timer_expiry {10, "timer-expiry"};
const Enum::YLeaf VpdnFailcodeEnum::session_mid_exceeded {11, "session-mid-exceeded"};
const Enum::YLeaf VpdnFailcodeEnum::soft_shut {12, "soft-shut"};
const Enum::YLeaf VpdnFailcodeEnum::session_limit_exceeded {13, "session-limit-exceeded"};
const Enum::YLeaf VpdnFailcodeEnum::administrative {14, "administrative"};
const Enum::YLeaf VpdnFailcodeEnum::link_failure {15, "link-failure"};
const Enum::YLeaf VpdnFailcodeEnum::security {16, "security"};
const Enum::YLeaf VpdnFailcodeEnum::tunnel_in_resync {17, "tunnel-in-resync"};
const Enum::YLeaf VpdnFailcodeEnum::call_prarmeters {18, "call-prarmeters"};

const Enum::YLeaf VpdnNasPortEnum::none {0, "none"};
const Enum::YLeaf VpdnNasPortEnum::primary {1, "primary"};
const Enum::YLeaf VpdnNasPortEnum::bri {2, "bri"};
const Enum::YLeaf VpdnNasPortEnum::serial {3, "serial"};
const Enum::YLeaf VpdnNasPortEnum::asynchronous {4, "asynchronous"};
const Enum::YLeaf VpdnNasPortEnum::vty {5, "vty"};
const Enum::YLeaf VpdnNasPortEnum::atm {6, "atm"};
const Enum::YLeaf VpdnNasPortEnum::ethernet {7, "ethernet"};
const Enum::YLeaf VpdnNasPortEnum::ppp_atm {8, "ppp-atm"};
const Enum::YLeaf VpdnNasPortEnum::pppoe_over_atm {9, "pppoe-over-atm"};
const Enum::YLeaf VpdnNasPortEnum::pppoe_over_ethernet {10, "pppoe-over-ethernet"};
const Enum::YLeaf VpdnNasPortEnum::pppoe_over_vlan {11, "pppoe-over-vlan"};
const Enum::YLeaf VpdnNasPortEnum::pppoe_over_q_in_q {12, "pppoe-over-q-in-q"};
const Enum::YLeaf VpdnNasPortEnum::v120 {13, "v120"};
const Enum::YLeaf VpdnNasPortEnum::v110 {14, "v110"};
const Enum::YLeaf VpdnNasPortEnum::piafs {15, "piafs"};
const Enum::YLeaf VpdnNasPortEnum::x75 {16, "x75"};
const Enum::YLeaf VpdnNasPortEnum::ip_sec {17, "ip-sec"};
const Enum::YLeaf VpdnNasPortEnum::other {18, "other"};
const Enum::YLeaf VpdnNasPortEnum::virtual_pppoe_over_ethernet {19, "virtual-pppoe-over-ethernet"};
const Enum::YLeaf VpdnNasPortEnum::virtual_pppoe_over_vlan {20, "virtual-pppoe-over-vlan"};
const Enum::YLeaf VpdnNasPortEnum::virtual_pppoe_over_q_in_q {21, "virtual-pppoe-over-q-in-q"};
const Enum::YLeaf VpdnNasPortEnum::ipo_e_over_ethernet {22, "ipo-e-over-ethernet"};
const Enum::YLeaf VpdnNasPortEnum::ipo_e_over_vlan {23, "ipo-e-over-vlan"};
const Enum::YLeaf VpdnNasPortEnum::ipo_e_over_q_in_q {24, "ipo-e-over-q-in-q"};
const Enum::YLeaf VpdnNasPortEnum::virtual_i_po_e_over_ethernet {25, "virtual-i-po-e-over-ethernet"};
const Enum::YLeaf VpdnNasPortEnum::virtual_i_po_e_over_vlan {26, "virtual-i-po-e-over-vlan"};
const Enum::YLeaf VpdnNasPortEnum::virtual_i_po_e_over_q_in_q {27, "virtual-i-po-e-over-q-in-q"};
const Enum::YLeaf VpdnNasPortEnum::unknown {28, "unknown"};

const Enum::YLeaf TosModeEnum::default_ {0, "default"};
const Enum::YLeaf TosModeEnum::set {1, "set"};
const Enum::YLeaf TosModeEnum::reflect {2, "reflect"};

const Enum::YLeaf LsgStatusEnum::none {0, "none"};
const Enum::YLeaf LsgStatusEnum::active {1, "active"};
const Enum::YLeaf LsgStatusEnum::down {2, "down"};
const Enum::YLeaf LsgStatusEnum::testable {3, "testable"};
const Enum::YLeaf LsgStatusEnum::testing {4, "testing"};


}
}

