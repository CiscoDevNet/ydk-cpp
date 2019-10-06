
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_ipv4_hsrp_oper.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_ipv4_hsrp_oper {

Hsrp::Hsrp()
    :
    ipv4(std::make_shared<Hsrp::Ipv4>())
    , mgo_sessions(std::make_shared<Hsrp::MgoSessions>())
    , ipv6(std::make_shared<Hsrp::Ipv6>())
    , bfd_sessions(std::make_shared<Hsrp::BfdSessions>())
    , summary(std::make_shared<Hsrp::Summary>())
{
    ipv4->parent = this;
    mgo_sessions->parent = this;
    ipv6->parent = this;
    bfd_sessions->parent = this;
    summary->parent = this;

    yang_name = "hsrp"; yang_parent_name = "Cisco-IOS-XR-ipv4-hsrp-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

Hsrp::~Hsrp()
{
}

bool Hsrp::has_data() const
{
    if (is_presence_container) return true;
    return (ipv4 !=  nullptr && ipv4->has_data())
	|| (mgo_sessions !=  nullptr && mgo_sessions->has_data())
	|| (ipv6 !=  nullptr && ipv6->has_data())
	|| (bfd_sessions !=  nullptr && bfd_sessions->has_data())
	|| (summary !=  nullptr && summary->has_data());
}

bool Hsrp::has_operation() const
{
    return is_set(yfilter)
	|| (ipv4 !=  nullptr && ipv4->has_operation())
	|| (mgo_sessions !=  nullptr && mgo_sessions->has_operation())
	|| (ipv6 !=  nullptr && ipv6->has_operation())
	|| (bfd_sessions !=  nullptr && bfd_sessions->has_operation())
	|| (summary !=  nullptr && summary->has_operation());
}

std::string Hsrp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4")
    {
        if(ipv4 == nullptr)
        {
            ipv4 = std::make_shared<Hsrp::Ipv4>();
        }
        return ipv4;
    }

    if(child_yang_name == "mgo-sessions")
    {
        if(mgo_sessions == nullptr)
        {
            mgo_sessions = std::make_shared<Hsrp::MgoSessions>();
        }
        return mgo_sessions;
    }

    if(child_yang_name == "ipv6")
    {
        if(ipv6 == nullptr)
        {
            ipv6 = std::make_shared<Hsrp::Ipv6>();
        }
        return ipv6;
    }

    if(child_yang_name == "bfd-sessions")
    {
        if(bfd_sessions == nullptr)
        {
            bfd_sessions = std::make_shared<Hsrp::BfdSessions>();
        }
        return bfd_sessions;
    }

    if(child_yang_name == "summary")
    {
        if(summary == nullptr)
        {
            summary = std::make_shared<Hsrp::Summary>();
        }
        return summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(ipv4 != nullptr)
    {
        _children["ipv4"] = ipv4;
    }

    if(mgo_sessions != nullptr)
    {
        _children["mgo-sessions"] = mgo_sessions;
    }

    if(ipv6 != nullptr)
    {
        _children["ipv6"] = ipv6;
    }

    if(bfd_sessions != nullptr)
    {
        _children["bfd-sessions"] = bfd_sessions;
    }

    if(summary != nullptr)
    {
        _children["summary"] = summary;
    }

    return _children;
}

void Hsrp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> Hsrp::clone_ptr() const
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

std::map<std::pair<std::string, std::string>, std::string> Hsrp::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool Hsrp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4" || name == "mgo-sessions" || name == "ipv6" || name == "bfd-sessions" || name == "summary")
        return true;
    return false;
}

Hsrp::Ipv4::Ipv4()
    :
    groups(std::make_shared<Hsrp::Ipv4::Groups>())
    , tracked_interfaces(std::make_shared<Hsrp::Ipv4::TrackedInterfaces>())
    , interfaces(std::make_shared<Hsrp::Ipv4::Interfaces>())
{
    groups->parent = this;
    tracked_interfaces->parent = this;
    interfaces->parent = this;

    yang_name = "ipv4"; yang_parent_name = "hsrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv4::~Ipv4()
{
}

bool Hsrp::Ipv4::has_data() const
{
    if (is_presence_container) return true;
    return (groups !=  nullptr && groups->has_data())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Hsrp::Ipv4::has_operation() const
{
    return is_set(yfilter)
	|| (groups !=  nullptr && groups->has_operation())
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Hsrp::Ipv4::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv4::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Hsrp::Ipv4::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces == nullptr)
        {
            tracked_interfaces = std::make_shared<Hsrp::Ipv4::TrackedInterfaces>();
        }
        return tracked_interfaces;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Hsrp::Ipv4::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    if(tracked_interfaces != nullptr)
    {
        _children["tracked-interfaces"] = tracked_interfaces;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Hsrp::Ipv4::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Ipv4::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Ipv4::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "groups" || name == "tracked-interfaces" || name == "interfaces")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Groups()
    :
    group(this, {"interface_name", "group_number"})
{

    yang_name = "groups"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv4::Groups::~Groups()
{
}

bool Hsrp::Ipv4::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv4::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Hsrp::Ipv4::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv4::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv4::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::Ipv4::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Ipv4::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Ipv4::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::Group()
    :
    interface_name{YType::str, "interface-name"},
    group_number{YType::uint32, "group-number"},
    authentication_string{YType::str, "authentication-string"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    address_family{YType::enumeration, "address-family"},
    version{YType::uint8, "version"},
    session_name{YType::str, "session-name"},
    slaves{YType::uint32, "slaves"},
    is_slave{YType::boolean, "is-slave"},
    followed_session_name{YType::str, "followed-session-name"},
    configured_priority{YType::uint8, "configured-priority"},
    preempt_delay{YType::uint32, "preempt-delay"},
    preempt_timer_secs{YType::uint32, "preempt-timer-secs"},
    hello_time{YType::uint32, "hello-time"},
    hold_time{YType::uint32, "hold-time"},
    learned_hello_time{YType::uint32, "learned-hello-time"},
    learned_hold_time{YType::uint32, "learned-hold-time"},
    min_delay_time{YType::uint32, "min-delay-time"},
    reload_delay_time{YType::uint32, "reload-delay-time"},
    virtual_ip_address{YType::str, "virtual-ip-address"},
    virtual_linklocal_ipv6_address{YType::str, "virtual-linklocal-ipv6-address"},
    active_ip_address{YType::str, "active-ip-address"},
    active_ipv6_address{YType::str, "active-ipv6-address"},
    active_mac_address{YType::str, "active-mac-address"},
    standby_ip_address{YType::str, "standby-ip-address"},
    standby_ipv6_address{YType::str, "standby-ipv6-address"},
    standby_mac_address{YType::str, "standby-mac-address"},
    hsrp_router_state{YType::enumeration, "hsrp-router-state"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface{YType::str, "interface"},
    router_priority{YType::uint8, "router-priority"},
    active_priority{YType::uint8, "active-priority"},
    active_timer_flag{YType::boolean, "active-timer-flag"},
    active_timer_secs{YType::uint32, "active-timer-secs"},
    active_timer_msecs{YType::uint32, "active-timer-msecs"},
    standby_timer_flag{YType::boolean, "standby-timer-flag"},
    standby_timer_secs{YType::uint32, "standby-timer-secs"},
    standby_timer_msecs{YType::uint32, "standby-timer-msecs"},
    hello_timer_flag{YType::boolean, "hello-timer-flag"},
    hello_timer_secs{YType::uint32, "hello-timer-secs"},
    hello_timer_msecs{YType::uint32, "hello-timer-msecs"},
    delay_timer_flag{YType::boolean, "delay-timer-flag"},
    delay_timer_secs{YType::uint32, "delay-timer-secs"},
    delay_timer_msecs{YType::uint32, "delay-timer-msecs"},
    current_state_timer_secs{YType::uint32, "current-state-timer-secs"},
    state_change_count{YType::uint32, "state-change-count"},
    tracked_interface_count{YType::uint32, "tracked-interface-count"},
    tracked_interface_up_count{YType::uint32, "tracked-interface-up-count"},
    preempt_enabled{YType::boolean, "preempt-enabled"},
    use_configured_timers{YType::boolean, "use-configured-timers"},
    use_configured_virtual_ip{YType::boolean, "use-configured-virtual-ip"},
    use_bia_configured{YType::boolean, "use-bia-configured"},
    configured_timers{YType::boolean, "configured-timers"},
    configured_mac_address{YType::boolean, "configured-mac-address"},
    redirects_disabled{YType::boolean, "redirects-disabled"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interface{YType::str, "bfd-interface"},
    bfd_peer_ip_address{YType::str, "bfd-peer-ip-address"},
    bfd_peer_ipv6_address{YType::str, "bfd-peer-ipv6-address"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_mac_address_state{YType::enumeration, "virtual-mac-address-state"},
    secondary_address{YType::str, "secondary-address"}
        ,
    resign_sent_time(std::make_shared<Hsrp::Ipv4::Groups::Group::ResignSentTime>())
    , resign_received_time(std::make_shared<Hsrp::Ipv4::Groups::Group::ResignReceivedTime>())
    , coup_sent_time(std::make_shared<Hsrp::Ipv4::Groups::Group::CoupSentTime>())
    , coup_received_time(std::make_shared<Hsrp::Ipv4::Groups::Group::CoupReceivedTime>())
    , statistics(std::make_shared<Hsrp::Ipv4::Groups::Group::Statistics>())
    , global_address(this, {})
    , state_change_history(this, {})
{
    resign_sent_time->parent = this;
    resign_received_time->parent = this;
    coup_sent_time->parent = this;
    coup_received_time->parent = this;
    statistics->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv4::Groups::Group::~Group()
{
}

bool Hsrp::Ipv4::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_address.len(); index++)
    {
        if(global_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.len(); index++)
    {
        if(state_change_history[index]->has_data())
            return true;
    }
    for (auto const & leaf : secondary_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| group_number.is_set
	|| authentication_string.is_set
	|| virtual_mac_address.is_set
	|| hsrp_group_number.is_set
	|| address_family.is_set
	|| version.is_set
	|| session_name.is_set
	|| slaves.is_set
	|| is_slave.is_set
	|| followed_session_name.is_set
	|| configured_priority.is_set
	|| preempt_delay.is_set
	|| preempt_timer_secs.is_set
	|| hello_time.is_set
	|| hold_time.is_set
	|| learned_hello_time.is_set
	|| learned_hold_time.is_set
	|| min_delay_time.is_set
	|| reload_delay_time.is_set
	|| virtual_ip_address.is_set
	|| virtual_linklocal_ipv6_address.is_set
	|| active_ip_address.is_set
	|| active_ipv6_address.is_set
	|| active_mac_address.is_set
	|| standby_ip_address.is_set
	|| standby_ipv6_address.is_set
	|| standby_mac_address.is_set
	|| hsrp_router_state.is_set
	|| interface_name_xr.is_set
	|| interface.is_set
	|| router_priority.is_set
	|| active_priority.is_set
	|| active_timer_flag.is_set
	|| active_timer_secs.is_set
	|| active_timer_msecs.is_set
	|| standby_timer_flag.is_set
	|| standby_timer_secs.is_set
	|| standby_timer_msecs.is_set
	|| hello_timer_flag.is_set
	|| hello_timer_secs.is_set
	|| hello_timer_msecs.is_set
	|| delay_timer_flag.is_set
	|| delay_timer_secs.is_set
	|| delay_timer_msecs.is_set
	|| current_state_timer_secs.is_set
	|| state_change_count.is_set
	|| tracked_interface_count.is_set
	|| tracked_interface_up_count.is_set
	|| preempt_enabled.is_set
	|| use_configured_timers.is_set
	|| use_configured_virtual_ip.is_set
	|| use_bia_configured.is_set
	|| configured_timers.is_set
	|| configured_mac_address.is_set
	|| redirects_disabled.is_set
	|| bfd_enabled.is_set
	|| bfd_interface.is_set
	|| bfd_peer_ip_address.is_set
	|| bfd_peer_ipv6_address.is_set
	|| bfd_session_state.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_mac_address_state.is_set
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_data())
	|| (resign_received_time !=  nullptr && resign_received_time->has_data())
	|| (coup_sent_time !=  nullptr && coup_sent_time->has_data())
	|| (coup_received_time !=  nullptr && coup_received_time->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Hsrp::Ipv4::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<global_address.len(); index++)
    {
        if(global_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.len(); index++)
    {
        if(state_change_history[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secondary_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(authentication_string.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| ydk::is_set(hsrp_group_number.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(slaves.yfilter)
	|| ydk::is_set(is_slave.yfilter)
	|| ydk::is_set(followed_session_name.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(preempt_timer_secs.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(learned_hello_time.yfilter)
	|| ydk::is_set(learned_hold_time.yfilter)
	|| ydk::is_set(min_delay_time.yfilter)
	|| ydk::is_set(reload_delay_time.yfilter)
	|| ydk::is_set(virtual_ip_address.yfilter)
	|| ydk::is_set(virtual_linklocal_ipv6_address.yfilter)
	|| ydk::is_set(active_ip_address.yfilter)
	|| ydk::is_set(active_ipv6_address.yfilter)
	|| ydk::is_set(active_mac_address.yfilter)
	|| ydk::is_set(standby_ip_address.yfilter)
	|| ydk::is_set(standby_ipv6_address.yfilter)
	|| ydk::is_set(standby_mac_address.yfilter)
	|| ydk::is_set(hsrp_router_state.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(router_priority.yfilter)
	|| ydk::is_set(active_priority.yfilter)
	|| ydk::is_set(active_timer_flag.yfilter)
	|| ydk::is_set(active_timer_secs.yfilter)
	|| ydk::is_set(active_timer_msecs.yfilter)
	|| ydk::is_set(standby_timer_flag.yfilter)
	|| ydk::is_set(standby_timer_secs.yfilter)
	|| ydk::is_set(standby_timer_msecs.yfilter)
	|| ydk::is_set(hello_timer_flag.yfilter)
	|| ydk::is_set(hello_timer_secs.yfilter)
	|| ydk::is_set(hello_timer_msecs.yfilter)
	|| ydk::is_set(delay_timer_flag.yfilter)
	|| ydk::is_set(delay_timer_secs.yfilter)
	|| ydk::is_set(delay_timer_msecs.yfilter)
	|| ydk::is_set(current_state_timer_secs.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| ydk::is_set(tracked_interface_count.yfilter)
	|| ydk::is_set(tracked_interface_up_count.yfilter)
	|| ydk::is_set(preempt_enabled.yfilter)
	|| ydk::is_set(use_configured_timers.yfilter)
	|| ydk::is_set(use_configured_virtual_ip.yfilter)
	|| ydk::is_set(use_bia_configured.yfilter)
	|| ydk::is_set(configured_timers.yfilter)
	|| ydk::is_set(configured_mac_address.yfilter)
	|| ydk::is_set(redirects_disabled.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interface.yfilter)
	|| ydk::is_set(bfd_peer_ip_address.yfilter)
	|| ydk::is_set(bfd_peer_ipv6_address.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_mac_address_state.yfilter)
	|| ydk::is_set(secondary_address.yfilter)
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_operation())
	|| (resign_received_time !=  nullptr && resign_received_time->has_operation())
	|| (coup_sent_time !=  nullptr && coup_sent_time->has_operation())
	|| (coup_received_time !=  nullptr && coup_received_time->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Hsrp::Ipv4::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv4::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(group_number, "group-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (authentication_string.is_set || is_set(authentication_string.yfilter)) leaf_name_data.push_back(authentication_string.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.yfilter)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (slaves.is_set || is_set(slaves.yfilter)) leaf_name_data.push_back(slaves.get_name_leafdata());
    if (is_slave.is_set || is_set(is_slave.yfilter)) leaf_name_data.push_back(is_slave.get_name_leafdata());
    if (followed_session_name.is_set || is_set(followed_session_name.yfilter)) leaf_name_data.push_back(followed_session_name.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (preempt_timer_secs.is_set || is_set(preempt_timer_secs.yfilter)) leaf_name_data.push_back(preempt_timer_secs.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (learned_hello_time.is_set || is_set(learned_hello_time.yfilter)) leaf_name_data.push_back(learned_hello_time.get_name_leafdata());
    if (learned_hold_time.is_set || is_set(learned_hold_time.yfilter)) leaf_name_data.push_back(learned_hold_time.get_name_leafdata());
    if (min_delay_time.is_set || is_set(min_delay_time.yfilter)) leaf_name_data.push_back(min_delay_time.get_name_leafdata());
    if (reload_delay_time.is_set || is_set(reload_delay_time.yfilter)) leaf_name_data.push_back(reload_delay_time.get_name_leafdata());
    if (virtual_ip_address.is_set || is_set(virtual_ip_address.yfilter)) leaf_name_data.push_back(virtual_ip_address.get_name_leafdata());
    if (virtual_linklocal_ipv6_address.is_set || is_set(virtual_linklocal_ipv6_address.yfilter)) leaf_name_data.push_back(virtual_linklocal_ipv6_address.get_name_leafdata());
    if (active_ip_address.is_set || is_set(active_ip_address.yfilter)) leaf_name_data.push_back(active_ip_address.get_name_leafdata());
    if (active_ipv6_address.is_set || is_set(active_ipv6_address.yfilter)) leaf_name_data.push_back(active_ipv6_address.get_name_leafdata());
    if (active_mac_address.is_set || is_set(active_mac_address.yfilter)) leaf_name_data.push_back(active_mac_address.get_name_leafdata());
    if (standby_ip_address.is_set || is_set(standby_ip_address.yfilter)) leaf_name_data.push_back(standby_ip_address.get_name_leafdata());
    if (standby_ipv6_address.is_set || is_set(standby_ipv6_address.yfilter)) leaf_name_data.push_back(standby_ipv6_address.get_name_leafdata());
    if (standby_mac_address.is_set || is_set(standby_mac_address.yfilter)) leaf_name_data.push_back(standby_mac_address.get_name_leafdata());
    if (hsrp_router_state.is_set || is_set(hsrp_router_state.yfilter)) leaf_name_data.push_back(hsrp_router_state.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (router_priority.is_set || is_set(router_priority.yfilter)) leaf_name_data.push_back(router_priority.get_name_leafdata());
    if (active_priority.is_set || is_set(active_priority.yfilter)) leaf_name_data.push_back(active_priority.get_name_leafdata());
    if (active_timer_flag.is_set || is_set(active_timer_flag.yfilter)) leaf_name_data.push_back(active_timer_flag.get_name_leafdata());
    if (active_timer_secs.is_set || is_set(active_timer_secs.yfilter)) leaf_name_data.push_back(active_timer_secs.get_name_leafdata());
    if (active_timer_msecs.is_set || is_set(active_timer_msecs.yfilter)) leaf_name_data.push_back(active_timer_msecs.get_name_leafdata());
    if (standby_timer_flag.is_set || is_set(standby_timer_flag.yfilter)) leaf_name_data.push_back(standby_timer_flag.get_name_leafdata());
    if (standby_timer_secs.is_set || is_set(standby_timer_secs.yfilter)) leaf_name_data.push_back(standby_timer_secs.get_name_leafdata());
    if (standby_timer_msecs.is_set || is_set(standby_timer_msecs.yfilter)) leaf_name_data.push_back(standby_timer_msecs.get_name_leafdata());
    if (hello_timer_flag.is_set || is_set(hello_timer_flag.yfilter)) leaf_name_data.push_back(hello_timer_flag.get_name_leafdata());
    if (hello_timer_secs.is_set || is_set(hello_timer_secs.yfilter)) leaf_name_data.push_back(hello_timer_secs.get_name_leafdata());
    if (hello_timer_msecs.is_set || is_set(hello_timer_msecs.yfilter)) leaf_name_data.push_back(hello_timer_msecs.get_name_leafdata());
    if (delay_timer_flag.is_set || is_set(delay_timer_flag.yfilter)) leaf_name_data.push_back(delay_timer_flag.get_name_leafdata());
    if (delay_timer_secs.is_set || is_set(delay_timer_secs.yfilter)) leaf_name_data.push_back(delay_timer_secs.get_name_leafdata());
    if (delay_timer_msecs.is_set || is_set(delay_timer_msecs.yfilter)) leaf_name_data.push_back(delay_timer_msecs.get_name_leafdata());
    if (current_state_timer_secs.is_set || is_set(current_state_timer_secs.yfilter)) leaf_name_data.push_back(current_state_timer_secs.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (tracked_interface_count.is_set || is_set(tracked_interface_count.yfilter)) leaf_name_data.push_back(tracked_interface_count.get_name_leafdata());
    if (tracked_interface_up_count.is_set || is_set(tracked_interface_up_count.yfilter)) leaf_name_data.push_back(tracked_interface_up_count.get_name_leafdata());
    if (preempt_enabled.is_set || is_set(preempt_enabled.yfilter)) leaf_name_data.push_back(preempt_enabled.get_name_leafdata());
    if (use_configured_timers.is_set || is_set(use_configured_timers.yfilter)) leaf_name_data.push_back(use_configured_timers.get_name_leafdata());
    if (use_configured_virtual_ip.is_set || is_set(use_configured_virtual_ip.yfilter)) leaf_name_data.push_back(use_configured_virtual_ip.get_name_leafdata());
    if (use_bia_configured.is_set || is_set(use_bia_configured.yfilter)) leaf_name_data.push_back(use_bia_configured.get_name_leafdata());
    if (configured_timers.is_set || is_set(configured_timers.yfilter)) leaf_name_data.push_back(configured_timers.get_name_leafdata());
    if (configured_mac_address.is_set || is_set(configured_mac_address.yfilter)) leaf_name_data.push_back(configured_mac_address.get_name_leafdata());
    if (redirects_disabled.is_set || is_set(redirects_disabled.yfilter)) leaf_name_data.push_back(redirects_disabled.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interface.is_set || is_set(bfd_interface.yfilter)) leaf_name_data.push_back(bfd_interface.get_name_leafdata());
    if (bfd_peer_ip_address.is_set || is_set(bfd_peer_ip_address.yfilter)) leaf_name_data.push_back(bfd_peer_ip_address.get_name_leafdata());
    if (bfd_peer_ipv6_address.is_set || is_set(bfd_peer_ipv6_address.yfilter)) leaf_name_data.push_back(bfd_peer_ipv6_address.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_mac_address_state.is_set || is_set(virtual_mac_address_state.yfilter)) leaf_name_data.push_back(virtual_mac_address_state.get_name_leafdata());

    auto secondary_address_name_datas = secondary_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_address_name_datas.begin(), secondary_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resign-sent-time")
    {
        if(resign_sent_time == nullptr)
        {
            resign_sent_time = std::make_shared<Hsrp::Ipv4::Groups::Group::ResignSentTime>();
        }
        return resign_sent_time;
    }

    if(child_yang_name == "resign-received-time")
    {
        if(resign_received_time == nullptr)
        {
            resign_received_time = std::make_shared<Hsrp::Ipv4::Groups::Group::ResignReceivedTime>();
        }
        return resign_received_time;
    }

    if(child_yang_name == "coup-sent-time")
    {
        if(coup_sent_time == nullptr)
        {
            coup_sent_time = std::make_shared<Hsrp::Ipv4::Groups::Group::CoupSentTime>();
        }
        return coup_sent_time;
    }

    if(child_yang_name == "coup-received-time")
    {
        if(coup_received_time == nullptr)
        {
            coup_received_time = std::make_shared<Hsrp::Ipv4::Groups::Group::CoupReceivedTime>();
        }
        return coup_received_time;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Hsrp::Ipv4::Groups::Group::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "global-address")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv4::Groups::Group::GlobalAddress>();
        ent_->parent = this;
        global_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "state-change-history")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv4::Groups::Group::StateChangeHistory>();
        ent_->parent = this;
        state_change_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(resign_sent_time != nullptr)
    {
        _children["resign-sent-time"] = resign_sent_time;
    }

    if(resign_received_time != nullptr)
    {
        _children["resign-received-time"] = resign_received_time;
    }

    if(coup_sent_time != nullptr)
    {
        _children["coup-sent-time"] = coup_sent_time;
    }

    if(coup_received_time != nullptr)
    {
        _children["coup-received-time"] = coup_received_time;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : global_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : state_change_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::Ipv4::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-string")
    {
        authentication_string = value;
        authentication_string.value_namespace = name_space;
        authentication_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
        hsrp_group_number.value_namespace = name_space;
        hsrp_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slaves")
    {
        slaves = value;
        slaves.value_namespace = name_space;
        slaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-slave")
    {
        is_slave = value;
        is_slave.value_namespace = name_space;
        is_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name = value;
        followed_session_name.value_namespace = name_space;
        followed_session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-timer-secs")
    {
        preempt_timer_secs = value;
        preempt_timer_secs.value_namespace = name_space;
        preempt_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learned-hello-time")
    {
        learned_hello_time = value;
        learned_hello_time.value_namespace = name_space;
        learned_hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learned-hold-time")
    {
        learned_hold_time = value;
        learned_hold_time.value_namespace = name_space;
        learned_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time = value;
        min_delay_time.value_namespace = name_space;
        min_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time = value;
        reload_delay_time.value_namespace = name_space;
        reload_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-ip-address")
    {
        virtual_ip_address = value;
        virtual_ip_address.value_namespace = name_space;
        virtual_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address = value;
        virtual_linklocal_ipv6_address.value_namespace = name_space;
        virtual_linklocal_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-ip-address")
    {
        active_ip_address = value;
        active_ip_address.value_namespace = name_space;
        active_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-ipv6-address")
    {
        active_ipv6_address = value;
        active_ipv6_address.value_namespace = name_space;
        active_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-mac-address")
    {
        active_mac_address = value;
        active_mac_address.value_namespace = name_space;
        active_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-ip-address")
    {
        standby_ip_address = value;
        standby_ip_address.value_namespace = name_space;
        standby_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-ipv6-address")
    {
        standby_ipv6_address = value;
        standby_ipv6_address.value_namespace = name_space;
        standby_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-mac-address")
    {
        standby_mac_address = value;
        standby_mac_address.value_namespace = name_space;
        standby_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp-router-state")
    {
        hsrp_router_state = value;
        hsrp_router_state.value_namespace = name_space;
        hsrp_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-priority")
    {
        router_priority = value;
        router_priority.value_namespace = name_space;
        router_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-priority")
    {
        active_priority = value;
        active_priority.value_namespace = name_space;
        active_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-timer-flag")
    {
        active_timer_flag = value;
        active_timer_flag.value_namespace = name_space;
        active_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-timer-secs")
    {
        active_timer_secs = value;
        active_timer_secs.value_namespace = name_space;
        active_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-timer-msecs")
    {
        active_timer_msecs = value;
        active_timer_msecs.value_namespace = name_space;
        active_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-timer-flag")
    {
        standby_timer_flag = value;
        standby_timer_flag.value_namespace = name_space;
        standby_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-timer-secs")
    {
        standby_timer_secs = value;
        standby_timer_secs.value_namespace = name_space;
        standby_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-timer-msecs")
    {
        standby_timer_msecs = value;
        standby_timer_msecs.value_namespace = name_space;
        standby_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer-flag")
    {
        hello_timer_flag = value;
        hello_timer_flag.value_namespace = name_space;
        hello_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer-secs")
    {
        hello_timer_secs = value;
        hello_timer_secs.value_namespace = name_space;
        hello_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer-msecs")
    {
        hello_timer_msecs = value;
        hello_timer_msecs.value_namespace = name_space;
        hello_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag = value;
        delay_timer_flag.value_namespace = name_space;
        delay_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs = value;
        delay_timer_secs.value_namespace = name_space;
        delay_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs = value;
        delay_timer_msecs.value_namespace = name_space;
        delay_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-state-timer-secs")
    {
        current_state_timer_secs = value;
        current_state_timer_secs.value_namespace = name_space;
        current_state_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count = value;
        tracked_interface_count.value_namespace = name_space;
        tracked_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count = value;
        tracked_interface_up_count.value_namespace = name_space;
        tracked_interface_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-enabled")
    {
        preempt_enabled = value;
        preempt_enabled.value_namespace = name_space;
        preempt_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-configured-timers")
    {
        use_configured_timers = value;
        use_configured_timers.value_namespace = name_space;
        use_configured_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-configured-virtual-ip")
    {
        use_configured_virtual_ip = value;
        use_configured_virtual_ip.value_namespace = name_space;
        use_configured_virtual_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-bia-configured")
    {
        use_bia_configured = value;
        use_bia_configured.value_namespace = name_space;
        use_bia_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-timers")
    {
        configured_timers = value;
        configured_timers.value_namespace = name_space;
        configured_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-mac-address")
    {
        configured_mac_address = value;
        configured_mac_address.value_namespace = name_space;
        configured_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects-disabled")
    {
        redirects_disabled = value;
        redirects_disabled.value_namespace = name_space;
        redirects_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interface")
    {
        bfd_interface = value;
        bfd_interface.value_namespace = name_space;
        bfd_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-peer-ip-address")
    {
        bfd_peer_ip_address = value;
        bfd_peer_ip_address.value_namespace = name_space;
        bfd_peer_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-peer-ipv6-address")
    {
        bfd_peer_ipv6_address = value;
        bfd_peer_ipv6_address.value_namespace = name_space;
        bfd_peer_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state = value;
        virtual_mac_address_state.value_namespace = name_space;
        virtual_mac_address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-address")
    {
        secondary_address.append(value);
    }
}

void Hsrp::Ipv4::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "authentication-string")
    {
        authentication_string.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "slaves")
    {
        slaves.yfilter = yfilter;
    }
    if(value_path == "is-slave")
    {
        is_slave.yfilter = yfilter;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "preempt-timer-secs")
    {
        preempt_timer_secs.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "learned-hello-time")
    {
        learned_hello_time.yfilter = yfilter;
    }
    if(value_path == "learned-hold-time")
    {
        learned_hold_time.yfilter = yfilter;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time.yfilter = yfilter;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time.yfilter = yfilter;
    }
    if(value_path == "virtual-ip-address")
    {
        virtual_ip_address.yfilter = yfilter;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "active-ip-address")
    {
        active_ip_address.yfilter = yfilter;
    }
    if(value_path == "active-ipv6-address")
    {
        active_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "active-mac-address")
    {
        active_mac_address.yfilter = yfilter;
    }
    if(value_path == "standby-ip-address")
    {
        standby_ip_address.yfilter = yfilter;
    }
    if(value_path == "standby-ipv6-address")
    {
        standby_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "standby-mac-address")
    {
        standby_mac_address.yfilter = yfilter;
    }
    if(value_path == "hsrp-router-state")
    {
        hsrp_router_state.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "router-priority")
    {
        router_priority.yfilter = yfilter;
    }
    if(value_path == "active-priority")
    {
        active_priority.yfilter = yfilter;
    }
    if(value_path == "active-timer-flag")
    {
        active_timer_flag.yfilter = yfilter;
    }
    if(value_path == "active-timer-secs")
    {
        active_timer_secs.yfilter = yfilter;
    }
    if(value_path == "active-timer-msecs")
    {
        active_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "standby-timer-flag")
    {
        standby_timer_flag.yfilter = yfilter;
    }
    if(value_path == "standby-timer-secs")
    {
        standby_timer_secs.yfilter = yfilter;
    }
    if(value_path == "standby-timer-msecs")
    {
        standby_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "hello-timer-flag")
    {
        hello_timer_flag.yfilter = yfilter;
    }
    if(value_path == "hello-timer-secs")
    {
        hello_timer_secs.yfilter = yfilter;
    }
    if(value_path == "hello-timer-msecs")
    {
        hello_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag.yfilter = yfilter;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs.yfilter = yfilter;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "current-state-timer-secs")
    {
        current_state_timer_secs.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count.yfilter = yfilter;
    }
    if(value_path == "preempt-enabled")
    {
        preempt_enabled.yfilter = yfilter;
    }
    if(value_path == "use-configured-timers")
    {
        use_configured_timers.yfilter = yfilter;
    }
    if(value_path == "use-configured-virtual-ip")
    {
        use_configured_virtual_ip.yfilter = yfilter;
    }
    if(value_path == "use-bia-configured")
    {
        use_bia_configured.yfilter = yfilter;
    }
    if(value_path == "configured-timers")
    {
        configured_timers.yfilter = yfilter;
    }
    if(value_path == "configured-mac-address")
    {
        configured_mac_address.yfilter = yfilter;
    }
    if(value_path == "redirects-disabled")
    {
        redirects_disabled.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interface")
    {
        bfd_interface.yfilter = yfilter;
    }
    if(value_path == "bfd-peer-ip-address")
    {
        bfd_peer_ip_address.yfilter = yfilter;
    }
    if(value_path == "bfd-peer-ipv6-address")
    {
        bfd_peer_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state.yfilter = yfilter;
    }
    if(value_path == "secondary-address")
    {
        secondary_address.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resign-sent-time" || name == "resign-received-time" || name == "coup-sent-time" || name == "coup-received-time" || name == "statistics" || name == "global-address" || name == "state-change-history" || name == "interface-name" || name == "group-number" || name == "authentication-string" || name == "virtual-mac-address" || name == "hsrp-group-number" || name == "address-family" || name == "version" || name == "session-name" || name == "slaves" || name == "is-slave" || name == "followed-session-name" || name == "configured-priority" || name == "preempt-delay" || name == "preempt-timer-secs" || name == "hello-time" || name == "hold-time" || name == "learned-hello-time" || name == "learned-hold-time" || name == "min-delay-time" || name == "reload-delay-time" || name == "virtual-ip-address" || name == "virtual-linklocal-ipv6-address" || name == "active-ip-address" || name == "active-ipv6-address" || name == "active-mac-address" || name == "standby-ip-address" || name == "standby-ipv6-address" || name == "standby-mac-address" || name == "hsrp-router-state" || name == "interface-name-xr" || name == "interface" || name == "router-priority" || name == "active-priority" || name == "active-timer-flag" || name == "active-timer-secs" || name == "active-timer-msecs" || name == "standby-timer-flag" || name == "standby-timer-secs" || name == "standby-timer-msecs" || name == "hello-timer-flag" || name == "hello-timer-secs" || name == "hello-timer-msecs" || name == "delay-timer-flag" || name == "delay-timer-secs" || name == "delay-timer-msecs" || name == "current-state-timer-secs" || name == "state-change-count" || name == "tracked-interface-count" || name == "tracked-interface-up-count" || name == "preempt-enabled" || name == "use-configured-timers" || name == "use-configured-virtual-ip" || name == "use-bia-configured" || name == "configured-timers" || name == "configured-mac-address" || name == "redirects-disabled" || name == "bfd-enabled" || name == "bfd-interface" || name == "bfd-peer-ip-address" || name == "bfd-peer-ipv6-address" || name == "bfd-session-state" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-mac-address-state" || name == "secondary-address")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::ResignSentTime::ResignSentTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "resign-sent-time"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Groups::Group::ResignSentTime::~ResignSentTime()
{
}

bool Hsrp::Ipv4::Groups::Group::ResignSentTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::ResignSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv4::Groups::Group::ResignSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::ResignSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::ResignSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::ResignSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::Groups::Group::ResignSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Groups::Group::ResignSentTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::ResignSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::ResignReceivedTime::ResignReceivedTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "resign-received-time"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Groups::Group::ResignReceivedTime::~ResignReceivedTime()
{
}

bool Hsrp::Ipv4::Groups::Group::ResignReceivedTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::ResignReceivedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv4::Groups::Group::ResignReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-received-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::ResignReceivedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::ResignReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::ResignReceivedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::Groups::Group::ResignReceivedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Groups::Group::ResignReceivedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::ResignReceivedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::CoupSentTime::CoupSentTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "coup-sent-time"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Groups::Group::CoupSentTime::~CoupSentTime()
{
}

bool Hsrp::Ipv4::Groups::Group::CoupSentTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::CoupSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv4::Groups::Group::CoupSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coup-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::CoupSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::CoupSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::CoupSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::Groups::Group::CoupSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Groups::Group::CoupSentTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::CoupSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::CoupReceivedTime::CoupReceivedTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "coup-received-time"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Groups::Group::CoupReceivedTime::~CoupReceivedTime()
{
}

bool Hsrp::Ipv4::Groups::Group::CoupReceivedTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::CoupReceivedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv4::Groups::Group::CoupReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coup-received-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::CoupReceivedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::CoupReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::CoupReceivedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::Groups::Group::CoupReceivedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Groups::Group::CoupReceivedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::CoupReceivedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::Statistics::Statistics()
    :
    active_transitions{YType::uint32, "active-transitions"},
    standby_transitions{YType::uint32, "standby-transitions"},
    speak_transitions{YType::uint32, "speak-transitions"},
    listen_transitions{YType::uint32, "listen-transitions"},
    learn_transitions{YType::uint32, "learn-transitions"},
    init_transitions{YType::uint32, "init-transitions"},
    hello_packets_sent{YType::uint32, "hello-packets-sent"},
    resign_packets_sent{YType::uint32, "resign-packets-sent"},
    coup_packets_sent{YType::uint32, "coup-packets-sent"},
    hello_packets_received{YType::uint32, "hello-packets-received"},
    resign_packets_received{YType::uint32, "resign-packets-received"},
    coup_packets_received{YType::uint32, "coup-packets-received"},
    auth_fail_received{YType::uint32, "auth-fail-received"},
    invalid_timer_received{YType::uint32, "invalid-timer-received"},
    mismatch_virtual_ip_address_received{YType::uint32, "mismatch-virtual-ip-address-received"}
{

    yang_name = "statistics"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Groups::Group::Statistics::~Statistics()
{
}

bool Hsrp::Ipv4::Groups::Group::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return active_transitions.is_set
	|| standby_transitions.is_set
	|| speak_transitions.is_set
	|| listen_transitions.is_set
	|| learn_transitions.is_set
	|| init_transitions.is_set
	|| hello_packets_sent.is_set
	|| resign_packets_sent.is_set
	|| coup_packets_sent.is_set
	|| hello_packets_received.is_set
	|| resign_packets_received.is_set
	|| coup_packets_received.is_set
	|| auth_fail_received.is_set
	|| invalid_timer_received.is_set
	|| mismatch_virtual_ip_address_received.is_set;
}

bool Hsrp::Ipv4::Groups::Group::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_transitions.yfilter)
	|| ydk::is_set(standby_transitions.yfilter)
	|| ydk::is_set(speak_transitions.yfilter)
	|| ydk::is_set(listen_transitions.yfilter)
	|| ydk::is_set(learn_transitions.yfilter)
	|| ydk::is_set(init_transitions.yfilter)
	|| ydk::is_set(hello_packets_sent.yfilter)
	|| ydk::is_set(resign_packets_sent.yfilter)
	|| ydk::is_set(coup_packets_sent.yfilter)
	|| ydk::is_set(hello_packets_received.yfilter)
	|| ydk::is_set(resign_packets_received.yfilter)
	|| ydk::is_set(coup_packets_received.yfilter)
	|| ydk::is_set(auth_fail_received.yfilter)
	|| ydk::is_set(invalid_timer_received.yfilter)
	|| ydk::is_set(mismatch_virtual_ip_address_received.yfilter);
}

std::string Hsrp::Ipv4::Groups::Group::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_transitions.is_set || is_set(active_transitions.yfilter)) leaf_name_data.push_back(active_transitions.get_name_leafdata());
    if (standby_transitions.is_set || is_set(standby_transitions.yfilter)) leaf_name_data.push_back(standby_transitions.get_name_leafdata());
    if (speak_transitions.is_set || is_set(speak_transitions.yfilter)) leaf_name_data.push_back(speak_transitions.get_name_leafdata());
    if (listen_transitions.is_set || is_set(listen_transitions.yfilter)) leaf_name_data.push_back(listen_transitions.get_name_leafdata());
    if (learn_transitions.is_set || is_set(learn_transitions.yfilter)) leaf_name_data.push_back(learn_transitions.get_name_leafdata());
    if (init_transitions.is_set || is_set(init_transitions.yfilter)) leaf_name_data.push_back(init_transitions.get_name_leafdata());
    if (hello_packets_sent.is_set || is_set(hello_packets_sent.yfilter)) leaf_name_data.push_back(hello_packets_sent.get_name_leafdata());
    if (resign_packets_sent.is_set || is_set(resign_packets_sent.yfilter)) leaf_name_data.push_back(resign_packets_sent.get_name_leafdata());
    if (coup_packets_sent.is_set || is_set(coup_packets_sent.yfilter)) leaf_name_data.push_back(coup_packets_sent.get_name_leafdata());
    if (hello_packets_received.is_set || is_set(hello_packets_received.yfilter)) leaf_name_data.push_back(hello_packets_received.get_name_leafdata());
    if (resign_packets_received.is_set || is_set(resign_packets_received.yfilter)) leaf_name_data.push_back(resign_packets_received.get_name_leafdata());
    if (coup_packets_received.is_set || is_set(coup_packets_received.yfilter)) leaf_name_data.push_back(coup_packets_received.get_name_leafdata());
    if (auth_fail_received.is_set || is_set(auth_fail_received.yfilter)) leaf_name_data.push_back(auth_fail_received.get_name_leafdata());
    if (invalid_timer_received.is_set || is_set(invalid_timer_received.yfilter)) leaf_name_data.push_back(invalid_timer_received.get_name_leafdata());
    if (mismatch_virtual_ip_address_received.is_set || is_set(mismatch_virtual_ip_address_received.yfilter)) leaf_name_data.push_back(mismatch_virtual_ip_address_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::Groups::Group::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-transitions")
    {
        active_transitions = value;
        active_transitions.value_namespace = name_space;
        active_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-transitions")
    {
        standby_transitions = value;
        standby_transitions.value_namespace = name_space;
        standby_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speak-transitions")
    {
        speak_transitions = value;
        speak_transitions.value_namespace = name_space;
        speak_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listen-transitions")
    {
        listen_transitions = value;
        listen_transitions.value_namespace = name_space;
        listen_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-transitions")
    {
        learn_transitions = value;
        learn_transitions.value_namespace = name_space;
        learn_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-transitions")
    {
        init_transitions = value;
        init_transitions.value_namespace = name_space;
        init_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets-sent")
    {
        hello_packets_sent = value;
        hello_packets_sent.value_namespace = name_space;
        hello_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resign-packets-sent")
    {
        resign_packets_sent = value;
        resign_packets_sent.value_namespace = name_space;
        resign_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coup-packets-sent")
    {
        coup_packets_sent = value;
        coup_packets_sent.value_namespace = name_space;
        coup_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets-received")
    {
        hello_packets_received = value;
        hello_packets_received.value_namespace = name_space;
        hello_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resign-packets-received")
    {
        resign_packets_received = value;
        resign_packets_received.value_namespace = name_space;
        resign_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coup-packets-received")
    {
        coup_packets_received = value;
        coup_packets_received.value_namespace = name_space;
        coup_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-fail-received")
    {
        auth_fail_received = value;
        auth_fail_received.value_namespace = name_space;
        auth_fail_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer-received")
    {
        invalid_timer_received = value;
        invalid_timer_received.value_namespace = name_space;
        invalid_timer_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mismatch-virtual-ip-address-received")
    {
        mismatch_virtual_ip_address_received = value;
        mismatch_virtual_ip_address_received.value_namespace = name_space;
        mismatch_virtual_ip_address_received.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Groups::Group::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-transitions")
    {
        active_transitions.yfilter = yfilter;
    }
    if(value_path == "standby-transitions")
    {
        standby_transitions.yfilter = yfilter;
    }
    if(value_path == "speak-transitions")
    {
        speak_transitions.yfilter = yfilter;
    }
    if(value_path == "listen-transitions")
    {
        listen_transitions.yfilter = yfilter;
    }
    if(value_path == "learn-transitions")
    {
        learn_transitions.yfilter = yfilter;
    }
    if(value_path == "init-transitions")
    {
        init_transitions.yfilter = yfilter;
    }
    if(value_path == "hello-packets-sent")
    {
        hello_packets_sent.yfilter = yfilter;
    }
    if(value_path == "resign-packets-sent")
    {
        resign_packets_sent.yfilter = yfilter;
    }
    if(value_path == "coup-packets-sent")
    {
        coup_packets_sent.yfilter = yfilter;
    }
    if(value_path == "hello-packets-received")
    {
        hello_packets_received.yfilter = yfilter;
    }
    if(value_path == "resign-packets-received")
    {
        resign_packets_received.yfilter = yfilter;
    }
    if(value_path == "coup-packets-received")
    {
        coup_packets_received.yfilter = yfilter;
    }
    if(value_path == "auth-fail-received")
    {
        auth_fail_received.yfilter = yfilter;
    }
    if(value_path == "invalid-timer-received")
    {
        invalid_timer_received.yfilter = yfilter;
    }
    if(value_path == "mismatch-virtual-ip-address-received")
    {
        mismatch_virtual_ip_address_received.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-transitions" || name == "standby-transitions" || name == "speak-transitions" || name == "listen-transitions" || name == "learn-transitions" || name == "init-transitions" || name == "hello-packets-sent" || name == "resign-packets-sent" || name == "coup-packets-sent" || name == "hello-packets-received" || name == "resign-packets-received" || name == "coup-packets-received" || name == "auth-fail-received" || name == "invalid-timer-received" || name == "mismatch-virtual-ip-address-received")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::GlobalAddress::GlobalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "global-address"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Groups::Group::GlobalAddress::~GlobalAddress()
{
}

bool Hsrp::Ipv4::Groups::Group::GlobalAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Hsrp::Ipv4::Groups::Group::GlobalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Hsrp::Ipv4::Groups::Group::GlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::GlobalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::GlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::GlobalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::Groups::Group::GlobalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Groups::Group::GlobalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::GlobalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::StateChangeHistory::StateChangeHistory()
    :
    old_state{YType::enumeration, "old-state"},
    new_state{YType::enumeration, "new-state"},
    reason{YType::enumeration, "reason"}
        ,
    time(std::make_shared<Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time>())
{
    time->parent = this;

    yang_name = "state-change-history"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Groups::Group::StateChangeHistory::~StateChangeHistory()
{
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::has_data() const
{
    if (is_presence_container) return true;
    return old_state.is_set
	|| new_state.is_set
	|| reason.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(old_state.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Hsrp::Ipv4::Groups::Group::StateChangeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::StateChangeHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (old_state.is_set || is_set(old_state.yfilter)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::StateChangeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::StateChangeHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(time != nullptr)
    {
        _children["time"] = time;
    }

    return _children;
}

void Hsrp::Ipv4::Groups::Group::StateChangeHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "old-state")
    {
        old_state = value;
        old_state.value_namespace = name_space;
        old_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Groups::Group::StateChangeHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "old-state")
    {
        old_state.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "old-state" || name == "new-state" || name == "reason")
        return true;
    return false;
}

Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::Time()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "time"; yang_parent_name = "state-change-history"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::~Time()
{
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Groups::Group::StateChangeHistory::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv4::TrackedInterfaces::TrackedInterfaces()
    :
    tracked_interface(this, {"interface_name", "group_number", "tracked_interface_name"})
{

    yang_name = "tracked-interfaces"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv4::TrackedInterfaces::~TrackedInterfaces()
{
}

bool Hsrp::Ipv4::TrackedInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracked_interface.len(); index++)
    {
        if(tracked_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv4::TrackedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<tracked_interface.len(); index++)
    {
        if(tracked_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Hsrp::Ipv4::TrackedInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv4::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::TrackedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-interface")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv4::TrackedInterfaces::TrackedInterface>();
        ent_->parent = this;
        tracked_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::TrackedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracked_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::Ipv4::TrackedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Ipv4::TrackedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Ipv4::TrackedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-interface")
        return true;
    return false;
}

Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    interface_name{YType::str, "interface-name"},
    group_number{YType::uint32, "group-number"},
    tracked_interface_name{YType::str, "tracked-interface-name"},
    interface{YType::str, "interface"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    priority_decrement{YType::uint32, "priority-decrement"},
    interface_up_flag{YType::boolean, "interface-up-flag"},
    tracked_interface_name_xr{YType::str, "tracked-interface-name-xr"},
    is_object{YType::boolean, "is-object"}
{

    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::~TrackedInterface()
{
}

bool Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| group_number.is_set
	|| tracked_interface_name.is_set
	|| interface.is_set
	|| hsrp_group_number.is_set
	|| priority_decrement.is_set
	|| interface_up_flag.is_set
	|| tracked_interface_name_xr.is_set
	|| is_object.is_set;
}

bool Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(tracked_interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(hsrp_group_number.yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(interface_up_flag.yfilter)
	|| ydk::is_set(tracked_interface_name_xr.yfilter)
	|| ydk::is_set(is_object.yfilter);
}

std::string Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/tracked-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(group_number, "group-number");
    ADD_KEY_TOKEN(tracked_interface_name, "tracked-interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (tracked_interface_name.is_set || is_set(tracked_interface_name.yfilter)) leaf_name_data.push_back(tracked_interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.yfilter)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (interface_up_flag.is_set || is_set(interface_up_flag.yfilter)) leaf_name_data.push_back(interface_up_flag.get_name_leafdata());
    if (tracked_interface_name_xr.is_set || is_set(tracked_interface_name_xr.yfilter)) leaf_name_data.push_back(tracked_interface_name_xr.get_name_leafdata());
    if (is_object.is_set || is_set(is_object.yfilter)) leaf_name_data.push_back(is_object.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name = value;
        tracked_interface_name.value_namespace = name_space;
        tracked_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
        hsrp_group_number.value_namespace = name_space;
        hsrp_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag = value;
        interface_up_flag.value_namespace = name_space;
        interface_up_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-name-xr")
    {
        tracked_interface_name_xr = value;
        tracked_interface_name_xr.value_namespace = name_space;
        tracked_interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-object")
    {
        is_object = value;
        is_object.value_namespace = name_space;
        is_object.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-name-xr")
    {
        tracked_interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-object")
    {
        is_object.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::TrackedInterfaces::TrackedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "group-number" || name == "tracked-interface-name" || name == "interface" || name == "hsrp-group-number" || name == "priority-decrement" || name == "interface-up-flag" || name == "tracked-interface-name-xr" || name == "is-object")
        return true;
    return false;
}

Hsrp::Ipv4::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "ipv4"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv4::Interfaces::~Interfaces()
{
}

bool Hsrp::Ipv4::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv4::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Hsrp::Ipv4::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv4::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv4::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::Ipv4::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Ipv4::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Ipv4::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv4::Interfaces::Interface::~Interface()
{
}

bool Hsrp::Ipv4::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface.is_set
	|| use_bia_flag.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Hsrp::Ipv4::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(use_bia_flag.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Hsrp::Ipv4::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv4/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv4::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (use_bia_flag.is_set || is_set(use_bia_flag.yfilter)) leaf_name_data.push_back(use_bia_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Hsrp::Ipv4::Interfaces::Interface::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Hsrp::Ipv4::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-bia-flag")
    {
        use_bia_flag = value;
        use_bia_flag.value_namespace = name_space;
        use_bia_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "use-bia-flag")
    {
        use_bia_flag.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "interface-name" || name == "interface" || name == "use-bia-flag")
        return true;
    return false;
}

Hsrp::Ipv4::Interfaces::Interface::Statistics::Statistics()
    :
    advert_packets_sent{YType::uint32, "advert-packets-sent"},
    advert_packets_received{YType::uint32, "advert-packets-received"},
    long_packets_received{YType::uint32, "long-packets-received"},
    short_packets_received{YType::uint32, "short-packets-received"},
    invalid_version_received{YType::uint32, "invalid-version-received"},
    invalid_operation_code_received{YType::uint32, "invalid-operation-code-received"},
    unknown_group_received{YType::uint32, "unknown-group-received"},
    inoperational_group_received{YType::uint32, "inoperational-group-received"},
    conflict_source_ip_address_received{YType::uint32, "conflict-source-ip-address-received"}
{

    yang_name = "statistics"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv4::Interfaces::Interface::Statistics::~Statistics()
{
}

bool Hsrp::Ipv4::Interfaces::Interface::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return advert_packets_sent.is_set
	|| advert_packets_received.is_set
	|| long_packets_received.is_set
	|| short_packets_received.is_set
	|| invalid_version_received.is_set
	|| invalid_operation_code_received.is_set
	|| unknown_group_received.is_set
	|| inoperational_group_received.is_set
	|| conflict_source_ip_address_received.is_set;
}

bool Hsrp::Ipv4::Interfaces::Interface::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advert_packets_sent.yfilter)
	|| ydk::is_set(advert_packets_received.yfilter)
	|| ydk::is_set(long_packets_received.yfilter)
	|| ydk::is_set(short_packets_received.yfilter)
	|| ydk::is_set(invalid_version_received.yfilter)
	|| ydk::is_set(invalid_operation_code_received.yfilter)
	|| ydk::is_set(unknown_group_received.yfilter)
	|| ydk::is_set(inoperational_group_received.yfilter)
	|| ydk::is_set(conflict_source_ip_address_received.yfilter);
}

std::string Hsrp::Ipv4::Interfaces::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv4::Interfaces::Interface::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advert_packets_sent.is_set || is_set(advert_packets_sent.yfilter)) leaf_name_data.push_back(advert_packets_sent.get_name_leafdata());
    if (advert_packets_received.is_set || is_set(advert_packets_received.yfilter)) leaf_name_data.push_back(advert_packets_received.get_name_leafdata());
    if (long_packets_received.is_set || is_set(long_packets_received.yfilter)) leaf_name_data.push_back(long_packets_received.get_name_leafdata());
    if (short_packets_received.is_set || is_set(short_packets_received.yfilter)) leaf_name_data.push_back(short_packets_received.get_name_leafdata());
    if (invalid_version_received.is_set || is_set(invalid_version_received.yfilter)) leaf_name_data.push_back(invalid_version_received.get_name_leafdata());
    if (invalid_operation_code_received.is_set || is_set(invalid_operation_code_received.yfilter)) leaf_name_data.push_back(invalid_operation_code_received.get_name_leafdata());
    if (unknown_group_received.is_set || is_set(unknown_group_received.yfilter)) leaf_name_data.push_back(unknown_group_received.get_name_leafdata());
    if (inoperational_group_received.is_set || is_set(inoperational_group_received.yfilter)) leaf_name_data.push_back(inoperational_group_received.get_name_leafdata());
    if (conflict_source_ip_address_received.is_set || is_set(conflict_source_ip_address_received.yfilter)) leaf_name_data.push_back(conflict_source_ip_address_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv4::Interfaces::Interface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv4::Interfaces::Interface::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv4::Interfaces::Interface::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advert-packets-sent")
    {
        advert_packets_sent = value;
        advert_packets_sent.value_namespace = name_space;
        advert_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert-packets-received")
    {
        advert_packets_received = value;
        advert_packets_received.value_namespace = name_space;
        advert_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-packets-received")
    {
        long_packets_received = value;
        long_packets_received.value_namespace = name_space;
        long_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-packets-received")
    {
        short_packets_received = value;
        short_packets_received.value_namespace = name_space;
        short_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-version-received")
    {
        invalid_version_received = value;
        invalid_version_received.value_namespace = name_space;
        invalid_version_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-operation-code-received")
    {
        invalid_operation_code_received = value;
        invalid_operation_code_received.value_namespace = name_space;
        invalid_operation_code_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-group-received")
    {
        unknown_group_received = value;
        unknown_group_received.value_namespace = name_space;
        unknown_group_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inoperational-group-received")
    {
        inoperational_group_received = value;
        inoperational_group_received.value_namespace = name_space;
        inoperational_group_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-source-ip-address-received")
    {
        conflict_source_ip_address_received = value;
        conflict_source_ip_address_received.value_namespace = name_space;
        conflict_source_ip_address_received.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv4::Interfaces::Interface::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advert-packets-sent")
    {
        advert_packets_sent.yfilter = yfilter;
    }
    if(value_path == "advert-packets-received")
    {
        advert_packets_received.yfilter = yfilter;
    }
    if(value_path == "long-packets-received")
    {
        long_packets_received.yfilter = yfilter;
    }
    if(value_path == "short-packets-received")
    {
        short_packets_received.yfilter = yfilter;
    }
    if(value_path == "invalid-version-received")
    {
        invalid_version_received.yfilter = yfilter;
    }
    if(value_path == "invalid-operation-code-received")
    {
        invalid_operation_code_received.yfilter = yfilter;
    }
    if(value_path == "unknown-group-received")
    {
        unknown_group_received.yfilter = yfilter;
    }
    if(value_path == "inoperational-group-received")
    {
        inoperational_group_received.yfilter = yfilter;
    }
    if(value_path == "conflict-source-ip-address-received")
    {
        conflict_source_ip_address_received.yfilter = yfilter;
    }
}

bool Hsrp::Ipv4::Interfaces::Interface::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advert-packets-sent" || name == "advert-packets-received" || name == "long-packets-received" || name == "short-packets-received" || name == "invalid-version-received" || name == "invalid-operation-code-received" || name == "unknown-group-received" || name == "inoperational-group-received" || name == "conflict-source-ip-address-received")
        return true;
    return false;
}

Hsrp::MgoSessions::MgoSessions()
    :
    mgo_session(this, {"session_name"})
{

    yang_name = "mgo-sessions"; yang_parent_name = "hsrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::MgoSessions::~MgoSessions()
{
}

bool Hsrp::MgoSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mgo_session.len(); index++)
    {
        if(mgo_session[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::MgoSessions::has_operation() const
{
    for (std::size_t index=0; index<mgo_session.len(); index++)
    {
        if(mgo_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Hsrp::MgoSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::MgoSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgo-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::MgoSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::MgoSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mgo-session")
    {
        auto ent_ = std::make_shared<Hsrp::MgoSessions::MgoSession>();
        ent_->parent = this;
        mgo_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::MgoSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mgo_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::MgoSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::MgoSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::MgoSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mgo-session")
        return true;
    return false;
}

Hsrp::MgoSessions::MgoSession::MgoSession()
    :
    session_name{YType::str, "session-name"},
    primary_session_name{YType::str, "primary-session-name"},
    primary_session_interface{YType::str, "primary-session-interface"},
    primary_af_name{YType::enumeration, "primary-af-name"},
    primary_session_number{YType::uint32, "primary-session-number"},
    primary_session_state{YType::enumeration, "primary-session-state"}
        ,
    slave(this, {})
{

    yang_name = "mgo-session"; yang_parent_name = "mgo-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::MgoSessions::MgoSession::~MgoSession()
{
}

bool Hsrp::MgoSessions::MgoSession::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<slave.len(); index++)
    {
        if(slave[index]->has_data())
            return true;
    }
    return session_name.is_set
	|| primary_session_name.is_set
	|| primary_session_interface.is_set
	|| primary_af_name.is_set
	|| primary_session_number.is_set
	|| primary_session_state.is_set;
}

bool Hsrp::MgoSessions::MgoSession::has_operation() const
{
    for (std::size_t index=0; index<slave.len(); index++)
    {
        if(slave[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(primary_session_name.yfilter)
	|| ydk::is_set(primary_session_interface.yfilter)
	|| ydk::is_set(primary_af_name.yfilter)
	|| ydk::is_set(primary_session_number.yfilter)
	|| ydk::is_set(primary_session_state.yfilter);
}

std::string Hsrp::MgoSessions::MgoSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/mgo-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::MgoSessions::MgoSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mgo-session";
    ADD_KEY_TOKEN(session_name, "session-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::MgoSessions::MgoSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (primary_session_name.is_set || is_set(primary_session_name.yfilter)) leaf_name_data.push_back(primary_session_name.get_name_leafdata());
    if (primary_session_interface.is_set || is_set(primary_session_interface.yfilter)) leaf_name_data.push_back(primary_session_interface.get_name_leafdata());
    if (primary_af_name.is_set || is_set(primary_af_name.yfilter)) leaf_name_data.push_back(primary_af_name.get_name_leafdata());
    if (primary_session_number.is_set || is_set(primary_session_number.yfilter)) leaf_name_data.push_back(primary_session_number.get_name_leafdata());
    if (primary_session_state.is_set || is_set(primary_session_state.yfilter)) leaf_name_data.push_back(primary_session_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::MgoSessions::MgoSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "slave")
    {
        auto ent_ = std::make_shared<Hsrp::MgoSessions::MgoSession::Slave>();
        ent_->parent = this;
        slave.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::MgoSessions::MgoSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : slave.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::MgoSessions::MgoSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-session-name")
    {
        primary_session_name = value;
        primary_session_name.value_namespace = name_space;
        primary_session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-session-interface")
    {
        primary_session_interface = value;
        primary_session_interface.value_namespace = name_space;
        primary_session_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-af-name")
    {
        primary_af_name = value;
        primary_af_name.value_namespace = name_space;
        primary_af_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-session-number")
    {
        primary_session_number = value;
        primary_session_number.value_namespace = name_space;
        primary_session_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-session-state")
    {
        primary_session_state = value;
        primary_session_state.value_namespace = name_space;
        primary_session_state.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::MgoSessions::MgoSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "primary-session-name")
    {
        primary_session_name.yfilter = yfilter;
    }
    if(value_path == "primary-session-interface")
    {
        primary_session_interface.yfilter = yfilter;
    }
    if(value_path == "primary-af-name")
    {
        primary_af_name.yfilter = yfilter;
    }
    if(value_path == "primary-session-number")
    {
        primary_session_number.yfilter = yfilter;
    }
    if(value_path == "primary-session-state")
    {
        primary_session_state.yfilter = yfilter;
    }
}

bool Hsrp::MgoSessions::MgoSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave" || name == "session-name" || name == "primary-session-name" || name == "primary-session-interface" || name == "primary-af-name" || name == "primary-session-number" || name == "primary-session-state")
        return true;
    return false;
}

Hsrp::MgoSessions::MgoSession::Slave::Slave()
    :
    slave_group_interface{YType::str, "slave-group-interface"},
    slave_group_number{YType::uint32, "slave-group-number"}
{

    yang_name = "slave"; yang_parent_name = "mgo-session"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::MgoSessions::MgoSession::Slave::~Slave()
{
}

bool Hsrp::MgoSessions::MgoSession::Slave::has_data() const
{
    if (is_presence_container) return true;
    return slave_group_interface.is_set
	|| slave_group_number.is_set;
}

bool Hsrp::MgoSessions::MgoSession::Slave::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(slave_group_interface.yfilter)
	|| ydk::is_set(slave_group_number.yfilter);
}

std::string Hsrp::MgoSessions::MgoSession::Slave::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "slave";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::MgoSessions::MgoSession::Slave::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (slave_group_interface.is_set || is_set(slave_group_interface.yfilter)) leaf_name_data.push_back(slave_group_interface.get_name_leafdata());
    if (slave_group_number.is_set || is_set(slave_group_number.yfilter)) leaf_name_data.push_back(slave_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::MgoSessions::MgoSession::Slave::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::MgoSessions::MgoSession::Slave::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::MgoSessions::MgoSession::Slave::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "slave-group-interface")
    {
        slave_group_interface = value;
        slave_group_interface.value_namespace = name_space;
        slave_group_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slave-group-number")
    {
        slave_group_number = value;
        slave_group_number.value_namespace = name_space;
        slave_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::MgoSessions::MgoSession::Slave::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "slave-group-interface")
    {
        slave_group_interface.yfilter = yfilter;
    }
    if(value_path == "slave-group-number")
    {
        slave_group_number.yfilter = yfilter;
    }
}

bool Hsrp::MgoSessions::MgoSession::Slave::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "slave-group-interface" || name == "slave-group-number")
        return true;
    return false;
}

Hsrp::Ipv6::Ipv6()
    :
    tracked_interfaces(std::make_shared<Hsrp::Ipv6::TrackedInterfaces>())
    , groups(std::make_shared<Hsrp::Ipv6::Groups>())
    , interfaces(std::make_shared<Hsrp::Ipv6::Interfaces>())
{
    tracked_interfaces->parent = this;
    groups->parent = this;
    interfaces->parent = this;

    yang_name = "ipv6"; yang_parent_name = "hsrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv6::~Ipv6()
{
}

bool Hsrp::Ipv6::has_data() const
{
    if (is_presence_container) return true;
    return (tracked_interfaces !=  nullptr && tracked_interfaces->has_data())
	|| (groups !=  nullptr && groups->has_data())
	|| (interfaces !=  nullptr && interfaces->has_data());
}

bool Hsrp::Ipv6::has_operation() const
{
    return is_set(yfilter)
	|| (tracked_interfaces !=  nullptr && tracked_interfaces->has_operation())
	|| (groups !=  nullptr && groups->has_operation())
	|| (interfaces !=  nullptr && interfaces->has_operation());
}

std::string Hsrp::Ipv6::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv6::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv6";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-interfaces")
    {
        if(tracked_interfaces == nullptr)
        {
            tracked_interfaces = std::make_shared<Hsrp::Ipv6::TrackedInterfaces>();
        }
        return tracked_interfaces;
    }

    if(child_yang_name == "groups")
    {
        if(groups == nullptr)
        {
            groups = std::make_shared<Hsrp::Ipv6::Groups>();
        }
        return groups;
    }

    if(child_yang_name == "interfaces")
    {
        if(interfaces == nullptr)
        {
            interfaces = std::make_shared<Hsrp::Ipv6::Interfaces>();
        }
        return interfaces;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(tracked_interfaces != nullptr)
    {
        _children["tracked-interfaces"] = tracked_interfaces;
    }

    if(groups != nullptr)
    {
        _children["groups"] = groups;
    }

    if(interfaces != nullptr)
    {
        _children["interfaces"] = interfaces;
    }

    return _children;
}

void Hsrp::Ipv6::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Ipv6::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Ipv6::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-interfaces" || name == "groups" || name == "interfaces")
        return true;
    return false;
}

Hsrp::Ipv6::TrackedInterfaces::TrackedInterfaces()
    :
    tracked_interface(this, {"interface_name", "group_number", "tracked_interface_name"})
{

    yang_name = "tracked-interfaces"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv6::TrackedInterfaces::~TrackedInterfaces()
{
}

bool Hsrp::Ipv6::TrackedInterfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<tracked_interface.len(); index++)
    {
        if(tracked_interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv6::TrackedInterfaces::has_operation() const
{
    for (std::size_t index=0; index<tracked_interface.len(); index++)
    {
        if(tracked_interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Hsrp::Ipv6::TrackedInterfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv6::TrackedInterfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::TrackedInterfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::TrackedInterfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "tracked-interface")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv6::TrackedInterfaces::TrackedInterface>();
        ent_->parent = this;
        tracked_interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::TrackedInterfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : tracked_interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::Ipv6::TrackedInterfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Ipv6::TrackedInterfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Ipv6::TrackedInterfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "tracked-interface")
        return true;
    return false;
}

Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::TrackedInterface()
    :
    interface_name{YType::str, "interface-name"},
    group_number{YType::uint32, "group-number"},
    tracked_interface_name{YType::str, "tracked-interface-name"},
    interface{YType::str, "interface"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    priority_decrement{YType::uint32, "priority-decrement"},
    interface_up_flag{YType::boolean, "interface-up-flag"},
    tracked_interface_name_xr{YType::str, "tracked-interface-name-xr"},
    is_object{YType::boolean, "is-object"}
{

    yang_name = "tracked-interface"; yang_parent_name = "tracked-interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::~TrackedInterface()
{
}

bool Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| group_number.is_set
	|| tracked_interface_name.is_set
	|| interface.is_set
	|| hsrp_group_number.is_set
	|| priority_decrement.is_set
	|| interface_up_flag.is_set
	|| tracked_interface_name_xr.is_set
	|| is_object.is_set;
}

bool Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(tracked_interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(hsrp_group_number.yfilter)
	|| ydk::is_set(priority_decrement.yfilter)
	|| ydk::is_set(interface_up_flag.yfilter)
	|| ydk::is_set(tracked_interface_name_xr.yfilter)
	|| ydk::is_set(is_object.yfilter);
}

std::string Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/tracked-interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "tracked-interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(group_number, "group-number");
    ADD_KEY_TOKEN(tracked_interface_name, "tracked-interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (tracked_interface_name.is_set || is_set(tracked_interface_name.yfilter)) leaf_name_data.push_back(tracked_interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.yfilter)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (priority_decrement.is_set || is_set(priority_decrement.yfilter)) leaf_name_data.push_back(priority_decrement.get_name_leafdata());
    if (interface_up_flag.is_set || is_set(interface_up_flag.yfilter)) leaf_name_data.push_back(interface_up_flag.get_name_leafdata());
    if (tracked_interface_name_xr.is_set || is_set(tracked_interface_name_xr.yfilter)) leaf_name_data.push_back(tracked_interface_name_xr.get_name_leafdata());
    if (is_object.is_set || is_set(is_object.yfilter)) leaf_name_data.push_back(is_object.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name = value;
        tracked_interface_name.value_namespace = name_space;
        tracked_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
        hsrp_group_number.value_namespace = name_space;
        hsrp_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement = value;
        priority_decrement.value_namespace = name_space;
        priority_decrement.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag = value;
        interface_up_flag.value_namespace = name_space;
        interface_up_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-name-xr")
    {
        tracked_interface_name_xr = value;
        tracked_interface_name_xr.value_namespace = name_space;
        tracked_interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-object")
    {
        is_object = value;
        is_object.value_namespace = name_space;
        is_object.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-name")
    {
        tracked_interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number.yfilter = yfilter;
    }
    if(value_path == "priority-decrement")
    {
        priority_decrement.yfilter = yfilter;
    }
    if(value_path == "interface-up-flag")
    {
        interface_up_flag.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-name-xr")
    {
        tracked_interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "is-object")
    {
        is_object.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::TrackedInterfaces::TrackedInterface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "group-number" || name == "tracked-interface-name" || name == "interface" || name == "hsrp-group-number" || name == "priority-decrement" || name == "interface-up-flag" || name == "tracked-interface-name-xr" || name == "is-object")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Groups()
    :
    group(this, {"interface_name", "group_number"})
{

    yang_name = "groups"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv6::Groups::~Groups()
{
}

bool Hsrp::Ipv6::Groups::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv6::Groups::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Hsrp::Ipv6::Groups::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv6::Groups::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "groups";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv6::Groups::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::Ipv6::Groups::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Ipv6::Groups::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Ipv6::Groups::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::Group()
    :
    interface_name{YType::str, "interface-name"},
    group_number{YType::uint32, "group-number"},
    authentication_string{YType::str, "authentication-string"},
    virtual_mac_address{YType::str, "virtual-mac-address"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"},
    address_family{YType::enumeration, "address-family"},
    version{YType::uint8, "version"},
    session_name{YType::str, "session-name"},
    slaves{YType::uint32, "slaves"},
    is_slave{YType::boolean, "is-slave"},
    followed_session_name{YType::str, "followed-session-name"},
    configured_priority{YType::uint8, "configured-priority"},
    preempt_delay{YType::uint32, "preempt-delay"},
    preempt_timer_secs{YType::uint32, "preempt-timer-secs"},
    hello_time{YType::uint32, "hello-time"},
    hold_time{YType::uint32, "hold-time"},
    learned_hello_time{YType::uint32, "learned-hello-time"},
    learned_hold_time{YType::uint32, "learned-hold-time"},
    min_delay_time{YType::uint32, "min-delay-time"},
    reload_delay_time{YType::uint32, "reload-delay-time"},
    virtual_ip_address{YType::str, "virtual-ip-address"},
    virtual_linklocal_ipv6_address{YType::str, "virtual-linklocal-ipv6-address"},
    active_ip_address{YType::str, "active-ip-address"},
    active_ipv6_address{YType::str, "active-ipv6-address"},
    active_mac_address{YType::str, "active-mac-address"},
    standby_ip_address{YType::str, "standby-ip-address"},
    standby_ipv6_address{YType::str, "standby-ipv6-address"},
    standby_mac_address{YType::str, "standby-mac-address"},
    hsrp_router_state{YType::enumeration, "hsrp-router-state"},
    interface_name_xr{YType::str, "interface-name-xr"},
    interface{YType::str, "interface"},
    router_priority{YType::uint8, "router-priority"},
    active_priority{YType::uint8, "active-priority"},
    active_timer_flag{YType::boolean, "active-timer-flag"},
    active_timer_secs{YType::uint32, "active-timer-secs"},
    active_timer_msecs{YType::uint32, "active-timer-msecs"},
    standby_timer_flag{YType::boolean, "standby-timer-flag"},
    standby_timer_secs{YType::uint32, "standby-timer-secs"},
    standby_timer_msecs{YType::uint32, "standby-timer-msecs"},
    hello_timer_flag{YType::boolean, "hello-timer-flag"},
    hello_timer_secs{YType::uint32, "hello-timer-secs"},
    hello_timer_msecs{YType::uint32, "hello-timer-msecs"},
    delay_timer_flag{YType::boolean, "delay-timer-flag"},
    delay_timer_secs{YType::uint32, "delay-timer-secs"},
    delay_timer_msecs{YType::uint32, "delay-timer-msecs"},
    current_state_timer_secs{YType::uint32, "current-state-timer-secs"},
    state_change_count{YType::uint32, "state-change-count"},
    tracked_interface_count{YType::uint32, "tracked-interface-count"},
    tracked_interface_up_count{YType::uint32, "tracked-interface-up-count"},
    preempt_enabled{YType::boolean, "preempt-enabled"},
    use_configured_timers{YType::boolean, "use-configured-timers"},
    use_configured_virtual_ip{YType::boolean, "use-configured-virtual-ip"},
    use_bia_configured{YType::boolean, "use-bia-configured"},
    configured_timers{YType::boolean, "configured-timers"},
    configured_mac_address{YType::boolean, "configured-mac-address"},
    redirects_disabled{YType::boolean, "redirects-disabled"},
    bfd_enabled{YType::boolean, "bfd-enabled"},
    bfd_interface{YType::str, "bfd-interface"},
    bfd_peer_ip_address{YType::str, "bfd-peer-ip-address"},
    bfd_peer_ipv6_address{YType::str, "bfd-peer-ipv6-address"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"},
    virtual_mac_address_state{YType::enumeration, "virtual-mac-address-state"},
    secondary_address{YType::str, "secondary-address"}
        ,
    resign_sent_time(std::make_shared<Hsrp::Ipv6::Groups::Group::ResignSentTime>())
    , resign_received_time(std::make_shared<Hsrp::Ipv6::Groups::Group::ResignReceivedTime>())
    , coup_sent_time(std::make_shared<Hsrp::Ipv6::Groups::Group::CoupSentTime>())
    , coup_received_time(std::make_shared<Hsrp::Ipv6::Groups::Group::CoupReceivedTime>())
    , statistics(std::make_shared<Hsrp::Ipv6::Groups::Group::Statistics>())
    , global_address(this, {})
    , state_change_history(this, {})
{
    resign_sent_time->parent = this;
    resign_received_time->parent = this;
    coup_sent_time->parent = this;
    coup_received_time->parent = this;
    statistics->parent = this;

    yang_name = "group"; yang_parent_name = "groups"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv6::Groups::Group::~Group()
{
}

bool Hsrp::Ipv6::Groups::Group::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<global_address.len(); index++)
    {
        if(global_address[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.len(); index++)
    {
        if(state_change_history[index]->has_data())
            return true;
    }
    for (auto const & leaf : secondary_address.getYLeafs())
    {
        if(leaf.is_set)
            return true;
    }
    return interface_name.is_set
	|| group_number.is_set
	|| authentication_string.is_set
	|| virtual_mac_address.is_set
	|| hsrp_group_number.is_set
	|| address_family.is_set
	|| version.is_set
	|| session_name.is_set
	|| slaves.is_set
	|| is_slave.is_set
	|| followed_session_name.is_set
	|| configured_priority.is_set
	|| preempt_delay.is_set
	|| preempt_timer_secs.is_set
	|| hello_time.is_set
	|| hold_time.is_set
	|| learned_hello_time.is_set
	|| learned_hold_time.is_set
	|| min_delay_time.is_set
	|| reload_delay_time.is_set
	|| virtual_ip_address.is_set
	|| virtual_linklocal_ipv6_address.is_set
	|| active_ip_address.is_set
	|| active_ipv6_address.is_set
	|| active_mac_address.is_set
	|| standby_ip_address.is_set
	|| standby_ipv6_address.is_set
	|| standby_mac_address.is_set
	|| hsrp_router_state.is_set
	|| interface_name_xr.is_set
	|| interface.is_set
	|| router_priority.is_set
	|| active_priority.is_set
	|| active_timer_flag.is_set
	|| active_timer_secs.is_set
	|| active_timer_msecs.is_set
	|| standby_timer_flag.is_set
	|| standby_timer_secs.is_set
	|| standby_timer_msecs.is_set
	|| hello_timer_flag.is_set
	|| hello_timer_secs.is_set
	|| hello_timer_msecs.is_set
	|| delay_timer_flag.is_set
	|| delay_timer_secs.is_set
	|| delay_timer_msecs.is_set
	|| current_state_timer_secs.is_set
	|| state_change_count.is_set
	|| tracked_interface_count.is_set
	|| tracked_interface_up_count.is_set
	|| preempt_enabled.is_set
	|| use_configured_timers.is_set
	|| use_configured_virtual_ip.is_set
	|| use_bia_configured.is_set
	|| configured_timers.is_set
	|| configured_mac_address.is_set
	|| redirects_disabled.is_set
	|| bfd_enabled.is_set
	|| bfd_interface.is_set
	|| bfd_peer_ip_address.is_set
	|| bfd_peer_ipv6_address.is_set
	|| bfd_session_state.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set
	|| virtual_mac_address_state.is_set
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_data())
	|| (resign_received_time !=  nullptr && resign_received_time->has_data())
	|| (coup_sent_time !=  nullptr && coup_sent_time->has_data())
	|| (coup_received_time !=  nullptr && coup_received_time->has_data())
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Hsrp::Ipv6::Groups::Group::has_operation() const
{
    for (std::size_t index=0; index<global_address.len(); index++)
    {
        if(global_address[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<state_change_history.len(); index++)
    {
        if(state_change_history[index]->has_operation())
            return true;
    }
    for (auto const & leaf : secondary_address.getYLeafs())
    {
        if(is_set(leaf.yfilter))
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(group_number.yfilter)
	|| ydk::is_set(authentication_string.yfilter)
	|| ydk::is_set(virtual_mac_address.yfilter)
	|| ydk::is_set(hsrp_group_number.yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| ydk::is_set(version.yfilter)
	|| ydk::is_set(session_name.yfilter)
	|| ydk::is_set(slaves.yfilter)
	|| ydk::is_set(is_slave.yfilter)
	|| ydk::is_set(followed_session_name.yfilter)
	|| ydk::is_set(configured_priority.yfilter)
	|| ydk::is_set(preempt_delay.yfilter)
	|| ydk::is_set(preempt_timer_secs.yfilter)
	|| ydk::is_set(hello_time.yfilter)
	|| ydk::is_set(hold_time.yfilter)
	|| ydk::is_set(learned_hello_time.yfilter)
	|| ydk::is_set(learned_hold_time.yfilter)
	|| ydk::is_set(min_delay_time.yfilter)
	|| ydk::is_set(reload_delay_time.yfilter)
	|| ydk::is_set(virtual_ip_address.yfilter)
	|| ydk::is_set(virtual_linklocal_ipv6_address.yfilter)
	|| ydk::is_set(active_ip_address.yfilter)
	|| ydk::is_set(active_ipv6_address.yfilter)
	|| ydk::is_set(active_mac_address.yfilter)
	|| ydk::is_set(standby_ip_address.yfilter)
	|| ydk::is_set(standby_ipv6_address.yfilter)
	|| ydk::is_set(standby_mac_address.yfilter)
	|| ydk::is_set(hsrp_router_state.yfilter)
	|| ydk::is_set(interface_name_xr.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(router_priority.yfilter)
	|| ydk::is_set(active_priority.yfilter)
	|| ydk::is_set(active_timer_flag.yfilter)
	|| ydk::is_set(active_timer_secs.yfilter)
	|| ydk::is_set(active_timer_msecs.yfilter)
	|| ydk::is_set(standby_timer_flag.yfilter)
	|| ydk::is_set(standby_timer_secs.yfilter)
	|| ydk::is_set(standby_timer_msecs.yfilter)
	|| ydk::is_set(hello_timer_flag.yfilter)
	|| ydk::is_set(hello_timer_secs.yfilter)
	|| ydk::is_set(hello_timer_msecs.yfilter)
	|| ydk::is_set(delay_timer_flag.yfilter)
	|| ydk::is_set(delay_timer_secs.yfilter)
	|| ydk::is_set(delay_timer_msecs.yfilter)
	|| ydk::is_set(current_state_timer_secs.yfilter)
	|| ydk::is_set(state_change_count.yfilter)
	|| ydk::is_set(tracked_interface_count.yfilter)
	|| ydk::is_set(tracked_interface_up_count.yfilter)
	|| ydk::is_set(preempt_enabled.yfilter)
	|| ydk::is_set(use_configured_timers.yfilter)
	|| ydk::is_set(use_configured_virtual_ip.yfilter)
	|| ydk::is_set(use_bia_configured.yfilter)
	|| ydk::is_set(configured_timers.yfilter)
	|| ydk::is_set(configured_mac_address.yfilter)
	|| ydk::is_set(redirects_disabled.yfilter)
	|| ydk::is_set(bfd_enabled.yfilter)
	|| ydk::is_set(bfd_interface.yfilter)
	|| ydk::is_set(bfd_peer_ip_address.yfilter)
	|| ydk::is_set(bfd_peer_ipv6_address.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter)
	|| ydk::is_set(virtual_mac_address_state.yfilter)
	|| ydk::is_set(secondary_address.yfilter)
	|| (resign_sent_time !=  nullptr && resign_sent_time->has_operation())
	|| (resign_received_time !=  nullptr && resign_received_time->has_operation())
	|| (coup_sent_time !=  nullptr && coup_sent_time->has_operation())
	|| (coup_received_time !=  nullptr && coup_received_time->has_operation())
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Hsrp::Ipv6::Groups::Group::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/groups/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv6::Groups::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(group_number, "group-number");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (group_number.is_set || is_set(group_number.yfilter)) leaf_name_data.push_back(group_number.get_name_leafdata());
    if (authentication_string.is_set || is_set(authentication_string.yfilter)) leaf_name_data.push_back(authentication_string.get_name_leafdata());
    if (virtual_mac_address.is_set || is_set(virtual_mac_address.yfilter)) leaf_name_data.push_back(virtual_mac_address.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.yfilter)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());
    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());
    if (version.is_set || is_set(version.yfilter)) leaf_name_data.push_back(version.get_name_leafdata());
    if (session_name.is_set || is_set(session_name.yfilter)) leaf_name_data.push_back(session_name.get_name_leafdata());
    if (slaves.is_set || is_set(slaves.yfilter)) leaf_name_data.push_back(slaves.get_name_leafdata());
    if (is_slave.is_set || is_set(is_slave.yfilter)) leaf_name_data.push_back(is_slave.get_name_leafdata());
    if (followed_session_name.is_set || is_set(followed_session_name.yfilter)) leaf_name_data.push_back(followed_session_name.get_name_leafdata());
    if (configured_priority.is_set || is_set(configured_priority.yfilter)) leaf_name_data.push_back(configured_priority.get_name_leafdata());
    if (preempt_delay.is_set || is_set(preempt_delay.yfilter)) leaf_name_data.push_back(preempt_delay.get_name_leafdata());
    if (preempt_timer_secs.is_set || is_set(preempt_timer_secs.yfilter)) leaf_name_data.push_back(preempt_timer_secs.get_name_leafdata());
    if (hello_time.is_set || is_set(hello_time.yfilter)) leaf_name_data.push_back(hello_time.get_name_leafdata());
    if (hold_time.is_set || is_set(hold_time.yfilter)) leaf_name_data.push_back(hold_time.get_name_leafdata());
    if (learned_hello_time.is_set || is_set(learned_hello_time.yfilter)) leaf_name_data.push_back(learned_hello_time.get_name_leafdata());
    if (learned_hold_time.is_set || is_set(learned_hold_time.yfilter)) leaf_name_data.push_back(learned_hold_time.get_name_leafdata());
    if (min_delay_time.is_set || is_set(min_delay_time.yfilter)) leaf_name_data.push_back(min_delay_time.get_name_leafdata());
    if (reload_delay_time.is_set || is_set(reload_delay_time.yfilter)) leaf_name_data.push_back(reload_delay_time.get_name_leafdata());
    if (virtual_ip_address.is_set || is_set(virtual_ip_address.yfilter)) leaf_name_data.push_back(virtual_ip_address.get_name_leafdata());
    if (virtual_linklocal_ipv6_address.is_set || is_set(virtual_linklocal_ipv6_address.yfilter)) leaf_name_data.push_back(virtual_linklocal_ipv6_address.get_name_leafdata());
    if (active_ip_address.is_set || is_set(active_ip_address.yfilter)) leaf_name_data.push_back(active_ip_address.get_name_leafdata());
    if (active_ipv6_address.is_set || is_set(active_ipv6_address.yfilter)) leaf_name_data.push_back(active_ipv6_address.get_name_leafdata());
    if (active_mac_address.is_set || is_set(active_mac_address.yfilter)) leaf_name_data.push_back(active_mac_address.get_name_leafdata());
    if (standby_ip_address.is_set || is_set(standby_ip_address.yfilter)) leaf_name_data.push_back(standby_ip_address.get_name_leafdata());
    if (standby_ipv6_address.is_set || is_set(standby_ipv6_address.yfilter)) leaf_name_data.push_back(standby_ipv6_address.get_name_leafdata());
    if (standby_mac_address.is_set || is_set(standby_mac_address.yfilter)) leaf_name_data.push_back(standby_mac_address.get_name_leafdata());
    if (hsrp_router_state.is_set || is_set(hsrp_router_state.yfilter)) leaf_name_data.push_back(hsrp_router_state.get_name_leafdata());
    if (interface_name_xr.is_set || is_set(interface_name_xr.yfilter)) leaf_name_data.push_back(interface_name_xr.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (router_priority.is_set || is_set(router_priority.yfilter)) leaf_name_data.push_back(router_priority.get_name_leafdata());
    if (active_priority.is_set || is_set(active_priority.yfilter)) leaf_name_data.push_back(active_priority.get_name_leafdata());
    if (active_timer_flag.is_set || is_set(active_timer_flag.yfilter)) leaf_name_data.push_back(active_timer_flag.get_name_leafdata());
    if (active_timer_secs.is_set || is_set(active_timer_secs.yfilter)) leaf_name_data.push_back(active_timer_secs.get_name_leafdata());
    if (active_timer_msecs.is_set || is_set(active_timer_msecs.yfilter)) leaf_name_data.push_back(active_timer_msecs.get_name_leafdata());
    if (standby_timer_flag.is_set || is_set(standby_timer_flag.yfilter)) leaf_name_data.push_back(standby_timer_flag.get_name_leafdata());
    if (standby_timer_secs.is_set || is_set(standby_timer_secs.yfilter)) leaf_name_data.push_back(standby_timer_secs.get_name_leafdata());
    if (standby_timer_msecs.is_set || is_set(standby_timer_msecs.yfilter)) leaf_name_data.push_back(standby_timer_msecs.get_name_leafdata());
    if (hello_timer_flag.is_set || is_set(hello_timer_flag.yfilter)) leaf_name_data.push_back(hello_timer_flag.get_name_leafdata());
    if (hello_timer_secs.is_set || is_set(hello_timer_secs.yfilter)) leaf_name_data.push_back(hello_timer_secs.get_name_leafdata());
    if (hello_timer_msecs.is_set || is_set(hello_timer_msecs.yfilter)) leaf_name_data.push_back(hello_timer_msecs.get_name_leafdata());
    if (delay_timer_flag.is_set || is_set(delay_timer_flag.yfilter)) leaf_name_data.push_back(delay_timer_flag.get_name_leafdata());
    if (delay_timer_secs.is_set || is_set(delay_timer_secs.yfilter)) leaf_name_data.push_back(delay_timer_secs.get_name_leafdata());
    if (delay_timer_msecs.is_set || is_set(delay_timer_msecs.yfilter)) leaf_name_data.push_back(delay_timer_msecs.get_name_leafdata());
    if (current_state_timer_secs.is_set || is_set(current_state_timer_secs.yfilter)) leaf_name_data.push_back(current_state_timer_secs.get_name_leafdata());
    if (state_change_count.is_set || is_set(state_change_count.yfilter)) leaf_name_data.push_back(state_change_count.get_name_leafdata());
    if (tracked_interface_count.is_set || is_set(tracked_interface_count.yfilter)) leaf_name_data.push_back(tracked_interface_count.get_name_leafdata());
    if (tracked_interface_up_count.is_set || is_set(tracked_interface_up_count.yfilter)) leaf_name_data.push_back(tracked_interface_up_count.get_name_leafdata());
    if (preempt_enabled.is_set || is_set(preempt_enabled.yfilter)) leaf_name_data.push_back(preempt_enabled.get_name_leafdata());
    if (use_configured_timers.is_set || is_set(use_configured_timers.yfilter)) leaf_name_data.push_back(use_configured_timers.get_name_leafdata());
    if (use_configured_virtual_ip.is_set || is_set(use_configured_virtual_ip.yfilter)) leaf_name_data.push_back(use_configured_virtual_ip.get_name_leafdata());
    if (use_bia_configured.is_set || is_set(use_bia_configured.yfilter)) leaf_name_data.push_back(use_bia_configured.get_name_leafdata());
    if (configured_timers.is_set || is_set(configured_timers.yfilter)) leaf_name_data.push_back(configured_timers.get_name_leafdata());
    if (configured_mac_address.is_set || is_set(configured_mac_address.yfilter)) leaf_name_data.push_back(configured_mac_address.get_name_leafdata());
    if (redirects_disabled.is_set || is_set(redirects_disabled.yfilter)) leaf_name_data.push_back(redirects_disabled.get_name_leafdata());
    if (bfd_enabled.is_set || is_set(bfd_enabled.yfilter)) leaf_name_data.push_back(bfd_enabled.get_name_leafdata());
    if (bfd_interface.is_set || is_set(bfd_interface.yfilter)) leaf_name_data.push_back(bfd_interface.get_name_leafdata());
    if (bfd_peer_ip_address.is_set || is_set(bfd_peer_ip_address.yfilter)) leaf_name_data.push_back(bfd_peer_ip_address.get_name_leafdata());
    if (bfd_peer_ipv6_address.is_set || is_set(bfd_peer_ipv6_address.yfilter)) leaf_name_data.push_back(bfd_peer_ipv6_address.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());
    if (virtual_mac_address_state.is_set || is_set(virtual_mac_address_state.yfilter)) leaf_name_data.push_back(virtual_mac_address_state.get_name_leafdata());

    auto secondary_address_name_datas = secondary_address.get_name_leafdata();
    leaf_name_data.insert(leaf_name_data.end(), secondary_address_name_datas.begin(), secondary_address_name_datas.end());
    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "resign-sent-time")
    {
        if(resign_sent_time == nullptr)
        {
            resign_sent_time = std::make_shared<Hsrp::Ipv6::Groups::Group::ResignSentTime>();
        }
        return resign_sent_time;
    }

    if(child_yang_name == "resign-received-time")
    {
        if(resign_received_time == nullptr)
        {
            resign_received_time = std::make_shared<Hsrp::Ipv6::Groups::Group::ResignReceivedTime>();
        }
        return resign_received_time;
    }

    if(child_yang_name == "coup-sent-time")
    {
        if(coup_sent_time == nullptr)
        {
            coup_sent_time = std::make_shared<Hsrp::Ipv6::Groups::Group::CoupSentTime>();
        }
        return coup_sent_time;
    }

    if(child_yang_name == "coup-received-time")
    {
        if(coup_received_time == nullptr)
        {
            coup_received_time = std::make_shared<Hsrp::Ipv6::Groups::Group::CoupReceivedTime>();
        }
        return coup_received_time;
    }

    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Hsrp::Ipv6::Groups::Group::Statistics>();
        }
        return statistics;
    }

    if(child_yang_name == "global-address")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv6::Groups::Group::GlobalAddress>();
        ent_->parent = this;
        global_address.append(ent_);
        return ent_;
    }

    if(child_yang_name == "state-change-history")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv6::Groups::Group::StateChangeHistory>();
        ent_->parent = this;
        state_change_history.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(resign_sent_time != nullptr)
    {
        _children["resign-sent-time"] = resign_sent_time;
    }

    if(resign_received_time != nullptr)
    {
        _children["resign-received-time"] = resign_received_time;
    }

    if(coup_sent_time != nullptr)
    {
        _children["coup-sent-time"] = coup_sent_time;
    }

    if(coup_received_time != nullptr)
    {
        _children["coup-received-time"] = coup_received_time;
    }

    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    count_ = 0;
    for (auto ent_ : global_address.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : state_change_history.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::Ipv6::Groups::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "group-number")
    {
        group_number = value;
        group_number.value_namespace = name_space;
        group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authentication-string")
    {
        authentication_string = value;
        authentication_string.value_namespace = name_space;
        authentication_string.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address = value;
        virtual_mac_address.value_namespace = name_space;
        virtual_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
        hsrp_group_number.value_namespace = name_space;
        hsrp_group_number.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "version")
    {
        version = value;
        version.value_namespace = name_space;
        version.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-name")
    {
        session_name = value;
        session_name.value_namespace = name_space;
        session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "slaves")
    {
        slaves = value;
        slaves.value_namespace = name_space;
        slaves.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-slave")
    {
        is_slave = value;
        is_slave.value_namespace = name_space;
        is_slave.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name = value;
        followed_session_name.value_namespace = name_space;
        followed_session_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-priority")
    {
        configured_priority = value;
        configured_priority.value_namespace = name_space;
        configured_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay = value;
        preempt_delay.value_namespace = name_space;
        preempt_delay.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-timer-secs")
    {
        preempt_timer_secs = value;
        preempt_timer_secs.value_namespace = name_space;
        preempt_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-time")
    {
        hello_time = value;
        hello_time.value_namespace = name_space;
        hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hold-time")
    {
        hold_time = value;
        hold_time.value_namespace = name_space;
        hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learned-hello-time")
    {
        learned_hello_time = value;
        learned_hello_time.value_namespace = name_space;
        learned_hello_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learned-hold-time")
    {
        learned_hold_time = value;
        learned_hold_time.value_namespace = name_space;
        learned_hold_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time = value;
        min_delay_time.value_namespace = name_space;
        min_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time = value;
        reload_delay_time.value_namespace = name_space;
        reload_delay_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-ip-address")
    {
        virtual_ip_address = value;
        virtual_ip_address.value_namespace = name_space;
        virtual_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address = value;
        virtual_linklocal_ipv6_address.value_namespace = name_space;
        virtual_linklocal_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-ip-address")
    {
        active_ip_address = value;
        active_ip_address.value_namespace = name_space;
        active_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-ipv6-address")
    {
        active_ipv6_address = value;
        active_ipv6_address.value_namespace = name_space;
        active_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-mac-address")
    {
        active_mac_address = value;
        active_mac_address.value_namespace = name_space;
        active_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-ip-address")
    {
        standby_ip_address = value;
        standby_ip_address.value_namespace = name_space;
        standby_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-ipv6-address")
    {
        standby_ipv6_address = value;
        standby_ipv6_address.value_namespace = name_space;
        standby_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-mac-address")
    {
        standby_mac_address = value;
        standby_mac_address.value_namespace = name_space;
        standby_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp-router-state")
    {
        hsrp_router_state = value;
        hsrp_router_state.value_namespace = name_space;
        hsrp_router_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr = value;
        interface_name_xr.value_namespace = name_space;
        interface_name_xr.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "router-priority")
    {
        router_priority = value;
        router_priority.value_namespace = name_space;
        router_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-priority")
    {
        active_priority = value;
        active_priority.value_namespace = name_space;
        active_priority.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-timer-flag")
    {
        active_timer_flag = value;
        active_timer_flag.value_namespace = name_space;
        active_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-timer-secs")
    {
        active_timer_secs = value;
        active_timer_secs.value_namespace = name_space;
        active_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "active-timer-msecs")
    {
        active_timer_msecs = value;
        active_timer_msecs.value_namespace = name_space;
        active_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-timer-flag")
    {
        standby_timer_flag = value;
        standby_timer_flag.value_namespace = name_space;
        standby_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-timer-secs")
    {
        standby_timer_secs = value;
        standby_timer_secs.value_namespace = name_space;
        standby_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-timer-msecs")
    {
        standby_timer_msecs = value;
        standby_timer_msecs.value_namespace = name_space;
        standby_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer-flag")
    {
        hello_timer_flag = value;
        hello_timer_flag.value_namespace = name_space;
        hello_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer-secs")
    {
        hello_timer_secs = value;
        hello_timer_secs.value_namespace = name_space;
        hello_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-timer-msecs")
    {
        hello_timer_msecs = value;
        hello_timer_msecs.value_namespace = name_space;
        hello_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag = value;
        delay_timer_flag.value_namespace = name_space;
        delay_timer_flag.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs = value;
        delay_timer_secs.value_namespace = name_space;
        delay_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs = value;
        delay_timer_msecs.value_namespace = name_space;
        delay_timer_msecs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "current-state-timer-secs")
    {
        current_state_timer_secs = value;
        current_state_timer_secs.value_namespace = name_space;
        current_state_timer_secs.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "state-change-count")
    {
        state_change_count = value;
        state_change_count.value_namespace = name_space;
        state_change_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count = value;
        tracked_interface_count.value_namespace = name_space;
        tracked_interface_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count = value;
        tracked_interface_up_count.value_namespace = name_space;
        tracked_interface_up_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "preempt-enabled")
    {
        preempt_enabled = value;
        preempt_enabled.value_namespace = name_space;
        preempt_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-configured-timers")
    {
        use_configured_timers = value;
        use_configured_timers.value_namespace = name_space;
        use_configured_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-configured-virtual-ip")
    {
        use_configured_virtual_ip = value;
        use_configured_virtual_ip.value_namespace = name_space;
        use_configured_virtual_ip.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-bia-configured")
    {
        use_bia_configured = value;
        use_bia_configured.value_namespace = name_space;
        use_bia_configured.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-timers")
    {
        configured_timers = value;
        configured_timers.value_namespace = name_space;
        configured_timers.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "configured-mac-address")
    {
        configured_mac_address = value;
        configured_mac_address.value_namespace = name_space;
        configured_mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "redirects-disabled")
    {
        redirects_disabled = value;
        redirects_disabled.value_namespace = name_space;
        redirects_disabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled = value;
        bfd_enabled.value_namespace = name_space;
        bfd_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interface")
    {
        bfd_interface = value;
        bfd_interface.value_namespace = name_space;
        bfd_interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-peer-ip-address")
    {
        bfd_peer_ip_address = value;
        bfd_peer_ip_address.value_namespace = name_space;
        bfd_peer_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-peer-ipv6-address")
    {
        bfd_peer_ipv6_address = value;
        bfd_peer_ipv6_address.value_namespace = name_space;
        bfd_peer_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state = value;
        virtual_mac_address_state.value_namespace = name_space;
        virtual_mac_address_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-address")
    {
        secondary_address.append(value);
    }
}

void Hsrp::Ipv6::Groups::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "group-number")
    {
        group_number.yfilter = yfilter;
    }
    if(value_path == "authentication-string")
    {
        authentication_string.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address")
    {
        virtual_mac_address.yfilter = yfilter;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number.yfilter = yfilter;
    }
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
    if(value_path == "version")
    {
        version.yfilter = yfilter;
    }
    if(value_path == "session-name")
    {
        session_name.yfilter = yfilter;
    }
    if(value_path == "slaves")
    {
        slaves.yfilter = yfilter;
    }
    if(value_path == "is-slave")
    {
        is_slave.yfilter = yfilter;
    }
    if(value_path == "followed-session-name")
    {
        followed_session_name.yfilter = yfilter;
    }
    if(value_path == "configured-priority")
    {
        configured_priority.yfilter = yfilter;
    }
    if(value_path == "preempt-delay")
    {
        preempt_delay.yfilter = yfilter;
    }
    if(value_path == "preempt-timer-secs")
    {
        preempt_timer_secs.yfilter = yfilter;
    }
    if(value_path == "hello-time")
    {
        hello_time.yfilter = yfilter;
    }
    if(value_path == "hold-time")
    {
        hold_time.yfilter = yfilter;
    }
    if(value_path == "learned-hello-time")
    {
        learned_hello_time.yfilter = yfilter;
    }
    if(value_path == "learned-hold-time")
    {
        learned_hold_time.yfilter = yfilter;
    }
    if(value_path == "min-delay-time")
    {
        min_delay_time.yfilter = yfilter;
    }
    if(value_path == "reload-delay-time")
    {
        reload_delay_time.yfilter = yfilter;
    }
    if(value_path == "virtual-ip-address")
    {
        virtual_ip_address.yfilter = yfilter;
    }
    if(value_path == "virtual-linklocal-ipv6-address")
    {
        virtual_linklocal_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "active-ip-address")
    {
        active_ip_address.yfilter = yfilter;
    }
    if(value_path == "active-ipv6-address")
    {
        active_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "active-mac-address")
    {
        active_mac_address.yfilter = yfilter;
    }
    if(value_path == "standby-ip-address")
    {
        standby_ip_address.yfilter = yfilter;
    }
    if(value_path == "standby-ipv6-address")
    {
        standby_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "standby-mac-address")
    {
        standby_mac_address.yfilter = yfilter;
    }
    if(value_path == "hsrp-router-state")
    {
        hsrp_router_state.yfilter = yfilter;
    }
    if(value_path == "interface-name-xr")
    {
        interface_name_xr.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "router-priority")
    {
        router_priority.yfilter = yfilter;
    }
    if(value_path == "active-priority")
    {
        active_priority.yfilter = yfilter;
    }
    if(value_path == "active-timer-flag")
    {
        active_timer_flag.yfilter = yfilter;
    }
    if(value_path == "active-timer-secs")
    {
        active_timer_secs.yfilter = yfilter;
    }
    if(value_path == "active-timer-msecs")
    {
        active_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "standby-timer-flag")
    {
        standby_timer_flag.yfilter = yfilter;
    }
    if(value_path == "standby-timer-secs")
    {
        standby_timer_secs.yfilter = yfilter;
    }
    if(value_path == "standby-timer-msecs")
    {
        standby_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "hello-timer-flag")
    {
        hello_timer_flag.yfilter = yfilter;
    }
    if(value_path == "hello-timer-secs")
    {
        hello_timer_secs.yfilter = yfilter;
    }
    if(value_path == "hello-timer-msecs")
    {
        hello_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "delay-timer-flag")
    {
        delay_timer_flag.yfilter = yfilter;
    }
    if(value_path == "delay-timer-secs")
    {
        delay_timer_secs.yfilter = yfilter;
    }
    if(value_path == "delay-timer-msecs")
    {
        delay_timer_msecs.yfilter = yfilter;
    }
    if(value_path == "current-state-timer-secs")
    {
        current_state_timer_secs.yfilter = yfilter;
    }
    if(value_path == "state-change-count")
    {
        state_change_count.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-count")
    {
        tracked_interface_count.yfilter = yfilter;
    }
    if(value_path == "tracked-interface-up-count")
    {
        tracked_interface_up_count.yfilter = yfilter;
    }
    if(value_path == "preempt-enabled")
    {
        preempt_enabled.yfilter = yfilter;
    }
    if(value_path == "use-configured-timers")
    {
        use_configured_timers.yfilter = yfilter;
    }
    if(value_path == "use-configured-virtual-ip")
    {
        use_configured_virtual_ip.yfilter = yfilter;
    }
    if(value_path == "use-bia-configured")
    {
        use_bia_configured.yfilter = yfilter;
    }
    if(value_path == "configured-timers")
    {
        configured_timers.yfilter = yfilter;
    }
    if(value_path == "configured-mac-address")
    {
        configured_mac_address.yfilter = yfilter;
    }
    if(value_path == "redirects-disabled")
    {
        redirects_disabled.yfilter = yfilter;
    }
    if(value_path == "bfd-enabled")
    {
        bfd_enabled.yfilter = yfilter;
    }
    if(value_path == "bfd-interface")
    {
        bfd_interface.yfilter = yfilter;
    }
    if(value_path == "bfd-peer-ip-address")
    {
        bfd_peer_ip_address.yfilter = yfilter;
    }
    if(value_path == "bfd-peer-ipv6-address")
    {
        bfd_peer_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
    if(value_path == "virtual-mac-address-state")
    {
        virtual_mac_address_state.yfilter = yfilter;
    }
    if(value_path == "secondary-address")
    {
        secondary_address.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "resign-sent-time" || name == "resign-received-time" || name == "coup-sent-time" || name == "coup-received-time" || name == "statistics" || name == "global-address" || name == "state-change-history" || name == "interface-name" || name == "group-number" || name == "authentication-string" || name == "virtual-mac-address" || name == "hsrp-group-number" || name == "address-family" || name == "version" || name == "session-name" || name == "slaves" || name == "is-slave" || name == "followed-session-name" || name == "configured-priority" || name == "preempt-delay" || name == "preempt-timer-secs" || name == "hello-time" || name == "hold-time" || name == "learned-hello-time" || name == "learned-hold-time" || name == "min-delay-time" || name == "reload-delay-time" || name == "virtual-ip-address" || name == "virtual-linklocal-ipv6-address" || name == "active-ip-address" || name == "active-ipv6-address" || name == "active-mac-address" || name == "standby-ip-address" || name == "standby-ipv6-address" || name == "standby-mac-address" || name == "hsrp-router-state" || name == "interface-name-xr" || name == "interface" || name == "router-priority" || name == "active-priority" || name == "active-timer-flag" || name == "active-timer-secs" || name == "active-timer-msecs" || name == "standby-timer-flag" || name == "standby-timer-secs" || name == "standby-timer-msecs" || name == "hello-timer-flag" || name == "hello-timer-secs" || name == "hello-timer-msecs" || name == "delay-timer-flag" || name == "delay-timer-secs" || name == "delay-timer-msecs" || name == "current-state-timer-secs" || name == "state-change-count" || name == "tracked-interface-count" || name == "tracked-interface-up-count" || name == "preempt-enabled" || name == "use-configured-timers" || name == "use-configured-virtual-ip" || name == "use-bia-configured" || name == "configured-timers" || name == "configured-mac-address" || name == "redirects-disabled" || name == "bfd-enabled" || name == "bfd-interface" || name == "bfd-peer-ip-address" || name == "bfd-peer-ipv6-address" || name == "bfd-session-state" || name == "bfd-interval" || name == "bfd-multiplier" || name == "virtual-mac-address-state" || name == "secondary-address")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::ResignSentTime::ResignSentTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "resign-sent-time"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Groups::Group::ResignSentTime::~ResignSentTime()
{
}

bool Hsrp::Ipv6::Groups::Group::ResignSentTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::ResignSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv6::Groups::Group::ResignSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::ResignSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::ResignSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::ResignSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::Groups::Group::ResignSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Groups::Group::ResignSentTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::ResignSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::ResignReceivedTime::ResignReceivedTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "resign-received-time"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Groups::Group::ResignReceivedTime::~ResignReceivedTime()
{
}

bool Hsrp::Ipv6::Groups::Group::ResignReceivedTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::ResignReceivedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv6::Groups::Group::ResignReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "resign-received-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::ResignReceivedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::ResignReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::ResignReceivedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::Groups::Group::ResignReceivedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Groups::Group::ResignReceivedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::ResignReceivedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::CoupSentTime::CoupSentTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "coup-sent-time"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Groups::Group::CoupSentTime::~CoupSentTime()
{
}

bool Hsrp::Ipv6::Groups::Group::CoupSentTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::CoupSentTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv6::Groups::Group::CoupSentTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coup-sent-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::CoupSentTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::CoupSentTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::CoupSentTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::Groups::Group::CoupSentTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Groups::Group::CoupSentTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::CoupSentTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::CoupReceivedTime::CoupReceivedTime()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "coup-received-time"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Groups::Group::CoupReceivedTime::~CoupReceivedTime()
{
}

bool Hsrp::Ipv6::Groups::Group::CoupReceivedTime::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::CoupReceivedTime::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv6::Groups::Group::CoupReceivedTime::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "coup-received-time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::CoupReceivedTime::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::CoupReceivedTime::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::CoupReceivedTime::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::Groups::Group::CoupReceivedTime::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Groups::Group::CoupReceivedTime::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::CoupReceivedTime::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::Statistics::Statistics()
    :
    active_transitions{YType::uint32, "active-transitions"},
    standby_transitions{YType::uint32, "standby-transitions"},
    speak_transitions{YType::uint32, "speak-transitions"},
    listen_transitions{YType::uint32, "listen-transitions"},
    learn_transitions{YType::uint32, "learn-transitions"},
    init_transitions{YType::uint32, "init-transitions"},
    hello_packets_sent{YType::uint32, "hello-packets-sent"},
    resign_packets_sent{YType::uint32, "resign-packets-sent"},
    coup_packets_sent{YType::uint32, "coup-packets-sent"},
    hello_packets_received{YType::uint32, "hello-packets-received"},
    resign_packets_received{YType::uint32, "resign-packets-received"},
    coup_packets_received{YType::uint32, "coup-packets-received"},
    auth_fail_received{YType::uint32, "auth-fail-received"},
    invalid_timer_received{YType::uint32, "invalid-timer-received"},
    mismatch_virtual_ip_address_received{YType::uint32, "mismatch-virtual-ip-address-received"}
{

    yang_name = "statistics"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Groups::Group::Statistics::~Statistics()
{
}

bool Hsrp::Ipv6::Groups::Group::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return active_transitions.is_set
	|| standby_transitions.is_set
	|| speak_transitions.is_set
	|| listen_transitions.is_set
	|| learn_transitions.is_set
	|| init_transitions.is_set
	|| hello_packets_sent.is_set
	|| resign_packets_sent.is_set
	|| coup_packets_sent.is_set
	|| hello_packets_received.is_set
	|| resign_packets_received.is_set
	|| coup_packets_received.is_set
	|| auth_fail_received.is_set
	|| invalid_timer_received.is_set
	|| mismatch_virtual_ip_address_received.is_set;
}

bool Hsrp::Ipv6::Groups::Group::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(active_transitions.yfilter)
	|| ydk::is_set(standby_transitions.yfilter)
	|| ydk::is_set(speak_transitions.yfilter)
	|| ydk::is_set(listen_transitions.yfilter)
	|| ydk::is_set(learn_transitions.yfilter)
	|| ydk::is_set(init_transitions.yfilter)
	|| ydk::is_set(hello_packets_sent.yfilter)
	|| ydk::is_set(resign_packets_sent.yfilter)
	|| ydk::is_set(coup_packets_sent.yfilter)
	|| ydk::is_set(hello_packets_received.yfilter)
	|| ydk::is_set(resign_packets_received.yfilter)
	|| ydk::is_set(coup_packets_received.yfilter)
	|| ydk::is_set(auth_fail_received.yfilter)
	|| ydk::is_set(invalid_timer_received.yfilter)
	|| ydk::is_set(mismatch_virtual_ip_address_received.yfilter);
}

std::string Hsrp::Ipv6::Groups::Group::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (active_transitions.is_set || is_set(active_transitions.yfilter)) leaf_name_data.push_back(active_transitions.get_name_leafdata());
    if (standby_transitions.is_set || is_set(standby_transitions.yfilter)) leaf_name_data.push_back(standby_transitions.get_name_leafdata());
    if (speak_transitions.is_set || is_set(speak_transitions.yfilter)) leaf_name_data.push_back(speak_transitions.get_name_leafdata());
    if (listen_transitions.is_set || is_set(listen_transitions.yfilter)) leaf_name_data.push_back(listen_transitions.get_name_leafdata());
    if (learn_transitions.is_set || is_set(learn_transitions.yfilter)) leaf_name_data.push_back(learn_transitions.get_name_leafdata());
    if (init_transitions.is_set || is_set(init_transitions.yfilter)) leaf_name_data.push_back(init_transitions.get_name_leafdata());
    if (hello_packets_sent.is_set || is_set(hello_packets_sent.yfilter)) leaf_name_data.push_back(hello_packets_sent.get_name_leafdata());
    if (resign_packets_sent.is_set || is_set(resign_packets_sent.yfilter)) leaf_name_data.push_back(resign_packets_sent.get_name_leafdata());
    if (coup_packets_sent.is_set || is_set(coup_packets_sent.yfilter)) leaf_name_data.push_back(coup_packets_sent.get_name_leafdata());
    if (hello_packets_received.is_set || is_set(hello_packets_received.yfilter)) leaf_name_data.push_back(hello_packets_received.get_name_leafdata());
    if (resign_packets_received.is_set || is_set(resign_packets_received.yfilter)) leaf_name_data.push_back(resign_packets_received.get_name_leafdata());
    if (coup_packets_received.is_set || is_set(coup_packets_received.yfilter)) leaf_name_data.push_back(coup_packets_received.get_name_leafdata());
    if (auth_fail_received.is_set || is_set(auth_fail_received.yfilter)) leaf_name_data.push_back(auth_fail_received.get_name_leafdata());
    if (invalid_timer_received.is_set || is_set(invalid_timer_received.yfilter)) leaf_name_data.push_back(invalid_timer_received.get_name_leafdata());
    if (mismatch_virtual_ip_address_received.is_set || is_set(mismatch_virtual_ip_address_received.yfilter)) leaf_name_data.push_back(mismatch_virtual_ip_address_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::Groups::Group::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "active-transitions")
    {
        active_transitions = value;
        active_transitions.value_namespace = name_space;
        active_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "standby-transitions")
    {
        standby_transitions = value;
        standby_transitions.value_namespace = name_space;
        standby_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "speak-transitions")
    {
        speak_transitions = value;
        speak_transitions.value_namespace = name_space;
        speak_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "listen-transitions")
    {
        listen_transitions = value;
        listen_transitions.value_namespace = name_space;
        listen_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "learn-transitions")
    {
        learn_transitions = value;
        learn_transitions.value_namespace = name_space;
        learn_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "init-transitions")
    {
        init_transitions = value;
        init_transitions.value_namespace = name_space;
        init_transitions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets-sent")
    {
        hello_packets_sent = value;
        hello_packets_sent.value_namespace = name_space;
        hello_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resign-packets-sent")
    {
        resign_packets_sent = value;
        resign_packets_sent.value_namespace = name_space;
        resign_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coup-packets-sent")
    {
        coup_packets_sent = value;
        coup_packets_sent.value_namespace = name_space;
        coup_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hello-packets-received")
    {
        hello_packets_received = value;
        hello_packets_received.value_namespace = name_space;
        hello_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "resign-packets-received")
    {
        resign_packets_received = value;
        resign_packets_received.value_namespace = name_space;
        resign_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coup-packets-received")
    {
        coup_packets_received = value;
        coup_packets_received.value_namespace = name_space;
        coup_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "auth-fail-received")
    {
        auth_fail_received = value;
        auth_fail_received.value_namespace = name_space;
        auth_fail_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-timer-received")
    {
        invalid_timer_received = value;
        invalid_timer_received.value_namespace = name_space;
        invalid_timer_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mismatch-virtual-ip-address-received")
    {
        mismatch_virtual_ip_address_received = value;
        mismatch_virtual_ip_address_received.value_namespace = name_space;
        mismatch_virtual_ip_address_received.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Groups::Group::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "active-transitions")
    {
        active_transitions.yfilter = yfilter;
    }
    if(value_path == "standby-transitions")
    {
        standby_transitions.yfilter = yfilter;
    }
    if(value_path == "speak-transitions")
    {
        speak_transitions.yfilter = yfilter;
    }
    if(value_path == "listen-transitions")
    {
        listen_transitions.yfilter = yfilter;
    }
    if(value_path == "learn-transitions")
    {
        learn_transitions.yfilter = yfilter;
    }
    if(value_path == "init-transitions")
    {
        init_transitions.yfilter = yfilter;
    }
    if(value_path == "hello-packets-sent")
    {
        hello_packets_sent.yfilter = yfilter;
    }
    if(value_path == "resign-packets-sent")
    {
        resign_packets_sent.yfilter = yfilter;
    }
    if(value_path == "coup-packets-sent")
    {
        coup_packets_sent.yfilter = yfilter;
    }
    if(value_path == "hello-packets-received")
    {
        hello_packets_received.yfilter = yfilter;
    }
    if(value_path == "resign-packets-received")
    {
        resign_packets_received.yfilter = yfilter;
    }
    if(value_path == "coup-packets-received")
    {
        coup_packets_received.yfilter = yfilter;
    }
    if(value_path == "auth-fail-received")
    {
        auth_fail_received.yfilter = yfilter;
    }
    if(value_path == "invalid-timer-received")
    {
        invalid_timer_received.yfilter = yfilter;
    }
    if(value_path == "mismatch-virtual-ip-address-received")
    {
        mismatch_virtual_ip_address_received.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "active-transitions" || name == "standby-transitions" || name == "speak-transitions" || name == "listen-transitions" || name == "learn-transitions" || name == "init-transitions" || name == "hello-packets-sent" || name == "resign-packets-sent" || name == "coup-packets-sent" || name == "hello-packets-received" || name == "resign-packets-received" || name == "coup-packets-received" || name == "auth-fail-received" || name == "invalid-timer-received" || name == "mismatch-virtual-ip-address-received")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::GlobalAddress::GlobalAddress()
    :
    ipv6_address{YType::str, "ipv6-address"}
{

    yang_name = "global-address"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Groups::Group::GlobalAddress::~GlobalAddress()
{
}

bool Hsrp::Ipv6::Groups::Group::GlobalAddress::has_data() const
{
    if (is_presence_container) return true;
    return ipv6_address.is_set;
}

bool Hsrp::Ipv6::Groups::Group::GlobalAddress::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv6_address.yfilter);
}

std::string Hsrp::Ipv6::Groups::Group::GlobalAddress::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "global-address";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::GlobalAddress::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv6_address.is_set || is_set(ipv6_address.yfilter)) leaf_name_data.push_back(ipv6_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::GlobalAddress::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::GlobalAddress::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::Groups::Group::GlobalAddress::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address = value;
        ipv6_address.value_namespace = name_space;
        ipv6_address.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Groups::Group::GlobalAddress::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv6-address")
    {
        ipv6_address.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::GlobalAddress::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv6-address")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::StateChangeHistory::StateChangeHistory()
    :
    old_state{YType::enumeration, "old-state"},
    new_state{YType::enumeration, "new-state"},
    reason{YType::enumeration, "reason"}
        ,
    time(std::make_shared<Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time>())
{
    time->parent = this;

    yang_name = "state-change-history"; yang_parent_name = "group"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Groups::Group::StateChangeHistory::~StateChangeHistory()
{
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::has_data() const
{
    if (is_presence_container) return true;
    return old_state.is_set
	|| new_state.is_set
	|| reason.is_set
	|| (time !=  nullptr && time->has_data());
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(old_state.yfilter)
	|| ydk::is_set(new_state.yfilter)
	|| ydk::is_set(reason.yfilter)
	|| (time !=  nullptr && time->has_operation());
}

std::string Hsrp::Ipv6::Groups::Group::StateChangeHistory::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-change-history";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::StateChangeHistory::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (old_state.is_set || is_set(old_state.yfilter)) leaf_name_data.push_back(old_state.get_name_leafdata());
    if (new_state.is_set || is_set(new_state.yfilter)) leaf_name_data.push_back(new_state.get_name_leafdata());
    if (reason.is_set || is_set(reason.yfilter)) leaf_name_data.push_back(reason.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::StateChangeHistory::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "time")
    {
        if(time == nullptr)
        {
            time = std::make_shared<Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time>();
        }
        return time;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::StateChangeHistory::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(time != nullptr)
    {
        _children["time"] = time;
    }

    return _children;
}

void Hsrp::Ipv6::Groups::Group::StateChangeHistory::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "old-state")
    {
        old_state = value;
        old_state.value_namespace = name_space;
        old_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "new-state")
    {
        new_state = value;
        new_state.value_namespace = name_space;
        new_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reason")
    {
        reason = value;
        reason.value_namespace = name_space;
        reason.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Groups::Group::StateChangeHistory::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "old-state")
    {
        old_state.yfilter = yfilter;
    }
    if(value_path == "new-state")
    {
        new_state.yfilter = yfilter;
    }
    if(value_path == "reason")
    {
        reason.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "time" || name == "old-state" || name == "new-state" || name == "reason")
        return true;
    return false;
}

Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::Time()
    :
    seconds{YType::uint32, "seconds"},
    nanoseconds{YType::uint32, "nanoseconds"}
{

    yang_name = "time"; yang_parent_name = "state-change-history"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::~Time()
{
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::has_data() const
{
    if (is_presence_container) return true;
    return seconds.is_set
	|| nanoseconds.is_set;
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(seconds.yfilter)
	|| ydk::is_set(nanoseconds.yfilter);
}

std::string Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "time";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (seconds.is_set || is_set(seconds.yfilter)) leaf_name_data.push_back(seconds.get_name_leafdata());
    if (nanoseconds.is_set || is_set(nanoseconds.yfilter)) leaf_name_data.push_back(nanoseconds.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "seconds")
    {
        seconds = value;
        seconds.value_namespace = name_space;
        seconds.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds = value;
        nanoseconds.value_namespace = name_space;
        nanoseconds.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "seconds")
    {
        seconds.yfilter = yfilter;
    }
    if(value_path == "nanoseconds")
    {
        nanoseconds.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Groups::Group::StateChangeHistory::Time::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "seconds" || name == "nanoseconds")
        return true;
    return false;
}

Hsrp::Ipv6::Interfaces::Interfaces()
    :
    interface(this, {"interface_name"})
{

    yang_name = "interfaces"; yang_parent_name = "ipv6"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv6::Interfaces::~Interfaces()
{
}

bool Hsrp::Ipv6::Interfaces::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::Ipv6::Interfaces::has_operation() const
{
    for (std::size_t index=0; index<interface.len(); index++)
    {
        if(interface[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Hsrp::Ipv6::Interfaces::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv6::Interfaces::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interfaces";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Interfaces::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Interfaces::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface")
    {
        auto ent_ = std::make_shared<Hsrp::Ipv6::Interfaces::Interface>();
        ent_->parent = this;
        interface.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Interfaces::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::Ipv6::Interfaces::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::Ipv6::Interfaces::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::Ipv6::Interfaces::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface")
        return true;
    return false;
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

    yang_name = "interface"; yang_parent_name = "interfaces"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Ipv6::Interfaces::Interface::~Interface()
{
}

bool Hsrp::Ipv6::Interfaces::Interface::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| interface.is_set
	|| use_bia_flag.is_set
	|| (statistics !=  nullptr && statistics->has_data());
}

bool Hsrp::Ipv6::Interfaces::Interface::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface.yfilter)
	|| ydk::is_set(use_bia_flag.yfilter)
	|| (statistics !=  nullptr && statistics->has_operation());
}

std::string Hsrp::Ipv6::Interfaces::Interface::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/ipv6/interfaces/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Ipv6::Interfaces::Interface::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Interfaces::Interface::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface.is_set || is_set(interface.yfilter)) leaf_name_data.push_back(interface.get_name_leafdata());
    if (use_bia_flag.is_set || is_set(use_bia_flag.yfilter)) leaf_name_data.push_back(use_bia_flag.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Interfaces::Interface::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "statistics")
    {
        if(statistics == nullptr)
        {
            statistics = std::make_shared<Hsrp::Ipv6::Interfaces::Interface::Statistics>();
        }
        return statistics;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Interfaces::Interface::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(statistics != nullptr)
    {
        _children["statistics"] = statistics;
    }

    return _children;
}

void Hsrp::Ipv6::Interfaces::Interface::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface")
    {
        interface = value;
        interface.value_namespace = name_space;
        interface.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "use-bia-flag")
    {
        use_bia_flag = value;
        use_bia_flag.value_namespace = name_space;
        use_bia_flag.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Interfaces::Interface::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface")
    {
        interface.yfilter = yfilter;
    }
    if(value_path == "use-bia-flag")
    {
        use_bia_flag.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Interfaces::Interface::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "statistics" || name == "interface-name" || name == "interface" || name == "use-bia-flag")
        return true;
    return false;
}

Hsrp::Ipv6::Interfaces::Interface::Statistics::Statistics()
    :
    advert_packets_sent{YType::uint32, "advert-packets-sent"},
    advert_packets_received{YType::uint32, "advert-packets-received"},
    long_packets_received{YType::uint32, "long-packets-received"},
    short_packets_received{YType::uint32, "short-packets-received"},
    invalid_version_received{YType::uint32, "invalid-version-received"},
    invalid_operation_code_received{YType::uint32, "invalid-operation-code-received"},
    unknown_group_received{YType::uint32, "unknown-group-received"},
    inoperational_group_received{YType::uint32, "inoperational-group-received"},
    conflict_source_ip_address_received{YType::uint32, "conflict-source-ip-address-received"}
{

    yang_name = "statistics"; yang_parent_name = "interface"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::Ipv6::Interfaces::Interface::Statistics::~Statistics()
{
}

bool Hsrp::Ipv6::Interfaces::Interface::Statistics::has_data() const
{
    if (is_presence_container) return true;
    return advert_packets_sent.is_set
	|| advert_packets_received.is_set
	|| long_packets_received.is_set
	|| short_packets_received.is_set
	|| invalid_version_received.is_set
	|| invalid_operation_code_received.is_set
	|| unknown_group_received.is_set
	|| inoperational_group_received.is_set
	|| conflict_source_ip_address_received.is_set;
}

bool Hsrp::Ipv6::Interfaces::Interface::Statistics::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(advert_packets_sent.yfilter)
	|| ydk::is_set(advert_packets_received.yfilter)
	|| ydk::is_set(long_packets_received.yfilter)
	|| ydk::is_set(short_packets_received.yfilter)
	|| ydk::is_set(invalid_version_received.yfilter)
	|| ydk::is_set(invalid_operation_code_received.yfilter)
	|| ydk::is_set(unknown_group_received.yfilter)
	|| ydk::is_set(inoperational_group_received.yfilter)
	|| ydk::is_set(conflict_source_ip_address_received.yfilter);
}

std::string Hsrp::Ipv6::Interfaces::Interface::Statistics::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "statistics";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Ipv6::Interfaces::Interface::Statistics::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (advert_packets_sent.is_set || is_set(advert_packets_sent.yfilter)) leaf_name_data.push_back(advert_packets_sent.get_name_leafdata());
    if (advert_packets_received.is_set || is_set(advert_packets_received.yfilter)) leaf_name_data.push_back(advert_packets_received.get_name_leafdata());
    if (long_packets_received.is_set || is_set(long_packets_received.yfilter)) leaf_name_data.push_back(long_packets_received.get_name_leafdata());
    if (short_packets_received.is_set || is_set(short_packets_received.yfilter)) leaf_name_data.push_back(short_packets_received.get_name_leafdata());
    if (invalid_version_received.is_set || is_set(invalid_version_received.yfilter)) leaf_name_data.push_back(invalid_version_received.get_name_leafdata());
    if (invalid_operation_code_received.is_set || is_set(invalid_operation_code_received.yfilter)) leaf_name_data.push_back(invalid_operation_code_received.get_name_leafdata());
    if (unknown_group_received.is_set || is_set(unknown_group_received.yfilter)) leaf_name_data.push_back(unknown_group_received.get_name_leafdata());
    if (inoperational_group_received.is_set || is_set(inoperational_group_received.yfilter)) leaf_name_data.push_back(inoperational_group_received.get_name_leafdata());
    if (conflict_source_ip_address_received.is_set || is_set(conflict_source_ip_address_received.yfilter)) leaf_name_data.push_back(conflict_source_ip_address_received.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Ipv6::Interfaces::Interface::Statistics::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Ipv6::Interfaces::Interface::Statistics::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Ipv6::Interfaces::Interface::Statistics::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "advert-packets-sent")
    {
        advert_packets_sent = value;
        advert_packets_sent.value_namespace = name_space;
        advert_packets_sent.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "advert-packets-received")
    {
        advert_packets_received = value;
        advert_packets_received.value_namespace = name_space;
        advert_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "long-packets-received")
    {
        long_packets_received = value;
        long_packets_received.value_namespace = name_space;
        long_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "short-packets-received")
    {
        short_packets_received = value;
        short_packets_received.value_namespace = name_space;
        short_packets_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-version-received")
    {
        invalid_version_received = value;
        invalid_version_received.value_namespace = name_space;
        invalid_version_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "invalid-operation-code-received")
    {
        invalid_operation_code_received = value;
        invalid_operation_code_received.value_namespace = name_space;
        invalid_operation_code_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "unknown-group-received")
    {
        unknown_group_received = value;
        unknown_group_received.value_namespace = name_space;
        unknown_group_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "inoperational-group-received")
    {
        inoperational_group_received = value;
        inoperational_group_received.value_namespace = name_space;
        inoperational_group_received.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "conflict-source-ip-address-received")
    {
        conflict_source_ip_address_received = value;
        conflict_source_ip_address_received.value_namespace = name_space;
        conflict_source_ip_address_received.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Ipv6::Interfaces::Interface::Statistics::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "advert-packets-sent")
    {
        advert_packets_sent.yfilter = yfilter;
    }
    if(value_path == "advert-packets-received")
    {
        advert_packets_received.yfilter = yfilter;
    }
    if(value_path == "long-packets-received")
    {
        long_packets_received.yfilter = yfilter;
    }
    if(value_path == "short-packets-received")
    {
        short_packets_received.yfilter = yfilter;
    }
    if(value_path == "invalid-version-received")
    {
        invalid_version_received.yfilter = yfilter;
    }
    if(value_path == "invalid-operation-code-received")
    {
        invalid_operation_code_received.yfilter = yfilter;
    }
    if(value_path == "unknown-group-received")
    {
        unknown_group_received.yfilter = yfilter;
    }
    if(value_path == "inoperational-group-received")
    {
        inoperational_group_received.yfilter = yfilter;
    }
    if(value_path == "conflict-source-ip-address-received")
    {
        conflict_source_ip_address_received.yfilter = yfilter;
    }
}

bool Hsrp::Ipv6::Interfaces::Interface::Statistics::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "advert-packets-sent" || name == "advert-packets-received" || name == "long-packets-received" || name == "short-packets-received" || name == "invalid-version-received" || name == "invalid-operation-code-received" || name == "unknown-group-received" || name == "inoperational-group-received" || name == "conflict-source-ip-address-received")
        return true;
    return false;
}

Hsrp::BfdSessions::BfdSessions()
    :
    bfd_session(this, {"interface_name", "ip_address"})
{

    yang_name = "bfd-sessions"; yang_parent_name = "hsrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::BfdSessions::~BfdSessions()
{
}

bool Hsrp::BfdSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<bfd_session.len(); index++)
    {
        if(bfd_session[index]->has_data())
            return true;
    }
    return false;
}

bool Hsrp::BfdSessions::has_operation() const
{
    for (std::size_t index=0; index<bfd_session.len(); index++)
    {
        if(bfd_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Hsrp::BfdSessions::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::BfdSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::BfdSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::BfdSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "bfd-session")
    {
        auto ent_ = std::make_shared<Hsrp::BfdSessions::BfdSession>();
        ent_->parent = this;
        bfd_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::BfdSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : bfd_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::BfdSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Hsrp::BfdSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Hsrp::BfdSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "bfd-session")
        return true;
    return false;
}

Hsrp::BfdSessions::BfdSession::BfdSession()
    :
    interface_name{YType::str, "interface-name"},
    ip_address{YType::str, "ip-address"},
    bfd_interface_name{YType::str, "bfd-interface-name"},
    session_address_family{YType::enumeration, "session-address-family"},
    destination_address{YType::str, "destination-address"},
    destination_ipv6_address{YType::str, "destination-ipv6-address"},
    bfd_session_state{YType::enumeration, "bfd-session-state"},
    bfd_interval{YType::uint32, "bfd-interval"},
    bfd_multiplier{YType::uint32, "bfd-multiplier"}
        ,
    group(this, {})
{

    yang_name = "bfd-session"; yang_parent_name = "bfd-sessions"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::BfdSessions::BfdSession::~BfdSession()
{
}

bool Hsrp::BfdSessions::BfdSession::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_data())
            return true;
    }
    return interface_name.is_set
	|| ip_address.is_set
	|| bfd_interface_name.is_set
	|| session_address_family.is_set
	|| destination_address.is_set
	|| destination_ipv6_address.is_set
	|| bfd_session_state.is_set
	|| bfd_interval.is_set
	|| bfd_multiplier.is_set;
}

bool Hsrp::BfdSessions::BfdSession::has_operation() const
{
    for (std::size_t index=0; index<group.len(); index++)
    {
        if(group[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ip_address.yfilter)
	|| ydk::is_set(bfd_interface_name.yfilter)
	|| ydk::is_set(session_address_family.yfilter)
	|| ydk::is_set(destination_address.yfilter)
	|| ydk::is_set(destination_ipv6_address.yfilter)
	|| ydk::is_set(bfd_session_state.yfilter)
	|| ydk::is_set(bfd_interval.yfilter)
	|| ydk::is_set(bfd_multiplier.yfilter);
}

std::string Hsrp::BfdSessions::BfdSession::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/bfd-sessions/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::BfdSessions::BfdSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "bfd-session";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    ADD_KEY_TOKEN(ip_address, "ip-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::BfdSessions::BfdSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ip_address.is_set || is_set(ip_address.yfilter)) leaf_name_data.push_back(ip_address.get_name_leafdata());
    if (bfd_interface_name.is_set || is_set(bfd_interface_name.yfilter)) leaf_name_data.push_back(bfd_interface_name.get_name_leafdata());
    if (session_address_family.is_set || is_set(session_address_family.yfilter)) leaf_name_data.push_back(session_address_family.get_name_leafdata());
    if (destination_address.is_set || is_set(destination_address.yfilter)) leaf_name_data.push_back(destination_address.get_name_leafdata());
    if (destination_ipv6_address.is_set || is_set(destination_ipv6_address.yfilter)) leaf_name_data.push_back(destination_ipv6_address.get_name_leafdata());
    if (bfd_session_state.is_set || is_set(bfd_session_state.yfilter)) leaf_name_data.push_back(bfd_session_state.get_name_leafdata());
    if (bfd_interval.is_set || is_set(bfd_interval.yfilter)) leaf_name_data.push_back(bfd_interval.get_name_leafdata());
    if (bfd_multiplier.is_set || is_set(bfd_multiplier.yfilter)) leaf_name_data.push_back(bfd_multiplier.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::BfdSessions::BfdSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "group")
    {
        auto ent_ = std::make_shared<Hsrp::BfdSessions::BfdSession::Group>();
        ent_->parent = this;
        group.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::BfdSessions::BfdSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : group.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Hsrp::BfdSessions::BfdSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-address")
    {
        ip_address = value;
        ip_address.value_namespace = name_space;
        ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interface-name")
    {
        bfd_interface_name = value;
        bfd_interface_name.value_namespace = name_space;
        bfd_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-address-family")
    {
        session_address_family = value;
        session_address_family.value_namespace = name_space;
        session_address_family.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-address")
    {
        destination_address = value;
        destination_address.value_namespace = name_space;
        destination_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-ipv6-address")
    {
        destination_ipv6_address = value;
        destination_ipv6_address.value_namespace = name_space;
        destination_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state = value;
        bfd_session_state.value_namespace = name_space;
        bfd_session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval = value;
        bfd_interval.value_namespace = name_space;
        bfd_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier = value;
        bfd_multiplier.value_namespace = name_space;
        bfd_multiplier.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::BfdSessions::BfdSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ip-address")
    {
        ip_address.yfilter = yfilter;
    }
    if(value_path == "bfd-interface-name")
    {
        bfd_interface_name.yfilter = yfilter;
    }
    if(value_path == "session-address-family")
    {
        session_address_family.yfilter = yfilter;
    }
    if(value_path == "destination-address")
    {
        destination_address.yfilter = yfilter;
    }
    if(value_path == "destination-ipv6-address")
    {
        destination_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "bfd-session-state")
    {
        bfd_session_state.yfilter = yfilter;
    }
    if(value_path == "bfd-interval")
    {
        bfd_interval.yfilter = yfilter;
    }
    if(value_path == "bfd-multiplier")
    {
        bfd_multiplier.yfilter = yfilter;
    }
}

bool Hsrp::BfdSessions::BfdSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "group" || name == "interface-name" || name == "ip-address" || name == "bfd-interface-name" || name == "session-address-family" || name == "destination-address" || name == "destination-ipv6-address" || name == "bfd-session-state" || name == "bfd-interval" || name == "bfd-multiplier")
        return true;
    return false;
}

Hsrp::BfdSessions::BfdSession::Group::Group()
    :
    interface_name{YType::str, "interface-name"},
    hsrp_group_number{YType::uint32, "hsrp-group-number"}
{

    yang_name = "group"; yang_parent_name = "bfd-session"; is_top_level_class = false; has_list_ancestor = true; 
}

Hsrp::BfdSessions::BfdSession::Group::~Group()
{
}

bool Hsrp::BfdSessions::BfdSession::Group::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| hsrp_group_number.is_set;
}

bool Hsrp::BfdSessions::BfdSession::Group::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(hsrp_group_number.yfilter);
}

std::string Hsrp::BfdSessions::BfdSession::Group::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "group";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::BfdSessions::BfdSession::Group::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (hsrp_group_number.is_set || is_set(hsrp_group_number.yfilter)) leaf_name_data.push_back(hsrp_group_number.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::BfdSessions::BfdSession::Group::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::BfdSessions::BfdSession::Group::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::BfdSessions::BfdSession::Group::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number = value;
        hsrp_group_number.value_namespace = name_space;
        hsrp_group_number.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::BfdSessions::BfdSession::Group::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "hsrp-group-number")
    {
        hsrp_group_number.yfilter = yfilter;
    }
}

bool Hsrp::BfdSessions::BfdSession::Group::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-name" || name == "hsrp-group-number")
        return true;
    return false;
}

Hsrp::Summary::Summary()
    :
    ipv4_sessions_active{YType::uint32, "ipv4-sessions-active"},
    ipv4_sessions_standby{YType::uint32, "ipv4-sessions-standby"},
    ipv4_sessions_speak{YType::uint32, "ipv4-sessions-speak"},
    ipv4_sessions_listen{YType::uint32, "ipv4-sessions-listen"},
    ipv4_sessions_learn{YType::uint32, "ipv4-sessions-learn"},
    ipv4_sessions_init{YType::uint32, "ipv4-sessions-init"},
    ipv4_slaves_active{YType::uint32, "ipv4-slaves-active"},
    ipv4_slaves_standby{YType::uint32, "ipv4-slaves-standby"},
    ipv4_slaves_speak{YType::uint32, "ipv4-slaves-speak"},
    ipv4_slaves_listen{YType::uint32, "ipv4-slaves-listen"},
    ipv4_slaves_learn{YType::uint32, "ipv4-slaves-learn"},
    ipv4_slaves_init{YType::uint32, "ipv4-slaves-init"},
    ipv4_virtual_ip_addresses_active_up{YType::uint32, "ipv4-virtual-ip-addresses-active-up"},
    ipv4_virtual_ip_addresses_active_down{YType::uint32, "ipv4-virtual-ip-addresses-active-down"},
    ipv4_virtual_ip_addresses_standby_up{YType::uint32, "ipv4-virtual-ip-addresses-standby-up"},
    ipv4_virtual_ip_addresses_standby_down{YType::uint32, "ipv4-virtual-ip-addresses-standby-down"},
    ipv4_virtual_ip_addresses_speak_up{YType::uint32, "ipv4-virtual-ip-addresses-speak-up"},
    ipv4_virtual_ip_addresses_speak_down{YType::uint32, "ipv4-virtual-ip-addresses-speak-down"},
    ipv4_virtual_ip_addresses_listen_up{YType::uint32, "ipv4-virtual-ip-addresses-listen-up"},
    ipv4_virtual_ip_addresses_listen_down{YType::uint32, "ipv4-virtual-ip-addresses-listen-down"},
    ipv4_virtual_ip_addresses_learn_up{YType::uint32, "ipv4-virtual-ip-addresses-learn-up"},
    ipv4_virtual_ip_addresses_learn_down{YType::uint32, "ipv4-virtual-ip-addresses-learn-down"},
    ipv4_virtual_ip_addresses_init_up{YType::uint32, "ipv4-virtual-ip-addresses-init-up"},
    ipv4_virtual_ip_addresses_init_down{YType::uint32, "ipv4-virtual-ip-addresses-init-down"},
    ipv6_sessions_active{YType::uint32, "ipv6-sessions-active"},
    ipv6_sessions_standby{YType::uint32, "ipv6-sessions-standby"},
    ipv6_sessions_speak{YType::uint32, "ipv6-sessions-speak"},
    ipv6_sessions_listen{YType::uint32, "ipv6-sessions-listen"},
    ipv6_sessions_learn{YType::uint32, "ipv6-sessions-learn"},
    ipv6_sessions_init{YType::uint32, "ipv6-sessions-init"},
    ipv6_slaves_active{YType::uint32, "ipv6-slaves-active"},
    ipv6_slaves_standby{YType::uint32, "ipv6-slaves-standby"},
    ipv6_slaves_speak{YType::uint32, "ipv6-slaves-speak"},
    ipv6_slaves_listen{YType::uint32, "ipv6-slaves-listen"},
    ipv6_slaves_learn{YType::uint32, "ipv6-slaves-learn"},
    ipv6_slaves_init{YType::uint32, "ipv6-slaves-init"},
    ipv6_virtual_ip_addresses_active_up{YType::uint32, "ipv6-virtual-ip-addresses-active-up"},
    ipv6_virtual_ip_addresses_active_down{YType::uint32, "ipv6-virtual-ip-addresses-active-down"},
    ipv6_virtual_ip_addresses_standby_up{YType::uint32, "ipv6-virtual-ip-addresses-standby-up"},
    ipv6_virtual_ip_addresses_standby_down{YType::uint32, "ipv6-virtual-ip-addresses-standby-down"},
    ipv6_virtual_ip_addresses_speak_up{YType::uint32, "ipv6-virtual-ip-addresses-speak-up"},
    ipv6_virtual_ip_addresses_speak_down{YType::uint32, "ipv6-virtual-ip-addresses-speak-down"},
    ipv6_virtual_ip_addresses_listen_up{YType::uint32, "ipv6-virtual-ip-addresses-listen-up"},
    ipv6_virtual_ip_addresses_listen_down{YType::uint32, "ipv6-virtual-ip-addresses-listen-down"},
    ipv6_virtual_ip_addresses_learn_up{YType::uint32, "ipv6-virtual-ip-addresses-learn-up"},
    ipv6_virtual_ip_addresses_learn_down{YType::uint32, "ipv6-virtual-ip-addresses-learn-down"},
    ipv6_virtual_ip_addresses_init_up{YType::uint32, "ipv6-virtual-ip-addresses-init-up"},
    ipv6_virtual_ip_addresses_init_down{YType::uint32, "ipv6-virtual-ip-addresses-init-down"},
    interfaces_ipv4_state_up{YType::uint32, "interfaces-ipv4-state-up"},
    interfaces_ipv4_state_down{YType::uint32, "interfaces-ipv4-state-down"},
    tracked_interfaces_ipv4_state_up{YType::uint32, "tracked-interfaces-ipv4-state-up"},
    tracked_interfaces_ipv4_state_down{YType::uint32, "tracked-interfaces-ipv4-state-down"},
    tracked_objects_up{YType::uint32, "tracked-objects-up"},
    tracked_objects_down{YType::uint32, "tracked-objects-down"},
    interfaces_ipv6_state_up{YType::uint32, "interfaces-ipv6-state-up"},
    interfaces_ipv6_state_down{YType::uint32, "interfaces-ipv6-state-down"},
    tracked_interfaces_ipv6_state_up{YType::uint32, "tracked-interfaces-ipv6-state-up"},
    tracked_interfaces_ipv6_state_down{YType::uint32, "tracked-interfaces-ipv6-state-down"},
    bfd_sessions_up{YType::uint32, "bfd-sessions-up"},
    bfd_sessions_down{YType::uint32, "bfd-sessions-down"},
    bfd_session_inactive{YType::uint32, "bfd-session-inactive"}
{

    yang_name = "summary"; yang_parent_name = "hsrp"; is_top_level_class = false; has_list_ancestor = false; 
}

Hsrp::Summary::~Summary()
{
}

bool Hsrp::Summary::has_data() const
{
    if (is_presence_container) return true;
    return ipv4_sessions_active.is_set
	|| ipv4_sessions_standby.is_set
	|| ipv4_sessions_speak.is_set
	|| ipv4_sessions_listen.is_set
	|| ipv4_sessions_learn.is_set
	|| ipv4_sessions_init.is_set
	|| ipv4_slaves_active.is_set
	|| ipv4_slaves_standby.is_set
	|| ipv4_slaves_speak.is_set
	|| ipv4_slaves_listen.is_set
	|| ipv4_slaves_learn.is_set
	|| ipv4_slaves_init.is_set
	|| ipv4_virtual_ip_addresses_active_up.is_set
	|| ipv4_virtual_ip_addresses_active_down.is_set
	|| ipv4_virtual_ip_addresses_standby_up.is_set
	|| ipv4_virtual_ip_addresses_standby_down.is_set
	|| ipv4_virtual_ip_addresses_speak_up.is_set
	|| ipv4_virtual_ip_addresses_speak_down.is_set
	|| ipv4_virtual_ip_addresses_listen_up.is_set
	|| ipv4_virtual_ip_addresses_listen_down.is_set
	|| ipv4_virtual_ip_addresses_learn_up.is_set
	|| ipv4_virtual_ip_addresses_learn_down.is_set
	|| ipv4_virtual_ip_addresses_init_up.is_set
	|| ipv4_virtual_ip_addresses_init_down.is_set
	|| ipv6_sessions_active.is_set
	|| ipv6_sessions_standby.is_set
	|| ipv6_sessions_speak.is_set
	|| ipv6_sessions_listen.is_set
	|| ipv6_sessions_learn.is_set
	|| ipv6_sessions_init.is_set
	|| ipv6_slaves_active.is_set
	|| ipv6_slaves_standby.is_set
	|| ipv6_slaves_speak.is_set
	|| ipv6_slaves_listen.is_set
	|| ipv6_slaves_learn.is_set
	|| ipv6_slaves_init.is_set
	|| ipv6_virtual_ip_addresses_active_up.is_set
	|| ipv6_virtual_ip_addresses_active_down.is_set
	|| ipv6_virtual_ip_addresses_standby_up.is_set
	|| ipv6_virtual_ip_addresses_standby_down.is_set
	|| ipv6_virtual_ip_addresses_speak_up.is_set
	|| ipv6_virtual_ip_addresses_speak_down.is_set
	|| ipv6_virtual_ip_addresses_listen_up.is_set
	|| ipv6_virtual_ip_addresses_listen_down.is_set
	|| ipv6_virtual_ip_addresses_learn_up.is_set
	|| ipv6_virtual_ip_addresses_learn_down.is_set
	|| ipv6_virtual_ip_addresses_init_up.is_set
	|| ipv6_virtual_ip_addresses_init_down.is_set
	|| interfaces_ipv4_state_up.is_set
	|| interfaces_ipv4_state_down.is_set
	|| tracked_interfaces_ipv4_state_up.is_set
	|| tracked_interfaces_ipv4_state_down.is_set
	|| tracked_objects_up.is_set
	|| tracked_objects_down.is_set
	|| interfaces_ipv6_state_up.is_set
	|| interfaces_ipv6_state_down.is_set
	|| tracked_interfaces_ipv6_state_up.is_set
	|| tracked_interfaces_ipv6_state_down.is_set
	|| bfd_sessions_up.is_set
	|| bfd_sessions_down.is_set
	|| bfd_session_inactive.is_set;
}

bool Hsrp::Summary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(ipv4_sessions_active.yfilter)
	|| ydk::is_set(ipv4_sessions_standby.yfilter)
	|| ydk::is_set(ipv4_sessions_speak.yfilter)
	|| ydk::is_set(ipv4_sessions_listen.yfilter)
	|| ydk::is_set(ipv4_sessions_learn.yfilter)
	|| ydk::is_set(ipv4_sessions_init.yfilter)
	|| ydk::is_set(ipv4_slaves_active.yfilter)
	|| ydk::is_set(ipv4_slaves_standby.yfilter)
	|| ydk::is_set(ipv4_slaves_speak.yfilter)
	|| ydk::is_set(ipv4_slaves_listen.yfilter)
	|| ydk::is_set(ipv4_slaves_learn.yfilter)
	|| ydk::is_set(ipv4_slaves_init.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_active_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_active_down.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_standby_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_standby_down.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_speak_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_speak_down.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_listen_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_listen_down.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_learn_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_learn_down.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_init_up.yfilter)
	|| ydk::is_set(ipv4_virtual_ip_addresses_init_down.yfilter)
	|| ydk::is_set(ipv6_sessions_active.yfilter)
	|| ydk::is_set(ipv6_sessions_standby.yfilter)
	|| ydk::is_set(ipv6_sessions_speak.yfilter)
	|| ydk::is_set(ipv6_sessions_listen.yfilter)
	|| ydk::is_set(ipv6_sessions_learn.yfilter)
	|| ydk::is_set(ipv6_sessions_init.yfilter)
	|| ydk::is_set(ipv6_slaves_active.yfilter)
	|| ydk::is_set(ipv6_slaves_standby.yfilter)
	|| ydk::is_set(ipv6_slaves_speak.yfilter)
	|| ydk::is_set(ipv6_slaves_listen.yfilter)
	|| ydk::is_set(ipv6_slaves_learn.yfilter)
	|| ydk::is_set(ipv6_slaves_init.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_active_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_active_down.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_standby_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_standby_down.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_speak_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_speak_down.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_listen_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_listen_down.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_learn_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_learn_down.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_init_up.yfilter)
	|| ydk::is_set(ipv6_virtual_ip_addresses_init_down.yfilter)
	|| ydk::is_set(interfaces_ipv4_state_up.yfilter)
	|| ydk::is_set(interfaces_ipv4_state_down.yfilter)
	|| ydk::is_set(tracked_interfaces_ipv4_state_up.yfilter)
	|| ydk::is_set(tracked_interfaces_ipv4_state_down.yfilter)
	|| ydk::is_set(tracked_objects_up.yfilter)
	|| ydk::is_set(tracked_objects_down.yfilter)
	|| ydk::is_set(interfaces_ipv6_state_up.yfilter)
	|| ydk::is_set(interfaces_ipv6_state_down.yfilter)
	|| ydk::is_set(tracked_interfaces_ipv6_state_up.yfilter)
	|| ydk::is_set(tracked_interfaces_ipv6_state_down.yfilter)
	|| ydk::is_set(bfd_sessions_up.yfilter)
	|| ydk::is_set(bfd_sessions_down.yfilter)
	|| ydk::is_set(bfd_session_inactive.yfilter);
}

std::string Hsrp::Summary::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-ipv4-hsrp-oper:hsrp/" << get_segment_path();
    return path_buffer.str();
}

std::string Hsrp::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Hsrp::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (ipv4_sessions_active.is_set || is_set(ipv4_sessions_active.yfilter)) leaf_name_data.push_back(ipv4_sessions_active.get_name_leafdata());
    if (ipv4_sessions_standby.is_set || is_set(ipv4_sessions_standby.yfilter)) leaf_name_data.push_back(ipv4_sessions_standby.get_name_leafdata());
    if (ipv4_sessions_speak.is_set || is_set(ipv4_sessions_speak.yfilter)) leaf_name_data.push_back(ipv4_sessions_speak.get_name_leafdata());
    if (ipv4_sessions_listen.is_set || is_set(ipv4_sessions_listen.yfilter)) leaf_name_data.push_back(ipv4_sessions_listen.get_name_leafdata());
    if (ipv4_sessions_learn.is_set || is_set(ipv4_sessions_learn.yfilter)) leaf_name_data.push_back(ipv4_sessions_learn.get_name_leafdata());
    if (ipv4_sessions_init.is_set || is_set(ipv4_sessions_init.yfilter)) leaf_name_data.push_back(ipv4_sessions_init.get_name_leafdata());
    if (ipv4_slaves_active.is_set || is_set(ipv4_slaves_active.yfilter)) leaf_name_data.push_back(ipv4_slaves_active.get_name_leafdata());
    if (ipv4_slaves_standby.is_set || is_set(ipv4_slaves_standby.yfilter)) leaf_name_data.push_back(ipv4_slaves_standby.get_name_leafdata());
    if (ipv4_slaves_speak.is_set || is_set(ipv4_slaves_speak.yfilter)) leaf_name_data.push_back(ipv4_slaves_speak.get_name_leafdata());
    if (ipv4_slaves_listen.is_set || is_set(ipv4_slaves_listen.yfilter)) leaf_name_data.push_back(ipv4_slaves_listen.get_name_leafdata());
    if (ipv4_slaves_learn.is_set || is_set(ipv4_slaves_learn.yfilter)) leaf_name_data.push_back(ipv4_slaves_learn.get_name_leafdata());
    if (ipv4_slaves_init.is_set || is_set(ipv4_slaves_init.yfilter)) leaf_name_data.push_back(ipv4_slaves_init.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_active_up.is_set || is_set(ipv4_virtual_ip_addresses_active_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_active_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_active_down.is_set || is_set(ipv4_virtual_ip_addresses_active_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_active_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_standby_up.is_set || is_set(ipv4_virtual_ip_addresses_standby_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_standby_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_standby_down.is_set || is_set(ipv4_virtual_ip_addresses_standby_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_standby_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_speak_up.is_set || is_set(ipv4_virtual_ip_addresses_speak_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_speak_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_speak_down.is_set || is_set(ipv4_virtual_ip_addresses_speak_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_speak_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_listen_up.is_set || is_set(ipv4_virtual_ip_addresses_listen_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_listen_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_listen_down.is_set || is_set(ipv4_virtual_ip_addresses_listen_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_listen_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_learn_up.is_set || is_set(ipv4_virtual_ip_addresses_learn_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_learn_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_learn_down.is_set || is_set(ipv4_virtual_ip_addresses_learn_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_learn_down.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_init_up.is_set || is_set(ipv4_virtual_ip_addresses_init_up.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_init_up.get_name_leafdata());
    if (ipv4_virtual_ip_addresses_init_down.is_set || is_set(ipv4_virtual_ip_addresses_init_down.yfilter)) leaf_name_data.push_back(ipv4_virtual_ip_addresses_init_down.get_name_leafdata());
    if (ipv6_sessions_active.is_set || is_set(ipv6_sessions_active.yfilter)) leaf_name_data.push_back(ipv6_sessions_active.get_name_leafdata());
    if (ipv6_sessions_standby.is_set || is_set(ipv6_sessions_standby.yfilter)) leaf_name_data.push_back(ipv6_sessions_standby.get_name_leafdata());
    if (ipv6_sessions_speak.is_set || is_set(ipv6_sessions_speak.yfilter)) leaf_name_data.push_back(ipv6_sessions_speak.get_name_leafdata());
    if (ipv6_sessions_listen.is_set || is_set(ipv6_sessions_listen.yfilter)) leaf_name_data.push_back(ipv6_sessions_listen.get_name_leafdata());
    if (ipv6_sessions_learn.is_set || is_set(ipv6_sessions_learn.yfilter)) leaf_name_data.push_back(ipv6_sessions_learn.get_name_leafdata());
    if (ipv6_sessions_init.is_set || is_set(ipv6_sessions_init.yfilter)) leaf_name_data.push_back(ipv6_sessions_init.get_name_leafdata());
    if (ipv6_slaves_active.is_set || is_set(ipv6_slaves_active.yfilter)) leaf_name_data.push_back(ipv6_slaves_active.get_name_leafdata());
    if (ipv6_slaves_standby.is_set || is_set(ipv6_slaves_standby.yfilter)) leaf_name_data.push_back(ipv6_slaves_standby.get_name_leafdata());
    if (ipv6_slaves_speak.is_set || is_set(ipv6_slaves_speak.yfilter)) leaf_name_data.push_back(ipv6_slaves_speak.get_name_leafdata());
    if (ipv6_slaves_listen.is_set || is_set(ipv6_slaves_listen.yfilter)) leaf_name_data.push_back(ipv6_slaves_listen.get_name_leafdata());
    if (ipv6_slaves_learn.is_set || is_set(ipv6_slaves_learn.yfilter)) leaf_name_data.push_back(ipv6_slaves_learn.get_name_leafdata());
    if (ipv6_slaves_init.is_set || is_set(ipv6_slaves_init.yfilter)) leaf_name_data.push_back(ipv6_slaves_init.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_active_up.is_set || is_set(ipv6_virtual_ip_addresses_active_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_active_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_active_down.is_set || is_set(ipv6_virtual_ip_addresses_active_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_active_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_standby_up.is_set || is_set(ipv6_virtual_ip_addresses_standby_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_standby_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_standby_down.is_set || is_set(ipv6_virtual_ip_addresses_standby_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_standby_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_speak_up.is_set || is_set(ipv6_virtual_ip_addresses_speak_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_speak_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_speak_down.is_set || is_set(ipv6_virtual_ip_addresses_speak_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_speak_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_listen_up.is_set || is_set(ipv6_virtual_ip_addresses_listen_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_listen_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_listen_down.is_set || is_set(ipv6_virtual_ip_addresses_listen_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_listen_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_learn_up.is_set || is_set(ipv6_virtual_ip_addresses_learn_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_learn_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_learn_down.is_set || is_set(ipv6_virtual_ip_addresses_learn_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_learn_down.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_init_up.is_set || is_set(ipv6_virtual_ip_addresses_init_up.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_init_up.get_name_leafdata());
    if (ipv6_virtual_ip_addresses_init_down.is_set || is_set(ipv6_virtual_ip_addresses_init_down.yfilter)) leaf_name_data.push_back(ipv6_virtual_ip_addresses_init_down.get_name_leafdata());
    if (interfaces_ipv4_state_up.is_set || is_set(interfaces_ipv4_state_up.yfilter)) leaf_name_data.push_back(interfaces_ipv4_state_up.get_name_leafdata());
    if (interfaces_ipv4_state_down.is_set || is_set(interfaces_ipv4_state_down.yfilter)) leaf_name_data.push_back(interfaces_ipv4_state_down.get_name_leafdata());
    if (tracked_interfaces_ipv4_state_up.is_set || is_set(tracked_interfaces_ipv4_state_up.yfilter)) leaf_name_data.push_back(tracked_interfaces_ipv4_state_up.get_name_leafdata());
    if (tracked_interfaces_ipv4_state_down.is_set || is_set(tracked_interfaces_ipv4_state_down.yfilter)) leaf_name_data.push_back(tracked_interfaces_ipv4_state_down.get_name_leafdata());
    if (tracked_objects_up.is_set || is_set(tracked_objects_up.yfilter)) leaf_name_data.push_back(tracked_objects_up.get_name_leafdata());
    if (tracked_objects_down.is_set || is_set(tracked_objects_down.yfilter)) leaf_name_data.push_back(tracked_objects_down.get_name_leafdata());
    if (interfaces_ipv6_state_up.is_set || is_set(interfaces_ipv6_state_up.yfilter)) leaf_name_data.push_back(interfaces_ipv6_state_up.get_name_leafdata());
    if (interfaces_ipv6_state_down.is_set || is_set(interfaces_ipv6_state_down.yfilter)) leaf_name_data.push_back(interfaces_ipv6_state_down.get_name_leafdata());
    if (tracked_interfaces_ipv6_state_up.is_set || is_set(tracked_interfaces_ipv6_state_up.yfilter)) leaf_name_data.push_back(tracked_interfaces_ipv6_state_up.get_name_leafdata());
    if (tracked_interfaces_ipv6_state_down.is_set || is_set(tracked_interfaces_ipv6_state_down.yfilter)) leaf_name_data.push_back(tracked_interfaces_ipv6_state_down.get_name_leafdata());
    if (bfd_sessions_up.is_set || is_set(bfd_sessions_up.yfilter)) leaf_name_data.push_back(bfd_sessions_up.get_name_leafdata());
    if (bfd_sessions_down.is_set || is_set(bfd_sessions_down.yfilter)) leaf_name_data.push_back(bfd_sessions_down.get_name_leafdata());
    if (bfd_session_inactive.is_set || is_set(bfd_session_inactive.yfilter)) leaf_name_data.push_back(bfd_session_inactive.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Hsrp::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Hsrp::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Hsrp::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "ipv4-sessions-active")
    {
        ipv4_sessions_active = value;
        ipv4_sessions_active.value_namespace = name_space;
        ipv4_sessions_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sessions-standby")
    {
        ipv4_sessions_standby = value;
        ipv4_sessions_standby.value_namespace = name_space;
        ipv4_sessions_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sessions-speak")
    {
        ipv4_sessions_speak = value;
        ipv4_sessions_speak.value_namespace = name_space;
        ipv4_sessions_speak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sessions-listen")
    {
        ipv4_sessions_listen = value;
        ipv4_sessions_listen.value_namespace = name_space;
        ipv4_sessions_listen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sessions-learn")
    {
        ipv4_sessions_learn = value;
        ipv4_sessions_learn.value_namespace = name_space;
        ipv4_sessions_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-sessions-init")
    {
        ipv4_sessions_init = value;
        ipv4_sessions_init.value_namespace = name_space;
        ipv4_sessions_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-active")
    {
        ipv4_slaves_active = value;
        ipv4_slaves_active.value_namespace = name_space;
        ipv4_slaves_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-standby")
    {
        ipv4_slaves_standby = value;
        ipv4_slaves_standby.value_namespace = name_space;
        ipv4_slaves_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-speak")
    {
        ipv4_slaves_speak = value;
        ipv4_slaves_speak.value_namespace = name_space;
        ipv4_slaves_speak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-listen")
    {
        ipv4_slaves_listen = value;
        ipv4_slaves_listen.value_namespace = name_space;
        ipv4_slaves_listen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-learn")
    {
        ipv4_slaves_learn = value;
        ipv4_slaves_learn.value_namespace = name_space;
        ipv4_slaves_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-slaves-init")
    {
        ipv4_slaves_init = value;
        ipv4_slaves_init.value_namespace = name_space;
        ipv4_slaves_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-active-up")
    {
        ipv4_virtual_ip_addresses_active_up = value;
        ipv4_virtual_ip_addresses_active_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_active_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-active-down")
    {
        ipv4_virtual_ip_addresses_active_down = value;
        ipv4_virtual_ip_addresses_active_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_active_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-standby-up")
    {
        ipv4_virtual_ip_addresses_standby_up = value;
        ipv4_virtual_ip_addresses_standby_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_standby_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-standby-down")
    {
        ipv4_virtual_ip_addresses_standby_down = value;
        ipv4_virtual_ip_addresses_standby_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_standby_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-speak-up")
    {
        ipv4_virtual_ip_addresses_speak_up = value;
        ipv4_virtual_ip_addresses_speak_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_speak_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-speak-down")
    {
        ipv4_virtual_ip_addresses_speak_down = value;
        ipv4_virtual_ip_addresses_speak_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_speak_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-listen-up")
    {
        ipv4_virtual_ip_addresses_listen_up = value;
        ipv4_virtual_ip_addresses_listen_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_listen_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-listen-down")
    {
        ipv4_virtual_ip_addresses_listen_down = value;
        ipv4_virtual_ip_addresses_listen_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_listen_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-learn-up")
    {
        ipv4_virtual_ip_addresses_learn_up = value;
        ipv4_virtual_ip_addresses_learn_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_learn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-learn-down")
    {
        ipv4_virtual_ip_addresses_learn_down = value;
        ipv4_virtual_ip_addresses_learn_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_learn_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-up")
    {
        ipv4_virtual_ip_addresses_init_up = value;
        ipv4_virtual_ip_addresses_init_up.value_namespace = name_space;
        ipv4_virtual_ip_addresses_init_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-down")
    {
        ipv4_virtual_ip_addresses_init_down = value;
        ipv4_virtual_ip_addresses_init_down.value_namespace = name_space;
        ipv4_virtual_ip_addresses_init_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-active")
    {
        ipv6_sessions_active = value;
        ipv6_sessions_active.value_namespace = name_space;
        ipv6_sessions_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-standby")
    {
        ipv6_sessions_standby = value;
        ipv6_sessions_standby.value_namespace = name_space;
        ipv6_sessions_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-speak")
    {
        ipv6_sessions_speak = value;
        ipv6_sessions_speak.value_namespace = name_space;
        ipv6_sessions_speak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-listen")
    {
        ipv6_sessions_listen = value;
        ipv6_sessions_listen.value_namespace = name_space;
        ipv6_sessions_listen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-learn")
    {
        ipv6_sessions_learn = value;
        ipv6_sessions_learn.value_namespace = name_space;
        ipv6_sessions_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-sessions-init")
    {
        ipv6_sessions_init = value;
        ipv6_sessions_init.value_namespace = name_space;
        ipv6_sessions_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-active")
    {
        ipv6_slaves_active = value;
        ipv6_slaves_active.value_namespace = name_space;
        ipv6_slaves_active.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-standby")
    {
        ipv6_slaves_standby = value;
        ipv6_slaves_standby.value_namespace = name_space;
        ipv6_slaves_standby.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-speak")
    {
        ipv6_slaves_speak = value;
        ipv6_slaves_speak.value_namespace = name_space;
        ipv6_slaves_speak.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-listen")
    {
        ipv6_slaves_listen = value;
        ipv6_slaves_listen.value_namespace = name_space;
        ipv6_slaves_listen.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-learn")
    {
        ipv6_slaves_learn = value;
        ipv6_slaves_learn.value_namespace = name_space;
        ipv6_slaves_learn.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-slaves-init")
    {
        ipv6_slaves_init = value;
        ipv6_slaves_init.value_namespace = name_space;
        ipv6_slaves_init.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-active-up")
    {
        ipv6_virtual_ip_addresses_active_up = value;
        ipv6_virtual_ip_addresses_active_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_active_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-active-down")
    {
        ipv6_virtual_ip_addresses_active_down = value;
        ipv6_virtual_ip_addresses_active_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_active_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-standby-up")
    {
        ipv6_virtual_ip_addresses_standby_up = value;
        ipv6_virtual_ip_addresses_standby_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_standby_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-standby-down")
    {
        ipv6_virtual_ip_addresses_standby_down = value;
        ipv6_virtual_ip_addresses_standby_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_standby_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-speak-up")
    {
        ipv6_virtual_ip_addresses_speak_up = value;
        ipv6_virtual_ip_addresses_speak_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_speak_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-speak-down")
    {
        ipv6_virtual_ip_addresses_speak_down = value;
        ipv6_virtual_ip_addresses_speak_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_speak_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-listen-up")
    {
        ipv6_virtual_ip_addresses_listen_up = value;
        ipv6_virtual_ip_addresses_listen_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_listen_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-listen-down")
    {
        ipv6_virtual_ip_addresses_listen_down = value;
        ipv6_virtual_ip_addresses_listen_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_listen_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-learn-up")
    {
        ipv6_virtual_ip_addresses_learn_up = value;
        ipv6_virtual_ip_addresses_learn_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_learn_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-learn-down")
    {
        ipv6_virtual_ip_addresses_learn_down = value;
        ipv6_virtual_ip_addresses_learn_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_learn_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-up")
    {
        ipv6_virtual_ip_addresses_init_up = value;
        ipv6_virtual_ip_addresses_init_up.value_namespace = name_space;
        ipv6_virtual_ip_addresses_init_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-down")
    {
        ipv6_virtual_ip_addresses_init_down = value;
        ipv6_virtual_ip_addresses_init_down.value_namespace = name_space;
        ipv6_virtual_ip_addresses_init_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces-ipv4-state-up")
    {
        interfaces_ipv4_state_up = value;
        interfaces_ipv4_state_up.value_namespace = name_space;
        interfaces_ipv4_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces-ipv4-state-down")
    {
        interfaces_ipv4_state_down = value;
        interfaces_ipv4_state_down.value_namespace = name_space;
        interfaces_ipv4_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interfaces-ipv4-state-up")
    {
        tracked_interfaces_ipv4_state_up = value;
        tracked_interfaces_ipv4_state_up.value_namespace = name_space;
        tracked_interfaces_ipv4_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interfaces-ipv4-state-down")
    {
        tracked_interfaces_ipv4_state_down = value;
        tracked_interfaces_ipv4_state_down.value_namespace = name_space;
        tracked_interfaces_ipv4_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-objects-up")
    {
        tracked_objects_up = value;
        tracked_objects_up.value_namespace = name_space;
        tracked_objects_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-objects-down")
    {
        tracked_objects_down = value;
        tracked_objects_down.value_namespace = name_space;
        tracked_objects_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces-ipv6-state-up")
    {
        interfaces_ipv6_state_up = value;
        interfaces_ipv6_state_up.value_namespace = name_space;
        interfaces_ipv6_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interfaces-ipv6-state-down")
    {
        interfaces_ipv6_state_down = value;
        interfaces_ipv6_state_down.value_namespace = name_space;
        interfaces_ipv6_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interfaces-ipv6-state-up")
    {
        tracked_interfaces_ipv6_state_up = value;
        tracked_interfaces_ipv6_state_up.value_namespace = name_space;
        tracked_interfaces_ipv6_state_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tracked-interfaces-ipv6-state-down")
    {
        tracked_interfaces_ipv6_state_down = value;
        tracked_interfaces_ipv6_state_down.value_namespace = name_space;
        tracked_interfaces_ipv6_state_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-sessions-up")
    {
        bfd_sessions_up = value;
        bfd_sessions_up.value_namespace = name_space;
        bfd_sessions_up.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-sessions-down")
    {
        bfd_sessions_down = value;
        bfd_sessions_down.value_namespace = name_space;
        bfd_sessions_down.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "bfd-session-inactive")
    {
        bfd_session_inactive = value;
        bfd_session_inactive.value_namespace = name_space;
        bfd_session_inactive.value_namespace_prefix = name_space_prefix;
    }
}

void Hsrp::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "ipv4-sessions-active")
    {
        ipv4_sessions_active.yfilter = yfilter;
    }
    if(value_path == "ipv4-sessions-standby")
    {
        ipv4_sessions_standby.yfilter = yfilter;
    }
    if(value_path == "ipv4-sessions-speak")
    {
        ipv4_sessions_speak.yfilter = yfilter;
    }
    if(value_path == "ipv4-sessions-listen")
    {
        ipv4_sessions_listen.yfilter = yfilter;
    }
    if(value_path == "ipv4-sessions-learn")
    {
        ipv4_sessions_learn.yfilter = yfilter;
    }
    if(value_path == "ipv4-sessions-init")
    {
        ipv4_sessions_init.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-active")
    {
        ipv4_slaves_active.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-standby")
    {
        ipv4_slaves_standby.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-speak")
    {
        ipv4_slaves_speak.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-listen")
    {
        ipv4_slaves_listen.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-learn")
    {
        ipv4_slaves_learn.yfilter = yfilter;
    }
    if(value_path == "ipv4-slaves-init")
    {
        ipv4_slaves_init.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-active-up")
    {
        ipv4_virtual_ip_addresses_active_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-active-down")
    {
        ipv4_virtual_ip_addresses_active_down.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-standby-up")
    {
        ipv4_virtual_ip_addresses_standby_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-standby-down")
    {
        ipv4_virtual_ip_addresses_standby_down.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-speak-up")
    {
        ipv4_virtual_ip_addresses_speak_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-speak-down")
    {
        ipv4_virtual_ip_addresses_speak_down.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-listen-up")
    {
        ipv4_virtual_ip_addresses_listen_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-listen-down")
    {
        ipv4_virtual_ip_addresses_listen_down.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-learn-up")
    {
        ipv4_virtual_ip_addresses_learn_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-learn-down")
    {
        ipv4_virtual_ip_addresses_learn_down.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-up")
    {
        ipv4_virtual_ip_addresses_init_up.yfilter = yfilter;
    }
    if(value_path == "ipv4-virtual-ip-addresses-init-down")
    {
        ipv4_virtual_ip_addresses_init_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-active")
    {
        ipv6_sessions_active.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-standby")
    {
        ipv6_sessions_standby.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-speak")
    {
        ipv6_sessions_speak.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-listen")
    {
        ipv6_sessions_listen.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-learn")
    {
        ipv6_sessions_learn.yfilter = yfilter;
    }
    if(value_path == "ipv6-sessions-init")
    {
        ipv6_sessions_init.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-active")
    {
        ipv6_slaves_active.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-standby")
    {
        ipv6_slaves_standby.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-speak")
    {
        ipv6_slaves_speak.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-listen")
    {
        ipv6_slaves_listen.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-learn")
    {
        ipv6_slaves_learn.yfilter = yfilter;
    }
    if(value_path == "ipv6-slaves-init")
    {
        ipv6_slaves_init.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-active-up")
    {
        ipv6_virtual_ip_addresses_active_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-active-down")
    {
        ipv6_virtual_ip_addresses_active_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-standby-up")
    {
        ipv6_virtual_ip_addresses_standby_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-standby-down")
    {
        ipv6_virtual_ip_addresses_standby_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-speak-up")
    {
        ipv6_virtual_ip_addresses_speak_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-speak-down")
    {
        ipv6_virtual_ip_addresses_speak_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-listen-up")
    {
        ipv6_virtual_ip_addresses_listen_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-listen-down")
    {
        ipv6_virtual_ip_addresses_listen_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-learn-up")
    {
        ipv6_virtual_ip_addresses_learn_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-learn-down")
    {
        ipv6_virtual_ip_addresses_learn_down.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-up")
    {
        ipv6_virtual_ip_addresses_init_up.yfilter = yfilter;
    }
    if(value_path == "ipv6-virtual-ip-addresses-init-down")
    {
        ipv6_virtual_ip_addresses_init_down.yfilter = yfilter;
    }
    if(value_path == "interfaces-ipv4-state-up")
    {
        interfaces_ipv4_state_up.yfilter = yfilter;
    }
    if(value_path == "interfaces-ipv4-state-down")
    {
        interfaces_ipv4_state_down.yfilter = yfilter;
    }
    if(value_path == "tracked-interfaces-ipv4-state-up")
    {
        tracked_interfaces_ipv4_state_up.yfilter = yfilter;
    }
    if(value_path == "tracked-interfaces-ipv4-state-down")
    {
        tracked_interfaces_ipv4_state_down.yfilter = yfilter;
    }
    if(value_path == "tracked-objects-up")
    {
        tracked_objects_up.yfilter = yfilter;
    }
    if(value_path == "tracked-objects-down")
    {
        tracked_objects_down.yfilter = yfilter;
    }
    if(value_path == "interfaces-ipv6-state-up")
    {
        interfaces_ipv6_state_up.yfilter = yfilter;
    }
    if(value_path == "interfaces-ipv6-state-down")
    {
        interfaces_ipv6_state_down.yfilter = yfilter;
    }
    if(value_path == "tracked-interfaces-ipv6-state-up")
    {
        tracked_interfaces_ipv6_state_up.yfilter = yfilter;
    }
    if(value_path == "tracked-interfaces-ipv6-state-down")
    {
        tracked_interfaces_ipv6_state_down.yfilter = yfilter;
    }
    if(value_path == "bfd-sessions-up")
    {
        bfd_sessions_up.yfilter = yfilter;
    }
    if(value_path == "bfd-sessions-down")
    {
        bfd_sessions_down.yfilter = yfilter;
    }
    if(value_path == "bfd-session-inactive")
    {
        bfd_session_inactive.yfilter = yfilter;
    }
}

bool Hsrp::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-sessions-active" || name == "ipv4-sessions-standby" || name == "ipv4-sessions-speak" || name == "ipv4-sessions-listen" || name == "ipv4-sessions-learn" || name == "ipv4-sessions-init" || name == "ipv4-slaves-active" || name == "ipv4-slaves-standby" || name == "ipv4-slaves-speak" || name == "ipv4-slaves-listen" || name == "ipv4-slaves-learn" || name == "ipv4-slaves-init" || name == "ipv4-virtual-ip-addresses-active-up" || name == "ipv4-virtual-ip-addresses-active-down" || name == "ipv4-virtual-ip-addresses-standby-up" || name == "ipv4-virtual-ip-addresses-standby-down" || name == "ipv4-virtual-ip-addresses-speak-up" || name == "ipv4-virtual-ip-addresses-speak-down" || name == "ipv4-virtual-ip-addresses-listen-up" || name == "ipv4-virtual-ip-addresses-listen-down" || name == "ipv4-virtual-ip-addresses-learn-up" || name == "ipv4-virtual-ip-addresses-learn-down" || name == "ipv4-virtual-ip-addresses-init-up" || name == "ipv4-virtual-ip-addresses-init-down" || name == "ipv6-sessions-active" || name == "ipv6-sessions-standby" || name == "ipv6-sessions-speak" || name == "ipv6-sessions-listen" || name == "ipv6-sessions-learn" || name == "ipv6-sessions-init" || name == "ipv6-slaves-active" || name == "ipv6-slaves-standby" || name == "ipv6-slaves-speak" || name == "ipv6-slaves-listen" || name == "ipv6-slaves-learn" || name == "ipv6-slaves-init" || name == "ipv6-virtual-ip-addresses-active-up" || name == "ipv6-virtual-ip-addresses-active-down" || name == "ipv6-virtual-ip-addresses-standby-up" || name == "ipv6-virtual-ip-addresses-standby-down" || name == "ipv6-virtual-ip-addresses-speak-up" || name == "ipv6-virtual-ip-addresses-speak-down" || name == "ipv6-virtual-ip-addresses-listen-up" || name == "ipv6-virtual-ip-addresses-listen-down" || name == "ipv6-virtual-ip-addresses-learn-up" || name == "ipv6-virtual-ip-addresses-learn-down" || name == "ipv6-virtual-ip-addresses-init-up" || name == "ipv6-virtual-ip-addresses-init-down" || name == "interfaces-ipv4-state-up" || name == "interfaces-ipv4-state-down" || name == "tracked-interfaces-ipv4-state-up" || name == "tracked-interfaces-ipv4-state-down" || name == "tracked-objects-up" || name == "tracked-objects-down" || name == "interfaces-ipv6-state-up" || name == "interfaces-ipv6-state-down" || name == "tracked-interfaces-ipv6-state-up" || name == "tracked-interfaces-ipv6-state-down" || name == "bfd-sessions-up" || name == "bfd-sessions-down" || name == "bfd-session-inactive")
        return true;
    return false;
}

const Enum::YLeaf HsrpVmacState::stored {0, "stored"};
const Enum::YLeaf HsrpVmacState::reserved {1, "reserved"};
const Enum::YLeaf HsrpVmacState::active {2, "active"};
const Enum::YLeaf HsrpVmacState::reserving {3, "reserving"};

const Enum::YLeaf StandbyGrpState::state_initial {1, "state-initial"};
const Enum::YLeaf StandbyGrpState::state_learn {2, "state-learn"};
const Enum::YLeaf StandbyGrpState::state_listen {3, "state-listen"};
const Enum::YLeaf StandbyGrpState::state_speak {4, "state-speak"};
const Enum::YLeaf StandbyGrpState::state_standby {5, "state-standby"};
const Enum::YLeaf StandbyGrpState::state_active {6, "state-active"};

const Enum::YLeaf HsrpStateChangeReason::state_change_bfd_down {0, "state-change-bfd-down"};
const Enum::YLeaf HsrpStateChangeReason::state_change_vip_learnt {1, "state-change-vip-learnt"};
const Enum::YLeaf HsrpStateChangeReason::state_change_interface_ip {2, "state-change-interface-ip"};
const Enum::YLeaf HsrpStateChangeReason::state_change_delay_timer {3, "state-change-delay-timer"};
const Enum::YLeaf HsrpStateChangeReason::state_change_startup {4, "state-change-startup"};
const Enum::YLeaf HsrpStateChangeReason::state_change_shutdown {5, "state-change-shutdown"};
const Enum::YLeaf HsrpStateChangeReason::state_change_interface_up {6, "state-change-interface-up"};
const Enum::YLeaf HsrpStateChangeReason::state_change_interface_down {7, "state-change-interface-down"};
const Enum::YLeaf HsrpStateChangeReason::state_change_active_timer {8, "state-change-active-timer"};
const Enum::YLeaf HsrpStateChangeReason::state_change_standby_timer {9, "state-change-standby-timer"};
const Enum::YLeaf HsrpStateChangeReason::state_change_resign {10, "state-change-resign"};
const Enum::YLeaf HsrpStateChangeReason::state_change_coup {11, "state-change-coup"};
const Enum::YLeaf HsrpStateChangeReason::state_change_higher_priority_speak {12, "state-change-higher-priority-speak"};
const Enum::YLeaf HsrpStateChangeReason::state_change_higher_priority_standby {13, "state-change-higher-priority-standby"};
const Enum::YLeaf HsrpStateChangeReason::state_change_lower_priority_standby {14, "state-change-lower-priority-standby"};
const Enum::YLeaf HsrpStateChangeReason::state_change_higher_priority_active {15, "state-change-higher-priority-active"};
const Enum::YLeaf HsrpStateChangeReason::state_change_lower_priority_active {16, "state-change-lower-priority-active"};
const Enum::YLeaf HsrpStateChangeReason::state_change_virtual_ip_configured {17, "state-change-virtual-ip-configured"};
const Enum::YLeaf HsrpStateChangeReason::state_change_virtual_ip_lost {18, "state-change-virtual-ip-lost"};
const Enum::YLeaf HsrpStateChangeReason::state_change_recovered_from_checkpoint {19, "state-change-recovered-from-checkpoint"};
const Enum::YLeaf HsrpStateChangeReason::state_change_mac_update {20, "state-change-mac-update"};
const Enum::YLeaf HsrpStateChangeReason::state_change_admin {21, "state-change-admin"};
const Enum::YLeaf HsrpStateChangeReason::state_change_parent {22, "state-change-parent"};
const Enum::YLeaf HsrpStateChangeReason::state_change_chkpt_update {23, "state-change-chkpt-update"};
const Enum::YLeaf HsrpStateChangeReason::state_change_issu_resync {24, "state-change-issu-resync"};
const Enum::YLeaf HsrpStateChangeReason::state_change_reset_to_learn {25, "state-change-reset-to-learn"};
const Enum::YLeaf HsrpStateChangeReason::state_change_max {26, "state-change-max"};

const Enum::YLeaf HsrpBAf::ipv4 {0, "ipv4"};
const Enum::YLeaf HsrpBAf::ipv6 {1, "ipv6"};
const Enum::YLeaf HsrpBAf::count {2, "count"};

const Enum::YLeaf HsrpBfdSessionState::bfd_state_none {0, "bfd-state-none"};
const Enum::YLeaf HsrpBfdSessionState::bfd_state_inactive {1, "bfd-state-inactive"};
const Enum::YLeaf HsrpBfdSessionState::bfd_state_up {2, "bfd-state-up"};
const Enum::YLeaf HsrpBfdSessionState::bfd_state_down {3, "bfd-state-down"};


}
}

