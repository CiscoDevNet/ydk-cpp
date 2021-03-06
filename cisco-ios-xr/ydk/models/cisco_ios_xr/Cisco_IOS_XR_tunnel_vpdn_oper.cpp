
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_tunnel_vpdn_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_tunnel_vpdn_oper {

Vpdn::Vpdn()
    :
    sessions(std::make_shared<Vpdn::Sessions>())
    , tunnel_destinations(std::make_shared<Vpdn::TunnelDestinations>())
    , vpdn_mirroring(std::make_shared<Vpdn::VpdnMirroring>())
    , vpdn_redundancy(std::make_shared<Vpdn::VpdnRedundancy>())
    , history_failures(std::make_shared<Vpdn::HistoryFailures>())
{
    sessions->parent = this;
    tunnel_destinations->parent = this;
    vpdn_mirroring->parent = this;
    vpdn_redundancy->parent = this;
    history_failures->parent = this;

    yang_name = "vpdn"; yang_parent_name = "Cisco-IOS-XR-tunnel-vpdn-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Vpdn::~Vpdn()
{
}

bool Vpdn::has_data() const
{
    if (is_presence_container) return true;
    return (sessions !=  nullptr && sessions->has_data())
	|| (tunnel_destinations !=  nullptr && tunnel_destinations->has_data())
	|| (vpdn_mirroring !=  nullptr && vpdn_mirroring->has_data())
	|| (vpdn_redundancy !=  nullptr && vpdn_redundancy->has_data())
	|| (history_failures !=  nullptr && history_failures->has_data());
}

bool Vpdn::has_operation() const
{
    return is_set(yfilter)
	|| (sessions !=  nullptr && sessions->has_operation())
	|| (tunnel_destinations !=  nullptr && tunnel_destinations->has_operation())
	|| (vpdn_mirroring !=  nullptr && vpdn_mirroring->has_operation())
	|| (vpdn_redundancy !=  nullptr && vpdn_redundancy->has_operation())
	|| (history_failures !=  nullptr && history_failures->has_operation());
}

std::string Vpdn::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "sessions")
    {
        if(sessions == nullptr)
        {
            sessions = std::make_shared<Vpdn::Sessions>();
        }
        return sessions;
    }

    if(child_yang_name == "tunnel-destinations")
    {
        if(tunnel_destinations == nullptr)
        {
            tunnel_destinations = std::make_shared<Vpdn::TunnelDestinations>();
        }
        return tunnel_destinations;
    }

    if(child_yang_name == "vpdn-mirroring")
    {
        if(vpdn_mirroring == nullptr)
        {
            vpdn_mirroring = std::make_shared<Vpdn::VpdnMirroring>();
        }
        return vpdn_mirroring;
    }

    if(child_yang_name == "vpdn-redundancy")
    {
        if(vpdn_redundancy == nullptr)
        {
            vpdn_redundancy = std::make_shared<Vpdn::VpdnRedundancy>();
        }
        return vpdn_redundancy;
    }

    if(child_yang_name == "history-failures")
    {
        if(history_failures == nullptr)
        {
            history_failures = std::make_shared<Vpdn::HistoryFailures>();
        }
        return history_failures;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(sessions != nullptr)
    {
        _children["sessions"] = sessions;
    }

    if(tunnel_destinations != nullptr)
    {
        _children["tunnel-destinations"] = tunnel_destinations;
    }

    if(vpdn_mirroring != nullptr)
    {
        _children["vpdn-mirroring"] = vpdn_mirroring;
    }

    if(vpdn_redundancy != nullptr)
    {
        _children["vpdn-redundancy"] = vpdn_redundancy;
    }

    if(history_failures != nullptr)
    {
        _children["history-failures"] = history_failures;
    }

    return _children;
}

void Vpdn::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vpdn::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Vpdn::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Vpdn::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Vpdn::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "sessions" || name == "tunnel-destinations" || name == "vpdn-mirroring" || name == "vpdn-redundancy" || name == "history-failures")
        return true;
    return false;
}

Vpdn::Sessions::Sessions()
    :
    session(this, {"session_label"})
{

    yang_name = "sessions"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Sessions::~Sessions()
{
}

bool Vpdn::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vpdn::Sessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<Vpdn::Sessions::Session>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vpdn::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vpdn::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vpdn::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Vpdn::Sessions::Session::Session()
    :
    session_label{YType::str, "session-label"},
    setup_time{YType::uint32, "setup-time"},
    parent_interface_name{YType::str, "parent-interface-name"}
        ,
    session(std::make_shared<Vpdn::Sessions::Session::Session_>())
    , l2tp(std::make_shared<Vpdn::Sessions::Session::L2tp>())
    , subscriber(std::make_shared<Vpdn::Sessions::Session::Subscriber>())
    , configuration(std::make_shared<Vpdn::Sessions::Session::Configuration>())
{
    session->parent = this;
    l2tp->parent = this;
    subscriber->parent = this;
    configuration->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::Sessions::Session::~Session()
{
}

bool Vpdn::Sessions::Session::has_data() const
{
    if (is_presence_container) return true;
    return session_label.is_set
	|| setup_time.is_set
	|| parent_interface_name.is_set
	|| (session !=  nullptr && session->has_data())
	|| (l2tp !=  nullptr && l2tp->has_data())
	|| (subscriber !=  nullptr && subscriber->has_data())
	|| (configuration !=  nullptr && configuration->has_data());
}

bool Vpdn::Sessions::Session::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_label.yfilter)
	|| ydk::is_set(setup_time.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| (session !=  nullptr && session->has_operation())
	|| (l2tp !=  nullptr && l2tp->has_operation())
	|| (subscriber !=  nullptr && subscriber->has_operation())
	|| (configuration !=  nullptr && configuration->has_operation());
}

std::string Vpdn::Sessions::Session::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::Sessions::Session::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session_label, "session-label");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Sessions::Session::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_label.is_set || is_set(session_label.yfilter)) leaf_name_data.push_back(session_label.get_name_leafdata());
    if (setup_time.is_set || is_set(setup_time.yfilter)) leaf_name_data.push_back(setup_time.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Sessions::Session::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        if(session == nullptr)
        {
            session = std::make_shared<Vpdn::Sessions::Session::Session_>();
        }
        return session;
    }

    if(child_yang_name == "l2tp")
    {
        if(l2tp == nullptr)
        {
            l2tp = std::make_shared<Vpdn::Sessions::Session::L2tp>();
        }
        return l2tp;
    }

    if(child_yang_name == "subscriber")
    {
        if(subscriber == nullptr)
        {
            subscriber = std::make_shared<Vpdn::Sessions::Session::Subscriber>();
        }
        return subscriber;
    }

    if(child_yang_name == "configuration")
    {
        if(configuration == nullptr)
        {
            configuration = std::make_shared<Vpdn::Sessions::Session::Configuration>();
        }
        return configuration;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Sessions::Session::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(session != nullptr)
    {
        _children["session"] = session;
    }

    if(l2tp != nullptr)
    {
        _children["l2tp"] = l2tp;
    }

    if(subscriber != nullptr)
    {
        _children["subscriber"] = subscriber;
    }

    if(configuration != nullptr)
    {
        _children["configuration"] = configuration;
    }

    return _children;
}

void Vpdn::Sessions::Session::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-label")
    {
        session_label = value;
        session_label.value_namespace = name_space;
        session_label.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "setup-time")
    {
        setup_time = value;
        setup_time.value_namespace = name_space;
        setup_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Sessions::Session::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-label")
    {
        session_label.yfilter = yfilter;
    }
    if(value_path == "setup-time")
    {
        setup_time.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
}

bool Vpdn::Sessions::Session::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session" || name == "l2tp" || name == "subscriber" || name == "configuration" || name == "session-label" || name == "setup-time" || name == "parent-interface-name")
        return true;
    return false;
}

Vpdn::Sessions::Session::Session_::Session_()
    :
    last_change{YType::str, "last-change"},
    interface_name{YType::str, "interface-name"},
    username{YType::str, "username"},
    domain_name{YType::str, "domain-name"},
    state{YType::enumeration, "state"},
    l2tp_session_id{YType::uint16, "l2tp-session-id"},
    l2tp_tunnel_id{YType::uint16, "l2tp-tunnel-id"},
    srg_slave{YType::boolean, "srg-slave"}
{

    yang_name = "session"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Sessions::Session::Session_::~Session_()
{
}

bool Vpdn::Sessions::Session::Session_::has_data() const
{
    if (is_presence_container) return true;
    return last_change.is_set
	|| interface_name.is_set
	|| username.is_set
	|| domain_name.is_set
	|| state.is_set
	|| l2tp_session_id.is_set
	|| l2tp_tunnel_id.is_set
	|| srg_slave.is_set;
}

bool Vpdn::Sessions::Session::Session_::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(last_change.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(l2tp_session_id.yfilter)
	|| ydk::is_set(l2tp_tunnel_id.yfilter)
	|| ydk::is_set(srg_slave.yfilter);
}

std::string Vpdn::Sessions::Session::Session_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Sessions::Session::Session_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (last_change.is_set || is_set(last_change.yfilter)) leaf_name_data.push_back(last_change.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (l2tp_session_id.is_set || is_set(l2tp_session_id.yfilter)) leaf_name_data.push_back(l2tp_session_id.get_name_leafdata());
    if (l2tp_tunnel_id.is_set || is_set(l2tp_tunnel_id.yfilter)) leaf_name_data.push_back(l2tp_tunnel_id.get_name_leafdata());
    if (srg_slave.is_set || is_set(srg_slave.yfilter)) leaf_name_data.push_back(srg_slave.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Sessions::Session::Session_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Sessions::Session::Session_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Sessions::Session::Session_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "last-change")
    {
        last_change = value;
        last_change.value_namespace = name_space;
        last_change.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-session-id")
    {
        l2tp_session_id = value;
        l2tp_session_id.value_namespace = name_space;
        l2tp_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-tunnel-id")
    {
        l2tp_tunnel_id = value;
        l2tp_tunnel_id.value_namespace = name_space;
        l2tp_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "srg-slave")
    {
        srg_slave = value;
        srg_slave.value_namespace = name_space;
        srg_slave.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Sessions::Session::Session_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "last-change")
    {
        last_change.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "l2tp-session-id")
    {
        l2tp_session_id.yfilter = yfilter;
    }
    if(value_path == "l2tp-tunnel-id")
    {
        l2tp_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "srg-slave")
    {
        srg_slave.yfilter = yfilter;
    }
}

bool Vpdn::Sessions::Session::Session_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "last-change" || name == "interface-name" || name == "username" || name == "domain-name" || name == "state" || name == "l2tp-session-id" || name == "l2tp-tunnel-id" || name == "srg-slave")
        return true;
    return false;
}

Vpdn::Sessions::Session::L2tp::L2tp()
    :
    local_endpoint{YType::str, "local-endpoint"},
    remote_endpoint{YType::str, "remote-endpoint"},
    call_serial_number{YType::uint32, "call-serial-number"},
    is_l2tp_class_attribute_mask_set{YType::boolean, "is-l2tp-class-attribute-mask-set"},
    local_tunnel_id{YType::uint16, "local-tunnel-id"},
    remote_tunnel_id{YType::uint16, "remote-tunnel-id"},
    local_session_id{YType::uint16, "local-session-id"},
    remote_session_id{YType::uint16, "remote-session-id"},
    remote_port{YType::uint16, "remote-port"},
    tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
    tunnel_server_authentication_id{YType::str, "tunnel-server-authentication-id"},
    tunnel_assignment_id{YType::str, "tunnel-assignment-id"},
    is_tunnel_authentication_enabled{YType::boolean, "is-tunnel-authentication-enabled"}
{

    yang_name = "l2tp"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Sessions::Session::L2tp::~L2tp()
{
}

bool Vpdn::Sessions::Session::L2tp::has_data() const
{
    if (is_presence_container) return true;
    return local_endpoint.is_set
	|| remote_endpoint.is_set
	|| call_serial_number.is_set
	|| is_l2tp_class_attribute_mask_set.is_set
	|| local_tunnel_id.is_set
	|| remote_tunnel_id.is_set
	|| local_session_id.is_set
	|| remote_session_id.is_set
	|| remote_port.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_server_authentication_id.is_set
	|| tunnel_assignment_id.is_set
	|| is_tunnel_authentication_enabled.is_set;
}

bool Vpdn::Sessions::Session::L2tp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(local_endpoint.yfilter)
	|| ydk::is_set(remote_endpoint.yfilter)
	|| ydk::is_set(call_serial_number.yfilter)
	|| ydk::is_set(is_l2tp_class_attribute_mask_set.yfilter)
	|| ydk::is_set(local_tunnel_id.yfilter)
	|| ydk::is_set(remote_tunnel_id.yfilter)
	|| ydk::is_set(local_session_id.yfilter)
	|| ydk::is_set(remote_session_id.yfilter)
	|| ydk::is_set(remote_port.yfilter)
	|| ydk::is_set(tunnel_client_authentication_id.yfilter)
	|| ydk::is_set(tunnel_server_authentication_id.yfilter)
	|| ydk::is_set(tunnel_assignment_id.yfilter)
	|| ydk::is_set(is_tunnel_authentication_enabled.yfilter);
}

std::string Vpdn::Sessions::Session::L2tp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "l2tp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Sessions::Session::L2tp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (local_endpoint.is_set || is_set(local_endpoint.yfilter)) leaf_name_data.push_back(local_endpoint.get_name_leafdata());
    if (remote_endpoint.is_set || is_set(remote_endpoint.yfilter)) leaf_name_data.push_back(remote_endpoint.get_name_leafdata());
    if (call_serial_number.is_set || is_set(call_serial_number.yfilter)) leaf_name_data.push_back(call_serial_number.get_name_leafdata());
    if (is_l2tp_class_attribute_mask_set.is_set || is_set(is_l2tp_class_attribute_mask_set.yfilter)) leaf_name_data.push_back(is_l2tp_class_attribute_mask_set.get_name_leafdata());
    if (local_tunnel_id.is_set || is_set(local_tunnel_id.yfilter)) leaf_name_data.push_back(local_tunnel_id.get_name_leafdata());
    if (remote_tunnel_id.is_set || is_set(remote_tunnel_id.yfilter)) leaf_name_data.push_back(remote_tunnel_id.get_name_leafdata());
    if (local_session_id.is_set || is_set(local_session_id.yfilter)) leaf_name_data.push_back(local_session_id.get_name_leafdata());
    if (remote_session_id.is_set || is_set(remote_session_id.yfilter)) leaf_name_data.push_back(remote_session_id.get_name_leafdata());
    if (remote_port.is_set || is_set(remote_port.yfilter)) leaf_name_data.push_back(remote_port.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.yfilter)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_server_authentication_id.is_set || is_set(tunnel_server_authentication_id.yfilter)) leaf_name_data.push_back(tunnel_server_authentication_id.get_name_leafdata());
    if (tunnel_assignment_id.is_set || is_set(tunnel_assignment_id.yfilter)) leaf_name_data.push_back(tunnel_assignment_id.get_name_leafdata());
    if (is_tunnel_authentication_enabled.is_set || is_set(is_tunnel_authentication_enabled.yfilter)) leaf_name_data.push_back(is_tunnel_authentication_enabled.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Sessions::Session::L2tp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Sessions::Session::L2tp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Sessions::Session::L2tp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "local-endpoint")
    {
        local_endpoint = value;
        local_endpoint.value_namespace = name_space;
        local_endpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-endpoint")
    {
        remote_endpoint = value;
        remote_endpoint.value_namespace = name_space;
        remote_endpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "call-serial-number")
    {
        call_serial_number = value;
        call_serial_number.value_namespace = name_space;
        call_serial_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-l2tp-class-attribute-mask-set")
    {
        is_l2tp_class_attribute_mask_set = value;
        is_l2tp_class_attribute_mask_set.value_namespace = name_space;
        is_l2tp_class_attribute_mask_set.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id = value;
        local_tunnel_id.value_namespace = name_space;
        local_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id = value;
        remote_tunnel_id.value_namespace = name_space;
        remote_tunnel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-session-id")
    {
        local_session_id = value;
        local_session_id.value_namespace = name_space;
        local_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id = value;
        remote_session_id.value_namespace = name_space;
        remote_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-port")
    {
        remote_port = value;
        remote_port.value_namespace = name_space;
        remote_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id = value;
        tunnel_client_authentication_id.value_namespace = name_space;
        tunnel_client_authentication_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-server-authentication-id")
    {
        tunnel_server_authentication_id = value;
        tunnel_server_authentication_id.value_namespace = name_space;
        tunnel_server_authentication_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-assignment-id")
    {
        tunnel_assignment_id = value;
        tunnel_assignment_id.value_namespace = name_space;
        tunnel_assignment_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-tunnel-authentication-enabled")
    {
        is_tunnel_authentication_enabled = value;
        is_tunnel_authentication_enabled.value_namespace = name_space;
        is_tunnel_authentication_enabled.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Sessions::Session::L2tp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "local-endpoint")
    {
        local_endpoint.yfilter = yfilter;
    }
    if(value_path == "remote-endpoint")
    {
        remote_endpoint.yfilter = yfilter;
    }
    if(value_path == "call-serial-number")
    {
        call_serial_number.yfilter = yfilter;
    }
    if(value_path == "is-l2tp-class-attribute-mask-set")
    {
        is_l2tp_class_attribute_mask_set.yfilter = yfilter;
    }
    if(value_path == "local-tunnel-id")
    {
        local_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "remote-tunnel-id")
    {
        remote_tunnel_id.yfilter = yfilter;
    }
    if(value_path == "local-session-id")
    {
        local_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-session-id")
    {
        remote_session_id.yfilter = yfilter;
    }
    if(value_path == "remote-port")
    {
        remote_port.yfilter = yfilter;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-server-authentication-id")
    {
        tunnel_server_authentication_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-assignment-id")
    {
        tunnel_assignment_id.yfilter = yfilter;
    }
    if(value_path == "is-tunnel-authentication-enabled")
    {
        is_tunnel_authentication_enabled.yfilter = yfilter;
    }
}

bool Vpdn::Sessions::Session::L2tp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "local-endpoint" || name == "remote-endpoint" || name == "call-serial-number" || name == "is-l2tp-class-attribute-mask-set" || name == "local-tunnel-id" || name == "remote-tunnel-id" || name == "local-session-id" || name == "remote-session-id" || name == "remote-port" || name == "tunnel-client-authentication-id" || name == "tunnel-server-authentication-id" || name == "tunnel-assignment-id" || name == "is-tunnel-authentication-enabled")
        return true;
    return false;
}

Vpdn::Sessions::Session::Subscriber::Subscriber()
    :
    nas_port_id_val{YType::str, "nas-port-id-val"},
    nas_port_type{YType::str, "nas-port-type"},
    physical_channel_id{YType::uint32, "physical-channel-id"},
    receive_connect_speed{YType::uint64, "receive-connect-speed"},
    transmit_connect_speed{YType::uint64, "transmit-connect-speed"}
{

    yang_name = "subscriber"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Sessions::Session::Subscriber::~Subscriber()
{
}

bool Vpdn::Sessions::Session::Subscriber::has_data() const
{
    if (is_presence_container) return true;
    return nas_port_id_val.is_set
	|| nas_port_type.is_set
	|| physical_channel_id.is_set
	|| receive_connect_speed.is_set
	|| transmit_connect_speed.is_set;
}

bool Vpdn::Sessions::Session::Subscriber::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nas_port_id_val.yfilter)
	|| ydk::is_set(nas_port_type.yfilter)
	|| ydk::is_set(physical_channel_id.yfilter)
	|| ydk::is_set(receive_connect_speed.yfilter)
	|| ydk::is_set(transmit_connect_speed.yfilter);
}

std::string Vpdn::Sessions::Session::Subscriber::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Sessions::Session::Subscriber::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nas_port_id_val.is_set || is_set(nas_port_id_val.yfilter)) leaf_name_data.push_back(nas_port_id_val.get_name_leafdata());
    if (nas_port_type.is_set || is_set(nas_port_type.yfilter)) leaf_name_data.push_back(nas_port_type.get_name_leafdata());
    if (physical_channel_id.is_set || is_set(physical_channel_id.yfilter)) leaf_name_data.push_back(physical_channel_id.get_name_leafdata());
    if (receive_connect_speed.is_set || is_set(receive_connect_speed.yfilter)) leaf_name_data.push_back(receive_connect_speed.get_name_leafdata());
    if (transmit_connect_speed.is_set || is_set(transmit_connect_speed.yfilter)) leaf_name_data.push_back(transmit_connect_speed.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Sessions::Session::Subscriber::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Sessions::Session::Subscriber::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Sessions::Session::Subscriber::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nas-port-id-val")
    {
        nas_port_id_val = value;
        nas_port_id_val.value_namespace = name_space;
        nas_port_id_val.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas-port-type")
    {
        nas_port_type = value;
        nas_port_type.value_namespace = name_space;
        nas_port_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "physical-channel-id")
    {
        physical_channel_id = value;
        physical_channel_id.value_namespace = name_space;
        physical_channel_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "receive-connect-speed")
    {
        receive_connect_speed = value;
        receive_connect_speed.value_namespace = name_space;
        receive_connect_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "transmit-connect-speed")
    {
        transmit_connect_speed = value;
        transmit_connect_speed.value_namespace = name_space;
        transmit_connect_speed.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Sessions::Session::Subscriber::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nas-port-id-val")
    {
        nas_port_id_val.yfilter = yfilter;
    }
    if(value_path == "nas-port-type")
    {
        nas_port_type.yfilter = yfilter;
    }
    if(value_path == "physical-channel-id")
    {
        physical_channel_id.yfilter = yfilter;
    }
    if(value_path == "receive-connect-speed")
    {
        receive_connect_speed.yfilter = yfilter;
    }
    if(value_path == "transmit-connect-speed")
    {
        transmit_connect_speed.yfilter = yfilter;
    }
}

bool Vpdn::Sessions::Session::Subscriber::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nas-port-id-val" || name == "nas-port-type" || name == "physical-channel-id" || name == "receive-connect-speed" || name == "transmit-connect-speed")
        return true;
    return false;
}

Vpdn::Sessions::Session::Configuration::Configuration()
    :
    template_name{YType::str, "template-name"},
    vrf_name{YType::str, "vrf-name"},
    l2tp_busy_timeout{YType::uint16, "l2tp-busy-timeout"},
    tos_mode{YType::enumeration, "tos-mode"},
    tos{YType::uint8, "tos"},
    dsl_line_forwarding{YType::boolean, "dsl-line-forwarding"}
        ,
    vpn_id(std::make_shared<Vpdn::Sessions::Session::Configuration::VpnId>())
{
    vpn_id->parent = this;

    yang_name = "configuration"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Sessions::Session::Configuration::~Configuration()
{
}

bool Vpdn::Sessions::Session::Configuration::has_data() const
{
    if (is_presence_container) return true;
    return template_name.is_set
	|| vrf_name.is_set
	|| l2tp_busy_timeout.is_set
	|| tos_mode.is_set
	|| tos.is_set
	|| dsl_line_forwarding.is_set
	|| (vpn_id !=  nullptr && vpn_id->has_data());
}

bool Vpdn::Sessions::Session::Configuration::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(template_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(l2tp_busy_timeout.yfilter)
	|| ydk::is_set(tos_mode.yfilter)
	|| ydk::is_set(tos.yfilter)
	|| ydk::is_set(dsl_line_forwarding.yfilter)
	|| (vpn_id !=  nullptr && vpn_id->has_operation());
}

std::string Vpdn::Sessions::Session::Configuration::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "configuration";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Sessions::Session::Configuration::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (template_name.is_set || is_set(template_name.yfilter)) leaf_name_data.push_back(template_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (l2tp_busy_timeout.is_set || is_set(l2tp_busy_timeout.yfilter)) leaf_name_data.push_back(l2tp_busy_timeout.get_name_leafdata());
    if (tos_mode.is_set || is_set(tos_mode.yfilter)) leaf_name_data.push_back(tos_mode.get_name_leafdata());
    if (tos.is_set || is_set(tos.yfilter)) leaf_name_data.push_back(tos.get_name_leafdata());
    if (dsl_line_forwarding.is_set || is_set(dsl_line_forwarding.yfilter)) leaf_name_data.push_back(dsl_line_forwarding.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Sessions::Session::Configuration::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vpn-id")
    {
        if(vpn_id == nullptr)
        {
            vpn_id = std::make_shared<Vpdn::Sessions::Session::Configuration::VpnId>();
        }
        return vpn_id;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Sessions::Session::Configuration::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(vpn_id != nullptr)
    {
        _children["vpn-id"] = vpn_id;
    }

    return _children;
}

void Vpdn::Sessions::Session::Configuration::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "template-name")
    {
        template_name = value;
        template_name.value_namespace = name_space;
        template_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "l2tp-busy-timeout")
    {
        l2tp_busy_timeout = value;
        l2tp_busy_timeout.value_namespace = name_space;
        l2tp_busy_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos-mode")
    {
        tos_mode = value;
        tos_mode.value_namespace = name_space;
        tos_mode.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tos")
    {
        tos = value;
        tos.value_namespace = name_space;
        tos.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding = value;
        dsl_line_forwarding.value_namespace = name_space;
        dsl_line_forwarding.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Sessions::Session::Configuration::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "template-name")
    {
        template_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "l2tp-busy-timeout")
    {
        l2tp_busy_timeout.yfilter = yfilter;
    }
    if(value_path == "tos-mode")
    {
        tos_mode.yfilter = yfilter;
    }
    if(value_path == "tos")
    {
        tos.yfilter = yfilter;
    }
    if(value_path == "dsl-line-forwarding")
    {
        dsl_line_forwarding.yfilter = yfilter;
    }
}

bool Vpdn::Sessions::Session::Configuration::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vpn-id" || name == "template-name" || name == "vrf-name" || name == "l2tp-busy-timeout" || name == "tos-mode" || name == "tos" || name == "dsl-line-forwarding")
        return true;
    return false;
}

Vpdn::Sessions::Session::Configuration::VpnId::VpnId()
    :
    oui{YType::uint32, "oui"},
    index_{YType::uint32, "index"}
{

    yang_name = "vpn-id"; yang_parent_name = "configuration"; is_top_level_class = false; has_list_ancestor = true; 
}

Vpdn::Sessions::Session::Configuration::VpnId::~VpnId()
{
}

bool Vpdn::Sessions::Session::Configuration::VpnId::has_data() const
{
    if (is_presence_container) return true;
    return oui.is_set
	|| index_.is_set;
}

bool Vpdn::Sessions::Session::Configuration::VpnId::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(oui.yfilter)
	|| ydk::is_set(index_.yfilter);
}

std::string Vpdn::Sessions::Session::Configuration::VpnId::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpn-id";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::Sessions::Session::Configuration::VpnId::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (oui.is_set || is_set(oui.yfilter)) leaf_name_data.push_back(oui.get_name_leafdata());
    if (index_.is_set || is_set(index_.yfilter)) leaf_name_data.push_back(index_.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::Sessions::Session::Configuration::VpnId::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::Sessions::Session::Configuration::VpnId::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::Sessions::Session::Configuration::VpnId::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "oui")
    {
        oui = value;
        oui.value_namespace = name_space;
        oui.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "index")
    {
        index_ = value;
        index_.value_namespace = name_space;
        index_.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::Sessions::Session::Configuration::VpnId::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "oui")
    {
        oui.yfilter = yfilter;
    }
    if(value_path == "index")
    {
        index_.yfilter = yfilter;
    }
}

bool Vpdn::Sessions::Session::Configuration::VpnId::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "oui" || name == "index")
        return true;
    return false;
}

Vpdn::TunnelDestinations::TunnelDestinations()
    :
    tunnel_destination(this, {})
{

    yang_name = "tunnel-destinations"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::TunnelDestinations::~TunnelDestinations()
{
}

bool Vpdn::TunnelDestinations::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tunnel_destination.len(); index++)
    {
        if(tunnel_destination[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::TunnelDestinations::has_operation() const
{
    for (std::size_t index=0; index<tunnel_destination.len(); index++)
    {
        if(tunnel_destination[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vpdn::TunnelDestinations::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::TunnelDestinations::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-destinations";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::TunnelDestinations::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::TunnelDestinations::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tunnel-destination")
    {
        auto ent_ = std::make_shared<Vpdn::TunnelDestinations::TunnelDestination>();
        ent_->parent = this;
        tunnel_destination.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::TunnelDestinations::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tunnel_destination.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vpdn::TunnelDestinations::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vpdn::TunnelDestinations::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vpdn::TunnelDestinations::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tunnel-destination")
        return true;
    return false;
}

Vpdn::TunnelDestinations::TunnelDestination::TunnelDestination()
    :
    vrf_name{YType::str, "vrf-name"},
    address{YType::str, "address"},
    vrf_name_xr{YType::str, "vrf-name-xr"},
    load{YType::uint32, "load"},
    status{YType::enumeration, "status"},
    connects{YType::uint32, "connects"},
    disconnects{YType::uint32, "disconnects"},
    retry{YType::uint32, "retry"},
    status_change_time{YType::uint32, "status-change-time"}
{

    yang_name = "tunnel-destination"; yang_parent_name = "tunnel-destinations"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::TunnelDestinations::TunnelDestination::~TunnelDestination()
{
}

bool Vpdn::TunnelDestinations::TunnelDestination::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| address.is_set
	|| vrf_name_xr.is_set
	|| load.is_set
	|| status.is_set
	|| connects.is_set
	|| disconnects.is_set
	|| retry.is_set
	|| status_change_time.is_set;
}

bool Vpdn::TunnelDestinations::TunnelDestination::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vrf_name_xr.yfilter)
	|| ydk::is_set(load.yfilter)
	|| ydk::is_set(status.yfilter)
	|| ydk::is_set(connects.yfilter)
	|| ydk::is_set(disconnects.yfilter)
	|| ydk::is_set(retry.yfilter)
	|| ydk::is_set(status_change_time.yfilter);
}

std::string Vpdn::TunnelDestinations::TunnelDestination::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/tunnel-destinations/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::TunnelDestinations::TunnelDestination::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tunnel-destination";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::TunnelDestinations::TunnelDestination::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name_xr.is_set || is_set(vrf_name_xr.yfilter)) leaf_name_data.push_back(vrf_name_xr.get_name_leafdata());
    if (load.is_set || is_set(load.yfilter)) leaf_name_data.push_back(load.get_name_leafdata());
    if (status.is_set || is_set(status.yfilter)) leaf_name_data.push_back(status.get_name_leafdata());
    if (connects.is_set || is_set(connects.yfilter)) leaf_name_data.push_back(connects.get_name_leafdata());
    if (disconnects.is_set || is_set(disconnects.yfilter)) leaf_name_data.push_back(disconnects.get_name_leafdata());
    if (retry.is_set || is_set(retry.yfilter)) leaf_name_data.push_back(retry.get_name_leafdata());
    if (status_change_time.is_set || is_set(status_change_time.yfilter)) leaf_name_data.push_back(status_change_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::TunnelDestinations::TunnelDestination::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::TunnelDestinations::TunnelDestination::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::TunnelDestinations::TunnelDestination::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr = value;
        vrf_name_xr.value_namespace = name_space;
        vrf_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "load")
    {
        load = value;
        load.value_namespace = name_space;
        load.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status")
    {
        status = value;
        status.value_namespace = name_space;
        status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connects")
    {
        connects = value;
        connects.value_namespace = name_space;
        connects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnects")
    {
        disconnects = value;
        disconnects.value_namespace = name_space;
        disconnects.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "retry")
    {
        retry = value;
        retry.value_namespace = name_space;
        retry.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "status-change-time")
    {
        status_change_time = value;
        status_change_time.value_namespace = name_space;
        status_change_time.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::TunnelDestinations::TunnelDestination::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vrf-name-xr")
    {
        vrf_name_xr.yfilter = yfilter;
    }
    if(value_path == "load")
    {
        load.yfilter = yfilter;
    }
    if(value_path == "status")
    {
        status.yfilter = yfilter;
    }
    if(value_path == "connects")
    {
        connects.yfilter = yfilter;
    }
    if(value_path == "disconnects")
    {
        disconnects.yfilter = yfilter;
    }
    if(value_path == "retry")
    {
        retry.yfilter = yfilter;
    }
    if(value_path == "status-change-time")
    {
        status_change_time.yfilter = yfilter;
    }
}

bool Vpdn::TunnelDestinations::TunnelDestination::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-name" || name == "address" || name == "vrf-name-xr" || name == "load" || name == "status" || name == "connects" || name == "disconnects" || name == "retry" || name == "status-change-time")
        return true;
    return false;
}

Vpdn::VpdnMirroring::VpdnMirroring()
    :
    sync_not_conn_cnt{YType::uint32, "sync-not-conn-cnt"},
    sso_err_cnt{YType::uint32, "sso-err-cnt"},
    sso_batch_err_cnt{YType::uint32, "sso-batch-err-cnt"},
    alloc_err_cnt{YType::uint32, "alloc-err-cnt"},
    alloc_cnt{YType::uint32, "alloc-cnt"}
        ,
    qad_send_stats(std::make_shared<Vpdn::VpdnMirroring::QadSendStats>())
    , qad_recv_stats(std::make_shared<Vpdn::VpdnMirroring::QadRecvStats>())
    , qad_send_stats_last_clear(std::make_shared<Vpdn::VpdnMirroring::QadSendStatsLastClear>())
    , qad_recv_stats_last_clear(std::make_shared<Vpdn::VpdnMirroring::QadRecvStatsLastClear>())
{
    qad_send_stats->parent = this;
    qad_recv_stats->parent = this;
    qad_send_stats_last_clear->parent = this;
    qad_recv_stats_last_clear->parent = this;

    yang_name = "vpdn-mirroring"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::VpdnMirroring::~VpdnMirroring()
{
}

bool Vpdn::VpdnMirroring::has_data() const
{
    if (is_presence_container) return true;
    return sync_not_conn_cnt.is_set
	|| sso_err_cnt.is_set
	|| sso_batch_err_cnt.is_set
	|| alloc_err_cnt.is_set
	|| alloc_cnt.is_set
	|| (qad_send_stats !=  nullptr && qad_send_stats->has_data())
	|| (qad_recv_stats !=  nullptr && qad_recv_stats->has_data())
	|| (qad_send_stats_last_clear !=  nullptr && qad_send_stats_last_clear->has_data())
	|| (qad_recv_stats_last_clear !=  nullptr && qad_recv_stats_last_clear->has_data());
}

bool Vpdn::VpdnMirroring::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(sync_not_conn_cnt.yfilter)
	|| ydk::is_set(sso_err_cnt.yfilter)
	|| ydk::is_set(sso_batch_err_cnt.yfilter)
	|| ydk::is_set(alloc_err_cnt.yfilter)
	|| ydk::is_set(alloc_cnt.yfilter)
	|| (qad_send_stats !=  nullptr && qad_send_stats->has_operation())
	|| (qad_recv_stats !=  nullptr && qad_recv_stats->has_operation())
	|| (qad_send_stats_last_clear !=  nullptr && qad_send_stats_last_clear->has_operation())
	|| (qad_recv_stats_last_clear !=  nullptr && qad_recv_stats_last_clear->has_operation());
}

std::string Vpdn::VpdnMirroring::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::VpdnMirroring::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpdn-mirroring";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdnMirroring::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (sync_not_conn_cnt.is_set || is_set(sync_not_conn_cnt.yfilter)) leaf_name_data.push_back(sync_not_conn_cnt.get_name_leafdata());
    if (sso_err_cnt.is_set || is_set(sso_err_cnt.yfilter)) leaf_name_data.push_back(sso_err_cnt.get_name_leafdata());
    if (sso_batch_err_cnt.is_set || is_set(sso_batch_err_cnt.yfilter)) leaf_name_data.push_back(sso_batch_err_cnt.get_name_leafdata());
    if (alloc_err_cnt.is_set || is_set(alloc_err_cnt.yfilter)) leaf_name_data.push_back(alloc_err_cnt.get_name_leafdata());
    if (alloc_cnt.is_set || is_set(alloc_cnt.yfilter)) leaf_name_data.push_back(alloc_cnt.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdnMirroring::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "qad-send-stats")
    {
        if(qad_send_stats == nullptr)
        {
            qad_send_stats = std::make_shared<Vpdn::VpdnMirroring::QadSendStats>();
        }
        return qad_send_stats;
    }

    if(child_yang_name == "qad-recv-stats")
    {
        if(qad_recv_stats == nullptr)
        {
            qad_recv_stats = std::make_shared<Vpdn::VpdnMirroring::QadRecvStats>();
        }
        return qad_recv_stats;
    }

    if(child_yang_name == "qad-send-stats-last-clear")
    {
        if(qad_send_stats_last_clear == nullptr)
        {
            qad_send_stats_last_clear = std::make_shared<Vpdn::VpdnMirroring::QadSendStatsLastClear>();
        }
        return qad_send_stats_last_clear;
    }

    if(child_yang_name == "qad-recv-stats-last-clear")
    {
        if(qad_recv_stats_last_clear == nullptr)
        {
            qad_recv_stats_last_clear = std::make_shared<Vpdn::VpdnMirroring::QadRecvStatsLastClear>();
        }
        return qad_recv_stats_last_clear;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdnMirroring::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(qad_send_stats != nullptr)
    {
        _children["qad-send-stats"] = qad_send_stats;
    }

    if(qad_recv_stats != nullptr)
    {
        _children["qad-recv-stats"] = qad_recv_stats;
    }

    if(qad_send_stats_last_clear != nullptr)
    {
        _children["qad-send-stats-last-clear"] = qad_send_stats_last_clear;
    }

    if(qad_recv_stats_last_clear != nullptr)
    {
        _children["qad-recv-stats-last-clear"] = qad_recv_stats_last_clear;
    }

    return _children;
}

void Vpdn::VpdnMirroring::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "sync-not-conn-cnt")
    {
        sync_not_conn_cnt = value;
        sync_not_conn_cnt.value_namespace = name_space;
        sync_not_conn_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sso-err-cnt")
    {
        sso_err_cnt = value;
        sso_err_cnt.value_namespace = name_space;
        sso_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sso-batch-err-cnt")
    {
        sso_batch_err_cnt = value;
        sso_batch_err_cnt.value_namespace = name_space;
        sso_batch_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alloc-err-cnt")
    {
        alloc_err_cnt = value;
        alloc_err_cnt.value_namespace = name_space;
        alloc_err_cnt.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "alloc-cnt")
    {
        alloc_cnt = value;
        alloc_cnt.value_namespace = name_space;
        alloc_cnt.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdnMirroring::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "sync-not-conn-cnt")
    {
        sync_not_conn_cnt.yfilter = yfilter;
    }
    if(value_path == "sso-err-cnt")
    {
        sso_err_cnt.yfilter = yfilter;
    }
    if(value_path == "sso-batch-err-cnt")
    {
        sso_batch_err_cnt.yfilter = yfilter;
    }
    if(value_path == "alloc-err-cnt")
    {
        alloc_err_cnt.yfilter = yfilter;
    }
    if(value_path == "alloc-cnt")
    {
        alloc_cnt.yfilter = yfilter;
    }
}

bool Vpdn::VpdnMirroring::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "qad-send-stats" || name == "qad-recv-stats" || name == "qad-send-stats-last-clear" || name == "qad-recv-stats-last-clear" || name == "sync-not-conn-cnt" || name == "sso-err-cnt" || name == "sso-batch-err-cnt" || name == "alloc-err-cnt" || name == "alloc-cnt")
        return true;
    return false;
}

Vpdn::VpdnMirroring::QadSendStats::QadSendStats()
    :
    msgs_sent{YType::uint32, "msgs-sent"},
    acks_sent{YType::uint32, "acks-sent"},
    no_partner{YType::uint32, "no-partner"},
    sends_failed{YType::uint32, "sends-failed"},
    acks_failed{YType::uint32, "acks-failed"},
    pending_acks{YType::uint32, "pending-acks"},
    timeouts{YType::uint32, "timeouts"},
    suspends{YType::uint32, "suspends"},
    resumes{YType::uint32, "resumes"},
    sends_fragment{YType::uint32, "sends-fragment"},
    qad_last_seq_number{YType::uint32, "qad-last-seq-number"},
    qad_frag_count{YType::uint32, "qad-frag-count"},
    qad_ack_count{YType::uint32, "qad-ack-count"},
    qad_unknown_acks{YType::uint32, "qad-unknown-acks"},
    qad_timeouts{YType::uint32, "qad-timeouts"},
    qad_rx_count{YType::uint32, "qad-rx-count"},
    qad_rx_list_count{YType::uint32, "qad-rx-list-count"},
    qad_rx_list_q_size{YType::uint32, "qad-rx-list-q-size"},
    qad_rx_first_seq_number{YType::uint32, "qad-rx-first-seq-number"}
{

    yang_name = "qad-send-stats"; yang_parent_name = "vpdn-mirroring"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::VpdnMirroring::QadSendStats::~QadSendStats()
{
}

bool Vpdn::VpdnMirroring::QadSendStats::has_data() const
{
    if (is_presence_container) return true;
    return msgs_sent.is_set
	|| acks_sent.is_set
	|| no_partner.is_set
	|| sends_failed.is_set
	|| acks_failed.is_set
	|| pending_acks.is_set
	|| timeouts.is_set
	|| suspends.is_set
	|| resumes.is_set
	|| sends_fragment.is_set
	|| qad_last_seq_number.is_set
	|| qad_frag_count.is_set
	|| qad_ack_count.is_set
	|| qad_unknown_acks.is_set
	|| qad_timeouts.is_set
	|| qad_rx_count.is_set
	|| qad_rx_list_count.is_set
	|| qad_rx_list_q_size.is_set
	|| qad_rx_first_seq_number.is_set;
}

bool Vpdn::VpdnMirroring::QadSendStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msgs_sent.yfilter)
	|| ydk::is_set(acks_sent.yfilter)
	|| ydk::is_set(no_partner.yfilter)
	|| ydk::is_set(sends_failed.yfilter)
	|| ydk::is_set(acks_failed.yfilter)
	|| ydk::is_set(pending_acks.yfilter)
	|| ydk::is_set(timeouts.yfilter)
	|| ydk::is_set(suspends.yfilter)
	|| ydk::is_set(resumes.yfilter)
	|| ydk::is_set(sends_fragment.yfilter)
	|| ydk::is_set(qad_last_seq_number.yfilter)
	|| ydk::is_set(qad_frag_count.yfilter)
	|| ydk::is_set(qad_ack_count.yfilter)
	|| ydk::is_set(qad_unknown_acks.yfilter)
	|| ydk::is_set(qad_timeouts.yfilter)
	|| ydk::is_set(qad_rx_count.yfilter)
	|| ydk::is_set(qad_rx_list_count.yfilter)
	|| ydk::is_set(qad_rx_list_q_size.yfilter)
	|| ydk::is_set(qad_rx_first_seq_number.yfilter);
}

std::string Vpdn::VpdnMirroring::QadSendStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/vpdn-mirroring/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::VpdnMirroring::QadSendStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qad-send-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdnMirroring::QadSendStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msgs_sent.is_set || is_set(msgs_sent.yfilter)) leaf_name_data.push_back(msgs_sent.get_name_leafdata());
    if (acks_sent.is_set || is_set(acks_sent.yfilter)) leaf_name_data.push_back(acks_sent.get_name_leafdata());
    if (no_partner.is_set || is_set(no_partner.yfilter)) leaf_name_data.push_back(no_partner.get_name_leafdata());
    if (sends_failed.is_set || is_set(sends_failed.yfilter)) leaf_name_data.push_back(sends_failed.get_name_leafdata());
    if (acks_failed.is_set || is_set(acks_failed.yfilter)) leaf_name_data.push_back(acks_failed.get_name_leafdata());
    if (pending_acks.is_set || is_set(pending_acks.yfilter)) leaf_name_data.push_back(pending_acks.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.yfilter)) leaf_name_data.push_back(timeouts.get_name_leafdata());
    if (suspends.is_set || is_set(suspends.yfilter)) leaf_name_data.push_back(suspends.get_name_leafdata());
    if (resumes.is_set || is_set(resumes.yfilter)) leaf_name_data.push_back(resumes.get_name_leafdata());
    if (sends_fragment.is_set || is_set(sends_fragment.yfilter)) leaf_name_data.push_back(sends_fragment.get_name_leafdata());
    if (qad_last_seq_number.is_set || is_set(qad_last_seq_number.yfilter)) leaf_name_data.push_back(qad_last_seq_number.get_name_leafdata());
    if (qad_frag_count.is_set || is_set(qad_frag_count.yfilter)) leaf_name_data.push_back(qad_frag_count.get_name_leafdata());
    if (qad_ack_count.is_set || is_set(qad_ack_count.yfilter)) leaf_name_data.push_back(qad_ack_count.get_name_leafdata());
    if (qad_unknown_acks.is_set || is_set(qad_unknown_acks.yfilter)) leaf_name_data.push_back(qad_unknown_acks.get_name_leafdata());
    if (qad_timeouts.is_set || is_set(qad_timeouts.yfilter)) leaf_name_data.push_back(qad_timeouts.get_name_leafdata());
    if (qad_rx_count.is_set || is_set(qad_rx_count.yfilter)) leaf_name_data.push_back(qad_rx_count.get_name_leafdata());
    if (qad_rx_list_count.is_set || is_set(qad_rx_list_count.yfilter)) leaf_name_data.push_back(qad_rx_list_count.get_name_leafdata());
    if (qad_rx_list_q_size.is_set || is_set(qad_rx_list_q_size.yfilter)) leaf_name_data.push_back(qad_rx_list_q_size.get_name_leafdata());
    if (qad_rx_first_seq_number.is_set || is_set(qad_rx_first_seq_number.yfilter)) leaf_name_data.push_back(qad_rx_first_seq_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdnMirroring::QadSendStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdnMirroring::QadSendStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::VpdnMirroring::QadSendStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msgs-sent")
    {
        msgs_sent = value;
        msgs_sent.value_namespace = name_space;
        msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-sent")
    {
        acks_sent = value;
        acks_sent.value_namespace = name_space;
        acks_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-partner")
    {
        no_partner = value;
        no_partner.value_namespace = name_space;
        no_partner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sends-failed")
    {
        sends_failed = value;
        sends_failed.value_namespace = name_space;
        sends_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-failed")
    {
        acks_failed = value;
        acks_failed.value_namespace = name_space;
        acks_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-acks")
    {
        pending_acks = value;
        pending_acks.value_namespace = name_space;
        pending_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
        timeouts.value_namespace = name_space;
        timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspends")
    {
        suspends = value;
        suspends.value_namespace = name_space;
        suspends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resumes")
    {
        resumes = value;
        resumes.value_namespace = name_space;
        resumes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sends-fragment")
    {
        sends_fragment = value;
        sends_fragment.value_namespace = name_space;
        sends_fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-last-seq-number")
    {
        qad_last_seq_number = value;
        qad_last_seq_number.value_namespace = name_space;
        qad_last_seq_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-frag-count")
    {
        qad_frag_count = value;
        qad_frag_count.value_namespace = name_space;
        qad_frag_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-ack-count")
    {
        qad_ack_count = value;
        qad_ack_count.value_namespace = name_space;
        qad_ack_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-unknown-acks")
    {
        qad_unknown_acks = value;
        qad_unknown_acks.value_namespace = name_space;
        qad_unknown_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-timeouts")
    {
        qad_timeouts = value;
        qad_timeouts.value_namespace = name_space;
        qad_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-rx-count")
    {
        qad_rx_count = value;
        qad_rx_count.value_namespace = name_space;
        qad_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-rx-list-count")
    {
        qad_rx_list_count = value;
        qad_rx_list_count.value_namespace = name_space;
        qad_rx_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-rx-list-q-size")
    {
        qad_rx_list_q_size = value;
        qad_rx_list_q_size.value_namespace = name_space;
        qad_rx_list_q_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-rx-first-seq-number")
    {
        qad_rx_first_seq_number = value;
        qad_rx_first_seq_number.value_namespace = name_space;
        qad_rx_first_seq_number.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdnMirroring::QadSendStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msgs-sent")
    {
        msgs_sent.yfilter = yfilter;
    }
    if(value_path == "acks-sent")
    {
        acks_sent.yfilter = yfilter;
    }
    if(value_path == "no-partner")
    {
        no_partner.yfilter = yfilter;
    }
    if(value_path == "sends-failed")
    {
        sends_failed.yfilter = yfilter;
    }
    if(value_path == "acks-failed")
    {
        acks_failed.yfilter = yfilter;
    }
    if(value_path == "pending-acks")
    {
        pending_acks.yfilter = yfilter;
    }
    if(value_path == "timeouts")
    {
        timeouts.yfilter = yfilter;
    }
    if(value_path == "suspends")
    {
        suspends.yfilter = yfilter;
    }
    if(value_path == "resumes")
    {
        resumes.yfilter = yfilter;
    }
    if(value_path == "sends-fragment")
    {
        sends_fragment.yfilter = yfilter;
    }
    if(value_path == "qad-last-seq-number")
    {
        qad_last_seq_number.yfilter = yfilter;
    }
    if(value_path == "qad-frag-count")
    {
        qad_frag_count.yfilter = yfilter;
    }
    if(value_path == "qad-ack-count")
    {
        qad_ack_count.yfilter = yfilter;
    }
    if(value_path == "qad-unknown-acks")
    {
        qad_unknown_acks.yfilter = yfilter;
    }
    if(value_path == "qad-timeouts")
    {
        qad_timeouts.yfilter = yfilter;
    }
    if(value_path == "qad-rx-count")
    {
        qad_rx_count.yfilter = yfilter;
    }
    if(value_path == "qad-rx-list-count")
    {
        qad_rx_list_count.yfilter = yfilter;
    }
    if(value_path == "qad-rx-list-q-size")
    {
        qad_rx_list_q_size.yfilter = yfilter;
    }
    if(value_path == "qad-rx-first-seq-number")
    {
        qad_rx_first_seq_number.yfilter = yfilter;
    }
}

bool Vpdn::VpdnMirroring::QadSendStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msgs-sent" || name == "acks-sent" || name == "no-partner" || name == "sends-failed" || name == "acks-failed" || name == "pending-acks" || name == "timeouts" || name == "suspends" || name == "resumes" || name == "sends-fragment" || name == "qad-last-seq-number" || name == "qad-frag-count" || name == "qad-ack-count" || name == "qad-unknown-acks" || name == "qad-timeouts" || name == "qad-rx-count" || name == "qad-rx-list-count" || name == "qad-rx-list-q-size" || name == "qad-rx-first-seq-number")
        return true;
    return false;
}

Vpdn::VpdnMirroring::QadRecvStats::QadRecvStats()
    :
    msgs_recvd{YType::uint32, "msgs-recvd"},
    acks_recvd{YType::uint32, "acks-recvd"},
    recvd_acks_failed{YType::uint32, "recvd-acks-failed"},
    init_drops{YType::uint32, "init-drops"},
    msg_drops{YType::uint32, "msg-drops"},
    ooo_drops{YType::uint32, "ooo-drops"},
    stale_msgs{YType::uint32, "stale-msgs"}
{

    yang_name = "qad-recv-stats"; yang_parent_name = "vpdn-mirroring"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::VpdnMirroring::QadRecvStats::~QadRecvStats()
{
}

bool Vpdn::VpdnMirroring::QadRecvStats::has_data() const
{
    if (is_presence_container) return true;
    return msgs_recvd.is_set
	|| acks_recvd.is_set
	|| recvd_acks_failed.is_set
	|| init_drops.is_set
	|| msg_drops.is_set
	|| ooo_drops.is_set
	|| stale_msgs.is_set;
}

bool Vpdn::VpdnMirroring::QadRecvStats::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msgs_recvd.yfilter)
	|| ydk::is_set(acks_recvd.yfilter)
	|| ydk::is_set(recvd_acks_failed.yfilter)
	|| ydk::is_set(init_drops.yfilter)
	|| ydk::is_set(msg_drops.yfilter)
	|| ydk::is_set(ooo_drops.yfilter)
	|| ydk::is_set(stale_msgs.yfilter);
}

std::string Vpdn::VpdnMirroring::QadRecvStats::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/vpdn-mirroring/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::VpdnMirroring::QadRecvStats::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qad-recv-stats";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdnMirroring::QadRecvStats::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msgs_recvd.is_set || is_set(msgs_recvd.yfilter)) leaf_name_data.push_back(msgs_recvd.get_name_leafdata());
    if (acks_recvd.is_set || is_set(acks_recvd.yfilter)) leaf_name_data.push_back(acks_recvd.get_name_leafdata());
    if (recvd_acks_failed.is_set || is_set(recvd_acks_failed.yfilter)) leaf_name_data.push_back(recvd_acks_failed.get_name_leafdata());
    if (init_drops.is_set || is_set(init_drops.yfilter)) leaf_name_data.push_back(init_drops.get_name_leafdata());
    if (msg_drops.is_set || is_set(msg_drops.yfilter)) leaf_name_data.push_back(msg_drops.get_name_leafdata());
    if (ooo_drops.is_set || is_set(ooo_drops.yfilter)) leaf_name_data.push_back(ooo_drops.get_name_leafdata());
    if (stale_msgs.is_set || is_set(stale_msgs.yfilter)) leaf_name_data.push_back(stale_msgs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdnMirroring::QadRecvStats::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdnMirroring::QadRecvStats::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::VpdnMirroring::QadRecvStats::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msgs-recvd")
    {
        msgs_recvd = value;
        msgs_recvd.value_namespace = name_space;
        msgs_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-recvd")
    {
        acks_recvd = value;
        acks_recvd.value_namespace = name_space;
        acks_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvd-acks-failed")
    {
        recvd_acks_failed = value;
        recvd_acks_failed.value_namespace = name_space;
        recvd_acks_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-drops")
    {
        init_drops = value;
        init_drops.value_namespace = name_space;
        init_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-drops")
    {
        msg_drops = value;
        msg_drops.value_namespace = name_space;
        msg_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ooo-drops")
    {
        ooo_drops = value;
        ooo_drops.value_namespace = name_space;
        ooo_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-msgs")
    {
        stale_msgs = value;
        stale_msgs.value_namespace = name_space;
        stale_msgs.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdnMirroring::QadRecvStats::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msgs-recvd")
    {
        msgs_recvd.yfilter = yfilter;
    }
    if(value_path == "acks-recvd")
    {
        acks_recvd.yfilter = yfilter;
    }
    if(value_path == "recvd-acks-failed")
    {
        recvd_acks_failed.yfilter = yfilter;
    }
    if(value_path == "init-drops")
    {
        init_drops.yfilter = yfilter;
    }
    if(value_path == "msg-drops")
    {
        msg_drops.yfilter = yfilter;
    }
    if(value_path == "ooo-drops")
    {
        ooo_drops.yfilter = yfilter;
    }
    if(value_path == "stale-msgs")
    {
        stale_msgs.yfilter = yfilter;
    }
}

bool Vpdn::VpdnMirroring::QadRecvStats::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msgs-recvd" || name == "acks-recvd" || name == "recvd-acks-failed" || name == "init-drops" || name == "msg-drops" || name == "ooo-drops" || name == "stale-msgs")
        return true;
    return false;
}

Vpdn::VpdnMirroring::QadSendStatsLastClear::QadSendStatsLastClear()
    :
    msgs_sent{YType::uint32, "msgs-sent"},
    acks_sent{YType::uint32, "acks-sent"},
    no_partner{YType::uint32, "no-partner"},
    sends_failed{YType::uint32, "sends-failed"},
    acks_failed{YType::uint32, "acks-failed"},
    pending_acks{YType::uint32, "pending-acks"},
    timeouts{YType::uint32, "timeouts"},
    suspends{YType::uint32, "suspends"},
    resumes{YType::uint32, "resumes"},
    sends_fragment{YType::uint32, "sends-fragment"},
    qad_last_seq_number{YType::uint32, "qad-last-seq-number"},
    qad_frag_count{YType::uint32, "qad-frag-count"},
    qad_ack_count{YType::uint32, "qad-ack-count"},
    qad_unknown_acks{YType::uint32, "qad-unknown-acks"},
    qad_timeouts{YType::uint32, "qad-timeouts"},
    qad_rx_count{YType::uint32, "qad-rx-count"},
    qad_rx_list_count{YType::uint32, "qad-rx-list-count"},
    qad_rx_list_q_size{YType::uint32, "qad-rx-list-q-size"},
    qad_rx_first_seq_number{YType::uint32, "qad-rx-first-seq-number"}
{

    yang_name = "qad-send-stats-last-clear"; yang_parent_name = "vpdn-mirroring"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::VpdnMirroring::QadSendStatsLastClear::~QadSendStatsLastClear()
{
}

bool Vpdn::VpdnMirroring::QadSendStatsLastClear::has_data() const
{
    if (is_presence_container) return true;
    return msgs_sent.is_set
	|| acks_sent.is_set
	|| no_partner.is_set
	|| sends_failed.is_set
	|| acks_failed.is_set
	|| pending_acks.is_set
	|| timeouts.is_set
	|| suspends.is_set
	|| resumes.is_set
	|| sends_fragment.is_set
	|| qad_last_seq_number.is_set
	|| qad_frag_count.is_set
	|| qad_ack_count.is_set
	|| qad_unknown_acks.is_set
	|| qad_timeouts.is_set
	|| qad_rx_count.is_set
	|| qad_rx_list_count.is_set
	|| qad_rx_list_q_size.is_set
	|| qad_rx_first_seq_number.is_set;
}

bool Vpdn::VpdnMirroring::QadSendStatsLastClear::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msgs_sent.yfilter)
	|| ydk::is_set(acks_sent.yfilter)
	|| ydk::is_set(no_partner.yfilter)
	|| ydk::is_set(sends_failed.yfilter)
	|| ydk::is_set(acks_failed.yfilter)
	|| ydk::is_set(pending_acks.yfilter)
	|| ydk::is_set(timeouts.yfilter)
	|| ydk::is_set(suspends.yfilter)
	|| ydk::is_set(resumes.yfilter)
	|| ydk::is_set(sends_fragment.yfilter)
	|| ydk::is_set(qad_last_seq_number.yfilter)
	|| ydk::is_set(qad_frag_count.yfilter)
	|| ydk::is_set(qad_ack_count.yfilter)
	|| ydk::is_set(qad_unknown_acks.yfilter)
	|| ydk::is_set(qad_timeouts.yfilter)
	|| ydk::is_set(qad_rx_count.yfilter)
	|| ydk::is_set(qad_rx_list_count.yfilter)
	|| ydk::is_set(qad_rx_list_q_size.yfilter)
	|| ydk::is_set(qad_rx_first_seq_number.yfilter);
}

std::string Vpdn::VpdnMirroring::QadSendStatsLastClear::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/vpdn-mirroring/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::VpdnMirroring::QadSendStatsLastClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qad-send-stats-last-clear";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdnMirroring::QadSendStatsLastClear::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msgs_sent.is_set || is_set(msgs_sent.yfilter)) leaf_name_data.push_back(msgs_sent.get_name_leafdata());
    if (acks_sent.is_set || is_set(acks_sent.yfilter)) leaf_name_data.push_back(acks_sent.get_name_leafdata());
    if (no_partner.is_set || is_set(no_partner.yfilter)) leaf_name_data.push_back(no_partner.get_name_leafdata());
    if (sends_failed.is_set || is_set(sends_failed.yfilter)) leaf_name_data.push_back(sends_failed.get_name_leafdata());
    if (acks_failed.is_set || is_set(acks_failed.yfilter)) leaf_name_data.push_back(acks_failed.get_name_leafdata());
    if (pending_acks.is_set || is_set(pending_acks.yfilter)) leaf_name_data.push_back(pending_acks.get_name_leafdata());
    if (timeouts.is_set || is_set(timeouts.yfilter)) leaf_name_data.push_back(timeouts.get_name_leafdata());
    if (suspends.is_set || is_set(suspends.yfilter)) leaf_name_data.push_back(suspends.get_name_leafdata());
    if (resumes.is_set || is_set(resumes.yfilter)) leaf_name_data.push_back(resumes.get_name_leafdata());
    if (sends_fragment.is_set || is_set(sends_fragment.yfilter)) leaf_name_data.push_back(sends_fragment.get_name_leafdata());
    if (qad_last_seq_number.is_set || is_set(qad_last_seq_number.yfilter)) leaf_name_data.push_back(qad_last_seq_number.get_name_leafdata());
    if (qad_frag_count.is_set || is_set(qad_frag_count.yfilter)) leaf_name_data.push_back(qad_frag_count.get_name_leafdata());
    if (qad_ack_count.is_set || is_set(qad_ack_count.yfilter)) leaf_name_data.push_back(qad_ack_count.get_name_leafdata());
    if (qad_unknown_acks.is_set || is_set(qad_unknown_acks.yfilter)) leaf_name_data.push_back(qad_unknown_acks.get_name_leafdata());
    if (qad_timeouts.is_set || is_set(qad_timeouts.yfilter)) leaf_name_data.push_back(qad_timeouts.get_name_leafdata());
    if (qad_rx_count.is_set || is_set(qad_rx_count.yfilter)) leaf_name_data.push_back(qad_rx_count.get_name_leafdata());
    if (qad_rx_list_count.is_set || is_set(qad_rx_list_count.yfilter)) leaf_name_data.push_back(qad_rx_list_count.get_name_leafdata());
    if (qad_rx_list_q_size.is_set || is_set(qad_rx_list_q_size.yfilter)) leaf_name_data.push_back(qad_rx_list_q_size.get_name_leafdata());
    if (qad_rx_first_seq_number.is_set || is_set(qad_rx_first_seq_number.yfilter)) leaf_name_data.push_back(qad_rx_first_seq_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdnMirroring::QadSendStatsLastClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdnMirroring::QadSendStatsLastClear::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::VpdnMirroring::QadSendStatsLastClear::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msgs-sent")
    {
        msgs_sent = value;
        msgs_sent.value_namespace = name_space;
        msgs_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-sent")
    {
        acks_sent = value;
        acks_sent.value_namespace = name_space;
        acks_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "no-partner")
    {
        no_partner = value;
        no_partner.value_namespace = name_space;
        no_partner.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sends-failed")
    {
        sends_failed = value;
        sends_failed.value_namespace = name_space;
        sends_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-failed")
    {
        acks_failed = value;
        acks_failed.value_namespace = name_space;
        acks_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-acks")
    {
        pending_acks = value;
        pending_acks.value_namespace = name_space;
        pending_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "timeouts")
    {
        timeouts = value;
        timeouts.value_namespace = name_space;
        timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "suspends")
    {
        suspends = value;
        suspends.value_namespace = name_space;
        suspends.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resumes")
    {
        resumes = value;
        resumes.value_namespace = name_space;
        resumes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sends-fragment")
    {
        sends_fragment = value;
        sends_fragment.value_namespace = name_space;
        sends_fragment.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-last-seq-number")
    {
        qad_last_seq_number = value;
        qad_last_seq_number.value_namespace = name_space;
        qad_last_seq_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-frag-count")
    {
        qad_frag_count = value;
        qad_frag_count.value_namespace = name_space;
        qad_frag_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-ack-count")
    {
        qad_ack_count = value;
        qad_ack_count.value_namespace = name_space;
        qad_ack_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-unknown-acks")
    {
        qad_unknown_acks = value;
        qad_unknown_acks.value_namespace = name_space;
        qad_unknown_acks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-timeouts")
    {
        qad_timeouts = value;
        qad_timeouts.value_namespace = name_space;
        qad_timeouts.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-rx-count")
    {
        qad_rx_count = value;
        qad_rx_count.value_namespace = name_space;
        qad_rx_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-rx-list-count")
    {
        qad_rx_list_count = value;
        qad_rx_list_count.value_namespace = name_space;
        qad_rx_list_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-rx-list-q-size")
    {
        qad_rx_list_q_size = value;
        qad_rx_list_q_size.value_namespace = name_space;
        qad_rx_list_q_size.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "qad-rx-first-seq-number")
    {
        qad_rx_first_seq_number = value;
        qad_rx_first_seq_number.value_namespace = name_space;
        qad_rx_first_seq_number.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdnMirroring::QadSendStatsLastClear::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msgs-sent")
    {
        msgs_sent.yfilter = yfilter;
    }
    if(value_path == "acks-sent")
    {
        acks_sent.yfilter = yfilter;
    }
    if(value_path == "no-partner")
    {
        no_partner.yfilter = yfilter;
    }
    if(value_path == "sends-failed")
    {
        sends_failed.yfilter = yfilter;
    }
    if(value_path == "acks-failed")
    {
        acks_failed.yfilter = yfilter;
    }
    if(value_path == "pending-acks")
    {
        pending_acks.yfilter = yfilter;
    }
    if(value_path == "timeouts")
    {
        timeouts.yfilter = yfilter;
    }
    if(value_path == "suspends")
    {
        suspends.yfilter = yfilter;
    }
    if(value_path == "resumes")
    {
        resumes.yfilter = yfilter;
    }
    if(value_path == "sends-fragment")
    {
        sends_fragment.yfilter = yfilter;
    }
    if(value_path == "qad-last-seq-number")
    {
        qad_last_seq_number.yfilter = yfilter;
    }
    if(value_path == "qad-frag-count")
    {
        qad_frag_count.yfilter = yfilter;
    }
    if(value_path == "qad-ack-count")
    {
        qad_ack_count.yfilter = yfilter;
    }
    if(value_path == "qad-unknown-acks")
    {
        qad_unknown_acks.yfilter = yfilter;
    }
    if(value_path == "qad-timeouts")
    {
        qad_timeouts.yfilter = yfilter;
    }
    if(value_path == "qad-rx-count")
    {
        qad_rx_count.yfilter = yfilter;
    }
    if(value_path == "qad-rx-list-count")
    {
        qad_rx_list_count.yfilter = yfilter;
    }
    if(value_path == "qad-rx-list-q-size")
    {
        qad_rx_list_q_size.yfilter = yfilter;
    }
    if(value_path == "qad-rx-first-seq-number")
    {
        qad_rx_first_seq_number.yfilter = yfilter;
    }
}

bool Vpdn::VpdnMirroring::QadSendStatsLastClear::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msgs-sent" || name == "acks-sent" || name == "no-partner" || name == "sends-failed" || name == "acks-failed" || name == "pending-acks" || name == "timeouts" || name == "suspends" || name == "resumes" || name == "sends-fragment" || name == "qad-last-seq-number" || name == "qad-frag-count" || name == "qad-ack-count" || name == "qad-unknown-acks" || name == "qad-timeouts" || name == "qad-rx-count" || name == "qad-rx-list-count" || name == "qad-rx-list-q-size" || name == "qad-rx-first-seq-number")
        return true;
    return false;
}

Vpdn::VpdnMirroring::QadRecvStatsLastClear::QadRecvStatsLastClear()
    :
    msgs_recvd{YType::uint32, "msgs-recvd"},
    acks_recvd{YType::uint32, "acks-recvd"},
    recvd_acks_failed{YType::uint32, "recvd-acks-failed"},
    init_drops{YType::uint32, "init-drops"},
    msg_drops{YType::uint32, "msg-drops"},
    ooo_drops{YType::uint32, "ooo-drops"},
    stale_msgs{YType::uint32, "stale-msgs"}
{

    yang_name = "qad-recv-stats-last-clear"; yang_parent_name = "vpdn-mirroring"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::VpdnMirroring::QadRecvStatsLastClear::~QadRecvStatsLastClear()
{
}

bool Vpdn::VpdnMirroring::QadRecvStatsLastClear::has_data() const
{
    if (is_presence_container) return true;
    return msgs_recvd.is_set
	|| acks_recvd.is_set
	|| recvd_acks_failed.is_set
	|| init_drops.is_set
	|| msg_drops.is_set
	|| ooo_drops.is_set
	|| stale_msgs.is_set;
}

bool Vpdn::VpdnMirroring::QadRecvStatsLastClear::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(msgs_recvd.yfilter)
	|| ydk::is_set(acks_recvd.yfilter)
	|| ydk::is_set(recvd_acks_failed.yfilter)
	|| ydk::is_set(init_drops.yfilter)
	|| ydk::is_set(msg_drops.yfilter)
	|| ydk::is_set(ooo_drops.yfilter)
	|| ydk::is_set(stale_msgs.yfilter);
}

std::string Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/vpdn-mirroring/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "qad-recv-stats-last-clear";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (msgs_recvd.is_set || is_set(msgs_recvd.yfilter)) leaf_name_data.push_back(msgs_recvd.get_name_leafdata());
    if (acks_recvd.is_set || is_set(acks_recvd.yfilter)) leaf_name_data.push_back(acks_recvd.get_name_leafdata());
    if (recvd_acks_failed.is_set || is_set(recvd_acks_failed.yfilter)) leaf_name_data.push_back(recvd_acks_failed.get_name_leafdata());
    if (init_drops.is_set || is_set(init_drops.yfilter)) leaf_name_data.push_back(init_drops.get_name_leafdata());
    if (msg_drops.is_set || is_set(msg_drops.yfilter)) leaf_name_data.push_back(msg_drops.get_name_leafdata());
    if (ooo_drops.is_set || is_set(ooo_drops.yfilter)) leaf_name_data.push_back(ooo_drops.get_name_leafdata());
    if (stale_msgs.is_set || is_set(stale_msgs.yfilter)) leaf_name_data.push_back(stale_msgs.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdnMirroring::QadRecvStatsLastClear::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::VpdnMirroring::QadRecvStatsLastClear::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "msgs-recvd")
    {
        msgs_recvd = value;
        msgs_recvd.value_namespace = name_space;
        msgs_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "acks-recvd")
    {
        acks_recvd = value;
        acks_recvd.value_namespace = name_space;
        acks_recvd.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "recvd-acks-failed")
    {
        recvd_acks_failed = value;
        recvd_acks_failed.value_namespace = name_space;
        recvd_acks_failed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-drops")
    {
        init_drops = value;
        init_drops.value_namespace = name_space;
        init_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "msg-drops")
    {
        msg_drops = value;
        msg_drops.value_namespace = name_space;
        msg_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ooo-drops")
    {
        ooo_drops = value;
        ooo_drops.value_namespace = name_space;
        ooo_drops.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "stale-msgs")
    {
        stale_msgs = value;
        stale_msgs.value_namespace = name_space;
        stale_msgs.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdnMirroring::QadRecvStatsLastClear::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "msgs-recvd")
    {
        msgs_recvd.yfilter = yfilter;
    }
    if(value_path == "acks-recvd")
    {
        acks_recvd.yfilter = yfilter;
    }
    if(value_path == "recvd-acks-failed")
    {
        recvd_acks_failed.yfilter = yfilter;
    }
    if(value_path == "init-drops")
    {
        init_drops.yfilter = yfilter;
    }
    if(value_path == "msg-drops")
    {
        msg_drops.yfilter = yfilter;
    }
    if(value_path == "ooo-drops")
    {
        ooo_drops.yfilter = yfilter;
    }
    if(value_path == "stale-msgs")
    {
        stale_msgs.yfilter = yfilter;
    }
}

bool Vpdn::VpdnMirroring::QadRecvStatsLastClear::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "msgs-recvd" || name == "acks-recvd" || name == "recvd-acks-failed" || name == "init-drops" || name == "msg-drops" || name == "ooo-drops" || name == "stale-msgs")
        return true;
    return false;
}

Vpdn::VpdnRedundancy::VpdnRedundancy()
    :
    session_total{YType::uint32, "session-total"},
    session_synced{YType::uint32, "session-synced"},
    state{YType::enumeration, "state"},
    start_time{YType::uint64, "start-time"},
    finish_time{YType::uint64, "finish-time"},
    abort_time{YType::uint64, "abort-time"}
{

    yang_name = "vpdn-redundancy"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::VpdnRedundancy::~VpdnRedundancy()
{
}

bool Vpdn::VpdnRedundancy::has_data() const
{
    if (is_presence_container) return true;
    return session_total.is_set
	|| session_synced.is_set
	|| state.is_set
	|| start_time.is_set
	|| finish_time.is_set
	|| abort_time.is_set;
}

bool Vpdn::VpdnRedundancy::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_total.yfilter)
	|| ydk::is_set(session_synced.yfilter)
	|| ydk::is_set(state.yfilter)
	|| ydk::is_set(start_time.yfilter)
	|| ydk::is_set(finish_time.yfilter)
	|| ydk::is_set(abort_time.yfilter);
}

std::string Vpdn::VpdnRedundancy::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::VpdnRedundancy::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vpdn-redundancy";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::VpdnRedundancy::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_total.is_set || is_set(session_total.yfilter)) leaf_name_data.push_back(session_total.get_name_leafdata());
    if (session_synced.is_set || is_set(session_synced.yfilter)) leaf_name_data.push_back(session_synced.get_name_leafdata());
    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());
    if (start_time.is_set || is_set(start_time.yfilter)) leaf_name_data.push_back(start_time.get_name_leafdata());
    if (finish_time.is_set || is_set(finish_time.yfilter)) leaf_name_data.push_back(finish_time.get_name_leafdata());
    if (abort_time.is_set || is_set(abort_time.yfilter)) leaf_name_data.push_back(abort_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::VpdnRedundancy::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::VpdnRedundancy::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::VpdnRedundancy::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-total")
    {
        session_total = value;
        session_total.value_namespace = name_space;
        session_total.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-synced")
    {
        session_synced = value;
        session_synced.value_namespace = name_space;
        session_synced.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "start-time")
    {
        start_time = value;
        start_time.value_namespace = name_space;
        start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "finish-time")
    {
        finish_time = value;
        finish_time.value_namespace = name_space;
        finish_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "abort-time")
    {
        abort_time = value;
        abort_time.value_namespace = name_space;
        abort_time.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::VpdnRedundancy::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-total")
    {
        session_total.yfilter = yfilter;
    }
    if(value_path == "session-synced")
    {
        session_synced.yfilter = yfilter;
    }
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
    if(value_path == "start-time")
    {
        start_time.yfilter = yfilter;
    }
    if(value_path == "finish-time")
    {
        finish_time.yfilter = yfilter;
    }
    if(value_path == "abort-time")
    {
        abort_time.yfilter = yfilter;
    }
}

bool Vpdn::VpdnRedundancy::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-total" || name == "session-synced" || name == "state" || name == "start-time" || name == "finish-time" || name == "abort-time")
        return true;
    return false;
}

Vpdn::HistoryFailures::HistoryFailures()
    :
    history_failure(this, {})
{

    yang_name = "history-failures"; yang_parent_name = "vpdn"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::HistoryFailures::~HistoryFailures()
{
}

bool Vpdn::HistoryFailures::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<history_failure.len(); index++)
    {
        if(history_failure[index]->has_data())
            return true;
    }
    return false;
}

bool Vpdn::HistoryFailures::has_operation() const
{
    for (std::size_t index=0; index<history_failure.len(); index++)
    {
        if(history_failure[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Vpdn::HistoryFailures::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::HistoryFailures::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-failures";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::HistoryFailures::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::HistoryFailures::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "history-failure")
    {
        auto ent_ = std::make_shared<Vpdn::HistoryFailures::HistoryFailure>();
        ent_->parent = this;
        history_failure.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::HistoryFailures::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : history_failure.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Vpdn::HistoryFailures::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Vpdn::HistoryFailures::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Vpdn::HistoryFailures::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "history-failure")
        return true;
    return false;
}

Vpdn::HistoryFailures::HistoryFailure::HistoryFailure()
    :
    username{YType::str, "username"},
    remote_name{YType::str, "remote-name"},
    username_xr{YType::str, "username-xr"},
    domain_name{YType::str, "domain-name"},
    mid{YType::uint16, "mid"},
    nas{YType::str, "nas"},
    destination_address{YType::str, "destination-address"},
    remote_client_id{YType::uint16, "remote-client-id"},
    home_gateway{YType::str, "home-gateway"},
    source_address{YType::str, "source-address"},
    local_client_id{YType::uint16, "local-client-id"},
    event_time{YType::str, "event-time"},
    error_repeat_count{YType::uint16, "error-repeat-count"},
    failure_type{YType::enumeration, "failure-type"}
{

    yang_name = "history-failure"; yang_parent_name = "history-failures"; is_top_level_class = false; has_list_ancestor = false; 
}

Vpdn::HistoryFailures::HistoryFailure::~HistoryFailure()
{
}

bool Vpdn::HistoryFailures::HistoryFailure::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| remote_name.is_set
	|| username_xr.is_set
	|| domain_name.is_set
	|| mid.is_set
	|| nas.is_set
	|| destination_address.is_set
	|| remote_client_id.is_set
	|| home_gateway.is_set
	|| source_address.is_set
	|| local_client_id.is_set
	|| event_time.is_set
	|| error_repeat_count.is_set
	|| failure_type.is_set;
}

bool Vpdn::HistoryFailures::HistoryFailure::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(remote_name.yfilter)
	|| ydk::is_set(username_xr.yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(mid.yfilter)
	|| ydk::is_set(nas.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(remote_client_id.yfilter)
	|| ydk::is_set(home_gateway.yfilter)
	|| ydk::is_set(source_address.yfilter)
	|| ydk::is_set(local_client_id.yfilter)
	|| ydk::is_set(event_time.yfilter)
	|| ydk::is_set(error_repeat_count.yfilter)
	|| ydk::is_set(failure_type.yfilter);
}

std::string Vpdn::HistoryFailures::HistoryFailure::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-tunnel-vpdn-oper:vpdn/history-failures/" << get_segment_path();
    return path_buffer.str();
}

std::string Vpdn::HistoryFailures::HistoryFailure::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "history-failure";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Vpdn::HistoryFailures::HistoryFailure::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (remote_name.is_set || is_set(remote_name.yfilter)) leaf_name_data.push_back(remote_name.get_name_leafdata());
    if (username_xr.is_set || is_set(username_xr.yfilter)) leaf_name_data.push_back(username_xr.get_name_leafdata());
    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (mid.is_set || is_set(mid.yfilter)) leaf_name_data.push_back(mid.get_name_leafdata());
    if (nas.is_set || is_set(nas.yfilter)) leaf_name_data.push_back(nas.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (remote_client_id.is_set || is_set(remote_client_id.yfilter)) leaf_name_data.push_back(remote_client_id.get_name_leafdata());
    if (home_gateway.is_set || is_set(home_gateway.yfilter)) leaf_name_data.push_back(home_gateway.get_name_leafdata());
    if (source_address.is_set || is_set(source_address.yfilter)) leaf_name_data.push_back(source_address.get_name_leafdata());
    if (local_client_id.is_set || is_set(local_client_id.yfilter)) leaf_name_data.push_back(local_client_id.get_name_leafdata());
    if (event_time.is_set || is_set(event_time.yfilter)) leaf_name_data.push_back(event_time.get_name_leafdata());
    if (error_repeat_count.is_set || is_set(error_repeat_count.yfilter)) leaf_name_data.push_back(error_repeat_count.get_name_leafdata());
    if (failure_type.is_set || is_set(failure_type.yfilter)) leaf_name_data.push_back(failure_type.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Vpdn::HistoryFailures::HistoryFailure::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Vpdn::HistoryFailures::HistoryFailure::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Vpdn::HistoryFailures::HistoryFailure::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-name")
    {
        remote_name = value;
        remote_name.value_namespace = name_space;
        remote_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username-xr")
    {
        username_xr = value;
        username_xr.value_namespace = name_space;
        username_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mid")
    {
        mid = value;
        mid.value_namespace = name_space;
        mid.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas")
    {
        nas = value;
        nas.value_namespace = name_space;
        nas.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-client-id")
    {
        remote_client_id = value;
        remote_client_id.value_namespace = name_space;
        remote_client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "home-gateway")
    {
        home_gateway = value;
        home_gateway.value_namespace = name_space;
        home_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "source-address")
    {
        source_address = value;
        source_address.value_namespace = name_space;
        source_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "local-client-id")
    {
        local_client_id = value;
        local_client_id.value_namespace = name_space;
        local_client_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "event-time")
    {
        event_time = value;
        event_time.value_namespace = name_space;
        event_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "error-repeat-count")
    {
        error_repeat_count = value;
        error_repeat_count.value_namespace = name_space;
        error_repeat_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "failure-type")
    {
        failure_type = value;
        failure_type.value_namespace = name_space;
        failure_type.value_namespace_prefix = name_space_prefix;
    }
}

void Vpdn::HistoryFailures::HistoryFailure::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "remote-name")
    {
        remote_name.yfilter = yfilter;
    }
    if(value_path == "username-xr")
    {
        username_xr.yfilter = yfilter;
    }
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "mid")
    {
        mid.yfilter = yfilter;
    }
    if(value_path == "nas")
    {
        nas.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "remote-client-id")
    {
        remote_client_id.yfilter = yfilter;
    }
    if(value_path == "home-gateway")
    {
        home_gateway.yfilter = yfilter;
    }
    if(value_path == "source-address")
    {
        source_address.yfilter = yfilter;
    }
    if(value_path == "local-client-id")
    {
        local_client_id.yfilter = yfilter;
    }
    if(value_path == "event-time")
    {
        event_time.yfilter = yfilter;
    }
    if(value_path == "error-repeat-count")
    {
        error_repeat_count.yfilter = yfilter;
    }
    if(value_path == "failure-type")
    {
        failure_type.yfilter = yfilter;
    }
}

bool Vpdn::HistoryFailures::HistoryFailure::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username" || name == "remote-name" || name == "username-xr" || name == "domain-name" || name == "mid" || name == "nas" || name == "destination-address" || name == "remote-client-id" || name == "home-gateway" || name == "source-address" || name == "local-client-id" || name == "event-time" || name == "error-repeat-count" || name == "failure-type")
        return true;
    return false;
}

const Enum::YLeaf SessionState::idle {0, "idle"};
const Enum::YLeaf SessionState::connected {1, "connected"};
const Enum::YLeaf SessionState::established {2, "established"};

const Enum::YLeaf VpdnState::initial_state {0, "initial-state"};
const Enum::YLeaf VpdnState::init_sync_in_progress {1, "init-sync-in-progress"};
const Enum::YLeaf VpdnState::steady_state {2, "steady-state"};

const Enum::YLeaf VpdnFailcode::unknown {0, "unknown"};
const Enum::YLeaf VpdnFailcode::peer_action {1, "peer-action"};
const Enum::YLeaf VpdnFailcode::authentication {2, "authentication"};
const Enum::YLeaf VpdnFailcode::authentication_error {3, "authentication-error"};
const Enum::YLeaf VpdnFailcode::authentication_failed {4, "authentication-failed"};
const Enum::YLeaf VpdnFailcode::authorization {5, "authorization"};
const Enum::YLeaf VpdnFailcode::authorization_failed {6, "authorization-failed"};
const Enum::YLeaf VpdnFailcode::home_gatewayfailure {7, "home-gatewayfailure"};
const Enum::YLeaf VpdnFailcode::connection_termination {8, "connection-termination"};
const Enum::YLeaf VpdnFailcode::no_resources_available {9, "no-resources-available"};
const Enum::YLeaf VpdnFailcode::timer_expiry {10, "timer-expiry"};
const Enum::YLeaf VpdnFailcode::session_mid_exceeded {11, "session-mid-exceeded"};
const Enum::YLeaf VpdnFailcode::soft_shut {12, "soft-shut"};
const Enum::YLeaf VpdnFailcode::session_limit_exceeded {13, "session-limit-exceeded"};
const Enum::YLeaf VpdnFailcode::administrative {14, "administrative"};
const Enum::YLeaf VpdnFailcode::link_failure {15, "link-failure"};
const Enum::YLeaf VpdnFailcode::security {16, "security"};
const Enum::YLeaf VpdnFailcode::tunnel_in_resync {17, "tunnel-in-resync"};
const Enum::YLeaf VpdnFailcode::call_prarmeters {18, "call-prarmeters"};

const Enum::YLeaf LsgStatus::none {0, "none"};
const Enum::YLeaf LsgStatus::active {1, "active"};
const Enum::YLeaf LsgStatus::down {2, "down"};
const Enum::YLeaf LsgStatus::testable {3, "testable"};
const Enum::YLeaf LsgStatus::testing {4, "testing"};

const Enum::YLeaf TosMode::default_ {0, "default"};
const Enum::YLeaf TosMode::set {1, "set"};
const Enum::YLeaf TosMode::reflect {2, "reflect"};


}
}

