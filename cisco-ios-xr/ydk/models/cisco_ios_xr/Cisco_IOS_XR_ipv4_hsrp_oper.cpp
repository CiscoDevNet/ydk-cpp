
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_hsrp_oper.hpp"

namespace ydk {
namespace Cisco_IOS_XR_ipv4_hsrp_oper {

Hsrp::Hsrp()
    :
    bfd_sessions(std::make_shared<Hsrp::BfdSessions>())
	,ipv4(std::make_shared<Hsrp::Ipv4>())
	,ipv6(std::make_shared<Hsrp::Ipv6>())
	,mgo_sessions(std::make_shared<Hsrp::MgoSessions>())
	,summary(std::make_shared<Hsrp::Summary>())
{
    bfd_sessions->parent = this;
    children["bfd-sessions"] = bfd_sessions;

    ipv4->parent = this;
    children["ipv4"] = ipv4;

    ipv6->parent = this;
    children["ipv6"] = ipv6;

    mgo_sessions->parent = this;
    children["mgo-sessions"] = mgo_sessions;

    summary->parent = this;
    children["summary"] = summary;

    yang_name = "hsrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-hsrp-oper";
}

Hsrp::~Hsrp()
{
}

bool Hsrp::has_data() const
{
    return (bfd_sessions !=  nullptr && bfd_sessions->has_data())
	|| (ipv4 !=  nullptr && ipv4->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (mgo_sessions !=  nullptr && mgo_sessions->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Hsrp::has_operation() const
{
    return is_set(operation)
	|| (bfd_sessions !=  nullptr && bfd_sessions->has_operation())
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (mgo_sessions !=  nullptr && mgo_sessions->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Hsrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp";

    return path_buffer.str();

}

EntityPath Hsrp::get_entity_path(Entity* ancestor) const
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

std::shared_ptr<Entity> Hsrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-sessions")
    {
        if(bfd_sessions != nullptr)
        {
            children["bfd-sessions"] = bfd_sessions;
        }
        else
        {
            bfd_sessions = std::make_shared<Hsrp::BfdSessions>();
            bfd_sessions->parent = this;
            children["bfd-sessions"] = bfd_sessions;
        }
        return children.at("bfd-sessions");
    }

    if(child_yang_name == "ipv4")
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
        else
        {
            ipv4 = std::make_shared<Hsrp::Ipv4>();
            ipv4->parent = this;
            children["ipv4"] = ipv4;
        }
        return children.at("ipv4");
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
        else
        {
            ipv6 = std::make_shared<Hsrp::Ipv6>();
            ipv6->parent = this;
            children["ipv6"] = ipv6;
        }
        return children.at("ipv6");
    }

    if(child_yang_name == "mgo-sessions")
    {
        if(mgo_sessions != nullptr)
        {
            children["mgo-sessions"] = mgo_sessions;
        }
        else
        {
            mgo_sessions = std::make_shared<Hsrp::MgoSessions>();
            mgo_sessions->parent = this;
            children["mgo-sessions"] = mgo_sessions;
        }
        return children.at("mgo-sessions");
    }

    if(child_yang_name == "summary")
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
        else
        {
            summary = std::make_shared<Hsrp::Summary>();
            summary->parent = this;
            children["summary"] = summary;
        }
        return children.at("summary");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::get_children()
{
    if(children.find("bfd-sessions") == children.end())
    {
        if(bfd_sessions != nullptr)
        {
            children["bfd-sessions"] = bfd_sessions;
        }
    }

    if(children.find("ipv4") == children.end())
    {
        if(ipv4 != nullptr)
        {
            children["ipv4"] = ipv4;
        }
    }

    if(children.find("ipv6") == children.end())
    {
        if(ipv6 != nullptr)
        {
            children["ipv6"] = ipv6;
        }
    }

    if(children.find("mgo-sessions") == children.end())
    {
        if(mgo_sessions != nullptr)
        {
            children["mgo-sessions"] = mgo_sessions;
        }
    }

    if(children.find("summary") == children.end())
    {
        if(summary != nullptr)
        {
            children["summary"] = summary;
        }
    }

    return children;
}

void Hsrp::set_value(const std::string & value_path, std::string value)
{
}

std::shared_ptr<Entity> Hsrp::clone_ptr() const
{
    return std::make_shared<Hsrp>();
}

std::string Hsrp::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string Hsrp::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function Hsrp::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

Hsrp::Ipv4::Ipv4()
    :
    groups(std::make_shared<Hsrp::Ipv4::Groups>())
	,interfaces(std::make_shared<Hsrp::Ipv4::Interfaces>())
	,tracked_interfaces(std::make_shared<Hsrp::Ipv4::TrackedInterfaces>())
{
    groups->parent = this;
    children["groups"] = groups;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    tracked_interfaces->parent = this;
    children["tracked-interfaces"] = tracked_interfaces;

    yang_name = "ipv4"; yang_parent_name = "hsrp";
}

Hsrp::Ipv4::~Ipv4()
{
}

bool Hsrp::Ipv4::has_data() const
{
    return (groups !=  nullptr && groups->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data());
}

bool Hsrp::Ipv4::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation());
}

std::string Hsrp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
        else
        {
            groups = std::make_shared<Hsrp::Ipv4::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Hsrp::Ipv4::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
        else
        {
            tracked_interfaces = std::make_shared<Hsrp::Ipv4::TrackedInterfaces>();
            tracked_interfaces->parent = this;
            children["tracked-interfaces"] = tracked_interfaces;
        }
        return children.at("tracked-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("tracked-interfaces") == children.end())
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
    }

    return children;
}

void Hsrp::Ipv4::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Ipv4::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "ipv4";
}

Hsrp::Ipv4::Groups::~Groups()
{
}

bool Hsrp::Ipv4::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv4::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Ipv4::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv4::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Ipv4::Groups::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Ipv4::Groups::Group::Group()
    :
    group_number{YType::int32, "group-number"},
    interface_name{YType::str, "interface-name"},
    active_ip_address{YType::str, "active-ip-address"},
    active_ipv6_address{YType::str, "active-ipv6-address"},
    active_mac_address{YType::str, "active-mac-address"},
    active_priority{YType::uint8, "active-priority"},
    active_timer_flag{YType::boolean, "active-timer-flag"},
    active_timer_msecs{YType::uint32, "active-timer-msecs"},
    active_timer_secs{YType::uint32, "active-timer-secs"},
    address_family{YType::enumeration, "address-family"},
    authentication_string{YType::str, "authentication-string"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interface{YType::str, "bfd-interface"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_peer_ip_address{YType::str, "bfd-peer-ip-address"},
    bfd_peer_ipv6_address{YType::str, "bfd-peer-ipv6-address"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    configured_mac_address{YType::boolean, "configured-mac-address"},
    configured_priority{YType::uint8, "configured-priority"},
    configured_timers{YType::boolean, "configured-timers"},
    current_state_timer_secs{YType::uint32, "current-state-timer-secs"},
    delay_timer_flag{YType::boolean, "delay-timer-flag"},
    delay_timer_msecs{YType::uint32, "delay-timer-msecs"},
    delay_timer_secs{YType::uint32, "delay-timer-secs"},
    followed_session_name{YType::str, "followed-session-name"},
    hello_time{YType::uint32, "hello-time"},
    hello_timer_flag{YType::boolean, "hello-timer-flag"},
    hello_timer_msecs{YType::uint32, "hello-timer-msecs"},
    hello_timer_secs{YType::uint32, "hello-timer-secs"},
    hold_time{YType::uint32, "hold-time"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    hsrp_router_state{YType::enumeration, "hsrp-router-state"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_slave{YType::boolean, "is-slave"},
    learned_hello_time{YType::uint32, "learned-hello-time"},
    learned_hold_time{YType::uint32, "learned-hold-time"},
    min_delay_time{YType::uint32, "min-delay-time"},
    preempt_delay{YType::uint32, "preempt-delay"},
    preempt_enabled{YType::boolean, "preempt-enabled"},
    preempt_timer_secs{YType::uint32, "preempt-timer-secs"},
    redirects_disabled{YType::boolean, "redirects-disabled"},
    reload_delay_time{YType::uint32, "reload-delay-time"},
    router_priority{YType::uint8, "router-priority"},
    secondary_address{YType::str, "secondary-address"},
    session_name{YType::str, "session-name"},
    slaves{YType::uint32, "slaves"},
    standby_ip_address{YType::str, "standby-ip-address"},
    standby_ipv6_address{YType::str, "standby-ipv6-address"},
    standby_mac_address{YType::str, "standby-mac-address"},
    standby_timer_flag{YType::boolean, "standby-timer-flag"},
    standby_timer_msecs{YType::uint32, "standby-timer-msecs"},
    standby_timer_secs{YType::uint32, "standby-timer-secs"},
    state_change_count{YType::uint32, "state-change-count"},
    tracked_interface_count{YType::uint32, "tracked-interface-count"},
    tracked_interface_up_count{YType::uint32, "tracked-interface-up-count"},
    use_bia_configured{YType::boolean, "use-bia-configured"},
    use_configured_timers{YType::boolean, "use-configured-timers"},
    use_configured_virtual_ip{YType::boolean, "use-configured-virtual-ip"},
    version{YType::uint8, "version"},
    virtual_ip_address{YType::str, "virtual-ip-address"},
    virtual_linklocal_ipv6_address{YType::str, "virtual-linklocal-ipv6-address"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    virtual_mac_address_state{YType::enumeration, "virtual-mac-address-state"}
    	,
    coup_received_time(std::make_shared<Hsrp::Ipv4::Groups::Group::CoupReceivedTime>())
	,coup_sent_time(std::make_shared<Hsrp::Ipv4::Groups::Group::CoupSentTime>())
	,resign_received_time(std::make_shared<Hsrp::Ipv4::Groups::Group::ResignReceivedTime>())
	,resign_sent_time(std::make_shared<Hsrp::Ipv4::Groups::Group::ResignSentTime>())
	,statistics(std::make_shared<Hsrp::Ipv4::Groups::Group::Statistics>())
{
    coup_received_time->parent = this;
    children["coup-received-time"] = coup_received_time;

    coup_sent_time->parent = this;
    children["coup-sent-time"] = coup_sent_time;

    resign_received_time->parent = this;
    children["resign-received-time"] = resign_received_time;

    resign_sent_time->parent = this;
    children["resign-sent-time"] = resign_sent_time;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "group"; yang_parent_name = "groups";
}

Hsrp::Ipv4::Groups::Group::~Group()
{
}

bool Hsrp::Ipv4::Groups::Group::has_data() const
{
    for (std::size_t index=0; index<global_address.size(); index++)
    {
        if(global_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_data())
            return true;
    }
    for (auto const & leaf : secondary_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group_number.is_set
	|| interface_name.is_set
	|| active_ip_address.is_set
	|| active_ipv6_address.is_set
	|| active_mac_address.is_set
	|| active_priority.is_set
	|| active_timer_flag.is_set
	|| active_timer_msecs.is_set
	|| active_timer_secs.is_set
	|| address_family.is_set
	|| authentication_string.is_set
	|| bfd_enabled.is_set
	|| bfd_interface.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| bfd_peer_ip_address.is_set
	|| bfd_peer_ipv6_address.is_set
	|| bfd_session_state.is_set
	|| configured_mac_address.is_set
	|| configured_priority.is_set
	|| configured_timers.is_set
	|| current_state_timer_secs.is_set
	|| delay_timer_flag.is_set
	|| delay_timer_msecs.is_set
	|| delay_timer_secs.is_set
	|| followed_session_name.is_set
	|| hello_time.is_set
	|| hello_timer_flag.is_set
	|| hello_timer_msecs.is_set
	|| hello_timer_secs.is_set
	|| hold_time.is_set
	|| hsrp_group_number.is_set
	|| hsrp_router_state.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| is_slave.is_set
	|| learned_hello_time.is_set
	|| learned_hold_time.is_set
	|| min_delay_time.is_set
	|| preempt_delay.is_set
	|| preempt_enabled.is_set
	|| preempt_timer_secs.is_set
	|| redirects_disabled.is_set
	|| reload_delay_time.is_set
	|| router_priority.is_set
	|| session_name.is_set
	|| slaves.is_set
	|| standby_ip_address.is_set
	|| standby_ipv6_address.is_set
	|| standby_mac_address.is_set
	|| standby_timer_flag.is_set
	|| standby_timer_msecs.is_set
	|| standby_timer_secs.is_set
	|| state_change_count.is_set
	|| tracked_interface_count.is_set
	|| tracked_interface_up_count.is_set
	|| use_bia_configured.is_set
	|| use_configured_timers.is_set
	|| use_configured_virtual_ip.is_set
	|| version.is_set
	|| virtual_ip_address.is_set
	|| virtual_linklocal_ipv6_address.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_state.is_set
	|| (coup_received_time !=  nullptr && coup_received_time->has_data())
	|| (coup_sent_time !=  nullptr && coup_sent_time->has_data())
	|| (resign_received_time !=  nullptr && resign_received_time->has_data())
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Hsrp::Ipv4::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<global_address.size(); index++)
    {
        if(global_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secondary_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(interface_name.operation)
	|| is_set(active_ip_address.operation)
	|| is_set(active_ipv6_address.operation)
	|| is_set(active_mac_address.operation)
	|| is_set(active_priority.operation)
	|| is_set(active_timer_flag.operation)
	|| is_set(active_timer_msecs.operation)
	|| is_set(active_timer_secs.operation)
	|| is_set(address_family.operation)
	|| is_set(authentication_string.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interface.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(bfd_peer_ip_address.operation)
	|| is_set(bfd_peer_ipv6_address.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(configured_mac_address.operation)
	|| is_set(configured_priority.operation)
	|| is_set(configured_timers.operation)
	|| is_set(current_state_timer_secs.operation)
	|| is_set(delay_timer_flag.operation)
	|| is_set(delay_timer_msecs.operation)
	|| is_set(delay_timer_secs.operation)
	|| is_set(followed_session_name.operation)
	|| is_set(hello_time.operation)
	|| is_set(hello_timer_flag.operation)
	|| is_set(hello_timer_msecs.operation)
	|| is_set(hello_timer_secs.operation)
	|| is_set(hold_time.operation)
	|| is_set(hsrp_group_number.operation)
	|| is_set(hsrp_router_state.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_slave.operation)
	|| is_set(learned_hello_time.operation)
	|| is_set(learned_hold_time.operation)
	|| is_set(min_delay_time.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(preempt_enabled.operation)
	|| is_set(preempt_timer_secs.operation)
	|| is_set(redirects_disabled.operation)
	|| is_set(reload_delay_time.operation)
	|| is_set(router_priority.operation)
	|| is_set(secondary_address.operation)
	|| is_set(session_name.operation)
	|| is_set(slaves.operation)
	|| is_set(standby_ip_address.operation)
	|| is_set(standby_ipv6_address.operation)
	|| is_set(standby_mac_address.operation)
	|| is_set(standby_timer_flag.operation)
	|| is_set(standby_timer_msecs.operation)
	|| is_set(standby_timer_secs.operation)
	|| is_set(state_change_count.operation)
	|| is_set(tracked_interface_count.operation)
	|| is_set(tracked_interface_up_count.operation)
	|| is_set(use_bia_configured.operation)
	|| is_set(use_configured_timers.operation)
	|| is_set(use_configured_virtual_ip.operation)
	|| is_set(version.operation)
	|| is_set(virtual_ip_address.operation)
	|| is_set(virtual_linklocal_ipv6_address.operation)
	|| is_set(virtual_mac_address.operation)
	|| is_set(virtual_mac_address_state.operation)
	|| (coup_received_time !=  nullptr && coup_received_time->has_operation())
	|| (coup_sent_time !=  nullptr && coup_sent_time->has_operation())
	|| (resign_received_time !=  nullptr && resign_received_time->has_operation())
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Hsrp::Ipv4::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active_ip_address.is_set || is_set(active_ip_address.operation)) leaf_name_data.push_back(active_ip_address.get_name_leafdata());
    if (active_ipv6_address.is_set || is_set(active_ipv6_address.operation)) leaf_name_data.push_back(active_ipv6_address.get_name_leafdata());
    if (active_mac_address.is_set || is_set(active_mac_address.operation)) leaf_name_data.push_back(active_mac_address.get_name_leafdata());
    if (active_priority.is_set || is_set(active_priority.operation)) leaf_name_data.push_back(active_priority.get_name_leafdata());
    if (active_timer_flag.is_set || is_set(active_timer_flag.operation)) leaf_name_data.push_back(active_timer_flag.get_name_leafdata());
    if (active_timer_msecs.is_set || is_set(active_timer_msecs.operation)) leaf_name_data.push_back(active_timer_msecs.get_name_leafdata());
    if (active_timer_secs.is_set || is_set(active_timer_secs.operation)) leaf_name_data.push_back(active_timer_secs.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (authentication_string.is_set || is_set(authentication_string.operation)) leaf_name_data.push_back(authentication_string.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interface.is_set || is_set(bfd_interface.operation)) leaf_name_data.push_back(bfd_interface.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_peer_ip_address.is_set || is_set(bfd_peer_ip_address.operation)) leaf_name_data.push_back(bfd_peer_ip_address.get_name_leafdata());
    if (bfd_peer_ipv6_address.is_set || is_set(bfd_peer_ipv6_address.operation)) leaf_name_data.push_back(bfd_peer_ipv6_address.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (configured_mac_address.is_set || is_set(configured_mac_address.operation)) leaf_name_data.push_back(configured_mac_address.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (configured_timers.is_set || is_set(configured_timers.operation)) leaf_name_data.push_back(configured_timers.get_name_leafdata());
    if (current_state_timer_secs.is_set || is_set(current_state_timer_secs.operation)) leaf_name_data.push_back(current_state_timer_secs.get_name_leafdata());
    if (delay_timer_flag.is_set || is_set(delay_timer_flag.operation)) leaf_name_data.push_back(delay_timer_flag.get_name_leafdata());
    if (delay_timer_msecs.is_set || is_set(delay_timer_msecs.operation)) leaf_name_data.push_back(delay_timer_msecs.get_name_leafdata());
    if (delay_timer_secs.is_set || is_set(delay_timer_secs.operation)) leaf_name_data.push_back(delay_timer_secs.get_name_leafdata());
    if (followed_session_name.is_set || is_set(followed_session_name.operation)) leaf_name_data.push_back(followed_session_name.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.operation)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (hello_timer_flag.is_set || is_set(hello_timer_flag.operation)) leaf_name_data.push_back(hello_timer_flag.get_name_leafdata());
    if (hello_timer_msecs.is_set || is_set(hello_timer_msecs.operation)) leaf_name_data.push_back(hello_timer_msecs.get_name_leafdata());
    if (hello_timer_secs.is_set || is_set(hello_timer_secs.operation)) leaf_name_data.push_back(hello_timer_secs.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.operation)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (hsrp_router_state.is_set || is_set(hsrp_router_state.operation)) leaf_name_data.push_back(hsrp_router_state.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_slave.is_set || is_set(is_slave.operation)) leaf_name_data.push_back(is_slave.get_name_leafdata());
    if (learned_hello_time.is_set || is_set(learned_hello_time.operation)) leaf_name_data.push_back(learned_hello_time.get_name_leafdata());
    if (learned_hold_time.is_set || is_set(learned_hold_time.operation)) leaf_name_data.push_back(learned_hold_time.get_name_leafdata());
    if (min_delay_time.is_set || is_set(min_delay_time.operation)) leaf_name_data.push_back(min_delay_time.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (preempt_enabled.is_set || is_set(preempt_enabled.operation)) leaf_name_data.push_back(preempt_enabled.get_name_leafdata());
    if (preempt_timer_secs.is_set || is_set(preempt_timer_secs.operation)) leaf_name_data.push_back(preempt_timer_secs.get_name_leafdata());
    if (redirects_disabled.is_set || is_set(redirects_disabled.operation)) leaf_name_data.push_back(redirects_disabled.get_name_leafdata());
    if (reload_delay_time.is_set || is_set(reload_delay_time.operation)) leaf_name_data.push_back(reload_delay_time.get_name_leafdata());
    if (router_priority.is_set || is_set(router_priority.operation)) leaf_name_data.push_back(router_priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (slaves.is_set || is_set(slaves.operation)) leaf_name_data.push_back(slaves.get_name_leafdata());
    if (standby_ip_address.is_set || is_set(standby_ip_address.operation)) leaf_name_data.push_back(standby_ip_address.get_name_leafdata());
    if (standby_ipv6_address.is_set || is_set(standby_ipv6_address.operation)) leaf_name_data.push_back(standby_ipv6_address.get_name_leafdata());
    if (standby_mac_address.is_set || is_set(standby_mac_address.operation)) leaf_name_data.push_back(standby_mac_address.get_name_leafdata());
    if (standby_timer_flag.is_set || is_set(standby_timer_flag.operation)) leaf_name_data.push_back(standby_timer_flag.get_name_leafdata());
    if (standby_timer_msecs.is_set || is_set(standby_timer_msecs.operation)) leaf_name_data.push_back(standby_timer_msecs.get_name_leafdata());
    if (standby_timer_secs.is_set || is_set(standby_timer_secs.operation)) leaf_name_data.push_back(standby_timer_secs.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.operation)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (tracked_interface_count.is_set || is_set(tracked_interface_count.operation)) leaf_name_data.push_back(tracked_interface_count.get_name_leafdata());
    if (tracked_interface_up_count.is_set || is_set(tracked_interface_up_count.operation)) leaf_name_data.push_back(tracked_interface_up_count.get_name_leafdata());
    if (use_bia_configured.is_set || is_set(use_bia_configured.operation)) leaf_name_data.push_back(use_bia_configured.get_name_leafdata());
    if (use_configured_timers.is_set || is_set(use_configured_timers.operation)) leaf_name_data.push_back(use_configured_timers.get_name_leafdata());
    if (use_configured_virtual_ip.is_set || is_set(use_configured_virtual_ip.operation)) leaf_name_data.push_back(use_configured_virtual_ip.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (virtual_ip_address.is_set || is_set(virtual_ip_address.operation)) leaf_name_data.push_back(virtual_ip_address.get_name_leafdata());
    if (virtual_linklocal_ipv6_address.is_set || is_set(virtual_linklocal_ipv6_address.operation)) leaf_name_data.push_back(virtual_linklocal_ipv6_address.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_state.is_set || is_set(virtual_mac_address_state.operation)) leaf_name_data.push_back(virtual_mac_address_state.get_name_leafdata());

    auto secondary_address_name_datas = secondary_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_address_name_datas.begin(), secondary_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "coup-received-time")
    {
        if(coup_received_time != nullptr)
        {
            children["coup-received-time"] = coup_received_time;
        }
        else
        {
            coup_received_time = std::make_shared<Hsrp::Ipv4::Groups::Group::CoupReceivedTime>();
            coup_received_time->parent = this;
            children["coup-received-time"] = coup_received_time;
        }
        return children.at("coup-received-time");
    }

    if(child_yang_name == "coup-sent-time")
    {
        if(coup_sent_time != nullptr)
        {
            children["coup-sent-time"] = coup_sent_time;
        }
        else
        {
            coup_sent_time = std::make_shared<Hsrp::Ipv4::Groups::Group::CoupSentTime>();
            coup_sent_time->parent = this;
            children["coup-sent-time"] = coup_sent_time;
        }
        return children.at("coup-sent-time");
    }

    if(child_yang_name == "global-address")
    {
        for(auto const & c : global_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv4::Groups::Group::GlobalAddress>();
        c->parent = this;
        global_address.push_back(std::move(c));
        children[segment_path] = global_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "resign-received-time")
    {
        if(resign_received_time != nullptr)
        {
            children["resign-received-time"] = resign_received_time;
        }
        else
        {
            resign_received_time = std::make_shared<Hsrp::Ipv4::Groups::Group::ResignReceivedTime>();
            resign_received_time->parent = this;
            children["resign-received-time"] = resign_received_time;
        }
        return children.at("resign-received-time");
    }

    if(child_yang_name == "resign-sent-time")
    {
        if(resign_sent_time != nullptr)
        {
            children["resign-sent-time"] = resign_sent_time;
        }
        else
        {
            resign_sent_time = std::make_shared<Hsrp::Ipv4::Groups::Group::ResignSentTime>();
            resign_sent_time->parent = this;
            children["resign-sent-time"] = resign_sent_time;
        }
        return children.at("resign-sent-time");
    }

    if(child_yang_name == "state-change-history")
    {
        for(auto const & c : state_change_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv4::Groups::Group::StateChangeHistory>();
        c->parent = this;
        state_change_history.push_back(std::move(c));
        children[segment_path] = state_change_history.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Hsrp::Ipv4::Groups::Group::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::get_children()
{
    if(children.find("coup-received-time") == children.end())
    {
        if(coup_received_time != nullptr)
        {
            children["coup-received-time"] = coup_received_time;
        }
    }

    if(children.find("coup-sent-time") == children.end())
    {
        if(coup_sent_time != nullptr)
        {
            children["coup-sent-time"] = coup_sent_time;
        }
    }

    for (auto const & c : global_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("resign-received-time") == children.end())
    {
        if(resign_received_time != nullptr)
        {
            children["resign-received-time"] = resign_received_time;
        }
    }

    if(children.find("resign-sent-time") == children.end())
    {
        if(resign_sent_time != nullptr)
        {
            children["resign-sent-time"] = resign_sent_time;
        }
    }

    for (auto const & c : state_change_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void Hsrp::Ipv4::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "active-ip-address")
    {
        active_ip_address = value;
    }
    if(value_path == "active-ipv6-address")
    {
        active_ipv6_address = value;
    }
    if(value_path == "active-mac-address")
    {
        active_mac_address = value;
    }
    if(value_path == "active-priority")
    {
        active_priority = value;
    }
    if(value_path == "active-timer-flag")
    {
        active_timer_flag = value;
    }
    if(value_path == "active-timer-msecs")
    {
        active_timer_msecs = value;
    }
    if(value_path == "active-timer-secs")
    {
        active_timer_secs = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "authentication-string")
    {
        authentication_string = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interface")
    {
        bfd_interface = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "bfd-peer-ip-address")
    {
        bfd_peer_ip_address = value;
    }
    if(value_path == "bfd-peer-ipv6-address")
    {
        bfd_peer_ipv6_address = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "configured-mac-address")
    {
        configured_mac_address = value;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "configured-timers")
    {
        configured_timers = value;
    }
    if(value_path == "current-state-timer-secs")
    {
        current_state_timer_secs = value;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag = value;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs = value;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs = value;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name = value;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
    }
    if(value_path == "hello-timer-flag")
    {
        hello_timer_flag = value;
    }
    if(value_path == "hello-timer-msecs")
    {
        hello_timer_msecs = value;
    }
    if(value_path == "hello-timer-secs")
    {
        hello_timer_secs = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
    }
    if(value_path == "hsrp-router-state")
    {
        hsrp_router_state = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-slave")
    {
        is_slave = value;
    }
    if(value_path == "learned-hello-time")
    {
        learned_hello_time = value;
    }
    if(value_path == "learned-hold-time")
    {
        learned_hold_time = value;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "preempt-enabled")
    {
        preempt_enabled = value;
    }
    if(value_path == "preempt-timer-secs")
    {
        preempt_timer_secs = value;
    }
    if(value_path == "redirects-disabled")
    {
        redirects_disabled = value;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time = value;
    }
    if(value_path == "router-priority")
    {
        router_priority = value;
    }
    if(value_path == "secondary-address")
    {
        secondary_address.append(value);
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "slaves")
    {
        slaves = value;
    }
    if(value_path == "standby-ip-address")
    {
        standby_ip_address = value;
    }
    if(value_path == "standby-ipv6-address")
    {
        standby_ipv6_address = value;
    }
    if(value_path == "standby-mac-address")
    {
        standby_mac_address = value;
    }
    if(value_path == "standby-timer-flag")
    {
        standby_timer_flag = value;
    }
    if(value_path == "standby-timer-msecs")
    {
        standby_timer_msecs = value;
    }
    if(value_path == "standby-timer-secs")
    {
        standby_timer_secs = value;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count = value;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count = value;
    }
    if(value_path == "use-bia-configured")
    {
        use_bia_configured = value;
    }
    if(value_path == "use-configured-timers")
    {
        use_configured_timers = value;
    }
    if(value_path == "use-configured-virtual-ip")
    {
        use_configured_virtual_ip = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "virtual-ip-address")
    {
        virtual_ip_address = value;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state = value;
    }
}

Hsrp::Ipv4::Groups::Group::ResignSentTime::ResignSentTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "resign-sent-time"; yang_parent_name = "group";
}

Hsrp::Ipv4::Groups::Group::ResignSentTime::~ResignSentTime()
{
}

bool Hsrp::Ipv4::Groups::Group::ResignSentTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::ResignSentTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv4::Groups::Group::ResignSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-sent-time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::ResignSentTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResignSentTime' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::ResignSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::ResignSentTime::get_children()
{
    return children;
}

void Hsrp::Ipv4::Groups::Group::ResignSentTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv4::Groups::Group::ResignReceivedTime::ResignReceivedTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "resign-received-time"; yang_parent_name = "group";
}

Hsrp::Ipv4::Groups::Group::ResignReceivedTime::~ResignReceivedTime()
{
}

bool Hsrp::Ipv4::Groups::Group::ResignReceivedTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::ResignReceivedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv4::Groups::Group::ResignReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-received-time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::ResignReceivedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResignReceivedTime' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::ResignReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::ResignReceivedTime::get_children()
{
    return children;
}

void Hsrp::Ipv4::Groups::Group::ResignReceivedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv4::Groups::Group::CoupSentTime::CoupSentTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "coup-sent-time"; yang_parent_name = "group";
}

Hsrp::Ipv4::Groups::Group::CoupSentTime::~CoupSentTime()
{
}

bool Hsrp::Ipv4::Groups::Group::CoupSentTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::CoupSentTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv4::Groups::Group::CoupSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coup-sent-time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::CoupSentTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CoupSentTime' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::CoupSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::CoupSentTime::get_children()
{
    return children;
}

void Hsrp::Ipv4::Groups::Group::CoupSentTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv4::Groups::Group::CoupReceivedTime::CoupReceivedTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "coup-received-time"; yang_parent_name = "group";
}

Hsrp::Ipv4::Groups::Group::CoupReceivedTime::~CoupReceivedTime()
{
}

bool Hsrp::Ipv4::Groups::Group::CoupReceivedTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::CoupReceivedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv4::Groups::Group::CoupReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coup-received-time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::CoupReceivedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CoupReceivedTime' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::CoupReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::CoupReceivedTime::get_children()
{
    return children;
}

void Hsrp::Ipv4::Groups::Group::CoupReceivedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv4::Groups::Group::Statistics::Statistics()
    :
    active_transitions{YType::uint32, "active-transitions"},
    auth_fail_received{YType::uint32, "auth-fail-received"},
    coup_packets_received{YType::uint32, "coup-packets-received"},
    coup_packets_sent{YType::uint32, "coup-packets-sent"},
    hello_packets_received{YType::uint32, "hello-packets-received"},
    hello_packets_sent{YType::uint32, "hello-packets-sent"},
    init_transitions{YType::uint32, "init-transitions"},
    invalid_timer_received{YType::uint32, "invalid-timer-received"},
    learn_transitions{YType::uint32, "learn-transitions"},
    listen_transitions{YType::uint32, "listen-transitions"},
    mismatch_virtual_ip_address_received{YType::uint32, "mismatch-virtual-ip-address-received"},
    resign_packets_received{YType::uint32, "resign-packets-received"},
    resign_packets_sent{YType::uint32, "resign-packets-sent"},
    speak_transitions{YType::uint32, "speak-transitions"},
    standby_transitions{YType::uint32, "standby-transitions"}
{
    yang_name = "statistics"; yang_parent_name = "group";
}

Hsrp::Ipv4::Groups::Group::Statistics::~Statistics()
{
}

bool Hsrp::Ipv4::Groups::Group::Statistics::has_data() const
{
    return active_transitions.is_set
	|| auth_fail_received.is_set
	|| coup_packets_received.is_set
	|| coup_packets_sent.is_set
	|| hello_packets_received.is_set
	|| hello_packets_sent.is_set
	|| init_transitions.is_set
	|| invalid_timer_received.is_set
	|| learn_transitions.is_set
	|| listen_transitions.is_set
	|| mismatch_virtual_ip_address_received.is_set
	|| resign_packets_received.is_set
	|| resign_packets_sent.is_set
	|| speak_transitions.is_set
	|| standby_transitions.is_set;
}

bool Hsrp::Ipv4::Groups::Group::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_transitions.operation)
	|| is_set(auth_fail_received.operation)
	|| is_set(coup_packets_received.operation)
	|| is_set(coup_packets_sent.operation)
	|| is_set(hello_packets_received.operation)
	|| is_set(hello_packets_sent.operation)
	|| is_set(init_transitions.operation)
	|| is_set(invalid_timer_received.operation)
	|| is_set(learn_transitions.operation)
	|| is_set(listen_transitions.operation)
	|| is_set(mismatch_virtual_ip_address_received.operation)
	|| is_set(resign_packets_received.operation)
	|| is_set(resign_packets_sent.operation)
	|| is_set(speak_transitions.operation)
	|| is_set(standby_transitions.operation);
}

std::string Hsrp::Ipv4::Groups::Group::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_transitions.is_set || is_set(active_transitions.operation)) leaf_name_data.push_back(active_transitions.get_name_leafdata());
    if (auth_fail_received.is_set || is_set(auth_fail_received.operation)) leaf_name_data.push_back(auth_fail_received.get_name_leafdata());
    if (coup_packets_received.is_set || is_set(coup_packets_received.operation)) leaf_name_data.push_back(coup_packets_received.get_name_leafdata());
    if (coup_packets_sent.is_set || is_set(coup_packets_sent.operation)) leaf_name_data.push_back(coup_packets_sent.get_name_leafdata());
    if (hello_packets_received.is_set || is_set(hello_packets_received.operation)) leaf_name_data.push_back(hello_packets_received.get_name_leafdata());
    if (hello_packets_sent.is_set || is_set(hello_packets_sent.operation)) leaf_name_data.push_back(hello_packets_sent.get_name_leafdata());
    if (init_transitions.is_set || is_set(init_transitions.operation)) leaf_name_data.push_back(init_transitions.get_name_leafdata());
    if (invalid_timer_received.is_set || is_set(invalid_timer_received.operation)) leaf_name_data.push_back(invalid_timer_received.get_name_leafdata());
    if (learn_transitions.is_set || is_set(learn_transitions.operation)) leaf_name_data.push_back(learn_transitions.get_name_leafdata());
    if (listen_transitions.is_set || is_set(listen_transitions.operation)) leaf_name_data.push_back(listen_transitions.get_name_leafdata());
    if (mismatch_virtual_ip_address_received.is_set || is_set(mismatch_virtual_ip_address_received.operation)) leaf_name_data.push_back(mismatch_virtual_ip_address_received.get_name_leafdata());
    if (resign_packets_received.is_set || is_set(resign_packets_received.operation)) leaf_name_data.push_back(resign_packets_received.get_name_leafdata());
    if (resign_packets_sent.is_set || is_set(resign_packets_sent.operation)) leaf_name_data.push_back(resign_packets_sent.get_name_leafdata());
    if (speak_transitions.is_set || is_set(speak_transitions.operation)) leaf_name_data.push_back(speak_transitions.get_name_leafdata());
    if (standby_transitions.is_set || is_set(standby_transitions.operation)) leaf_name_data.push_back(standby_transitions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::Statistics::get_children()
{
    return children;
}

void Hsrp::Ipv4::Groups::Group::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-transitions")
    {
        active_transitions = value;
    }
    if(value_path == "auth-fail-received")
    {
        auth_fail_received = value;
    }
    if(value_path == "coup-packets-received")
    {
        coup_packets_received = value;
    }
    if(value_path == "coup-packets-sent")
    {
        coup_packets_sent = value;
    }
    if(value_path == "hello-packets-received")
    {
        hello_packets_received = value;
    }
    if(value_path == "hello-packets-sent")
    {
        hello_packets_sent = value;
    }
    if(value_path == "init-transitions")
    {
        init_transitions = value;
    }
    if(value_path == "invalid-timer-received")
    {
        invalid_timer_received = value;
    }
    if(value_path == "learn-transitions")
    {
        learn_transitions = value;
    }
    if(value_path == "listen-transitions")
    {
        listen_transitions = value;
    }
    if(value_path == "mismatch-virtual-ip-address-received")
    {
        mismatch_virtual_ip_address_received = value;
    }
    if(value_path == "resign-packets-received")
    {
        resign_packets_received = value;
    }
    if(value_path == "resign-packets-sent")
    {
        resign_packets_sent = value;
    }
    if(value_path == "speak-transitions")
    {
        speak_transitions = value;
    }
    if(value_path == "standby-transitions")
    {
        standby_transitions = value;
    }
}

Hsrp::Ipv4::Groups::Group::GlobalAddress::GlobalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "global-address"; yang_parent_name = "group";
}

Hsrp::Ipv4::Groups::Group::GlobalAddress::~GlobalAddress()
{
}

bool Hsrp::Ipv4::Groups::Group::GlobalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Hsrp::Ipv4::Groups::Group::GlobalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Hsrp::Ipv4::Groups::Group::GlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-address";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::GlobalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalAddress' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::GlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::GlobalAddress::get_children()
{
    return children;
}

void Hsrp::Ipv4::Groups::Group::GlobalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Hsrp::Ipv4::Groups::Group::StateChangeHistory::StateChangeHistory()
    :
    new_state{YType::enumeration, "new-state"},
    old_state{YType::enumeration, "old-state"},
    reason{YType::enumeration, "reason"}
    	,
    time(std::make_shared<Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time>())
{
    time->parent = this;
    children["time"] = time;

    yang_name = "state-change-history"; yang_parent_name = "group";
}

Hsrp::Ipv4::Groups::Group::StateChangeHistory::~StateChangeHistory()
{
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::has_data() const
{
    return new_state.is_set
	|| old_state.is_set
	|| reason.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(new_state.operation)
	|| is_set(old_state.operation)
	|| is_set(reason.operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Hsrp::Ipv4::Groups::Group::StateChangeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change-history";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::StateChangeHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateChangeHistory' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_state.is_set || is_set(new_state.operation)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (old_state.is_set || is_set(old_state.operation)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::StateChangeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "time")
    {
        if(time != nullptr)
        {
            children["time"] = time;
        }
        else
        {
            time = std::make_shared<Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time>();
            time->parent = this;
            children["time"] = time;
        }
        return children.at("time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::StateChangeHistory::get_children()
{
    if(children.find("time") == children.end())
    {
        if(time != nullptr)
        {
            children["time"] = time;
        }
    }

    return children;
}

void Hsrp::Ipv4::Groups::Group::StateChangeHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "new-state")
    {
        new_state = value;
    }
    if(value_path == "old-state")
    {
        old_state = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
}

Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::Time()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "time"; yang_parent_name = "state-change-history";
}

Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::~Time()
{
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::get_children()
{
    return children;
}

void Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv4::TrackedInterfaces::TrackedInterfaces()
{
    yang_name = "tracked-interfaces"; yang_parent_name = "ipv4";
}

Hsrp::Ipv4::TrackedInterfaces::~TrackedInterfaces()
{
}

bool Hsrp::Ipv4::TrackedInterfaces::has_data() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv4::TrackedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Ipv4::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::TrackedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tracked-interface")
    {
        for(auto const & c : tracked_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv4::TrackedInterfaces::TrackedInterface>();
        c->parent = this;
        tracked_interface.push_back(std::move(c));
        children[segment_path] = tracked_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::TrackedInterfaces::get_children()
{
    for (auto const & c : tracked_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Ipv4::TrackedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    group_number{YType::int32, "group-number"},
    interface_name{YType::str, "interface-name"},
    tracked_interface_name{YType::str, "tracked-interface-name"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    interface{YType::str, "interface"},
    interface_up_flag{YType::boolean, "interface-up-flag"},
    is_object{YType::boolean, "is-object"},
    priority_decrement{YType::uint32, "priority-decrement"},
    tracked_interface_name_xr{YType::str, "tracked-interface-name-xr"}
{
    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces";
}

Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::~TrackedInterface()
{
}

bool Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::has_data() const
{
    return group_number.is_set
	|| interface_name.is_set
	|| tracked_interface_name.is_set
	|| hsrp_group_number.is_set
	|| interface.is_set
	|| interface_up_flag.is_set
	|| is_object.is_set
	|| priority_decrement.is_set
	|| tracked_interface_name_xr.is_set;
}

bool Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(interface_name.operation)
	|| is_set(tracked_interface_name.operation)
	|| is_set(hsrp_group_number.operation)
	|| is_set(interface.operation)
	|| is_set(interface_up_flag.operation)
	|| is_set(is_object.operation)
	|| is_set(priority_decrement.operation)
	|| is_set(tracked_interface_name_xr.operation);
}

std::string Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface" <<"[group-number='" <<group_number <<"']" <<"[interface-name='" <<interface_name <<"']" <<"[tracked-interface-name='" <<tracked_interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/tracked-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (tracked_interface_name.is_set || is_set(tracked_interface_name.operation)) leaf_name_data.push_back(tracked_interface_name.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.operation)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_up_flag.is_set || is_set(interface_up_flag.operation)) leaf_name_data.push_back(interface_up_flag.get_name_leafdata());
    if (is_object.is_set || is_set(is_object.operation)) leaf_name_data.push_back(is_object.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (tracked_interface_name_xr.is_set || is_set(tracked_interface_name_xr.operation)) leaf_name_data.push_back(tracked_interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_children()
{
    return children;
}

void Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name = value;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag = value;
    }
    if(value_path == "is-object")
    {
        is_object = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "tracked-interface-name-xr")
    {
        tracked_interface_name_xr = value;
    }
}

Hsrp::Ipv4::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv4";
}

Hsrp::Ipv4::Interfaces::~Interfaces()
{
}

bool Hsrp::Ipv4::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv4::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Ipv4::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Ipv4::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    use_bia_flag{YType::boolean, "use-bia-flag"}
    	,
    statistics(std::make_shared<Hsrp::Ipv4::Interfaces::Interface::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Hsrp::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Hsrp::Ipv4::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface.is_set
	|| use_bia_flag.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Hsrp::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(use_bia_flag.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Hsrp::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (use_bia_flag.is_set || is_set(use_bia_flag.operation)) leaf_name_data.push_back(use_bia_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Hsrp::Ipv4::Interfaces::Interface::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Interfaces::Interface::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void Hsrp::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "use-bia-flag")
    {
        use_bia_flag = value;
    }
}

Hsrp::Ipv4::Interfaces::Interface::Statistics::Statistics()
    :
    advert_packets_received{YType::uint32, "advert-packets-received"},
    advert_packets_sent{YType::uint32, "advert-packets-sent"},
    conflict_source_ip_address_received{YType::uint32, "conflict-source-ip-address-received"},
    inoperational_group_received{YType::uint32, "inoperational-group-received"},
    invalid_operation_code_received{YType::uint32, "invalid-operation-code-received"},
    invalid_version_received{YType::uint32, "invalid-version-received"},
    long_packets_received{YType::uint32, "long-packets-received"},
    short_packets_received{YType::uint32, "short-packets-received"},
    unknown_group_received{YType::uint32, "unknown-group-received"}
{
    yang_name = "statistics"; yang_parent_name = "interface";
}

Hsrp::Ipv4::Interfaces::Interface::Statistics::~Statistics()
{
}

bool Hsrp::Ipv4::Interfaces::Interface::Statistics::has_data() const
{
    return advert_packets_received.is_set
	|| advert_packets_sent.is_set
	|| conflict_source_ip_address_received.is_set
	|| inoperational_group_received.is_set
	|| invalid_operation_code_received.is_set
	|| invalid_version_received.is_set
	|| long_packets_received.is_set
	|| short_packets_received.is_set
	|| unknown_group_received.is_set;
}

bool Hsrp::Ipv4::Interfaces::Interface::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(advert_packets_received.operation)
	|| is_set(advert_packets_sent.operation)
	|| is_set(conflict_source_ip_address_received.operation)
	|| is_set(inoperational_group_received.operation)
	|| is_set(invalid_operation_code_received.operation)
	|| is_set(invalid_version_received.operation)
	|| is_set(long_packets_received.operation)
	|| is_set(short_packets_received.operation)
	|| is_set(unknown_group_received.operation);
}

std::string Hsrp::Ipv4::Interfaces::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv4::Interfaces::Interface::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advert_packets_received.is_set || is_set(advert_packets_received.operation)) leaf_name_data.push_back(advert_packets_received.get_name_leafdata());
    if (advert_packets_sent.is_set || is_set(advert_packets_sent.operation)) leaf_name_data.push_back(advert_packets_sent.get_name_leafdata());
    if (conflict_source_ip_address_received.is_set || is_set(conflict_source_ip_address_received.operation)) leaf_name_data.push_back(conflict_source_ip_address_received.get_name_leafdata());
    if (inoperational_group_received.is_set || is_set(inoperational_group_received.operation)) leaf_name_data.push_back(inoperational_group_received.get_name_leafdata());
    if (invalid_operation_code_received.is_set || is_set(invalid_operation_code_received.operation)) leaf_name_data.push_back(invalid_operation_code_received.get_name_leafdata());
    if (invalid_version_received.is_set || is_set(invalid_version_received.operation)) leaf_name_data.push_back(invalid_version_received.get_name_leafdata());
    if (long_packets_received.is_set || is_set(long_packets_received.operation)) leaf_name_data.push_back(long_packets_received.get_name_leafdata());
    if (short_packets_received.is_set || is_set(short_packets_received.operation)) leaf_name_data.push_back(short_packets_received.get_name_leafdata());
    if (unknown_group_received.is_set || is_set(unknown_group_received.operation)) leaf_name_data.push_back(unknown_group_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv4::Interfaces::Interface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv4::Interfaces::Interface::Statistics::get_children()
{
    return children;
}

void Hsrp::Ipv4::Interfaces::Interface::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advert-packets-received")
    {
        advert_packets_received = value;
    }
    if(value_path == "advert-packets-sent")
    {
        advert_packets_sent = value;
    }
    if(value_path == "conflict-source-ip-address-received")
    {
        conflict_source_ip_address_received = value;
    }
    if(value_path == "inoperational-group-received")
    {
        inoperational_group_received = value;
    }
    if(value_path == "invalid-operation-code-received")
    {
        invalid_operation_code_received = value;
    }
    if(value_path == "invalid-version-received")
    {
        invalid_version_received = value;
    }
    if(value_path == "long-packets-received")
    {
        long_packets_received = value;
    }
    if(value_path == "short-packets-received")
    {
        short_packets_received = value;
    }
    if(value_path == "unknown-group-received")
    {
        unknown_group_received = value;
    }
}

Hsrp::MgoSessions::MgoSessions()
{
    yang_name = "mgo-sessions"; yang_parent_name = "hsrp";
}

Hsrp::MgoSessions::~MgoSessions()
{
}

bool Hsrp::MgoSessions::has_data() const
{
    for (std::size_t index=0; index<mgo_session.size(); index++)
    {
        if(mgo_session[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::MgoSessions::has_operation() const
{
    for (std::size_t index=0; index<mgo_session.size(); index++)
    {
        if(mgo_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::MgoSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgo-sessions";

    return path_buffer.str();

}

EntityPath Hsrp::MgoSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::MgoSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "mgo-session")
    {
        for(auto const & c : mgo_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::MgoSessions::MgoSession>();
        c->parent = this;
        mgo_session.push_back(std::move(c));
        children[segment_path] = mgo_session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::MgoSessions::get_children()
{
    for (auto const & c : mgo_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::MgoSessions::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::MgoSessions::MgoSession::MgoSession()
    :
    session_name{YType::str, "session-name"},
    primary_af_name{YType::enumeration, "primary-af-name"},
    primary_session_interface{YType::str, "primary-session-interface"},
    primary_session_name{YType::str, "primary-session-name"},
    primary_session_number{YType::uint32, "primary-session-number"},
    primary_session_state{YType::enumeration, "primary-session-state"}
{
    yang_name = "mgo-session"; yang_parent_name = "mgo-sessions";
}

Hsrp::MgoSessions::MgoSession::~MgoSession()
{
}

bool Hsrp::MgoSessions::MgoSession::has_data() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return session_name.is_set
	|| primary_af_name.is_set
	|| primary_session_interface.is_set
	|| primary_session_name.is_set
	|| primary_session_number.is_set
	|| primary_session_state.is_set;
}

bool Hsrp::MgoSessions::MgoSession::has_operation() const
{
    for (std::size_t index=0; index<slave.size(); index++)
    {
        if(slave[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(session_name.operation)
	|| is_set(primary_af_name.operation)
	|| is_set(primary_session_interface.operation)
	|| is_set(primary_session_name.operation)
	|| is_set(primary_session_number.operation)
	|| is_set(primary_session_state.operation);
}

std::string Hsrp::MgoSessions::MgoSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgo-session" <<"[session-name='" <<session_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::MgoSessions::MgoSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/mgo-sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (primary_af_name.is_set || is_set(primary_af_name.operation)) leaf_name_data.push_back(primary_af_name.get_name_leafdata());
    if (primary_session_interface.is_set || is_set(primary_session_interface.operation)) leaf_name_data.push_back(primary_session_interface.get_name_leafdata());
    if (primary_session_name.is_set || is_set(primary_session_name.operation)) leaf_name_data.push_back(primary_session_name.get_name_leafdata());
    if (primary_session_number.is_set || is_set(primary_session_number.operation)) leaf_name_data.push_back(primary_session_number.get_name_leafdata());
    if (primary_session_state.is_set || is_set(primary_session_state.operation)) leaf_name_data.push_back(primary_session_state.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::MgoSessions::MgoSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "slave")
    {
        for(auto const & c : slave)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::MgoSessions::MgoSession::Slave>();
        c->parent = this;
        slave.push_back(std::move(c));
        children[segment_path] = slave.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::MgoSessions::MgoSession::get_children()
{
    for (auto const & c : slave)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::MgoSessions::MgoSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "primary-af-name")
    {
        primary_af_name = value;
    }
    if(value_path == "primary-session-interface")
    {
        primary_session_interface = value;
    }
    if(value_path == "primary-session-name")
    {
        primary_session_name = value;
    }
    if(value_path == "primary-session-number")
    {
        primary_session_number = value;
    }
    if(value_path == "primary-session-state")
    {
        primary_session_state = value;
    }
}

Hsrp::MgoSessions::MgoSession::Slave::Slave()
    :
    slave_group_interface{YType::str, "slave-group-interface"},
    slave_group_number{YType::uint32, "slave-group-number"}
{
    yang_name = "slave"; yang_parent_name = "mgo-session";
}

Hsrp::MgoSessions::MgoSession::Slave::~Slave()
{
}

bool Hsrp::MgoSessions::MgoSession::Slave::has_data() const
{
    return slave_group_interface.is_set
	|| slave_group_number.is_set;
}

bool Hsrp::MgoSessions::MgoSession::Slave::has_operation() const
{
    return is_set(operation)
	|| is_set(slave_group_interface.operation)
	|| is_set(slave_group_number.operation);
}

std::string Hsrp::MgoSessions::MgoSession::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave";

    return path_buffer.str();

}

EntityPath Hsrp::MgoSessions::MgoSession::Slave::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Slave' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_group_interface.is_set || is_set(slave_group_interface.operation)) leaf_name_data.push_back(slave_group_interface.get_name_leafdata());
    if (slave_group_number.is_set || is_set(slave_group_number.operation)) leaf_name_data.push_back(slave_group_number.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::MgoSessions::MgoSession::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::MgoSessions::MgoSession::Slave::get_children()
{
    return children;
}

void Hsrp::MgoSessions::MgoSession::Slave::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "slave-group-interface")
    {
        slave_group_interface = value;
    }
    if(value_path == "slave-group-number")
    {
        slave_group_number = value;
    }
}

Hsrp::Ipv6::Ipv6()
    :
    groups(std::make_shared<Hsrp::Ipv6::Groups>())
	,interfaces(std::make_shared<Hsrp::Ipv6::Interfaces>())
	,tracked_interfaces(std::make_shared<Hsrp::Ipv6::TrackedInterfaces>())
{
    groups->parent = this;
    children["groups"] = groups;

    interfaces->parent = this;
    children["interfaces"] = interfaces;

    tracked_interfaces->parent = this;
    children["tracked-interfaces"] = tracked_interfaces;

    yang_name = "ipv6"; yang_parent_name = "hsrp";
}

Hsrp::Ipv6::~Ipv6()
{
}

bool Hsrp::Ipv6::has_data() const
{
    return (groups !=  nullptr && groups->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data());
}

bool Hsrp::Ipv6::has_operation() const
{
    return is_set(operation)
	|| (groups !=  nullptr && groups->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation());
}

std::string Hsrp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "groups")
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
        else
        {
            groups = std::make_shared<Hsrp::Ipv6::Groups>();
            groups->parent = this;
            children["groups"] = groups;
        }
        return children.at("groups");
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
        else
        {
            interfaces = std::make_shared<Hsrp::Ipv6::Interfaces>();
            interfaces->parent = this;
            children["interfaces"] = interfaces;
        }
        return children.at("interfaces");
    }

    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
        else
        {
            tracked_interfaces = std::make_shared<Hsrp::Ipv6::TrackedInterfaces>();
            tracked_interfaces->parent = this;
            children["tracked-interfaces"] = tracked_interfaces;
        }
        return children.at("tracked-interfaces");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::get_children()
{
    if(children.find("groups") == children.end())
    {
        if(groups != nullptr)
        {
            children["groups"] = groups;
        }
    }

    if(children.find("interfaces") == children.end())
    {
        if(interfaces != nullptr)
        {
            children["interfaces"] = interfaces;
        }
    }

    if(children.find("tracked-interfaces") == children.end())
    {
        if(tracked_interfaces != nullptr)
        {
            children["tracked-interfaces"] = tracked_interfaces;
        }
    }

    return children;
}

void Hsrp::Ipv6::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Ipv6::TrackedInterfaces::TrackedInterfaces()
{
    yang_name = "tracked-interfaces"; yang_parent_name = "ipv6";
}

Hsrp::Ipv6::TrackedInterfaces::~TrackedInterfaces()
{
}

bool Hsrp::Ipv6::TrackedInterfaces::has_data() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv6::TrackedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<tracked_interface.size(); index++)
    {
        if(tracked_interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Ipv6::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::TrackedInterfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "tracked-interface")
    {
        for(auto const & c : tracked_interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv6::TrackedInterfaces::TrackedInterface>();
        c->parent = this;
        tracked_interface.push_back(std::move(c));
        children[segment_path] = tracked_interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::TrackedInterfaces::get_children()
{
    for (auto const & c : tracked_interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Ipv6::TrackedInterfaces::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    group_number{YType::int32, "group-number"},
    interface_name{YType::str, "interface-name"},
    tracked_interface_name{YType::str, "tracked-interface-name"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    interface{YType::str, "interface"},
    interface_up_flag{YType::boolean, "interface-up-flag"},
    is_object{YType::boolean, "is-object"},
    priority_decrement{YType::uint32, "priority-decrement"},
    tracked_interface_name_xr{YType::str, "tracked-interface-name-xr"}
{
    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces";
}

Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::~TrackedInterface()
{
}

bool Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::has_data() const
{
    return group_number.is_set
	|| interface_name.is_set
	|| tracked_interface_name.is_set
	|| hsrp_group_number.is_set
	|| interface.is_set
	|| interface_up_flag.is_set
	|| is_object.is_set
	|| priority_decrement.is_set
	|| tracked_interface_name_xr.is_set;
}

bool Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::has_operation() const
{
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(interface_name.operation)
	|| is_set(tracked_interface_name.operation)
	|| is_set(hsrp_group_number.operation)
	|| is_set(interface.operation)
	|| is_set(interface_up_flag.operation)
	|| is_set(is_object.operation)
	|| is_set(priority_decrement.operation)
	|| is_set(tracked_interface_name_xr.operation);
}

std::string Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface" <<"[group-number='" <<group_number <<"']" <<"[interface-name='" <<interface_name <<"']" <<"[tracked-interface-name='" <<tracked_interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/tracked-interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (tracked_interface_name.is_set || is_set(tracked_interface_name.operation)) leaf_name_data.push_back(tracked_interface_name.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.operation)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_up_flag.is_set || is_set(interface_up_flag.operation)) leaf_name_data.push_back(interface_up_flag.get_name_leafdata());
    if (is_object.is_set || is_set(is_object.operation)) leaf_name_data.push_back(is_object.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.operation)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (tracked_interface_name_xr.is_set || is_set(tracked_interface_name_xr.operation)) leaf_name_data.push_back(tracked_interface_name_xr.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_children()
{
    return children;
}

void Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name = value;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag = value;
    }
    if(value_path == "is-object")
    {
        is_object = value;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
    }
    if(value_path == "tracked-interface-name-xr")
    {
        tracked_interface_name_xr = value;
    }
}

Hsrp::Ipv6::Groups::Groups()
{
    yang_name = "groups"; yang_parent_name = "ipv6";
}

Hsrp::Ipv6::Groups::~Groups()
{
}

bool Hsrp::Ipv6::Groups::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv6::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Ipv6::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv6::Groups::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Ipv6::Groups::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Ipv6::Groups::Group::Group()
    :
    group_number{YType::int32, "group-number"},
    interface_name{YType::str, "interface-name"},
    active_ip_address{YType::str, "active-ip-address"},
    active_ipv6_address{YType::str, "active-ipv6-address"},
    active_mac_address{YType::str, "active-mac-address"},
    active_priority{YType::uint8, "active-priority"},
    active_timer_flag{YType::boolean, "active-timer-flag"},
    active_timer_msecs{YType::uint32, "active-timer-msecs"},
    active_timer_secs{YType::uint32, "active-timer-secs"},
    address_family{YType::enumeration, "address-family"},
    authentication_string{YType::str, "authentication-string"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interface{YType::str, "bfd-interface"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_peer_ip_address{YType::str, "bfd-peer-ip-address"},
    bfd_peer_ipv6_address{YType::str, "bfd-peer-ipv6-address"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    configured_mac_address{YType::boolean, "configured-mac-address"},
    configured_priority{YType::uint8, "configured-priority"},
    configured_timers{YType::boolean, "configured-timers"},
    current_state_timer_secs{YType::uint32, "current-state-timer-secs"},
    delay_timer_flag{YType::boolean, "delay-timer-flag"},
    delay_timer_msecs{YType::uint32, "delay-timer-msecs"},
    delay_timer_secs{YType::uint32, "delay-timer-secs"},
    followed_session_name{YType::str, "followed-session-name"},
    hello_time{YType::uint32, "hello-time"},
    hello_timer_flag{YType::boolean, "hello-timer-flag"},
    hello_timer_msecs{YType::uint32, "hello-timer-msecs"},
    hello_timer_secs{YType::uint32, "hello-timer-secs"},
    hold_time{YType::uint32, "hold-time"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    hsrp_router_state{YType::enumeration, "hsrp-router-state"},
    interface{YType::str, "interface"},
    interface_name_xr{YType::str, "interface-name-xr"},
    is_slave{YType::boolean, "is-slave"},
    learned_hello_time{YType::uint32, "learned-hello-time"},
    learned_hold_time{YType::uint32, "learned-hold-time"},
    min_delay_time{YType::uint32, "min-delay-time"},
    preempt_delay{YType::uint32, "preempt-delay"},
    preempt_enabled{YType::boolean, "preempt-enabled"},
    preempt_timer_secs{YType::uint32, "preempt-timer-secs"},
    redirects_disabled{YType::boolean, "redirects-disabled"},
    reload_delay_time{YType::uint32, "reload-delay-time"},
    router_priority{YType::uint8, "router-priority"},
    secondary_address{YType::str, "secondary-address"},
    session_name{YType::str, "session-name"},
    slaves{YType::uint32, "slaves"},
    standby_ip_address{YType::str, "standby-ip-address"},
    standby_ipv6_address{YType::str, "standby-ipv6-address"},
    standby_mac_address{YType::str, "standby-mac-address"},
    standby_timer_flag{YType::boolean, "standby-timer-flag"},
    standby_timer_msecs{YType::uint32, "standby-timer-msecs"},
    standby_timer_secs{YType::uint32, "standby-timer-secs"},
    state_change_count{YType::uint32, "state-change-count"},
    tracked_interface_count{YType::uint32, "tracked-interface-count"},
    tracked_interface_up_count{YType::uint32, "tracked-interface-up-count"},
    use_bia_configured{YType::boolean, "use-bia-configured"},
    use_configured_timers{YType::boolean, "use-configured-timers"},
    use_configured_virtual_ip{YType::boolean, "use-configured-virtual-ip"},
    version{YType::uint8, "version"},
    virtual_ip_address{YType::str, "virtual-ip-address"},
    virtual_linklocal_ipv6_address{YType::str, "virtual-linklocal-ipv6-address"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    virtual_mac_address_state{YType::enumeration, "virtual-mac-address-state"}
    	,
    coup_received_time(std::make_shared<Hsrp::Ipv6::Groups::Group::CoupReceivedTime>())
	,coup_sent_time(std::make_shared<Hsrp::Ipv6::Groups::Group::CoupSentTime>())
	,resign_received_time(std::make_shared<Hsrp::Ipv6::Groups::Group::ResignReceivedTime>())
	,resign_sent_time(std::make_shared<Hsrp::Ipv6::Groups::Group::ResignSentTime>())
	,statistics(std::make_shared<Hsrp::Ipv6::Groups::Group::Statistics>())
{
    coup_received_time->parent = this;
    children["coup-received-time"] = coup_received_time;

    coup_sent_time->parent = this;
    children["coup-sent-time"] = coup_sent_time;

    resign_received_time->parent = this;
    children["resign-received-time"] = resign_received_time;

    resign_sent_time->parent = this;
    children["resign-sent-time"] = resign_sent_time;

    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "group"; yang_parent_name = "groups";
}

Hsrp::Ipv6::Groups::Group::~Group()
{
}

bool Hsrp::Ipv6::Groups::Group::has_data() const
{
    for (std::size_t index=0; index<global_address.size(); index++)
    {
        if(global_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_data())
            return true;
    }
    for (auto const & leaf : secondary_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return group_number.is_set
	|| interface_name.is_set
	|| active_ip_address.is_set
	|| active_ipv6_address.is_set
	|| active_mac_address.is_set
	|| active_priority.is_set
	|| active_timer_flag.is_set
	|| active_timer_msecs.is_set
	|| active_timer_secs.is_set
	|| address_family.is_set
	|| authentication_string.is_set
	|| bfd_enabled.is_set
	|| bfd_interface.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| bfd_peer_ip_address.is_set
	|| bfd_peer_ipv6_address.is_set
	|| bfd_session_state.is_set
	|| configured_mac_address.is_set
	|| configured_priority.is_set
	|| configured_timers.is_set
	|| current_state_timer_secs.is_set
	|| delay_timer_flag.is_set
	|| delay_timer_msecs.is_set
	|| delay_timer_secs.is_set
	|| followed_session_name.is_set
	|| hello_time.is_set
	|| hello_timer_flag.is_set
	|| hello_timer_msecs.is_set
	|| hello_timer_secs.is_set
	|| hold_time.is_set
	|| hsrp_group_number.is_set
	|| hsrp_router_state.is_set
	|| interface.is_set
	|| interface_name_xr.is_set
	|| is_slave.is_set
	|| learned_hello_time.is_set
	|| learned_hold_time.is_set
	|| min_delay_time.is_set
	|| preempt_delay.is_set
	|| preempt_enabled.is_set
	|| preempt_timer_secs.is_set
	|| redirects_disabled.is_set
	|| reload_delay_time.is_set
	|| router_priority.is_set
	|| session_name.is_set
	|| slaves.is_set
	|| standby_ip_address.is_set
	|| standby_ipv6_address.is_set
	|| standby_mac_address.is_set
	|| standby_timer_flag.is_set
	|| standby_timer_msecs.is_set
	|| standby_timer_secs.is_set
	|| state_change_count.is_set
	|| tracked_interface_count.is_set
	|| tracked_interface_up_count.is_set
	|| use_bia_configured.is_set
	|| use_configured_timers.is_set
	|| use_configured_virtual_ip.is_set
	|| version.is_set
	|| virtual_ip_address.is_set
	|| virtual_linklocal_ipv6_address.is_set
	|| virtual_mac_address.is_set
	|| virtual_mac_address_state.is_set
	|| (coup_received_time !=  nullptr && coup_received_time->has_data())
	|| (coup_sent_time !=  nullptr && coup_sent_time->has_data())
	|| (resign_received_time !=  nullptr && resign_received_time->has_data())
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Hsrp::Ipv6::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<global_address.size(); index++)
    {
        if(global_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.size(); index++)
    {
        if(state_change_history[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secondary_address.getYLeafs())
    {
        if(is_set(leaf.operation))
            return true;
    }
    return is_set(operation)
	|| is_set(group_number.operation)
	|| is_set(interface_name.operation)
	|| is_set(active_ip_address.operation)
	|| is_set(active_ipv6_address.operation)
	|| is_set(active_mac_address.operation)
	|| is_set(active_priority.operation)
	|| is_set(active_timer_flag.operation)
	|| is_set(active_timer_msecs.operation)
	|| is_set(active_timer_secs.operation)
	|| is_set(address_family.operation)
	|| is_set(authentication_string.operation)
	|| is_set(bfd_enabled.operation)
	|| is_set(bfd_interface.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(bfd_peer_ip_address.operation)
	|| is_set(bfd_peer_ipv6_address.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(configured_mac_address.operation)
	|| is_set(configured_priority.operation)
	|| is_set(configured_timers.operation)
	|| is_set(current_state_timer_secs.operation)
	|| is_set(delay_timer_flag.operation)
	|| is_set(delay_timer_msecs.operation)
	|| is_set(delay_timer_secs.operation)
	|| is_set(followed_session_name.operation)
	|| is_set(hello_time.operation)
	|| is_set(hello_timer_flag.operation)
	|| is_set(hello_timer_msecs.operation)
	|| is_set(hello_timer_secs.operation)
	|| is_set(hold_time.operation)
	|| is_set(hsrp_group_number.operation)
	|| is_set(hsrp_router_state.operation)
	|| is_set(interface.operation)
	|| is_set(interface_name_xr.operation)
	|| is_set(is_slave.operation)
	|| is_set(learned_hello_time.operation)
	|| is_set(learned_hold_time.operation)
	|| is_set(min_delay_time.operation)
	|| is_set(preempt_delay.operation)
	|| is_set(preempt_enabled.operation)
	|| is_set(preempt_timer_secs.operation)
	|| is_set(redirects_disabled.operation)
	|| is_set(reload_delay_time.operation)
	|| is_set(router_priority.operation)
	|| is_set(secondary_address.operation)
	|| is_set(session_name.operation)
	|| is_set(slaves.operation)
	|| is_set(standby_ip_address.operation)
	|| is_set(standby_ipv6_address.operation)
	|| is_set(standby_mac_address.operation)
	|| is_set(standby_timer_flag.operation)
	|| is_set(standby_timer_msecs.operation)
	|| is_set(standby_timer_secs.operation)
	|| is_set(state_change_count.operation)
	|| is_set(tracked_interface_count.operation)
	|| is_set(tracked_interface_up_count.operation)
	|| is_set(use_bia_configured.operation)
	|| is_set(use_configured_timers.operation)
	|| is_set(use_configured_virtual_ip.operation)
	|| is_set(version.operation)
	|| is_set(virtual_ip_address.operation)
	|| is_set(virtual_linklocal_ipv6_address.operation)
	|| is_set(virtual_mac_address.operation)
	|| is_set(virtual_mac_address_state.operation)
	|| (coup_received_time !=  nullptr && coup_received_time->has_operation())
	|| (coup_sent_time !=  nullptr && coup_sent_time->has_operation())
	|| (resign_received_time !=  nullptr && resign_received_time->has_operation())
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Hsrp::Ipv6::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group" <<"[group-number='" <<group_number <<"']" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/groups/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (group_number.is_set || is_set(group_number.operation)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (active_ip_address.is_set || is_set(active_ip_address.operation)) leaf_name_data.push_back(active_ip_address.get_name_leafdata());
    if (active_ipv6_address.is_set || is_set(active_ipv6_address.operation)) leaf_name_data.push_back(active_ipv6_address.get_name_leafdata());
    if (active_mac_address.is_set || is_set(active_mac_address.operation)) leaf_name_data.push_back(active_mac_address.get_name_leafdata());
    if (active_priority.is_set || is_set(active_priority.operation)) leaf_name_data.push_back(active_priority.get_name_leafdata());
    if (active_timer_flag.is_set || is_set(active_timer_flag.operation)) leaf_name_data.push_back(active_timer_flag.get_name_leafdata());
    if (active_timer_msecs.is_set || is_set(active_timer_msecs.operation)) leaf_name_data.push_back(active_timer_msecs.get_name_leafdata());
    if (active_timer_secs.is_set || is_set(active_timer_secs.operation)) leaf_name_data.push_back(active_timer_secs.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.operation)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (authentication_string.is_set || is_set(authentication_string.operation)) leaf_name_data.push_back(authentication_string.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.operation)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interface.is_set || is_set(bfd_interface.operation)) leaf_name_data.push_back(bfd_interface.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_peer_ip_address.is_set || is_set(bfd_peer_ip_address.operation)) leaf_name_data.push_back(bfd_peer_ip_address.get_name_leafdata());
    if (bfd_peer_ipv6_address.is_set || is_set(bfd_peer_ipv6_address.operation)) leaf_name_data.push_back(bfd_peer_ipv6_address.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (configured_mac_address.is_set || is_set(configured_mac_address.operation)) leaf_name_data.push_back(configured_mac_address.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.operation)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (configured_timers.is_set || is_set(configured_timers.operation)) leaf_name_data.push_back(configured_timers.get_name_leafdata());
    if (current_state_timer_secs.is_set || is_set(current_state_timer_secs.operation)) leaf_name_data.push_back(current_state_timer_secs.get_name_leafdata());
    if (delay_timer_flag.is_set || is_set(delay_timer_flag.operation)) leaf_name_data.push_back(delay_timer_flag.get_name_leafdata());
    if (delay_timer_msecs.is_set || is_set(delay_timer_msecs.operation)) leaf_name_data.push_back(delay_timer_msecs.get_name_leafdata());
    if (delay_timer_secs.is_set || is_set(delay_timer_secs.operation)) leaf_name_data.push_back(delay_timer_secs.get_name_leafdata());
    if (followed_session_name.is_set || is_set(followed_session_name.operation)) leaf_name_data.push_back(followed_session_name.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.operation)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (hello_timer_flag.is_set || is_set(hello_timer_flag.operation)) leaf_name_data.push_back(hello_timer_flag.get_name_leafdata());
    if (hello_timer_msecs.is_set || is_set(hello_timer_msecs.operation)) leaf_name_data.push_back(hello_timer_msecs.get_name_leafdata());
    if (hello_timer_secs.is_set || is_set(hello_timer_secs.operation)) leaf_name_data.push_back(hello_timer_secs.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.operation)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.operation)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (hsrp_router_state.is_set || is_set(hsrp_router_state.operation)) leaf_name_data.push_back(hsrp_router_state.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.operation)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (is_slave.is_set || is_set(is_slave.operation)) leaf_name_data.push_back(is_slave.get_name_leafdata());
    if (learned_hello_time.is_set || is_set(learned_hello_time.operation)) leaf_name_data.push_back(learned_hello_time.get_name_leafdata());
    if (learned_hold_time.is_set || is_set(learned_hold_time.operation)) leaf_name_data.push_back(learned_hold_time.get_name_leafdata());
    if (min_delay_time.is_set || is_set(min_delay_time.operation)) leaf_name_data.push_back(min_delay_time.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.operation)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (preempt_enabled.is_set || is_set(preempt_enabled.operation)) leaf_name_data.push_back(preempt_enabled.get_name_leafdata());
    if (preempt_timer_secs.is_set || is_set(preempt_timer_secs.operation)) leaf_name_data.push_back(preempt_timer_secs.get_name_leafdata());
    if (redirects_disabled.is_set || is_set(redirects_disabled.operation)) leaf_name_data.push_back(redirects_disabled.get_name_leafdata());
    if (reload_delay_time.is_set || is_set(reload_delay_time.operation)) leaf_name_data.push_back(reload_delay_time.get_name_leafdata());
    if (router_priority.is_set || is_set(router_priority.operation)) leaf_name_data.push_back(router_priority.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.operation)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (slaves.is_set || is_set(slaves.operation)) leaf_name_data.push_back(slaves.get_name_leafdata());
    if (standby_ip_address.is_set || is_set(standby_ip_address.operation)) leaf_name_data.push_back(standby_ip_address.get_name_leafdata());
    if (standby_ipv6_address.is_set || is_set(standby_ipv6_address.operation)) leaf_name_data.push_back(standby_ipv6_address.get_name_leafdata());
    if (standby_mac_address.is_set || is_set(standby_mac_address.operation)) leaf_name_data.push_back(standby_mac_address.get_name_leafdata());
    if (standby_timer_flag.is_set || is_set(standby_timer_flag.operation)) leaf_name_data.push_back(standby_timer_flag.get_name_leafdata());
    if (standby_timer_msecs.is_set || is_set(standby_timer_msecs.operation)) leaf_name_data.push_back(standby_timer_msecs.get_name_leafdata());
    if (standby_timer_secs.is_set || is_set(standby_timer_secs.operation)) leaf_name_data.push_back(standby_timer_secs.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.operation)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (tracked_interface_count.is_set || is_set(tracked_interface_count.operation)) leaf_name_data.push_back(tracked_interface_count.get_name_leafdata());
    if (tracked_interface_up_count.is_set || is_set(tracked_interface_up_count.operation)) leaf_name_data.push_back(tracked_interface_up_count.get_name_leafdata());
    if (use_bia_configured.is_set || is_set(use_bia_configured.operation)) leaf_name_data.push_back(use_bia_configured.get_name_leafdata());
    if (use_configured_timers.is_set || is_set(use_configured_timers.operation)) leaf_name_data.push_back(use_configured_timers.get_name_leafdata());
    if (use_configured_virtual_ip.is_set || is_set(use_configured_virtual_ip.operation)) leaf_name_data.push_back(use_configured_virtual_ip.get_name_leafdata());
    if (version.is_set || is_set(version.operation)) leaf_name_data.push_back(version.get_name_leafdata());
    if (virtual_ip_address.is_set || is_set(virtual_ip_address.operation)) leaf_name_data.push_back(virtual_ip_address.get_name_leafdata());
    if (virtual_linklocal_ipv6_address.is_set || is_set(virtual_linklocal_ipv6_address.operation)) leaf_name_data.push_back(virtual_linklocal_ipv6_address.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.operation)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (virtual_mac_address_state.is_set || is_set(virtual_mac_address_state.operation)) leaf_name_data.push_back(virtual_mac_address_state.get_name_leafdata());

    auto secondary_address_name_datas = secondary_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_address_name_datas.begin(), secondary_address_name_datas.end());

    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "coup-received-time")
    {
        if(coup_received_time != nullptr)
        {
            children["coup-received-time"] = coup_received_time;
        }
        else
        {
            coup_received_time = std::make_shared<Hsrp::Ipv6::Groups::Group::CoupReceivedTime>();
            coup_received_time->parent = this;
            children["coup-received-time"] = coup_received_time;
        }
        return children.at("coup-received-time");
    }

    if(child_yang_name == "coup-sent-time")
    {
        if(coup_sent_time != nullptr)
        {
            children["coup-sent-time"] = coup_sent_time;
        }
        else
        {
            coup_sent_time = std::make_shared<Hsrp::Ipv6::Groups::Group::CoupSentTime>();
            coup_sent_time->parent = this;
            children["coup-sent-time"] = coup_sent_time;
        }
        return children.at("coup-sent-time");
    }

    if(child_yang_name == "global-address")
    {
        for(auto const & c : global_address)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv6::Groups::Group::GlobalAddress>();
        c->parent = this;
        global_address.push_back(std::move(c));
        children[segment_path] = global_address.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "resign-received-time")
    {
        if(resign_received_time != nullptr)
        {
            children["resign-received-time"] = resign_received_time;
        }
        else
        {
            resign_received_time = std::make_shared<Hsrp::Ipv6::Groups::Group::ResignReceivedTime>();
            resign_received_time->parent = this;
            children["resign-received-time"] = resign_received_time;
        }
        return children.at("resign-received-time");
    }

    if(child_yang_name == "resign-sent-time")
    {
        if(resign_sent_time != nullptr)
        {
            children["resign-sent-time"] = resign_sent_time;
        }
        else
        {
            resign_sent_time = std::make_shared<Hsrp::Ipv6::Groups::Group::ResignSentTime>();
            resign_sent_time->parent = this;
            children["resign-sent-time"] = resign_sent_time;
        }
        return children.at("resign-sent-time");
    }

    if(child_yang_name == "state-change-history")
    {
        for(auto const & c : state_change_history)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv6::Groups::Group::StateChangeHistory>();
        c->parent = this;
        state_change_history.push_back(std::move(c));
        children[segment_path] = state_change_history.back();
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Hsrp::Ipv6::Groups::Group::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::get_children()
{
    if(children.find("coup-received-time") == children.end())
    {
        if(coup_received_time != nullptr)
        {
            children["coup-received-time"] = coup_received_time;
        }
    }

    if(children.find("coup-sent-time") == children.end())
    {
        if(coup_sent_time != nullptr)
        {
            children["coup-sent-time"] = coup_sent_time;
        }
    }

    for (auto const & c : global_address)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("resign-received-time") == children.end())
    {
        if(resign_received_time != nullptr)
        {
            children["resign-received-time"] = resign_received_time;
        }
    }

    if(children.find("resign-sent-time") == children.end())
    {
        if(resign_sent_time != nullptr)
        {
            children["resign-sent-time"] = resign_sent_time;
        }
    }

    for (auto const & c : state_change_history)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void Hsrp::Ipv6::Groups::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "group-number")
    {
        group_number = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "active-ip-address")
    {
        active_ip_address = value;
    }
    if(value_path == "active-ipv6-address")
    {
        active_ipv6_address = value;
    }
    if(value_path == "active-mac-address")
    {
        active_mac_address = value;
    }
    if(value_path == "active-priority")
    {
        active_priority = value;
    }
    if(value_path == "active-timer-flag")
    {
        active_timer_flag = value;
    }
    if(value_path == "active-timer-msecs")
    {
        active_timer_msecs = value;
    }
    if(value_path == "active-timer-secs")
    {
        active_timer_secs = value;
    }
    if(value_path == "address-family")
    {
        address_family = value;
    }
    if(value_path == "authentication-string")
    {
        authentication_string = value;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
    }
    if(value_path == "bfd-interface")
    {
        bfd_interface = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "bfd-peer-ip-address")
    {
        bfd_peer_ip_address = value;
    }
    if(value_path == "bfd-peer-ipv6-address")
    {
        bfd_peer_ipv6_address = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "configured-mac-address")
    {
        configured_mac_address = value;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
    }
    if(value_path == "configured-timers")
    {
        configured_timers = value;
    }
    if(value_path == "current-state-timer-secs")
    {
        current_state_timer_secs = value;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag = value;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs = value;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs = value;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name = value;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
    }
    if(value_path == "hello-timer-flag")
    {
        hello_timer_flag = value;
    }
    if(value_path == "hello-timer-msecs")
    {
        hello_timer_msecs = value;
    }
    if(value_path == "hello-timer-secs")
    {
        hello_timer_secs = value;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
    }
    if(value_path == "hsrp-router-state")
    {
        hsrp_router_state = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
    }
    if(value_path == "is-slave")
    {
        is_slave = value;
    }
    if(value_path == "learned-hello-time")
    {
        learned_hello_time = value;
    }
    if(value_path == "learned-hold-time")
    {
        learned_hold_time = value;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time = value;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
    }
    if(value_path == "preempt-enabled")
    {
        preempt_enabled = value;
    }
    if(value_path == "preempt-timer-secs")
    {
        preempt_timer_secs = value;
    }
    if(value_path == "redirects-disabled")
    {
        redirects_disabled = value;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time = value;
    }
    if(value_path == "router-priority")
    {
        router_priority = value;
    }
    if(value_path == "secondary-address")
    {
        secondary_address.append(value);
    }
    if(value_path == "session-name")
    {
        session_name = value;
    }
    if(value_path == "slaves")
    {
        slaves = value;
    }
    if(value_path == "standby-ip-address")
    {
        standby_ip_address = value;
    }
    if(value_path == "standby-ipv6-address")
    {
        standby_ipv6_address = value;
    }
    if(value_path == "standby-mac-address")
    {
        standby_mac_address = value;
    }
    if(value_path == "standby-timer-flag")
    {
        standby_timer_flag = value;
    }
    if(value_path == "standby-timer-msecs")
    {
        standby_timer_msecs = value;
    }
    if(value_path == "standby-timer-secs")
    {
        standby_timer_secs = value;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count = value;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count = value;
    }
    if(value_path == "use-bia-configured")
    {
        use_bia_configured = value;
    }
    if(value_path == "use-configured-timers")
    {
        use_configured_timers = value;
    }
    if(value_path == "use-configured-virtual-ip")
    {
        use_configured_virtual_ip = value;
    }
    if(value_path == "version")
    {
        version = value;
    }
    if(value_path == "virtual-ip-address")
    {
        virtual_ip_address = value;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address = value;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state = value;
    }
}

Hsrp::Ipv6::Groups::Group::ResignSentTime::ResignSentTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "resign-sent-time"; yang_parent_name = "group";
}

Hsrp::Ipv6::Groups::Group::ResignSentTime::~ResignSentTime()
{
}

bool Hsrp::Ipv6::Groups::Group::ResignSentTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::ResignSentTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv6::Groups::Group::ResignSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-sent-time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::ResignSentTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResignSentTime' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::ResignSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::ResignSentTime::get_children()
{
    return children;
}

void Hsrp::Ipv6::Groups::Group::ResignSentTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv6::Groups::Group::ResignReceivedTime::ResignReceivedTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "resign-received-time"; yang_parent_name = "group";
}

Hsrp::Ipv6::Groups::Group::ResignReceivedTime::~ResignReceivedTime()
{
}

bool Hsrp::Ipv6::Groups::Group::ResignReceivedTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::ResignReceivedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv6::Groups::Group::ResignReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-received-time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::ResignReceivedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'ResignReceivedTime' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::ResignReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::ResignReceivedTime::get_children()
{
    return children;
}

void Hsrp::Ipv6::Groups::Group::ResignReceivedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv6::Groups::Group::CoupSentTime::CoupSentTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "coup-sent-time"; yang_parent_name = "group";
}

Hsrp::Ipv6::Groups::Group::CoupSentTime::~CoupSentTime()
{
}

bool Hsrp::Ipv6::Groups::Group::CoupSentTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::CoupSentTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv6::Groups::Group::CoupSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coup-sent-time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::CoupSentTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CoupSentTime' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::CoupSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::CoupSentTime::get_children()
{
    return children;
}

void Hsrp::Ipv6::Groups::Group::CoupSentTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv6::Groups::Group::CoupReceivedTime::CoupReceivedTime()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "coup-received-time"; yang_parent_name = "group";
}

Hsrp::Ipv6::Groups::Group::CoupReceivedTime::~CoupReceivedTime()
{
}

bool Hsrp::Ipv6::Groups::Group::CoupReceivedTime::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::CoupReceivedTime::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv6::Groups::Group::CoupReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coup-received-time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::CoupReceivedTime::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'CoupReceivedTime' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::CoupReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::CoupReceivedTime::get_children()
{
    return children;
}

void Hsrp::Ipv6::Groups::Group::CoupReceivedTime::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv6::Groups::Group::Statistics::Statistics()
    :
    active_transitions{YType::uint32, "active-transitions"},
    auth_fail_received{YType::uint32, "auth-fail-received"},
    coup_packets_received{YType::uint32, "coup-packets-received"},
    coup_packets_sent{YType::uint32, "coup-packets-sent"},
    hello_packets_received{YType::uint32, "hello-packets-received"},
    hello_packets_sent{YType::uint32, "hello-packets-sent"},
    init_transitions{YType::uint32, "init-transitions"},
    invalid_timer_received{YType::uint32, "invalid-timer-received"},
    learn_transitions{YType::uint32, "learn-transitions"},
    listen_transitions{YType::uint32, "listen-transitions"},
    mismatch_virtual_ip_address_received{YType::uint32, "mismatch-virtual-ip-address-received"},
    resign_packets_received{YType::uint32, "resign-packets-received"},
    resign_packets_sent{YType::uint32, "resign-packets-sent"},
    speak_transitions{YType::uint32, "speak-transitions"},
    standby_transitions{YType::uint32, "standby-transitions"}
{
    yang_name = "statistics"; yang_parent_name = "group";
}

Hsrp::Ipv6::Groups::Group::Statistics::~Statistics()
{
}

bool Hsrp::Ipv6::Groups::Group::Statistics::has_data() const
{
    return active_transitions.is_set
	|| auth_fail_received.is_set
	|| coup_packets_received.is_set
	|| coup_packets_sent.is_set
	|| hello_packets_received.is_set
	|| hello_packets_sent.is_set
	|| init_transitions.is_set
	|| invalid_timer_received.is_set
	|| learn_transitions.is_set
	|| listen_transitions.is_set
	|| mismatch_virtual_ip_address_received.is_set
	|| resign_packets_received.is_set
	|| resign_packets_sent.is_set
	|| speak_transitions.is_set
	|| standby_transitions.is_set;
}

bool Hsrp::Ipv6::Groups::Group::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(active_transitions.operation)
	|| is_set(auth_fail_received.operation)
	|| is_set(coup_packets_received.operation)
	|| is_set(coup_packets_sent.operation)
	|| is_set(hello_packets_received.operation)
	|| is_set(hello_packets_sent.operation)
	|| is_set(init_transitions.operation)
	|| is_set(invalid_timer_received.operation)
	|| is_set(learn_transitions.operation)
	|| is_set(listen_transitions.operation)
	|| is_set(mismatch_virtual_ip_address_received.operation)
	|| is_set(resign_packets_received.operation)
	|| is_set(resign_packets_sent.operation)
	|| is_set(speak_transitions.operation)
	|| is_set(standby_transitions.operation);
}

std::string Hsrp::Ipv6::Groups::Group::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_transitions.is_set || is_set(active_transitions.operation)) leaf_name_data.push_back(active_transitions.get_name_leafdata());
    if (auth_fail_received.is_set || is_set(auth_fail_received.operation)) leaf_name_data.push_back(auth_fail_received.get_name_leafdata());
    if (coup_packets_received.is_set || is_set(coup_packets_received.operation)) leaf_name_data.push_back(coup_packets_received.get_name_leafdata());
    if (coup_packets_sent.is_set || is_set(coup_packets_sent.operation)) leaf_name_data.push_back(coup_packets_sent.get_name_leafdata());
    if (hello_packets_received.is_set || is_set(hello_packets_received.operation)) leaf_name_data.push_back(hello_packets_received.get_name_leafdata());
    if (hello_packets_sent.is_set || is_set(hello_packets_sent.operation)) leaf_name_data.push_back(hello_packets_sent.get_name_leafdata());
    if (init_transitions.is_set || is_set(init_transitions.operation)) leaf_name_data.push_back(init_transitions.get_name_leafdata());
    if (invalid_timer_received.is_set || is_set(invalid_timer_received.operation)) leaf_name_data.push_back(invalid_timer_received.get_name_leafdata());
    if (learn_transitions.is_set || is_set(learn_transitions.operation)) leaf_name_data.push_back(learn_transitions.get_name_leafdata());
    if (listen_transitions.is_set || is_set(listen_transitions.operation)) leaf_name_data.push_back(listen_transitions.get_name_leafdata());
    if (mismatch_virtual_ip_address_received.is_set || is_set(mismatch_virtual_ip_address_received.operation)) leaf_name_data.push_back(mismatch_virtual_ip_address_received.get_name_leafdata());
    if (resign_packets_received.is_set || is_set(resign_packets_received.operation)) leaf_name_data.push_back(resign_packets_received.get_name_leafdata());
    if (resign_packets_sent.is_set || is_set(resign_packets_sent.operation)) leaf_name_data.push_back(resign_packets_sent.get_name_leafdata());
    if (speak_transitions.is_set || is_set(speak_transitions.operation)) leaf_name_data.push_back(speak_transitions.get_name_leafdata());
    if (standby_transitions.is_set || is_set(standby_transitions.operation)) leaf_name_data.push_back(standby_transitions.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::Statistics::get_children()
{
    return children;
}

void Hsrp::Ipv6::Groups::Group::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "active-transitions")
    {
        active_transitions = value;
    }
    if(value_path == "auth-fail-received")
    {
        auth_fail_received = value;
    }
    if(value_path == "coup-packets-received")
    {
        coup_packets_received = value;
    }
    if(value_path == "coup-packets-sent")
    {
        coup_packets_sent = value;
    }
    if(value_path == "hello-packets-received")
    {
        hello_packets_received = value;
    }
    if(value_path == "hello-packets-sent")
    {
        hello_packets_sent = value;
    }
    if(value_path == "init-transitions")
    {
        init_transitions = value;
    }
    if(value_path == "invalid-timer-received")
    {
        invalid_timer_received = value;
    }
    if(value_path == "learn-transitions")
    {
        learn_transitions = value;
    }
    if(value_path == "listen-transitions")
    {
        listen_transitions = value;
    }
    if(value_path == "mismatch-virtual-ip-address-received")
    {
        mismatch_virtual_ip_address_received = value;
    }
    if(value_path == "resign-packets-received")
    {
        resign_packets_received = value;
    }
    if(value_path == "resign-packets-sent")
    {
        resign_packets_sent = value;
    }
    if(value_path == "speak-transitions")
    {
        speak_transitions = value;
    }
    if(value_path == "standby-transitions")
    {
        standby_transitions = value;
    }
}

Hsrp::Ipv6::Groups::Group::GlobalAddress::GlobalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{
    yang_name = "global-address"; yang_parent_name = "group";
}

Hsrp::Ipv6::Groups::Group::GlobalAddress::~GlobalAddress()
{
}

bool Hsrp::Ipv6::Groups::Group::GlobalAddress::has_data() const
{
    return ipv6_address.is_set;
}

bool Hsrp::Ipv6::Groups::Group::GlobalAddress::has_operation() const
{
    return is_set(operation)
	|| is_set(ipv6_address.operation);
}

std::string Hsrp::Ipv6::Groups::Group::GlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-address";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::GlobalAddress::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'GlobalAddress' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.operation)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::GlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::GlobalAddress::get_children()
{
    return children;
}

void Hsrp::Ipv6::Groups::Group::GlobalAddress::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
    }
}

Hsrp::Ipv6::Groups::Group::StateChangeHistory::StateChangeHistory()
    :
    new_state{YType::enumeration, "new-state"},
    old_state{YType::enumeration, "old-state"},
    reason{YType::enumeration, "reason"}
    	,
    time(std::make_shared<Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time>())
{
    time->parent = this;
    children["time"] = time;

    yang_name = "state-change-history"; yang_parent_name = "group";
}

Hsrp::Ipv6::Groups::Group::StateChangeHistory::~StateChangeHistory()
{
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::has_data() const
{
    return new_state.is_set
	|| old_state.is_set
	|| reason.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::has_operation() const
{
    return is_set(operation)
	|| is_set(new_state.operation)
	|| is_set(old_state.operation)
	|| is_set(reason.operation)
	|| (time !=  nullptr && time->has_operation());
}

std::string Hsrp::Ipv6::Groups::Group::StateChangeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change-history";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::StateChangeHistory::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'StateChangeHistory' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (new_state.is_set || is_set(new_state.operation)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (old_state.is_set || is_set(old_state.operation)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (reason.is_set || is_set(reason.operation)) leaf_name_data.push_back(reason.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::StateChangeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "time")
    {
        if(time != nullptr)
        {
            children["time"] = time;
        }
        else
        {
            time = std::make_shared<Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time>();
            time->parent = this;
            children["time"] = time;
        }
        return children.at("time");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::StateChangeHistory::get_children()
{
    if(children.find("time") == children.end())
    {
        if(time != nullptr)
        {
            children["time"] = time;
        }
    }

    return children;
}

void Hsrp::Ipv6::Groups::Group::StateChangeHistory::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "new-state")
    {
        new_state = value;
    }
    if(value_path == "old-state")
    {
        old_state = value;
    }
    if(value_path == "reason")
    {
        reason = value;
    }
}

Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::Time()
    :
    nanoseconds{YType::uint32, "nanoseconds"},
    seconds{YType::uint32, "seconds"}
{
    yang_name = "time"; yang_parent_name = "state-change-history";
}

Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::~Time()
{
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::has_data() const
{
    return nanoseconds.is_set
	|| seconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::has_operation() const
{
    return is_set(operation)
	|| is_set(nanoseconds.operation)
	|| is_set(seconds.operation);
}

std::string Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Time' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nanoseconds.is_set || is_set(nanoseconds.operation)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());
    if (seconds.is_set || is_set(seconds.operation)) leaf_name_data.push_back(seconds.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::get_children()
{
    return children;
}

void Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
    }
    if(value_path == "seconds")
    {
        seconds = value;
    }
}

Hsrp::Ipv6::Interfaces::Interfaces()
{
    yang_name = "interfaces"; yang_parent_name = "ipv6";
}

Hsrp::Ipv6::Interfaces::~Interfaces()
{
}

bool Hsrp::Ipv6::Interfaces::has_data() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.size(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Interfaces::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "interface")
    {
        for(auto const & c : interface)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::Ipv6::Interfaces::Interface>();
        c->parent = this;
        interface.push_back(std::move(c));
        children[segment_path] = interface.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Interfaces::get_children()
{
    for (auto const & c : interface)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::Ipv6::Interfaces::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::Ipv6::Interfaces::Interface::Interface()
    :
    interface_name{YType::str, "interface-name"},
    interface{YType::str, "interface"},
    use_bia_flag{YType::boolean, "use-bia-flag"}
    	,
    statistics(std::make_shared<Hsrp::Ipv6::Interfaces::Interface::Statistics>())
{
    statistics->parent = this;
    children["statistics"] = statistics;

    yang_name = "interface"; yang_parent_name = "interfaces";
}

Hsrp::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Hsrp::Ipv6::Interfaces::Interface::has_data() const
{
    return interface_name.is_set
	|| interface.is_set
	|| use_bia_flag.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Hsrp::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(interface.operation)
	|| is_set(use_bia_flag.operation)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Hsrp::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface" <<"[interface-name='" <<interface_name <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Interfaces::Interface::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/interfaces/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.operation)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (use_bia_flag.is_set || is_set(use_bia_flag.operation)) leaf_name_data.push_back(use_bia_flag.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "statistics")
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
        else
        {
            statistics = std::make_shared<Hsrp::Ipv6::Interfaces::Interface::Statistics>();
            statistics->parent = this;
            children["statistics"] = statistics;
        }
        return children.at("statistics");
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Interfaces::Interface::get_children()
{
    if(children.find("statistics") == children.end())
    {
        if(statistics != nullptr)
        {
            children["statistics"] = statistics;
        }
    }

    return children;
}

void Hsrp::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "interface")
    {
        interface = value;
    }
    if(value_path == "use-bia-flag")
    {
        use_bia_flag = value;
    }
}

Hsrp::Ipv6::Interfaces::Interface::Statistics::Statistics()
    :
    advert_packets_received{YType::uint32, "advert-packets-received"},
    advert_packets_sent{YType::uint32, "advert-packets-sent"},
    conflict_source_ip_address_received{YType::uint32, "conflict-source-ip-address-received"},
    inoperational_group_received{YType::uint32, "inoperational-group-received"},
    invalid_operation_code_received{YType::uint32, "invalid-operation-code-received"},
    invalid_version_received{YType::uint32, "invalid-version-received"},
    long_packets_received{YType::uint32, "long-packets-received"},
    short_packets_received{YType::uint32, "short-packets-received"},
    unknown_group_received{YType::uint32, "unknown-group-received"}
{
    yang_name = "statistics"; yang_parent_name = "interface";
}

Hsrp::Ipv6::Interfaces::Interface::Statistics::~Statistics()
{
}

bool Hsrp::Ipv6::Interfaces::Interface::Statistics::has_data() const
{
    return advert_packets_received.is_set
	|| advert_packets_sent.is_set
	|| conflict_source_ip_address_received.is_set
	|| inoperational_group_received.is_set
	|| invalid_operation_code_received.is_set
	|| invalid_version_received.is_set
	|| long_packets_received.is_set
	|| short_packets_received.is_set
	|| unknown_group_received.is_set;
}

bool Hsrp::Ipv6::Interfaces::Interface::Statistics::has_operation() const
{
    return is_set(operation)
	|| is_set(advert_packets_received.operation)
	|| is_set(advert_packets_sent.operation)
	|| is_set(conflict_source_ip_address_received.operation)
	|| is_set(inoperational_group_received.operation)
	|| is_set(invalid_operation_code_received.operation)
	|| is_set(invalid_version_received.operation)
	|| is_set(long_packets_received.operation)
	|| is_set(short_packets_received.operation)
	|| is_set(unknown_group_received.operation);
}

std::string Hsrp::Ipv6::Interfaces::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";

    return path_buffer.str();

}

EntityPath Hsrp::Ipv6::Interfaces::Interface::Statistics::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Statistics' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advert_packets_received.is_set || is_set(advert_packets_received.operation)) leaf_name_data.push_back(advert_packets_received.get_name_leafdata());
    if (advert_packets_sent.is_set || is_set(advert_packets_sent.operation)) leaf_name_data.push_back(advert_packets_sent.get_name_leafdata());
    if (conflict_source_ip_address_received.is_set || is_set(conflict_source_ip_address_received.operation)) leaf_name_data.push_back(conflict_source_ip_address_received.get_name_leafdata());
    if (inoperational_group_received.is_set || is_set(inoperational_group_received.operation)) leaf_name_data.push_back(inoperational_group_received.get_name_leafdata());
    if (invalid_operation_code_received.is_set || is_set(invalid_operation_code_received.operation)) leaf_name_data.push_back(invalid_operation_code_received.get_name_leafdata());
    if (invalid_version_received.is_set || is_set(invalid_version_received.operation)) leaf_name_data.push_back(invalid_version_received.get_name_leafdata());
    if (long_packets_received.is_set || is_set(long_packets_received.operation)) leaf_name_data.push_back(long_packets_received.get_name_leafdata());
    if (short_packets_received.is_set || is_set(short_packets_received.operation)) leaf_name_data.push_back(short_packets_received.get_name_leafdata());
    if (unknown_group_received.is_set || is_set(unknown_group_received.operation)) leaf_name_data.push_back(unknown_group_received.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Ipv6::Interfaces::Interface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Ipv6::Interfaces::Interface::Statistics::get_children()
{
    return children;
}

void Hsrp::Ipv6::Interfaces::Interface::Statistics::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "advert-packets-received")
    {
        advert_packets_received = value;
    }
    if(value_path == "advert-packets-sent")
    {
        advert_packets_sent = value;
    }
    if(value_path == "conflict-source-ip-address-received")
    {
        conflict_source_ip_address_received = value;
    }
    if(value_path == "inoperational-group-received")
    {
        inoperational_group_received = value;
    }
    if(value_path == "invalid-operation-code-received")
    {
        invalid_operation_code_received = value;
    }
    if(value_path == "invalid-version-received")
    {
        invalid_version_received = value;
    }
    if(value_path == "long-packets-received")
    {
        long_packets_received = value;
    }
    if(value_path == "short-packets-received")
    {
        short_packets_received = value;
    }
    if(value_path == "unknown-group-received")
    {
        unknown_group_received = value;
    }
}

Hsrp::BfdSessions::BfdSessions()
{
    yang_name = "bfd-sessions"; yang_parent_name = "hsrp";
}

Hsrp::BfdSessions::~BfdSessions()
{
}

bool Hsrp::BfdSessions::has_data() const
{
    for (std::size_t index=0; index<bfd_session.size(); index++)
    {
        if(bfd_session[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::BfdSessions::has_operation() const
{
    for (std::size_t index=0; index<bfd_session.size(); index++)
    {
        if(bfd_session[index]->has_operation())
            return true;
    }
    return is_set(operation);
}

std::string Hsrp::BfdSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-sessions";

    return path_buffer.str();

}

EntityPath Hsrp::BfdSessions::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};



    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::BfdSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "bfd-session")
    {
        for(auto const & c : bfd_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::BfdSessions::BfdSession>();
        c->parent = this;
        bfd_session.push_back(std::move(c));
        children[segment_path] = bfd_session.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::BfdSessions::get_children()
{
    for (auto const & c : bfd_session)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::BfdSessions::set_value(const std::string & value_path, std::string value)
{
}

Hsrp::BfdSessions::BfdSession::BfdSession()
    :
    interface_name{YType::str, "interface-name"},
    ip_address{YType::str, "ip-address"},
    bfd_interface_name{YType::str, "bfd-interface-name"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    destination_address{YType::str, "destination-address"},
    destination_ipv6_address{YType::str, "destination-ipv6-address"},
    session_address_family{YType::enumeration, "session-address-family"}
{
    yang_name = "bfd-session"; yang_parent_name = "bfd-sessions";
}

Hsrp::BfdSessions::BfdSession::~BfdSession()
{
}

bool Hsrp::BfdSessions::BfdSession::has_data() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| ip_address.is_set
	|| bfd_interface_name.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| bfd_session_state.is_set
	|| destination_address.is_set
	|| destination_ipv6_address.is_set
	|| session_address_family.is_set;
}

bool Hsrp::BfdSessions::BfdSession::has_operation() const
{
    for (std::size_t index=0; index<group.size(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(operation)
	|| is_set(interface_name.operation)
	|| is_set(ip_address.operation)
	|| is_set(bfd_interface_name.operation)
	|| is_set(bfd_interval.operation)
	|| is_set(bfd_multiplier.operation)
	|| is_set(bfd_session_state.operation)
	|| is_set(destination_address.operation)
	|| is_set(destination_ipv6_address.operation)
	|| is_set(session_address_family.operation);
}

std::string Hsrp::BfdSessions::BfdSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-session" <<"[interface-name='" <<interface_name <<"']" <<"[ip-address='" <<ip_address <<"']";

    return path_buffer.str();

}

EntityPath Hsrp::BfdSessions::BfdSession::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/bfd-sessions/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.operation)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (bfd_interface_name.is_set || is_set(bfd_interface_name.operation)) leaf_name_data.push_back(bfd_interface_name.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.operation)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.operation)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.operation)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.operation)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_ipv6_address.is_set || is_set(destination_ipv6_address.operation)) leaf_name_data.push_back(destination_ipv6_address.get_name_leafdata());
    if (session_address_family.is_set || is_set(session_address_family.operation)) leaf_name_data.push_back(session_address_family.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::BfdSessions::BfdSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(children.find(child_yang_name) != children.end())
    {
        return children.at(child_yang_name);
    }
    else if(children.find(segment_path) != children.end())
    {
        return children.at(segment_path);
    }

    if(child_yang_name == "group")
    {
        for(auto const & c : group)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                children[segment_path] = c;
                return children.at(segment_path);
            }
        }
        auto c = std::make_shared<Hsrp::BfdSessions::BfdSession::Group>();
        c->parent = this;
        group.push_back(std::move(c));
        children[segment_path] = group.back();
        return children.at(segment_path);
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::BfdSessions::BfdSession::get_children()
{
    for (auto const & c : group)
    {
        if(children.find(c->get_segment_path()) == children.end())
        {
            children[c->get_segment_path()] = c;
        }
    }

    return children;
}

void Hsrp::BfdSessions::BfdSession::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
    }
    if(value_path == "bfd-interface-name")
    {
        bfd_interface_name = value;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
    }
    if(value_path == "destination-ipv6-address")
    {
        destination_ipv6_address = value;
    }
    if(value_path == "session-address-family")
    {
        session_address_family = value;
    }
}

Hsrp::BfdSessions::BfdSession::Group::Group()
    :
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    interface_name{YType::str, "interface-name"}
{
    yang_name = "group"; yang_parent_name = "bfd-session";
}

Hsrp::BfdSessions::BfdSession::Group::~Group()
{
}

bool Hsrp::BfdSessions::BfdSession::Group::has_data() const
{
    return hsrp_group_number.is_set
	|| interface_name.is_set;
}

bool Hsrp::BfdSessions::BfdSession::Group::has_operation() const
{
    return is_set(operation)
	|| is_set(hsrp_group_number.operation)
	|| is_set(interface_name.operation);
}

std::string Hsrp::BfdSessions::BfdSession::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";

    return path_buffer.str();

}

EntityPath Hsrp::BfdSessions::BfdSession::Group::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        throw(YCPPInvalidArgumentError{"ancestor for 'Group' in Cisco_IOS_XR_ipv4_hsrp_oper cannot be nullptr as one of the ancestors is a list"});
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (hsrp_group_number.is_set || is_set(hsrp_group_number.operation)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.operation)) leaf_name_data.push_back(interface_name.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::BfdSessions::BfdSession::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::BfdSessions::BfdSession::Group::get_children()
{
    return children;
}

void Hsrp::BfdSessions::BfdSession::Group::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
    }
}

Hsrp::Summary::Summary()
    :
    bfd_session_inactive{YType::uint32, "bfd-session-inactive"},
    bfd_sessions_down{YType::uint32, "bfd-sessions-down"},
    bfd_sessions_up{YType::uint32, "bfd-sessions-up"},
    interfaces_ipv4_state_down{YType::uint32, "interfaces-ipv4-state-down"},
    interfaces_ipv4_state_up{YType::uint32, "interfaces-ipv4-state-up"},
    interfaces_ipv6_state_down{YType::uint32, "interfaces-ipv6-state-down"},
    interfaces_ipv6_state_up{YType::uint32, "interfaces-ipv6-state-up"},
    ipv4_sessions_active{YType::uint32, "ipv4-sessions-active"},
    ipv4_sessions_init{YType::uint32, "ipv4-sessions-init"},
    ipv4_sessions_learn{YType::uint32, "ipv4-sessions-learn"},
    ipv4_sessions_listen{YType::uint32, "ipv4-sessions-listen"},
    ipv4_sessions_speak{YType::uint32, "ipv4-sessions-speak"},
    ipv4_sessions_standby{YType::uint32, "ipv4-sessions-standby"},
    ipv4_slaves_active{YType::uint32, "ipv4-slaves-active"},
    ipv4_slaves_init{YType::uint32, "ipv4-slaves-init"},
    ipv4_slaves_learn{YType::uint32, "ipv4-slaves-learn"},
    ipv4_slaves_listen{YType::uint32, "ipv4-slaves-listen"},
    ipv4_slaves_speak{YType::uint32, "ipv4-slaves-speak"},
    ipv4_slaves_standby{YType::uint32, "ipv4-slaves-standby"},
    ipv4_virtual_ip_addresses_active_down{YType::uint32, "ipv4-virtual-ip-addresses-active-down"},
    ipv4_virtual_ip_addresses_active_up{YType::uint32, "ipv4-virtual-ip-addresses-active-up"},
    ipv4_virtual_ip_addresses_init_down{YType::uint32, "ipv4-virtual-ip-addresses-init-down"},
    ipv4_virtual_ip_addresses_init_up{YType::uint32, "ipv4-virtual-ip-addresses-init-up"},
    ipv4_virtual_ip_addresses_learn_down{YType::uint32, "ipv4-virtual-ip-addresses-learn-down"},
    ipv4_virtual_ip_addresses_learn_up{YType::uint32, "ipv4-virtual-ip-addresses-learn-up"},
    ipv4_virtual_ip_addresses_listen_down{YType::uint32, "ipv4-virtual-ip-addresses-listen-down"},
    ipv4_virtual_ip_addresses_listen_up{YType::uint32, "ipv4-virtual-ip-addresses-listen-up"},
    ipv4_virtual_ip_addresses_speak_down{YType::uint32, "ipv4-virtual-ip-addresses-speak-down"},
    ipv4_virtual_ip_addresses_speak_up{YType::uint32, "ipv4-virtual-ip-addresses-speak-up"},
    ipv4_virtual_ip_addresses_standby_down{YType::uint32, "ipv4-virtual-ip-addresses-standby-down"},
    ipv4_virtual_ip_addresses_standby_up{YType::uint32, "ipv4-virtual-ip-addresses-standby-up"},
    ipv6_sessions_active{YType::uint32, "ipv6-sessions-active"},
    ipv6_sessions_init{YType::uint32, "ipv6-sessions-init"},
    ipv6_sessions_learn{YType::uint32, "ipv6-sessions-learn"},
    ipv6_sessions_listen{YType::uint32, "ipv6-sessions-listen"},
    ipv6_sessions_speak{YType::uint32, "ipv6-sessions-speak"},
    ipv6_sessions_standby{YType::uint32, "ipv6-sessions-standby"},
    ipv6_slaves_active{YType::uint32, "ipv6-slaves-active"},
    ipv6_slaves_init{YType::uint32, "ipv6-slaves-init"},
    ipv6_slaves_learn{YType::uint32, "ipv6-slaves-learn"},
    ipv6_slaves_listen{YType::uint32, "ipv6-slaves-listen"},
    ipv6_slaves_speak{YType::uint32, "ipv6-slaves-speak"},
    ipv6_slaves_standby{YType::uint32, "ipv6-slaves-standby"},
    ipv6_virtual_ip_addresses_active_down{YType::uint32, "ipv6-virtual-ip-addresses-active-down"},
    ipv6_virtual_ip_addresses_active_up{YType::uint32, "ipv6-virtual-ip-addresses-active-up"},
    ipv6_virtual_ip_addresses_init_down{YType::uint32, "ipv6-virtual-ip-addresses-init-down"},
    ipv6_virtual_ip_addresses_init_up{YType::uint32, "ipv6-virtual-ip-addresses-init-up"},
    ipv6_virtual_ip_addresses_learn_down{YType::uint32, "ipv6-virtual-ip-addresses-learn-down"},
    ipv6_virtual_ip_addresses_learn_up{YType::uint32, "ipv6-virtual-ip-addresses-learn-up"},
    ipv6_virtual_ip_addresses_listen_down{YType::uint32, "ipv6-virtual-ip-addresses-listen-down"},
    ipv6_virtual_ip_addresses_listen_up{YType::uint32, "ipv6-virtual-ip-addresses-listen-up"},
    ipv6_virtual_ip_addresses_speak_down{YType::uint32, "ipv6-virtual-ip-addresses-speak-down"},
    ipv6_virtual_ip_addresses_speak_up{YType::uint32, "ipv6-virtual-ip-addresses-speak-up"},
    ipv6_virtual_ip_addresses_standby_down{YType::uint32, "ipv6-virtual-ip-addresses-standby-down"},
    ipv6_virtual_ip_addresses_standby_up{YType::uint32, "ipv6-virtual-ip-addresses-standby-up"},
    tracked_interfaces_ipv4_state_down{YType::uint32, "tracked-interfaces-ipv4-state-down"},
    tracked_interfaces_ipv4_state_up{YType::uint32, "tracked-interfaces-ipv4-state-up"},
    tracked_interfaces_ipv6_state_down{YType::uint32, "tracked-interfaces-ipv6-state-down"},
    tracked_interfaces_ipv6_state_up{YType::uint32, "tracked-interfaces-ipv6-state-up"},
    tracked_objects_down{YType::uint32, "tracked-objects-down"},
    tracked_objects_up{YType::uint32, "tracked-objects-up"}
{
    yang_name = "summary"; yang_parent_name = "hsrp";
}

Hsrp::Summary::~Summary()
{
}

bool Hsrp::Summary::has_data() const
{
    return bfd_session_inactive.is_set
	|| bfd_sessions_down.is_set
	|| bfd_sessions_up.is_set
	|| interfaces_ipv4_state_down.is_set
	|| interfaces_ipv4_state_up.is_set
	|| interfaces_ipv6_state_down.is_set
	|| interfaces_ipv6_state_up.is_set
	|| ipv4_sessions_active.is_set
	|| ipv4_sessions_init.is_set
	|| ipv4_sessions_learn.is_set
	|| ipv4_sessions_listen.is_set
	|| ipv4_sessions_speak.is_set
	|| ipv4_sessions_standby.is_set
	|| ipv4_slaves_active.is_set
	|| ipv4_slaves_init.is_set
	|| ipv4_slaves_learn.is_set
	|| ipv4_slaves_listen.is_set
	|| ipv4_slaves_speak.is_set
	|| ipv4_slaves_standby.is_set
	|| ipv4_virtual_ip_addresses_active_down.is_set
	|| ipv4_virtual_ip_addresses_active_up.is_set
	|| ipv4_virtual_ip_addresses_init_down.is_set
	|| ipv4_virtual_ip_addresses_init_up.is_set
	|| ipv4_virtual_ip_addresses_learn_down.is_set
	|| ipv4_virtual_ip_addresses_learn_up.is_set
	|| ipv4_virtual_ip_addresses_listen_down.is_set
	|| ipv4_virtual_ip_addresses_listen_up.is_set
	|| ipv4_virtual_ip_addresses_speak_down.is_set
	|| ipv4_virtual_ip_addresses_speak_up.is_set
	|| ipv4_virtual_ip_addresses_standby_down.is_set
	|| ipv4_virtual_ip_addresses_standby_up.is_set
	|| ipv6_sessions_active.is_set
	|| ipv6_sessions_init.is_set
	|| ipv6_sessions_learn.is_set
	|| ipv6_sessions_listen.is_set
	|| ipv6_sessions_speak.is_set
	|| ipv6_sessions_standby.is_set
	|| ipv6_slaves_active.is_set
	|| ipv6_slaves_init.is_set
	|| ipv6_slaves_learn.is_set
	|| ipv6_slaves_listen.is_set
	|| ipv6_slaves_speak.is_set
	|| ipv6_slaves_standby.is_set
	|| ipv6_virtual_ip_addresses_active_down.is_set
	|| ipv6_virtual_ip_addresses_active_up.is_set
	|| ipv6_virtual_ip_addresses_init_down.is_set
	|| ipv6_virtual_ip_addresses_init_up.is_set
	|| ipv6_virtual_ip_addresses_learn_down.is_set
	|| ipv6_virtual_ip_addresses_learn_up.is_set
	|| ipv6_virtual_ip_addresses_listen_down.is_set
	|| ipv6_virtual_ip_addresses_listen_up.is_set
	|| ipv6_virtual_ip_addresses_speak_down.is_set
	|| ipv6_virtual_ip_addresses_speak_up.is_set
	|| ipv6_virtual_ip_addresses_standby_down.is_set
	|| ipv6_virtual_ip_addresses_standby_up.is_set
	|| tracked_interfaces_ipv4_state_down.is_set
	|| tracked_interfaces_ipv4_state_up.is_set
	|| tracked_interfaces_ipv6_state_down.is_set
	|| tracked_interfaces_ipv6_state_up.is_set
	|| tracked_objects_down.is_set
	|| tracked_objects_up.is_set;
}

bool Hsrp::Summary::has_operation() const
{
    return is_set(operation)
	|| is_set(bfd_session_inactive.operation)
	|| is_set(bfd_sessions_down.operation)
	|| is_set(bfd_sessions_up.operation)
	|| is_set(interfaces_ipv4_state_down.operation)
	|| is_set(interfaces_ipv4_state_up.operation)
	|| is_set(interfaces_ipv6_state_down.operation)
	|| is_set(interfaces_ipv6_state_up.operation)
	|| is_set(ipv4_sessions_active.operation)
	|| is_set(ipv4_sessions_init.operation)
	|| is_set(ipv4_sessions_learn.operation)
	|| is_set(ipv4_sessions_listen.operation)
	|| is_set(ipv4_sessions_speak.operation)
	|| is_set(ipv4_sessions_standby.operation)
	|| is_set(ipv4_slaves_active.operation)
	|| is_set(ipv4_slaves_init.operation)
	|| is_set(ipv4_slaves_learn.operation)
	|| is_set(ipv4_slaves_listen.operation)
	|| is_set(ipv4_slaves_speak.operation)
	|| is_set(ipv4_slaves_standby.operation)
	|| is_set(ipv4_virtual_ip_addresses_active_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_active_up.operation)
	|| is_set(ipv4_virtual_ip_addresses_init_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_init_up.operation)
	|| is_set(ipv4_virtual_ip_addresses_learn_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_learn_up.operation)
	|| is_set(ipv4_virtual_ip_addresses_listen_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_listen_up.operation)
	|| is_set(ipv4_virtual_ip_addresses_speak_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_speak_up.operation)
	|| is_set(ipv4_virtual_ip_addresses_standby_down.operation)
	|| is_set(ipv4_virtual_ip_addresses_standby_up.operation)
	|| is_set(ipv6_sessions_active.operation)
	|| is_set(ipv6_sessions_init.operation)
	|| is_set(ipv6_sessions_learn.operation)
	|| is_set(ipv6_sessions_listen.operation)
	|| is_set(ipv6_sessions_speak.operation)
	|| is_set(ipv6_sessions_standby.operation)
	|| is_set(ipv6_slaves_active.operation)
	|| is_set(ipv6_slaves_init.operation)
	|| is_set(ipv6_slaves_learn.operation)
	|| is_set(ipv6_slaves_listen.operation)
	|| is_set(ipv6_slaves_speak.operation)
	|| is_set(ipv6_slaves_standby.operation)
	|| is_set(ipv6_virtual_ip_addresses_active_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_active_up.operation)
	|| is_set(ipv6_virtual_ip_addresses_init_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_init_up.operation)
	|| is_set(ipv6_virtual_ip_addresses_learn_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_learn_up.operation)
	|| is_set(ipv6_virtual_ip_addresses_listen_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_listen_up.operation)
	|| is_set(ipv6_virtual_ip_addresses_speak_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_speak_up.operation)
	|| is_set(ipv6_virtual_ip_addresses_standby_down.operation)
	|| is_set(ipv6_virtual_ip_addresses_standby_up.operation)
	|| is_set(tracked_interfaces_ipv4_state_down.operation)
	|| is_set(tracked_interfaces_ipv4_state_up.operation)
	|| is_set(tracked_interfaces_ipv6_state_down.operation)
	|| is_set(tracked_interfaces_ipv6_state_up.operation)
	|| is_set(tracked_objects_down.operation)
	|| is_set(tracked_objects_up.operation);
}

std::string Hsrp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";

    return path_buffer.str();

}

EntityPath Hsrp::Summary::get_entity_path(Entity* ancestor) const
{
    std::ostringstream path_buffer;
    if (ancestor == nullptr)
    {
        path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    }
    else
    {
        path_buffer << get_relative_entity_path(this, ancestor, path_buffer.str());
    }

    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (bfd_session_inactive.is_set || is_set(bfd_session_inactive.operation)) leaf_name_data.push_back(bfd_session_inactive.get_name_leafdata());
    if (bfd_sessions_down.is_set || is_set(bfd_sessions_down.operation)) leaf_name_data.push_back(bfd_sessions_down.get_name_leafdata());
    if (bfd_sessions_up.is_set || is_set(bfd_sessions_up.operation)) leaf_name_data.push_back(bfd_sessions_up.get_name_leafdata());
    if (interfaces_ipv4_state_down.is_set || is_set(interfaces_ipv4_state_down.operation)) leaf_name_data.push_back(interfaces_ipv4_state_down.get_name_leafdata());
    if (interfaces_ipv4_state_up.is_set || is_set(interfaces_ipv4_state_up.operation)) leaf_name_data.push_back(interfaces_ipv4_state_up.get_name_leafdata());
    if (interfaces_ipv6_state_down.is_set || is_set(interfaces_ipv6_state_down.operation)) leaf_name_data.push_back(interfaces_ipv6_state_down.get_name_leafdata());
    if (interfaces_ipv6_state_up.is_set || is_set(interfaces_ipv6_state_up.operation)) leaf_name_data.push_back(interfaces_ipv6_state_up.get_name_leafdata());
    if (ipv4_sessions_active.is_set || is_set(ipv4_sessions_active.operation)) leaf_name_data.push_back(ipv4_sessions_active.get_name_leafdata());
    if (ipv4_sessions_init.is_set || is_set(ipv4_sessions_init.operation)) leaf_name_data.push_back(ipv4_sessions_init.get_name_leafdata());
    if (ipv4_sessions_learn.is_set || is_set(ipv4_sessions_learn.operation)) leaf_name_data.push_back(ipv4_sessions_learn.get_name_leafdata());
    if (ipv4_sessions_listen.is_set || is_set(ipv4_sessions_listen.operation)) leaf_name_data.push_back(ipv4_sessions_listen.get_name_leafdata());
    if (ipv4_sessions_speak.is_set || is_set(ipv4_sessions_speak.operation)) leaf_name_data.push_back(ipv4_sessions_speak.get_name_leafdata());
    if (ipv4_sessions_standby.is_set || is_set(ipv4_sessions_standby.operation)) leaf_name_data.push_back(ipv4_sessions_standby.get_name_leafdata());
    if (ipv4_slaves_active.is_set || is_set(ipv4_slaves_active.operation)) leaf_name_data.push_back(ipv4_slaves_active.get_name_leafdata());
    if (ipv4_slaves_init.is_set || is_set(ipv4_slaves_init.operation)) leaf_name_data.push_back(ipv4_slaves_init.get_name_leafdata());
    if (ipv4_slaves_learn.is_set || is_set(ipv4_slaves_learn.operation)) leaf_name_data.push_back(ipv4_slaves_learn.get_name_leafdata());
    if (ipv4_slaves_listen.is_set || is_set(ipv4_slaves_listen.operation)) leaf_name_data.push_back(ipv4_slaves_listen.get_name_leafdata());
    if (ipv4_slaves_speak.is_set || is_set(ipv4_slaves_speak.operation)) leaf_name_data.push_back(ipv4_slaves_speak.get_name_leafdata());
    if (ipv4_slaves_standby.is_set || is_set(ipv4_slaves_standby.operation)) leaf_name_data.push_back(ipv4_slaves_standby.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_active_down.is_set || is_set(ipv4_virtual_ip_addresses_active_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_active_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_active_up.is_set || is_set(ipv4_virtual_ip_addresses_active_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_active_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_init_down.is_set || is_set(ipv4_virtual_ip_addresses_init_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_init_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_init_up.is_set || is_set(ipv4_virtual_ip_addresses_init_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_init_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_learn_down.is_set || is_set(ipv4_virtual_ip_addresses_learn_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_learn_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_learn_up.is_set || is_set(ipv4_virtual_ip_addresses_learn_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_learn_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_listen_down.is_set || is_set(ipv4_virtual_ip_addresses_listen_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_listen_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_listen_up.is_set || is_set(ipv4_virtual_ip_addresses_listen_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_listen_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_speak_down.is_set || is_set(ipv4_virtual_ip_addresses_speak_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_speak_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_speak_up.is_set || is_set(ipv4_virtual_ip_addresses_speak_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_speak_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_standby_down.is_set || is_set(ipv4_virtual_ip_addresses_standby_down.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_standby_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_standby_up.is_set || is_set(ipv4_virtual_ip_addresses_standby_up.operation)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_standby_up.get_name_leafdata());
    if (ipv6_sessions_active.is_set || is_set(ipv6_sessions_active.operation)) leaf_name_data.push_back(ipv6_sessions_active.get_name_leafdata());
    if (ipv6_sessions_init.is_set || is_set(ipv6_sessions_init.operation)) leaf_name_data.push_back(ipv6_sessions_init.get_name_leafdata());
    if (ipv6_sessions_learn.is_set || is_set(ipv6_sessions_learn.operation)) leaf_name_data.push_back(ipv6_sessions_learn.get_name_leafdata());
    if (ipv6_sessions_listen.is_set || is_set(ipv6_sessions_listen.operation)) leaf_name_data.push_back(ipv6_sessions_listen.get_name_leafdata());
    if (ipv6_sessions_speak.is_set || is_set(ipv6_sessions_speak.operation)) leaf_name_data.push_back(ipv6_sessions_speak.get_name_leafdata());
    if (ipv6_sessions_standby.is_set || is_set(ipv6_sessions_standby.operation)) leaf_name_data.push_back(ipv6_sessions_standby.get_name_leafdata());
    if (ipv6_slaves_active.is_set || is_set(ipv6_slaves_active.operation)) leaf_name_data.push_back(ipv6_slaves_active.get_name_leafdata());
    if (ipv6_slaves_init.is_set || is_set(ipv6_slaves_init.operation)) leaf_name_data.push_back(ipv6_slaves_init.get_name_leafdata());
    if (ipv6_slaves_learn.is_set || is_set(ipv6_slaves_learn.operation)) leaf_name_data.push_back(ipv6_slaves_learn.get_name_leafdata());
    if (ipv6_slaves_listen.is_set || is_set(ipv6_slaves_listen.operation)) leaf_name_data.push_back(ipv6_slaves_listen.get_name_leafdata());
    if (ipv6_slaves_speak.is_set || is_set(ipv6_slaves_speak.operation)) leaf_name_data.push_back(ipv6_slaves_speak.get_name_leafdata());
    if (ipv6_slaves_standby.is_set || is_set(ipv6_slaves_standby.operation)) leaf_name_data.push_back(ipv6_slaves_standby.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_active_down.is_set || is_set(ipv6_virtual_ip_addresses_active_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_active_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_active_up.is_set || is_set(ipv6_virtual_ip_addresses_active_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_active_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_init_down.is_set || is_set(ipv6_virtual_ip_addresses_init_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_init_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_init_up.is_set || is_set(ipv6_virtual_ip_addresses_init_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_init_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_learn_down.is_set || is_set(ipv6_virtual_ip_addresses_learn_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_learn_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_learn_up.is_set || is_set(ipv6_virtual_ip_addresses_learn_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_learn_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_listen_down.is_set || is_set(ipv6_virtual_ip_addresses_listen_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_listen_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_listen_up.is_set || is_set(ipv6_virtual_ip_addresses_listen_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_listen_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_speak_down.is_set || is_set(ipv6_virtual_ip_addresses_speak_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_speak_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_speak_up.is_set || is_set(ipv6_virtual_ip_addresses_speak_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_speak_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_standby_down.is_set || is_set(ipv6_virtual_ip_addresses_standby_down.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_standby_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_standby_up.is_set || is_set(ipv6_virtual_ip_addresses_standby_up.operation)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_standby_up.get_name_leafdata());
    if (tracked_interfaces_ipv4_state_down.is_set || is_set(tracked_interfaces_ipv4_state_down.operation)) leaf_name_data.push_back(tracked_interfaces_ipv4_state_down.get_name_leafdata());
    if (tracked_interfaces_ipv4_state_up.is_set || is_set(tracked_interfaces_ipv4_state_up.operation)) leaf_name_data.push_back(tracked_interfaces_ipv4_state_up.get_name_leafdata());
    if (tracked_interfaces_ipv6_state_down.is_set || is_set(tracked_interfaces_ipv6_state_down.operation)) leaf_name_data.push_back(tracked_interfaces_ipv6_state_down.get_name_leafdata());
    if (tracked_interfaces_ipv6_state_up.is_set || is_set(tracked_interfaces_ipv6_state_up.operation)) leaf_name_data.push_back(tracked_interfaces_ipv6_state_up.get_name_leafdata());
    if (tracked_objects_down.is_set || is_set(tracked_objects_down.operation)) leaf_name_data.push_back(tracked_objects_down.get_name_leafdata());
    if (tracked_objects_up.is_set || is_set(tracked_objects_up.operation)) leaf_name_data.push_back(tracked_objects_up.get_name_leafdata());


    EntityPath entity_path {path_buffer.str(), leaf_name_data};
    return entity_path;

}

std::shared_ptr<Entity> Hsrp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
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

std::map<std::string, std::shared_ptr<Entity>> & Hsrp::Summary::get_children()
{
    return children;
}

void Hsrp::Summary::set_value(const std::string & value_path, std::string value)
{
    if(value_path == "bfd-session-inactive")
    {
        bfd_session_inactive = value;
    }
    if(value_path == "bfd-sessions-down")
    {
        bfd_sessions_down = value;
    }
    if(value_path == "bfd-sessions-up")
    {
        bfd_sessions_up = value;
    }
    if(value_path == "interfaces-ipv4-state-down")
    {
        interfaces_ipv4_state_down = value;
    }
    if(value_path == "interfaces-ipv4-state-up")
    {
        interfaces_ipv4_state_up = value;
    }
    if(value_path == "interfaces-ipv6-state-down")
    {
        interfaces_ipv6_state_down = value;
    }
    if(value_path == "interfaces-ipv6-state-up")
    {
        interfaces_ipv6_state_up = value;
    }
    if(value_path == "ipv4-sessions-active")
    {
        ipv4_sessions_active = value;
    }
    if(value_path == "ipv4-sessions-init")
    {
        ipv4_sessions_init = value;
    }
    if(value_path == "ipv4-sessions-learn")
    {
        ipv4_sessions_learn = value;
    }
    if(value_path == "ipv4-sessions-listen")
    {
        ipv4_sessions_listen = value;
    }
    if(value_path == "ipv4-sessions-speak")
    {
        ipv4_sessions_speak = value;
    }
    if(value_path == "ipv4-sessions-standby")
    {
        ipv4_sessions_standby = value;
    }
    if(value_path == "ipv4-slaves-active")
    {
        ipv4_slaves_active = value;
    }
    if(value_path == "ipv4-slaves-init")
    {
        ipv4_slaves_init = value;
    }
    if(value_path == "ipv4-slaves-learn")
    {
        ipv4_slaves_learn = value;
    }
    if(value_path == "ipv4-slaves-listen")
    {
        ipv4_slaves_listen = value;
    }
    if(value_path == "ipv4-slaves-speak")
    {
        ipv4_slaves_speak = value;
    }
    if(value_path == "ipv4-slaves-standby")
    {
        ipv4_slaves_standby = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-active-down")
    {
        ipv4_virtual_ip_addresses_active_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-active-up")
    {
        ipv4_virtual_ip_addresses_active_up = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-down")
    {
        ipv4_virtual_ip_addresses_init_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-up")
    {
        ipv4_virtual_ip_addresses_init_up = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-learn-down")
    {
        ipv4_virtual_ip_addresses_learn_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-learn-up")
    {
        ipv4_virtual_ip_addresses_learn_up = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-listen-down")
    {
        ipv4_virtual_ip_addresses_listen_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-listen-up")
    {
        ipv4_virtual_ip_addresses_listen_up = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-speak-down")
    {
        ipv4_virtual_ip_addresses_speak_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-speak-up")
    {
        ipv4_virtual_ip_addresses_speak_up = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-standby-down")
    {
        ipv4_virtual_ip_addresses_standby_down = value;
    }
    if(value_path == "ipv4-virtual-ip-addresses-standby-up")
    {
        ipv4_virtual_ip_addresses_standby_up = value;
    }
    if(value_path == "ipv6-sessions-active")
    {
        ipv6_sessions_active = value;
    }
    if(value_path == "ipv6-sessions-init")
    {
        ipv6_sessions_init = value;
    }
    if(value_path == "ipv6-sessions-learn")
    {
        ipv6_sessions_learn = value;
    }
    if(value_path == "ipv6-sessions-listen")
    {
        ipv6_sessions_listen = value;
    }
    if(value_path == "ipv6-sessions-speak")
    {
        ipv6_sessions_speak = value;
    }
    if(value_path == "ipv6-sessions-standby")
    {
        ipv6_sessions_standby = value;
    }
    if(value_path == "ipv6-slaves-active")
    {
        ipv6_slaves_active = value;
    }
    if(value_path == "ipv6-slaves-init")
    {
        ipv6_slaves_init = value;
    }
    if(value_path == "ipv6-slaves-learn")
    {
        ipv6_slaves_learn = value;
    }
    if(value_path == "ipv6-slaves-listen")
    {
        ipv6_slaves_listen = value;
    }
    if(value_path == "ipv6-slaves-speak")
    {
        ipv6_slaves_speak = value;
    }
    if(value_path == "ipv6-slaves-standby")
    {
        ipv6_slaves_standby = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-active-down")
    {
        ipv6_virtual_ip_addresses_active_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-active-up")
    {
        ipv6_virtual_ip_addresses_active_up = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-down")
    {
        ipv6_virtual_ip_addresses_init_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-up")
    {
        ipv6_virtual_ip_addresses_init_up = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-learn-down")
    {
        ipv6_virtual_ip_addresses_learn_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-learn-up")
    {
        ipv6_virtual_ip_addresses_learn_up = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-listen-down")
    {
        ipv6_virtual_ip_addresses_listen_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-listen-up")
    {
        ipv6_virtual_ip_addresses_listen_up = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-speak-down")
    {
        ipv6_virtual_ip_addresses_speak_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-speak-up")
    {
        ipv6_virtual_ip_addresses_speak_up = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-standby-down")
    {
        ipv6_virtual_ip_addresses_standby_down = value;
    }
    if(value_path == "ipv6-virtual-ip-addresses-standby-up")
    {
        ipv6_virtual_ip_addresses_standby_up = value;
    }
    if(value_path == "tracked-interfaces-ipv4-state-down")
    {
        tracked_interfaces_ipv4_state_down = value;
    }
    if(value_path == "tracked-interfaces-ipv4-state-up")
    {
        tracked_interfaces_ipv4_state_up = value;
    }
    if(value_path == "tracked-interfaces-ipv6-state-down")
    {
        tracked_interfaces_ipv6_state_down = value;
    }
    if(value_path == "tracked-interfaces-ipv6-state-up")
    {
        tracked_interfaces_ipv6_state_up = value;
    }
    if(value_path == "tracked-objects-down")
    {
        tracked_objects_down = value;
    }
    if(value_path == "tracked-objects-up")
    {
        tracked_objects_up = value;
    }
}

const Enum::YLeaf HsrpVmacStateEnum::stored {0, "stored"};
const Enum::YLeaf HsrpVmacStateEnum::reserved {1, "reserved"};
const Enum::YLeaf HsrpVmacStateEnum::active {2, "active"};
const Enum::YLeaf HsrpVmacStateEnum::reserving {3, "reserving"};

const Enum::YLeaf StandbyGrpStateEnum::state_initial {1, "state-initial"};
const Enum::YLeaf StandbyGrpStateEnum::state_learn {2, "state-learn"};
const Enum::YLeaf StandbyGrpStateEnum::state_listen {3, "state-listen"};
const Enum::YLeaf StandbyGrpStateEnum::state_speak {4, "state-speak"};
const Enum::YLeaf StandbyGrpStateEnum::state_standby {5, "state-standby"};
const Enum::YLeaf StandbyGrpStateEnum::state_active {6, "state-active"};

const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_bfd_down {0, "state-change-bfd-down"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_vip_learnt {1, "state-change-vip-learnt"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_interface_ip {2, "state-change-interface-ip"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_delay_timer {3, "state-change-delay-timer"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_startup {4, "state-change-startup"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_shutdown {5, "state-change-shutdown"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_interface_up {6, "state-change-interface-up"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_interface_down {7, "state-change-interface-down"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_active_timer {8, "state-change-active-timer"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_standby_timer {9, "state-change-standby-timer"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_resign {10, "state-change-resign"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_coup {11, "state-change-coup"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_higher_priority_speak {12, "state-change-higher-priority-speak"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_higher_priority_standby {13, "state-change-higher-priority-standby"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_lower_priority_standby {14, "state-change-lower-priority-standby"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_higher_priority_active {15, "state-change-higher-priority-active"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_lower_priority_active {16, "state-change-lower-priority-active"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_virtual_ip_configured {17, "state-change-virtual-ip-configured"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_virtual_ip_lost {18, "state-change-virtual-ip-lost"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_recovered_from_checkpoint {19, "state-change-recovered-from-checkpoint"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_mac_update {20, "state-change-mac-update"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_admin {21, "state-change-admin"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_parent {22, "state-change-parent"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_chkpt_update {23, "state-change-chkpt-update"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_issu_resync {24, "state-change-issu-resync"};
const Enum::YLeaf HsrpStateChangeReasonEnum::state_change_max {25, "state-change-max"};

const Enum::YLeaf HsrpBAfEnum::ipv4 {0, "ipv4"};
const Enum::YLeaf HsrpBAfEnum::ipv6 {1, "ipv6"};
const Enum::YLeaf HsrpBAfEnum::count {2, "count"};

const Enum::YLeaf HsrpBfdSessionStateEnum::bfd_state_none {0, "bfd-state-none"};
const Enum::YLeaf HsrpBfdSessionStateEnum::bfd_state_inactive {1, "bfd-state-inactive"};
const Enum::YLeaf HsrpBfdSessionStateEnum::bfd_state_up {2, "bfd-state-up"};
const Enum::YLeaf HsrpBfdSessionStateEnum::bfd_state_down {3, "bfd-state-down"};


}
}

