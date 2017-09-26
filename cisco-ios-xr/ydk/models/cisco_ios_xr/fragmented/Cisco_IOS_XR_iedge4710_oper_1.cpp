
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_1.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_oper {

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummaries()
{

    yang_name = "ipv4-address-vrf-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::~Ipv4AddressVrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_data() const
{
    for (std::size_t index=0; index<ipv4_address_vrf_summary.size(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_vrf_summary.size(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-vrf-summary")
    {
        for(auto const & c : ipv4_address_vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary>();
        c->parent = this;
        ipv4_address_vrf_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : ipv4_address_vrf_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-vrf-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::Ipv4AddressVrfSummary()
    :
    address{YType::str, "address"},
    vrf_name{YType::str, "vrf-name"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>())
{
    address_family_xr->parent = this;
    state_xr->parent = this;

    yang_name = "ipv4-address-vrf-summary"; yang_parent_name = "ipv4-address-vrf-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::~Ipv4AddressVrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_data() const
{
    return address.is_set
	|| vrf_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-xr" || name == "state-xr" || name == "address" || name == "vrf-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-vrf-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-vrf-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummaries()
{

    yang_name = "mac-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::~MacSummaries()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_data() const
{
    for (std::size_t index=0; index<mac_summary.size(); index++)
    {
        if(mac_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_operation() const
{
    for (std::size_t index=0; index<mac_summary.size(); index++)
    {
        if(mac_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-summary")
    {
        for(auto const & c : mac_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary>();
        c->parent = this;
        mac_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : mac_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::MacSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "mac-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::MacSummary()
    :
    mac_address{YType::str, "mac-address"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr>())
{
    address_family_xr->parent = this;
    state_xr->parent = this;

    yang_name = "mac-summary"; yang_parent_name = "mac-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::~MacSummary()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_data() const
{
    return mac_address.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary" <<"[mac-address='" <<mac_address <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-xr" || name == "state-xr" || name == "mac-address")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "mac-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "mac-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Sessions()
{

    yang_name = "sessions"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Sessions::~Sessions()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::has_data() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.size(); index++)
    {
        if(session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        for(auto const & c : session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_>();
        c->parent = this;
        session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Sessions::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Sessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Sessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Session_()
    :
    session_id{YType::str, "session-id"},
    access_interface_name{YType::str, "access-interface-name"},
    account_session_id{YType::str, "account-session-id"},
    af_up_status{YType::uint32, "af-up-status"},
    circuit_id{YType::str, "circuit-id"},
    clientname{YType::str, "clientname"},
    delegated_ipv6_prefix{YType::str, "delegated-ipv6-prefix"},
    formattedname{YType::str, "formattedname"},
    idle_state_change_time{YType::str, "idle-state-change-time"},
    interface_name{YType::str, "interface-name"},
    ipv6_interface_id{YType::str, "ipv6-interface-id"},
    is_session_authentic{YType::boolean, "is-session-authentic"},
    is_session_author{YType::boolean, "is-session-author"},
    lac_address{YType::str, "lac-address"},
    lns_address{YType::str, "lns-address"},
    mac_address{YType::str, "mac-address"},
    nas_port{YType::str, "nas-port"},
    pending_callbacks{YType::uint64, "pending-callbacks"},
    pppoe_sub_type{YType::enumeration, "pppoe-sub-type"},
    remote_id{YType::str, "remote-id"},
    session_creation_time{YType::str, "session-creation-time"},
    session_ip_address{YType::str, "session-ip-address"},
    session_ipv4_state{YType::enumeration, "session-ipv4-state"},
    session_ipv6_address{YType::str, "session-ipv6-address"},
    session_ipv6_prefix{YType::str, "session-ipv6-prefix"},
    session_ipv6_state{YType::enumeration, "session-ipv6-state"},
    session_state{YType::enumeration, "session-state"},
    session_type{YType::enumeration, "session-type"},
    total_session_idle_time{YType::uint32, "total-session-idle-time"},
    tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
    tunnel_server_authentication_id{YType::str, "tunnel-server-authentication-id"},
    username{YType::str, "username"},
    vrf_name{YType::str, "vrf-name"}
    	,
    accounting(std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting>())
	,mobility_attributes(std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes>())
	,user_profile_attributes(std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes>())
{
    accounting->parent = this;
    mobility_attributes->parent = this;
    user_profile_attributes->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::~Session_()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_data() const
{
    for (std::size_t index=0; index<session_change_of_authorization.size(); index++)
    {
        if(session_change_of_authorization[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| access_interface_name.is_set
	|| account_session_id.is_set
	|| af_up_status.is_set
	|| circuit_id.is_set
	|| clientname.is_set
	|| delegated_ipv6_prefix.is_set
	|| formattedname.is_set
	|| idle_state_change_time.is_set
	|| interface_name.is_set
	|| ipv6_interface_id.is_set
	|| is_session_authentic.is_set
	|| is_session_author.is_set
	|| lac_address.is_set
	|| lns_address.is_set
	|| mac_address.is_set
	|| nas_port.is_set
	|| pending_callbacks.is_set
	|| pppoe_sub_type.is_set
	|| remote_id.is_set
	|| session_creation_time.is_set
	|| session_ip_address.is_set
	|| session_ipv4_state.is_set
	|| session_ipv6_address.is_set
	|| session_ipv6_prefix.is_set
	|| session_ipv6_state.is_set
	|| session_state.is_set
	|| session_type.is_set
	|| total_session_idle_time.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_server_authentication_id.is_set
	|| username.is_set
	|| vrf_name.is_set
	|| (accounting !=  nullptr && accounting->has_data())
	|| (mobility_attributes !=  nullptr && mobility_attributes->has_data())
	|| (user_profile_attributes !=  nullptr && user_profile_attributes->has_data());
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_operation() const
{
    for (std::size_t index=0; index<session_change_of_authorization.size(); index++)
    {
        if(session_change_of_authorization[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(access_interface_name.yfilter)
	|| ydk::is_set(account_session_id.yfilter)
	|| ydk::is_set(af_up_status.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(clientname.yfilter)
	|| ydk::is_set(delegated_ipv6_prefix.yfilter)
	|| ydk::is_set(formattedname.yfilter)
	|| ydk::is_set(idle_state_change_time.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(ipv6_interface_id.yfilter)
	|| ydk::is_set(is_session_authentic.yfilter)
	|| ydk::is_set(is_session_author.yfilter)
	|| ydk::is_set(lac_address.yfilter)
	|| ydk::is_set(lns_address.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(nas_port.yfilter)
	|| ydk::is_set(pending_callbacks.yfilter)
	|| ydk::is_set(pppoe_sub_type.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(session_creation_time.yfilter)
	|| ydk::is_set(session_ip_address.yfilter)
	|| ydk::is_set(session_ipv4_state.yfilter)
	|| ydk::is_set(session_ipv6_address.yfilter)
	|| ydk::is_set(session_ipv6_prefix.yfilter)
	|| ydk::is_set(session_ipv6_state.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(total_session_idle_time.yfilter)
	|| ydk::is_set(tunnel_client_authentication_id.yfilter)
	|| ydk::is_set(tunnel_server_authentication_id.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation())
	|| (mobility_attributes !=  nullptr && mobility_attributes->has_operation())
	|| (user_profile_attributes !=  nullptr && user_profile_attributes->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session" <<"[session-id='" <<session_id <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (access_interface_name.is_set || is_set(access_interface_name.yfilter)) leaf_name_data.push_back(access_interface_name.get_name_leafdata());
    if (account_session_id.is_set || is_set(account_session_id.yfilter)) leaf_name_data.push_back(account_session_id.get_name_leafdata());
    if (af_up_status.is_set || is_set(af_up_status.yfilter)) leaf_name_data.push_back(af_up_status.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (clientname.is_set || is_set(clientname.yfilter)) leaf_name_data.push_back(clientname.get_name_leafdata());
    if (delegated_ipv6_prefix.is_set || is_set(delegated_ipv6_prefix.yfilter)) leaf_name_data.push_back(delegated_ipv6_prefix.get_name_leafdata());
    if (formattedname.is_set || is_set(formattedname.yfilter)) leaf_name_data.push_back(formattedname.get_name_leafdata());
    if (idle_state_change_time.is_set || is_set(idle_state_change_time.yfilter)) leaf_name_data.push_back(idle_state_change_time.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (ipv6_interface_id.is_set || is_set(ipv6_interface_id.yfilter)) leaf_name_data.push_back(ipv6_interface_id.get_name_leafdata());
    if (is_session_authentic.is_set || is_set(is_session_authentic.yfilter)) leaf_name_data.push_back(is_session_authentic.get_name_leafdata());
    if (is_session_author.is_set || is_set(is_session_author.yfilter)) leaf_name_data.push_back(is_session_author.get_name_leafdata());
    if (lac_address.is_set || is_set(lac_address.yfilter)) leaf_name_data.push_back(lac_address.get_name_leafdata());
    if (lns_address.is_set || is_set(lns_address.yfilter)) leaf_name_data.push_back(lns_address.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (nas_port.is_set || is_set(nas_port.yfilter)) leaf_name_data.push_back(nas_port.get_name_leafdata());
    if (pending_callbacks.is_set || is_set(pending_callbacks.yfilter)) leaf_name_data.push_back(pending_callbacks.get_name_leafdata());
    if (pppoe_sub_type.is_set || is_set(pppoe_sub_type.yfilter)) leaf_name_data.push_back(pppoe_sub_type.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (session_creation_time.is_set || is_set(session_creation_time.yfilter)) leaf_name_data.push_back(session_creation_time.get_name_leafdata());
    if (session_ip_address.is_set || is_set(session_ip_address.yfilter)) leaf_name_data.push_back(session_ip_address.get_name_leafdata());
    if (session_ipv4_state.is_set || is_set(session_ipv4_state.yfilter)) leaf_name_data.push_back(session_ipv4_state.get_name_leafdata());
    if (session_ipv6_address.is_set || is_set(session_ipv6_address.yfilter)) leaf_name_data.push_back(session_ipv6_address.get_name_leafdata());
    if (session_ipv6_prefix.is_set || is_set(session_ipv6_prefix.yfilter)) leaf_name_data.push_back(session_ipv6_prefix.get_name_leafdata());
    if (session_ipv6_state.is_set || is_set(session_ipv6_state.yfilter)) leaf_name_data.push_back(session_ipv6_state.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (total_session_idle_time.is_set || is_set(total_session_idle_time.yfilter)) leaf_name_data.push_back(total_session_idle_time.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.yfilter)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_server_authentication_id.is_set || is_set(tunnel_server_authentication_id.yfilter)) leaf_name_data.push_back(tunnel_server_authentication_id.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "mobility-attributes")
    {
        if(mobility_attributes == nullptr)
        {
            mobility_attributes = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes>();
        }
        return mobility_attributes;
    }

    if(child_yang_name == "session-change-of-authorization")
    {
        for(auto const & c : session_change_of_authorization)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization>();
        c->parent = this;
        session_change_of_authorization.push_back(c);
        return c;
    }

    if(child_yang_name == "user-profile-attributes")
    {
        if(user_profile_attributes == nullptr)
        {
            user_profile_attributes = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes>();
        }
        return user_profile_attributes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(accounting != nullptr)
    {
        children["accounting"] = accounting;
    }

    if(mobility_attributes != nullptr)
    {
        children["mobility-attributes"] = mobility_attributes;
    }

    for (auto const & c : session_change_of_authorization)
    {
        children[c->get_segment_path()] = c;
    }

    if(user_profile_attributes != nullptr)
    {
        children["user-profile-attributes"] = user_profile_attributes;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name = value;
        access_interface_name.value_namespace = name_space;
        access_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-session-id")
    {
        account_session_id = value;
        account_session_id.value_namespace = name_space;
        account_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "af-up-status")
    {
        af_up_status = value;
        af_up_status.value_namespace = name_space;
        af_up_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientname")
    {
        clientname = value;
        clientname.value_namespace = name_space;
        clientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "delegated-ipv6-prefix")
    {
        delegated_ipv6_prefix = value;
        delegated_ipv6_prefix.value_namespace = name_space;
        delegated_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "formattedname")
    {
        formattedname = value;
        formattedname.value_namespace = name_space;
        formattedname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-state-change-time")
    {
        idle_state_change_time = value;
        idle_state_change_time.value_namespace = name_space;
        idle_state_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-interface-id")
    {
        ipv6_interface_id = value;
        ipv6_interface_id.value_namespace = name_space;
        ipv6_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-authentic")
    {
        is_session_authentic = value;
        is_session_authentic.value_namespace = name_space;
        is_session_authentic.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-session-author")
    {
        is_session_author = value;
        is_session_author.value_namespace = name_space;
        is_session_author.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-address")
    {
        lac_address = value;
        lac_address.value_namespace = name_space;
        lac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lns-address")
    {
        lns_address = value;
        lns_address.value_namespace = name_space;
        lns_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas-port")
    {
        nas_port = value;
        nas_port.value_namespace = name_space;
        nas_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pending-callbacks")
    {
        pending_callbacks = value;
        pending_callbacks.value_namespace = name_space;
        pending_callbacks.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-sub-type")
    {
        pppoe_sub_type = value;
        pppoe_sub_type.value_namespace = name_space;
        pppoe_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-time")
    {
        session_creation_time = value;
        session_creation_time.value_namespace = name_space;
        session_creation_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-ip-address")
    {
        session_ip_address = value;
        session_ip_address.value_namespace = name_space;
        session_ip_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-ipv4-state")
    {
        session_ipv4_state = value;
        session_ipv4_state.value_namespace = name_space;
        session_ipv4_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-ipv6-address")
    {
        session_ipv6_address = value;
        session_ipv6_address.value_namespace = name_space;
        session_ipv6_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-ipv6-prefix")
    {
        session_ipv6_prefix = value;
        session_ipv6_prefix.value_namespace = name_space;
        session_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-ipv6-state")
    {
        session_ipv6_state = value;
        session_ipv6_state.value_namespace = name_space;
        session_ipv6_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-session-idle-time")
    {
        total_session_idle_time = value;
        total_session_idle_time.value_namespace = name_space;
        total_session_idle_time.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name.yfilter = yfilter;
    }
    if(value_path == "account-session-id")
    {
        account_session_id.yfilter = yfilter;
    }
    if(value_path == "af-up-status")
    {
        af_up_status.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "clientname")
    {
        clientname.yfilter = yfilter;
    }
    if(value_path == "delegated-ipv6-prefix")
    {
        delegated_ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "formattedname")
    {
        formattedname.yfilter = yfilter;
    }
    if(value_path == "idle-state-change-time")
    {
        idle_state_change_time.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "ipv6-interface-id")
    {
        ipv6_interface_id.yfilter = yfilter;
    }
    if(value_path == "is-session-authentic")
    {
        is_session_authentic.yfilter = yfilter;
    }
    if(value_path == "is-session-author")
    {
        is_session_author.yfilter = yfilter;
    }
    if(value_path == "lac-address")
    {
        lac_address.yfilter = yfilter;
    }
    if(value_path == "lns-address")
    {
        lns_address.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "nas-port")
    {
        nas_port.yfilter = yfilter;
    }
    if(value_path == "pending-callbacks")
    {
        pending_callbacks.yfilter = yfilter;
    }
    if(value_path == "pppoe-sub-type")
    {
        pppoe_sub_type.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "session-creation-time")
    {
        session_creation_time.yfilter = yfilter;
    }
    if(value_path == "session-ip-address")
    {
        session_ip_address.yfilter = yfilter;
    }
    if(value_path == "session-ipv4-state")
    {
        session_ipv4_state.yfilter = yfilter;
    }
    if(value_path == "session-ipv6-address")
    {
        session_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "session-ipv6-prefix")
    {
        session_ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "session-ipv6-state")
    {
        session_ipv6_state.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "total-session-idle-time")
    {
        total_session_idle_time.yfilter = yfilter;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-server-authentication-id")
    {
        tunnel_server_authentication_id.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "mobility-attributes" || name == "session-change-of-authorization" || name == "user-profile-attributes" || name == "session-id" || name == "access-interface-name" || name == "account-session-id" || name == "af-up-status" || name == "circuit-id" || name == "clientname" || name == "delegated-ipv6-prefix" || name == "formattedname" || name == "idle-state-change-time" || name == "interface-name" || name == "ipv6-interface-id" || name == "is-session-authentic" || name == "is-session-author" || name == "lac-address" || name == "lns-address" || name == "mac-address" || name == "nas-port" || name == "pending-callbacks" || name == "pppoe-sub-type" || name == "remote-id" || name == "session-creation-time" || name == "session-ip-address" || name == "session-ipv4-state" || name == "session-ipv6-address" || name == "session-ipv6-prefix" || name == "session-ipv6-state" || name == "session-state" || name == "session-type" || name == "total-session-idle-time" || name == "tunnel-client-authentication-id" || name == "tunnel-server-authentication-id" || name == "username" || name == "vrf-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::Accounting()
{

    yang_name = "accounting"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::~Accounting()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_data() const
{
    for (std::size_t index=0; index<accounting_session.size(); index++)
    {
        if(accounting_session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_operation() const
{
    for (std::size_t index=0; index<accounting_session.size(); index++)
    {
        if(accounting_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-session")
    {
        for(auto const & c : accounting_session)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession>();
        c->parent = this;
        accounting_session.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : accounting_session)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-session")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::AccountingSession()
    :
    accepted_interim_updates{YType::uint32, "accepted-interim-updates"},
    account_session_id{YType::str, "account-session-id"},
    accounting_start_time{YType::str, "accounting-start-time"},
    accounting_state_rc{YType::uint32, "accounting-state-rc"},
    accounting_stop_state{YType::uint32, "accounting-stop-state"},
    interim_interval{YType::uint32, "interim-interval"},
    is_interim_accounting_enabled{YType::boolean, "is-interim-accounting-enabled"},
    last_interim_update_attempt_time{YType::str, "last-interim-update-attempt-time"},
    last_successful_interim_update_time{YType::str, "last-successful-interim-update-time"},
    method_list_name{YType::str, "method-list-name"},
    next_interim_update_attempt_time{YType::uint32, "next-interim-update-attempt-time"},
    record_context_name{YType::str, "record-context-name"},
    rejected_interim_updates{YType::uint32, "rejected-interim-updates"},
    sent_interim_update_failures{YType::uint32, "sent-interim-update-failures"},
    sent_interim_updates{YType::uint32, "sent-interim-updates"}
{

    yang_name = "accounting-session"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::~AccountingSession()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_data() const
{
    return accepted_interim_updates.is_set
	|| account_session_id.is_set
	|| accounting_start_time.is_set
	|| accounting_state_rc.is_set
	|| accounting_stop_state.is_set
	|| interim_interval.is_set
	|| is_interim_accounting_enabled.is_set
	|| last_interim_update_attempt_time.is_set
	|| last_successful_interim_update_time.is_set
	|| method_list_name.is_set
	|| next_interim_update_attempt_time.is_set
	|| record_context_name.is_set
	|| rejected_interim_updates.is_set
	|| sent_interim_update_failures.is_set
	|| sent_interim_updates.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accepted_interim_updates.yfilter)
	|| ydk::is_set(account_session_id.yfilter)
	|| ydk::is_set(accounting_start_time.yfilter)
	|| ydk::is_set(accounting_state_rc.yfilter)
	|| ydk::is_set(accounting_stop_state.yfilter)
	|| ydk::is_set(interim_interval.yfilter)
	|| ydk::is_set(is_interim_accounting_enabled.yfilter)
	|| ydk::is_set(last_interim_update_attempt_time.yfilter)
	|| ydk::is_set(last_successful_interim_update_time.yfilter)
	|| ydk::is_set(method_list_name.yfilter)
	|| ydk::is_set(next_interim_update_attempt_time.yfilter)
	|| ydk::is_set(record_context_name.yfilter)
	|| ydk::is_set(rejected_interim_updates.yfilter)
	|| ydk::is_set(sent_interim_update_failures.yfilter)
	|| ydk::is_set(sent_interim_updates.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-session";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accepted_interim_updates.is_set || is_set(accepted_interim_updates.yfilter)) leaf_name_data.push_back(accepted_interim_updates.get_name_leafdata());
    if (account_session_id.is_set || is_set(account_session_id.yfilter)) leaf_name_data.push_back(account_session_id.get_name_leafdata());
    if (accounting_start_time.is_set || is_set(accounting_start_time.yfilter)) leaf_name_data.push_back(accounting_start_time.get_name_leafdata());
    if (accounting_state_rc.is_set || is_set(accounting_state_rc.yfilter)) leaf_name_data.push_back(accounting_state_rc.get_name_leafdata());
    if (accounting_stop_state.is_set || is_set(accounting_stop_state.yfilter)) leaf_name_data.push_back(accounting_stop_state.get_name_leafdata());
    if (interim_interval.is_set || is_set(interim_interval.yfilter)) leaf_name_data.push_back(interim_interval.get_name_leafdata());
    if (is_interim_accounting_enabled.is_set || is_set(is_interim_accounting_enabled.yfilter)) leaf_name_data.push_back(is_interim_accounting_enabled.get_name_leafdata());
    if (last_interim_update_attempt_time.is_set || is_set(last_interim_update_attempt_time.yfilter)) leaf_name_data.push_back(last_interim_update_attempt_time.get_name_leafdata());
    if (last_successful_interim_update_time.is_set || is_set(last_successful_interim_update_time.yfilter)) leaf_name_data.push_back(last_successful_interim_update_time.get_name_leafdata());
    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (next_interim_update_attempt_time.is_set || is_set(next_interim_update_attempt_time.yfilter)) leaf_name_data.push_back(next_interim_update_attempt_time.get_name_leafdata());
    if (record_context_name.is_set || is_set(record_context_name.yfilter)) leaf_name_data.push_back(record_context_name.get_name_leafdata());
    if (rejected_interim_updates.is_set || is_set(rejected_interim_updates.yfilter)) leaf_name_data.push_back(rejected_interim_updates.get_name_leafdata());
    if (sent_interim_update_failures.is_set || is_set(sent_interim_update_failures.yfilter)) leaf_name_data.push_back(sent_interim_update_failures.get_name_leafdata());
    if (sent_interim_updates.is_set || is_set(sent_interim_updates.yfilter)) leaf_name_data.push_back(sent_interim_updates.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accepted-interim-updates")
    {
        accepted_interim_updates = value;
        accepted_interim_updates.value_namespace = name_space;
        accepted_interim_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-session-id")
    {
        account_session_id = value;
        account_session_id.value_namespace = name_space;
        account_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-start-time")
    {
        accounting_start_time = value;
        accounting_start_time.value_namespace = name_space;
        accounting_start_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-state-rc")
    {
        accounting_state_rc = value;
        accounting_state_rc.value_namespace = name_space;
        accounting_state_rc.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-stop-state")
    {
        accounting_stop_state = value;
        accounting_stop_state.value_namespace = name_space;
        accounting_stop_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interim-interval")
    {
        interim_interval = value;
        interim_interval.value_namespace = name_space;
        interim_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interim-accounting-enabled")
    {
        is_interim_accounting_enabled = value;
        is_interim_accounting_enabled.value_namespace = name_space;
        is_interim_accounting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-interim-update-attempt-time")
    {
        last_interim_update_attempt_time = value;
        last_interim_update_attempt_time.value_namespace = name_space;
        last_interim_update_attempt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-successful-interim-update-time")
    {
        last_successful_interim_update_time = value;
        last_successful_interim_update_time.value_namespace = name_space;
        last_successful_interim_update_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-interim-update-attempt-time")
    {
        next_interim_update_attempt_time = value;
        next_interim_update_attempt_time.value_namespace = name_space;
        next_interim_update_attempt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "record-context-name")
    {
        record_context_name = value;
        record_context_name.value_namespace = name_space;
        record_context_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "rejected-interim-updates")
    {
        rejected_interim_updates = value;
        rejected_interim_updates.value_namespace = name_space;
        rejected_interim_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-interim-update-failures")
    {
        sent_interim_update_failures = value;
        sent_interim_update_failures.value_namespace = name_space;
        sent_interim_update_failures.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-interim-updates")
    {
        sent_interim_updates = value;
        sent_interim_updates.value_namespace = name_space;
        sent_interim_updates.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accepted-interim-updates")
    {
        accepted_interim_updates.yfilter = yfilter;
    }
    if(value_path == "account-session-id")
    {
        account_session_id.yfilter = yfilter;
    }
    if(value_path == "accounting-start-time")
    {
        accounting_start_time.yfilter = yfilter;
    }
    if(value_path == "accounting-state-rc")
    {
        accounting_state_rc.yfilter = yfilter;
    }
    if(value_path == "accounting-stop-state")
    {
        accounting_stop_state.yfilter = yfilter;
    }
    if(value_path == "interim-interval")
    {
        interim_interval.yfilter = yfilter;
    }
    if(value_path == "is-interim-accounting-enabled")
    {
        is_interim_accounting_enabled.yfilter = yfilter;
    }
    if(value_path == "last-interim-update-attempt-time")
    {
        last_interim_update_attempt_time.yfilter = yfilter;
    }
    if(value_path == "last-successful-interim-update-time")
    {
        last_successful_interim_update_time.yfilter = yfilter;
    }
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
    if(value_path == "next-interim-update-attempt-time")
    {
        next_interim_update_attempt_time.yfilter = yfilter;
    }
    if(value_path == "record-context-name")
    {
        record_context_name.yfilter = yfilter;
    }
    if(value_path == "rejected-interim-updates")
    {
        rejected_interim_updates.yfilter = yfilter;
    }
    if(value_path == "sent-interim-update-failures")
    {
        sent_interim_update_failures.yfilter = yfilter;
    }
    if(value_path == "sent-interim-updates")
    {
        sent_interim_updates.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accepted-interim-updates" || name == "account-session-id" || name == "accounting-start-time" || name == "accounting-state-rc" || name == "accounting-stop-state" || name == "interim-interval" || name == "is-interim-accounting-enabled" || name == "last-interim-update-attempt-time" || name == "last-successful-interim-update-time" || name == "method-list-name" || name == "next-interim-update-attempt-time" || name == "record-context-name" || name == "rejected-interim-updates" || name == "sent-interim-update-failures" || name == "sent-interim-updates")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::MobilityAttributes()
    :
    domain_name{YType::str, "domain-name"},
    downlink_gre_key{YType::str, "downlink-gre-key"},
    lease_time{YType::str, "lease-time"},
    mobility_default_ipv4_gateway{YType::str, "mobility-default-ipv4-gateway"},
    mobility_dhcp_server{YType::str, "mobility-dhcp-server"},
    mobility_dns_server{YType::str, "mobility-dns-server"},
    mobility_ipv4_address{YType::str, "mobility-ipv4-address"},
    mobility_ipv4_netmask{YType::str, "mobility-ipv4-netmask"},
    mpc_protocol{YType::boolean, "mpc-protocol"},
    uplink_gre_key{YType::str, "uplink-gre-key"}
{

    yang_name = "mobility-attributes"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::~MobilityAttributes()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::has_data() const
{
    return domain_name.is_set
	|| downlink_gre_key.is_set
	|| lease_time.is_set
	|| mobility_default_ipv4_gateway.is_set
	|| mobility_dhcp_server.is_set
	|| mobility_dns_server.is_set
	|| mobility_ipv4_address.is_set
	|| mobility_ipv4_netmask.is_set
	|| mpc_protocol.is_set
	|| uplink_gre_key.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(domain_name.yfilter)
	|| ydk::is_set(downlink_gre_key.yfilter)
	|| ydk::is_set(lease_time.yfilter)
	|| ydk::is_set(mobility_default_ipv4_gateway.yfilter)
	|| ydk::is_set(mobility_dhcp_server.yfilter)
	|| ydk::is_set(mobility_dns_server.yfilter)
	|| ydk::is_set(mobility_ipv4_address.yfilter)
	|| ydk::is_set(mobility_ipv4_netmask.yfilter)
	|| ydk::is_set(mpc_protocol.yfilter)
	|| ydk::is_set(uplink_gre_key.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mobility-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (domain_name.is_set || is_set(domain_name.yfilter)) leaf_name_data.push_back(domain_name.get_name_leafdata());
    if (downlink_gre_key.is_set || is_set(downlink_gre_key.yfilter)) leaf_name_data.push_back(downlink_gre_key.get_name_leafdata());
    if (lease_time.is_set || is_set(lease_time.yfilter)) leaf_name_data.push_back(lease_time.get_name_leafdata());
    if (mobility_default_ipv4_gateway.is_set || is_set(mobility_default_ipv4_gateway.yfilter)) leaf_name_data.push_back(mobility_default_ipv4_gateway.get_name_leafdata());
    if (mobility_dhcp_server.is_set || is_set(mobility_dhcp_server.yfilter)) leaf_name_data.push_back(mobility_dhcp_server.get_name_leafdata());
    if (mobility_dns_server.is_set || is_set(mobility_dns_server.yfilter)) leaf_name_data.push_back(mobility_dns_server.get_name_leafdata());
    if (mobility_ipv4_address.is_set || is_set(mobility_ipv4_address.yfilter)) leaf_name_data.push_back(mobility_ipv4_address.get_name_leafdata());
    if (mobility_ipv4_netmask.is_set || is_set(mobility_ipv4_netmask.yfilter)) leaf_name_data.push_back(mobility_ipv4_netmask.get_name_leafdata());
    if (mpc_protocol.is_set || is_set(mpc_protocol.yfilter)) leaf_name_data.push_back(mpc_protocol.get_name_leafdata());
    if (uplink_gre_key.is_set || is_set(uplink_gre_key.yfilter)) leaf_name_data.push_back(uplink_gre_key.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "domain-name")
    {
        domain_name = value;
        domain_name.value_namespace = name_space;
        domain_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downlink-gre-key")
    {
        downlink_gre_key = value;
        downlink_gre_key.value_namespace = name_space;
        downlink_gre_key.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lease-time")
    {
        lease_time = value;
        lease_time.value_namespace = name_space;
        lease_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-default-ipv4-gateway")
    {
        mobility_default_ipv4_gateway = value;
        mobility_default_ipv4_gateway.value_namespace = name_space;
        mobility_default_ipv4_gateway.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-dhcp-server")
    {
        mobility_dhcp_server = value;
        mobility_dhcp_server.value_namespace = name_space;
        mobility_dhcp_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-dns-server")
    {
        mobility_dns_server = value;
        mobility_dns_server.value_namespace = name_space;
        mobility_dns_server.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-ipv4-address")
    {
        mobility_ipv4_address = value;
        mobility_ipv4_address.value_namespace = name_space;
        mobility_ipv4_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mobility-ipv4-netmask")
    {
        mobility_ipv4_netmask = value;
        mobility_ipv4_netmask.value_namespace = name_space;
        mobility_ipv4_netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mpc-protocol")
    {
        mpc_protocol = value;
        mpc_protocol.value_namespace = name_space;
        mpc_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "uplink-gre-key")
    {
        uplink_gre_key = value;
        uplink_gre_key.value_namespace = name_space;
        uplink_gre_key.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "domain-name")
    {
        domain_name.yfilter = yfilter;
    }
    if(value_path == "downlink-gre-key")
    {
        downlink_gre_key.yfilter = yfilter;
    }
    if(value_path == "lease-time")
    {
        lease_time.yfilter = yfilter;
    }
    if(value_path == "mobility-default-ipv4-gateway")
    {
        mobility_default_ipv4_gateway.yfilter = yfilter;
    }
    if(value_path == "mobility-dhcp-server")
    {
        mobility_dhcp_server.yfilter = yfilter;
    }
    if(value_path == "mobility-dns-server")
    {
        mobility_dns_server.yfilter = yfilter;
    }
    if(value_path == "mobility-ipv4-address")
    {
        mobility_ipv4_address.yfilter = yfilter;
    }
    if(value_path == "mobility-ipv4-netmask")
    {
        mobility_ipv4_netmask.yfilter = yfilter;
    }
    if(value_path == "mpc-protocol")
    {
        mpc_protocol.yfilter = yfilter;
    }
    if(value_path == "uplink-gre-key")
    {
        uplink_gre_key.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::MobilityAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "domain-name" || name == "downlink-gre-key" || name == "lease-time" || name == "mobility-default-ipv4-gateway" || name == "mobility-dhcp-server" || name == "mobility-dns-server" || name == "mobility-ipv4-address" || name == "mobility-ipv4-netmask" || name == "mpc-protocol" || name == "uplink-gre-key")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::SessionChangeOfAuthorization()
    :
    coa_reply_attributes{YType::str, "coa-reply-attributes"},
    coa_request_attributes{YType::str, "coa-request-attributes"},
    reply_time{YType::str, "reply-time"},
    request_acked{YType::boolean, "request-acked"},
    request_time{YType::str, "request-time"}
{

    yang_name = "session-change-of-authorization"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::~SessionChangeOfAuthorization()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_data() const
{
    return coa_reply_attributes.is_set
	|| coa_request_attributes.is_set
	|| reply_time.is_set
	|| request_acked.is_set
	|| request_time.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(coa_reply_attributes.yfilter)
	|| ydk::is_set(coa_request_attributes.yfilter)
	|| ydk::is_set(reply_time.yfilter)
	|| ydk::is_set(request_acked.yfilter)
	|| ydk::is_set(request_time.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-change-of-authorization";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (coa_reply_attributes.is_set || is_set(coa_reply_attributes.yfilter)) leaf_name_data.push_back(coa_reply_attributes.get_name_leafdata());
    if (coa_request_attributes.is_set || is_set(coa_request_attributes.yfilter)) leaf_name_data.push_back(coa_request_attributes.get_name_leafdata());
    if (reply_time.is_set || is_set(reply_time.yfilter)) leaf_name_data.push_back(reply_time.get_name_leafdata());
    if (request_acked.is_set || is_set(request_acked.yfilter)) leaf_name_data.push_back(request_acked.get_name_leafdata());
    if (request_time.is_set || is_set(request_time.yfilter)) leaf_name_data.push_back(request_time.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "coa-reply-attributes")
    {
        coa_reply_attributes = value;
        coa_reply_attributes.value_namespace = name_space;
        coa_reply_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "coa-request-attributes")
    {
        coa_request_attributes = value;
        coa_request_attributes.value_namespace = name_space;
        coa_request_attributes.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-time")
    {
        reply_time = value;
        reply_time.value_namespace = name_space;
        reply_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-acked")
    {
        request_acked = value;
        request_acked.value_namespace = name_space;
        request_acked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-time")
    {
        request_time = value;
        request_time.value_namespace = name_space;
        request_time.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "coa-reply-attributes")
    {
        coa_reply_attributes.yfilter = yfilter;
    }
    if(value_path == "coa-request-attributes")
    {
        coa_request_attributes.yfilter = yfilter;
    }
    if(value_path == "reply-time")
    {
        reply_time.yfilter = yfilter;
    }
    if(value_path == "request-acked")
    {
        request_acked.yfilter = yfilter;
    }
    if(value_path == "request-time")
    {
        request_time.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "coa-reply-attributes" || name == "coa-request-attributes" || name == "reply-time" || name == "request-acked" || name == "request-time")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::UserProfileAttributes()
    :
    accounting_session_id{YType::str, "accounting-session-id"},
    actual_data_rate_downstream{YType::uint32, "actual-data-rate-downstream"},
    actual_data_rate_upstream{YType::uint32, "actual-data-rate-upstream"},
    attainable_data_rate_downstream{YType::uint32, "attainable-data-rate-downstream"},
    attainable_data_rate_upstream{YType::uint32, "attainable-data-rate-upstream"},
    authorization_service_type{YType::enumeration, "authorization-service-type"},
    circuit_id{YType::str, "circuit-id"},
    connection_receive_speed{YType::uint32, "connection-receive-speed"},
    connection_transmission_speed{YType::uint32, "connection-transmission-speed"},
    destination_station_id{YType::str, "destination-station-id"},
    downstream_parameterized_qos_policy{YType::str, "downstream-parameterized-qos-policy"},
    downstream_qos_policy{YType::str, "downstream-qos-policy"},
    egress_access_list{YType::str, "egress-access-list"},
    formatted_calling_station_id{YType::str, "formatted-calling-station-id"},
    ingress_access_list{YType::str, "ingress-access-list"},
    interface_name{YType::str, "interface-name"},
    interface_type{YType::enumeration, "interface-type"},
    interim_accounting_interval{YType::uint32, "interim-accounting-interval"},
    ip_netmask{YType::str, "ip-netmask"},
    ipv4_unnumbered{YType::str, "ipv4-unnumbered"},
    ipv4mtu{YType::uint32, "ipv4mtu"},
    is_interworking_functionality{YType::boolean, "is-interworking-functionality"},
    max_data_rate_downstream{YType::uint32, "max-data-rate-downstream"},
    max_data_rate_upstream{YType::uint32, "max-data-rate-upstream"},
    max_interleaving_delay_downstream{YType::uint32, "max-interleaving-delay-downstream"},
    max_interleaving_delay_upstream{YType::uint32, "max-interleaving-delay-upstream"},
    min_data_rate_downstream{YType::uint32, "min-data-rate-downstream"},
    min_data_rate_downstream_low_power{YType::uint32, "min-data-rate-downstream-low-power"},
    min_data_rate_upstream_low_power{YType::uint32, "min-data-rate-upstream-low-power"},
    parent_interface_name{YType::str, "parent-interface-name"},
    pool_address{YType::str, "pool-address"},
    primary_dns_server_address{YType::str, "primary-dns-server-address"},
    primary_net_bios_server_address{YType::str, "primary-net-bios-server-address"},
    remote_id{YType::str, "remote-id"},
    route{YType::str, "route"},
    secondary_dns_server_address{YType::str, "secondary-dns-server-address"},
    secondary_net_bios_server_address{YType::str, "secondary-net-bios-server-address"},
    session_termination_cause{YType::enumeration, "session-termination-cause"},
    session_timeout{YType::uint32, "session-timeout"},
    strict_rpf_packets{YType::uint32, "strict-rpf-packets"},
    tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
    tunnel_client_endpoint{YType::str, "tunnel-client-endpoint"},
    tunnel_medium{YType::enumeration, "tunnel-medium"},
    tunnel_preference{YType::uint32, "tunnel-preference"},
    tunnel_protocol{YType::enumeration, "tunnel-protocol"},
    tunnel_server_endpoint{YType::str, "tunnel-server-endpoint"},
    tunnel_tos_setting{YType::uint32, "tunnel-tos-setting"},
    upstream_parameterized_qos_policy{YType::str, "upstream-parameterized-qos-policy"},
    upstream_qos_policy{YType::str, "upstream-qos-policy"}
{

    yang_name = "user-profile-attributes"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::~UserProfileAttributes()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::has_data() const
{
    return accounting_session_id.is_set
	|| actual_data_rate_downstream.is_set
	|| actual_data_rate_upstream.is_set
	|| attainable_data_rate_downstream.is_set
	|| attainable_data_rate_upstream.is_set
	|| authorization_service_type.is_set
	|| circuit_id.is_set
	|| connection_receive_speed.is_set
	|| connection_transmission_speed.is_set
	|| destination_station_id.is_set
	|| downstream_parameterized_qos_policy.is_set
	|| downstream_qos_policy.is_set
	|| egress_access_list.is_set
	|| formatted_calling_station_id.is_set
	|| ingress_access_list.is_set
	|| interface_name.is_set
	|| interface_type.is_set
	|| interim_accounting_interval.is_set
	|| ip_netmask.is_set
	|| ipv4_unnumbered.is_set
	|| ipv4mtu.is_set
	|| is_interworking_functionality.is_set
	|| max_data_rate_downstream.is_set
	|| max_data_rate_upstream.is_set
	|| max_interleaving_delay_downstream.is_set
	|| max_interleaving_delay_upstream.is_set
	|| min_data_rate_downstream.is_set
	|| min_data_rate_downstream_low_power.is_set
	|| min_data_rate_upstream_low_power.is_set
	|| parent_interface_name.is_set
	|| pool_address.is_set
	|| primary_dns_server_address.is_set
	|| primary_net_bios_server_address.is_set
	|| remote_id.is_set
	|| route.is_set
	|| secondary_dns_server_address.is_set
	|| secondary_net_bios_server_address.is_set
	|| session_termination_cause.is_set
	|| session_timeout.is_set
	|| strict_rpf_packets.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_client_endpoint.is_set
	|| tunnel_medium.is_set
	|| tunnel_preference.is_set
	|| tunnel_protocol.is_set
	|| tunnel_server_endpoint.is_set
	|| tunnel_tos_setting.is_set
	|| upstream_parameterized_qos_policy.is_set
	|| upstream_qos_policy.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting_session_id.yfilter)
	|| ydk::is_set(actual_data_rate_downstream.yfilter)
	|| ydk::is_set(actual_data_rate_upstream.yfilter)
	|| ydk::is_set(attainable_data_rate_downstream.yfilter)
	|| ydk::is_set(attainable_data_rate_upstream.yfilter)
	|| ydk::is_set(authorization_service_type.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(connection_receive_speed.yfilter)
	|| ydk::is_set(connection_transmission_speed.yfilter)
	|| ydk::is_set(destination_station_id.yfilter)
	|| ydk::is_set(downstream_parameterized_qos_policy.yfilter)
	|| ydk::is_set(downstream_qos_policy.yfilter)
	|| ydk::is_set(egress_access_list.yfilter)
	|| ydk::is_set(formatted_calling_station_id.yfilter)
	|| ydk::is_set(ingress_access_list.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(interface_type.yfilter)
	|| ydk::is_set(interim_accounting_interval.yfilter)
	|| ydk::is_set(ip_netmask.yfilter)
	|| ydk::is_set(ipv4_unnumbered.yfilter)
	|| ydk::is_set(ipv4mtu.yfilter)
	|| ydk::is_set(is_interworking_functionality.yfilter)
	|| ydk::is_set(max_data_rate_downstream.yfilter)
	|| ydk::is_set(max_data_rate_upstream.yfilter)
	|| ydk::is_set(max_interleaving_delay_downstream.yfilter)
	|| ydk::is_set(max_interleaving_delay_upstream.yfilter)
	|| ydk::is_set(min_data_rate_downstream.yfilter)
	|| ydk::is_set(min_data_rate_downstream_low_power.yfilter)
	|| ydk::is_set(min_data_rate_upstream_low_power.yfilter)
	|| ydk::is_set(parent_interface_name.yfilter)
	|| ydk::is_set(pool_address.yfilter)
	|| ydk::is_set(primary_dns_server_address.yfilter)
	|| ydk::is_set(primary_net_bios_server_address.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(route.yfilter)
	|| ydk::is_set(secondary_dns_server_address.yfilter)
	|| ydk::is_set(secondary_net_bios_server_address.yfilter)
	|| ydk::is_set(session_termination_cause.yfilter)
	|| ydk::is_set(session_timeout.yfilter)
	|| ydk::is_set(strict_rpf_packets.yfilter)
	|| ydk::is_set(tunnel_client_authentication_id.yfilter)
	|| ydk::is_set(tunnel_client_endpoint.yfilter)
	|| ydk::is_set(tunnel_medium.yfilter)
	|| ydk::is_set(tunnel_preference.yfilter)
	|| ydk::is_set(tunnel_protocol.yfilter)
	|| ydk::is_set(tunnel_server_endpoint.yfilter)
	|| ydk::is_set(tunnel_tos_setting.yfilter)
	|| ydk::is_set(upstream_parameterized_qos_policy.yfilter)
	|| ydk::is_set(upstream_qos_policy.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "user-profile-attributes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_session_id.is_set || is_set(accounting_session_id.yfilter)) leaf_name_data.push_back(accounting_session_id.get_name_leafdata());
    if (actual_data_rate_downstream.is_set || is_set(actual_data_rate_downstream.yfilter)) leaf_name_data.push_back(actual_data_rate_downstream.get_name_leafdata());
    if (actual_data_rate_upstream.is_set || is_set(actual_data_rate_upstream.yfilter)) leaf_name_data.push_back(actual_data_rate_upstream.get_name_leafdata());
    if (attainable_data_rate_downstream.is_set || is_set(attainable_data_rate_downstream.yfilter)) leaf_name_data.push_back(attainable_data_rate_downstream.get_name_leafdata());
    if (attainable_data_rate_upstream.is_set || is_set(attainable_data_rate_upstream.yfilter)) leaf_name_data.push_back(attainable_data_rate_upstream.get_name_leafdata());
    if (authorization_service_type.is_set || is_set(authorization_service_type.yfilter)) leaf_name_data.push_back(authorization_service_type.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (connection_receive_speed.is_set || is_set(connection_receive_speed.yfilter)) leaf_name_data.push_back(connection_receive_speed.get_name_leafdata());
    if (connection_transmission_speed.is_set || is_set(connection_transmission_speed.yfilter)) leaf_name_data.push_back(connection_transmission_speed.get_name_leafdata());
    if (destination_station_id.is_set || is_set(destination_station_id.yfilter)) leaf_name_data.push_back(destination_station_id.get_name_leafdata());
    if (downstream_parameterized_qos_policy.is_set || is_set(downstream_parameterized_qos_policy.yfilter)) leaf_name_data.push_back(downstream_parameterized_qos_policy.get_name_leafdata());
    if (downstream_qos_policy.is_set || is_set(downstream_qos_policy.yfilter)) leaf_name_data.push_back(downstream_qos_policy.get_name_leafdata());
    if (egress_access_list.is_set || is_set(egress_access_list.yfilter)) leaf_name_data.push_back(egress_access_list.get_name_leafdata());
    if (formatted_calling_station_id.is_set || is_set(formatted_calling_station_id.yfilter)) leaf_name_data.push_back(formatted_calling_station_id.get_name_leafdata());
    if (ingress_access_list.is_set || is_set(ingress_access_list.yfilter)) leaf_name_data.push_back(ingress_access_list.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (interface_type.is_set || is_set(interface_type.yfilter)) leaf_name_data.push_back(interface_type.get_name_leafdata());
    if (interim_accounting_interval.is_set || is_set(interim_accounting_interval.yfilter)) leaf_name_data.push_back(interim_accounting_interval.get_name_leafdata());
    if (ip_netmask.is_set || is_set(ip_netmask.yfilter)) leaf_name_data.push_back(ip_netmask.get_name_leafdata());
    if (ipv4_unnumbered.is_set || is_set(ipv4_unnumbered.yfilter)) leaf_name_data.push_back(ipv4_unnumbered.get_name_leafdata());
    if (ipv4mtu.is_set || is_set(ipv4mtu.yfilter)) leaf_name_data.push_back(ipv4mtu.get_name_leafdata());
    if (is_interworking_functionality.is_set || is_set(is_interworking_functionality.yfilter)) leaf_name_data.push_back(is_interworking_functionality.get_name_leafdata());
    if (max_data_rate_downstream.is_set || is_set(max_data_rate_downstream.yfilter)) leaf_name_data.push_back(max_data_rate_downstream.get_name_leafdata());
    if (max_data_rate_upstream.is_set || is_set(max_data_rate_upstream.yfilter)) leaf_name_data.push_back(max_data_rate_upstream.get_name_leafdata());
    if (max_interleaving_delay_downstream.is_set || is_set(max_interleaving_delay_downstream.yfilter)) leaf_name_data.push_back(max_interleaving_delay_downstream.get_name_leafdata());
    if (max_interleaving_delay_upstream.is_set || is_set(max_interleaving_delay_upstream.yfilter)) leaf_name_data.push_back(max_interleaving_delay_upstream.get_name_leafdata());
    if (min_data_rate_downstream.is_set || is_set(min_data_rate_downstream.yfilter)) leaf_name_data.push_back(min_data_rate_downstream.get_name_leafdata());
    if (min_data_rate_downstream_low_power.is_set || is_set(min_data_rate_downstream_low_power.yfilter)) leaf_name_data.push_back(min_data_rate_downstream_low_power.get_name_leafdata());
    if (min_data_rate_upstream_low_power.is_set || is_set(min_data_rate_upstream_low_power.yfilter)) leaf_name_data.push_back(min_data_rate_upstream_low_power.get_name_leafdata());
    if (parent_interface_name.is_set || is_set(parent_interface_name.yfilter)) leaf_name_data.push_back(parent_interface_name.get_name_leafdata());
    if (pool_address.is_set || is_set(pool_address.yfilter)) leaf_name_data.push_back(pool_address.get_name_leafdata());
    if (primary_dns_server_address.is_set || is_set(primary_dns_server_address.yfilter)) leaf_name_data.push_back(primary_dns_server_address.get_name_leafdata());
    if (primary_net_bios_server_address.is_set || is_set(primary_net_bios_server_address.yfilter)) leaf_name_data.push_back(primary_net_bios_server_address.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (route.is_set || is_set(route.yfilter)) leaf_name_data.push_back(route.get_name_leafdata());
    if (secondary_dns_server_address.is_set || is_set(secondary_dns_server_address.yfilter)) leaf_name_data.push_back(secondary_dns_server_address.get_name_leafdata());
    if (secondary_net_bios_server_address.is_set || is_set(secondary_net_bios_server_address.yfilter)) leaf_name_data.push_back(secondary_net_bios_server_address.get_name_leafdata());
    if (session_termination_cause.is_set || is_set(session_termination_cause.yfilter)) leaf_name_data.push_back(session_termination_cause.get_name_leafdata());
    if (session_timeout.is_set || is_set(session_timeout.yfilter)) leaf_name_data.push_back(session_timeout.get_name_leafdata());
    if (strict_rpf_packets.is_set || is_set(strict_rpf_packets.yfilter)) leaf_name_data.push_back(strict_rpf_packets.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.yfilter)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_client_endpoint.is_set || is_set(tunnel_client_endpoint.yfilter)) leaf_name_data.push_back(tunnel_client_endpoint.get_name_leafdata());
    if (tunnel_medium.is_set || is_set(tunnel_medium.yfilter)) leaf_name_data.push_back(tunnel_medium.get_name_leafdata());
    if (tunnel_preference.is_set || is_set(tunnel_preference.yfilter)) leaf_name_data.push_back(tunnel_preference.get_name_leafdata());
    if (tunnel_protocol.is_set || is_set(tunnel_protocol.yfilter)) leaf_name_data.push_back(tunnel_protocol.get_name_leafdata());
    if (tunnel_server_endpoint.is_set || is_set(tunnel_server_endpoint.yfilter)) leaf_name_data.push_back(tunnel_server_endpoint.get_name_leafdata());
    if (tunnel_tos_setting.is_set || is_set(tunnel_tos_setting.yfilter)) leaf_name_data.push_back(tunnel_tos_setting.get_name_leafdata());
    if (upstream_parameterized_qos_policy.is_set || is_set(upstream_parameterized_qos_policy.yfilter)) leaf_name_data.push_back(upstream_parameterized_qos_policy.get_name_leafdata());
    if (upstream_qos_policy.is_set || is_set(upstream_qos_policy.yfilter)) leaf_name_data.push_back(upstream_qos_policy.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "accounting-session-id")
    {
        accounting_session_id = value;
        accounting_session_id.value_namespace = name_space;
        accounting_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-data-rate-downstream")
    {
        actual_data_rate_downstream = value;
        actual_data_rate_downstream.value_namespace = name_space;
        actual_data_rate_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "actual-data-rate-upstream")
    {
        actual_data_rate_upstream = value;
        actual_data_rate_upstream.value_namespace = name_space;
        actual_data_rate_upstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attainable-data-rate-downstream")
    {
        attainable_data_rate_downstream = value;
        attainable_data_rate_downstream.value_namespace = name_space;
        attainable_data_rate_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "attainable-data-rate-upstream")
    {
        attainable_data_rate_upstream = value;
        attainable_data_rate_upstream.value_namespace = name_space;
        attainable_data_rate_upstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "authorization-service-type")
    {
        authorization_service_type = value;
        authorization_service_type.value_namespace = name_space;
        authorization_service_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-receive-speed")
    {
        connection_receive_speed = value;
        connection_receive_speed.value_namespace = name_space;
        connection_receive_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connection-transmission-speed")
    {
        connection_transmission_speed = value;
        connection_transmission_speed.value_namespace = name_space;
        connection_transmission_speed.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "destination-station-id")
    {
        destination_station_id = value;
        destination_station_id.value_namespace = name_space;
        destination_station_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-parameterized-qos-policy")
    {
        downstream_parameterized_qos_policy = value;
        downstream_parameterized_qos_policy.value_namespace = name_space;
        downstream_parameterized_qos_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "downstream-qos-policy")
    {
        downstream_qos_policy = value;
        downstream_qos_policy.value_namespace = name_space;
        downstream_qos_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "egress-access-list")
    {
        egress_access_list = value;
        egress_access_list.value_namespace = name_space;
        egress_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "formatted-calling-station-id")
    {
        formatted_calling_station_id = value;
        formatted_calling_station_id.value_namespace = name_space;
        formatted_calling_station_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ingress-access-list")
    {
        ingress_access_list = value;
        ingress_access_list.value_namespace = name_space;
        ingress_access_list.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-type")
    {
        interface_type = value;
        interface_type.value_namespace = name_space;
        interface_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interim-accounting-interval")
    {
        interim_accounting_interval = value;
        interim_accounting_interval.value_namespace = name_space;
        interim_accounting_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask = value;
        ip_netmask.value_namespace = name_space;
        ip_netmask.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-unnumbered")
    {
        ipv4_unnumbered = value;
        ipv4_unnumbered.value_namespace = name_space;
        ipv4_unnumbered.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4mtu")
    {
        ipv4mtu = value;
        ipv4mtu.value_namespace = name_space;
        ipv4mtu.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interworking-functionality")
    {
        is_interworking_functionality = value;
        is_interworking_functionality.value_namespace = name_space;
        is_interworking_functionality.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-data-rate-downstream")
    {
        max_data_rate_downstream = value;
        max_data_rate_downstream.value_namespace = name_space;
        max_data_rate_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-data-rate-upstream")
    {
        max_data_rate_upstream = value;
        max_data_rate_upstream.value_namespace = name_space;
        max_data_rate_upstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interleaving-delay-downstream")
    {
        max_interleaving_delay_downstream = value;
        max_interleaving_delay_downstream.value_namespace = name_space;
        max_interleaving_delay_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "max-interleaving-delay-upstream")
    {
        max_interleaving_delay_upstream = value;
        max_interleaving_delay_upstream.value_namespace = name_space;
        max_interleaving_delay_upstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-data-rate-downstream")
    {
        min_data_rate_downstream = value;
        min_data_rate_downstream.value_namespace = name_space;
        min_data_rate_downstream.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-data-rate-downstream-low-power")
    {
        min_data_rate_downstream_low_power = value;
        min_data_rate_downstream_low_power.value_namespace = name_space;
        min_data_rate_downstream_low_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "min-data-rate-upstream-low-power")
    {
        min_data_rate_upstream_low_power = value;
        min_data_rate_upstream_low_power.value_namespace = name_space;
        min_data_rate_upstream_low_power.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name = value;
        parent_interface_name.value_namespace = name_space;
        parent_interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pool-address")
    {
        pool_address = value;
        pool_address.value_namespace = name_space;
        pool_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-dns-server-address")
    {
        primary_dns_server_address = value;
        primary_dns_server_address.value_namespace = name_space;
        primary_dns_server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "primary-net-bios-server-address")
    {
        primary_net_bios_server_address = value;
        primary_net_bios_server_address.value_namespace = name_space;
        primary_net_bios_server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "route")
    {
        route = value;
        route.value_namespace = name_space;
        route.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-dns-server-address")
    {
        secondary_dns_server_address = value;
        secondary_dns_server_address.value_namespace = name_space;
        secondary_dns_server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "secondary-net-bios-server-address")
    {
        secondary_net_bios_server_address = value;
        secondary_net_bios_server_address.value_namespace = name_space;
        secondary_net_bios_server_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-termination-cause")
    {
        session_termination_cause = value;
        session_termination_cause.value_namespace = name_space;
        session_termination_cause.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-timeout")
    {
        session_timeout = value;
        session_timeout.value_namespace = name_space;
        session_timeout.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "strict-rpf-packets")
    {
        strict_rpf_packets = value;
        strict_rpf_packets.value_namespace = name_space;
        strict_rpf_packets.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id = value;
        tunnel_client_authentication_id.value_namespace = name_space;
        tunnel_client_authentication_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-client-endpoint")
    {
        tunnel_client_endpoint = value;
        tunnel_client_endpoint.value_namespace = name_space;
        tunnel_client_endpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-medium")
    {
        tunnel_medium = value;
        tunnel_medium.value_namespace = name_space;
        tunnel_medium.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-preference")
    {
        tunnel_preference = value;
        tunnel_preference.value_namespace = name_space;
        tunnel_preference.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-protocol")
    {
        tunnel_protocol = value;
        tunnel_protocol.value_namespace = name_space;
        tunnel_protocol.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-server-endpoint")
    {
        tunnel_server_endpoint = value;
        tunnel_server_endpoint.value_namespace = name_space;
        tunnel_server_endpoint.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "tunnel-tos-setting")
    {
        tunnel_tos_setting = value;
        tunnel_tos_setting.value_namespace = name_space;
        tunnel_tos_setting.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-parameterized-qos-policy")
    {
        upstream_parameterized_qos_policy = value;
        upstream_parameterized_qos_policy.value_namespace = name_space;
        upstream_parameterized_qos_policy.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "upstream-qos-policy")
    {
        upstream_qos_policy = value;
        upstream_qos_policy.value_namespace = name_space;
        upstream_qos_policy.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting-session-id")
    {
        accounting_session_id.yfilter = yfilter;
    }
    if(value_path == "actual-data-rate-downstream")
    {
        actual_data_rate_downstream.yfilter = yfilter;
    }
    if(value_path == "actual-data-rate-upstream")
    {
        actual_data_rate_upstream.yfilter = yfilter;
    }
    if(value_path == "attainable-data-rate-downstream")
    {
        attainable_data_rate_downstream.yfilter = yfilter;
    }
    if(value_path == "attainable-data-rate-upstream")
    {
        attainable_data_rate_upstream.yfilter = yfilter;
    }
    if(value_path == "authorization-service-type")
    {
        authorization_service_type.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "connection-receive-speed")
    {
        connection_receive_speed.yfilter = yfilter;
    }
    if(value_path == "connection-transmission-speed")
    {
        connection_transmission_speed.yfilter = yfilter;
    }
    if(value_path == "destination-station-id")
    {
        destination_station_id.yfilter = yfilter;
    }
    if(value_path == "downstream-parameterized-qos-policy")
    {
        downstream_parameterized_qos_policy.yfilter = yfilter;
    }
    if(value_path == "downstream-qos-policy")
    {
        downstream_qos_policy.yfilter = yfilter;
    }
    if(value_path == "egress-access-list")
    {
        egress_access_list.yfilter = yfilter;
    }
    if(value_path == "formatted-calling-station-id")
    {
        formatted_calling_station_id.yfilter = yfilter;
    }
    if(value_path == "ingress-access-list")
    {
        ingress_access_list.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "interface-type")
    {
        interface_type.yfilter = yfilter;
    }
    if(value_path == "interim-accounting-interval")
    {
        interim_accounting_interval.yfilter = yfilter;
    }
    if(value_path == "ip-netmask")
    {
        ip_netmask.yfilter = yfilter;
    }
    if(value_path == "ipv4-unnumbered")
    {
        ipv4_unnumbered.yfilter = yfilter;
    }
    if(value_path == "ipv4mtu")
    {
        ipv4mtu.yfilter = yfilter;
    }
    if(value_path == "is-interworking-functionality")
    {
        is_interworking_functionality.yfilter = yfilter;
    }
    if(value_path == "max-data-rate-downstream")
    {
        max_data_rate_downstream.yfilter = yfilter;
    }
    if(value_path == "max-data-rate-upstream")
    {
        max_data_rate_upstream.yfilter = yfilter;
    }
    if(value_path == "max-interleaving-delay-downstream")
    {
        max_interleaving_delay_downstream.yfilter = yfilter;
    }
    if(value_path == "max-interleaving-delay-upstream")
    {
        max_interleaving_delay_upstream.yfilter = yfilter;
    }
    if(value_path == "min-data-rate-downstream")
    {
        min_data_rate_downstream.yfilter = yfilter;
    }
    if(value_path == "min-data-rate-downstream-low-power")
    {
        min_data_rate_downstream_low_power.yfilter = yfilter;
    }
    if(value_path == "min-data-rate-upstream-low-power")
    {
        min_data_rate_upstream_low_power.yfilter = yfilter;
    }
    if(value_path == "parent-interface-name")
    {
        parent_interface_name.yfilter = yfilter;
    }
    if(value_path == "pool-address")
    {
        pool_address.yfilter = yfilter;
    }
    if(value_path == "primary-dns-server-address")
    {
        primary_dns_server_address.yfilter = yfilter;
    }
    if(value_path == "primary-net-bios-server-address")
    {
        primary_net_bios_server_address.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "route")
    {
        route.yfilter = yfilter;
    }
    if(value_path == "secondary-dns-server-address")
    {
        secondary_dns_server_address.yfilter = yfilter;
    }
    if(value_path == "secondary-net-bios-server-address")
    {
        secondary_net_bios_server_address.yfilter = yfilter;
    }
    if(value_path == "session-termination-cause")
    {
        session_termination_cause.yfilter = yfilter;
    }
    if(value_path == "session-timeout")
    {
        session_timeout.yfilter = yfilter;
    }
    if(value_path == "strict-rpf-packets")
    {
        strict_rpf_packets.yfilter = yfilter;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-client-endpoint")
    {
        tunnel_client_endpoint.yfilter = yfilter;
    }
    if(value_path == "tunnel-medium")
    {
        tunnel_medium.yfilter = yfilter;
    }
    if(value_path == "tunnel-preference")
    {
        tunnel_preference.yfilter = yfilter;
    }
    if(value_path == "tunnel-protocol")
    {
        tunnel_protocol.yfilter = yfilter;
    }
    if(value_path == "tunnel-server-endpoint")
    {
        tunnel_server_endpoint.yfilter = yfilter;
    }
    if(value_path == "tunnel-tos-setting")
    {
        tunnel_tos_setting.yfilter = yfilter;
    }
    if(value_path == "upstream-parameterized-qos-policy")
    {
        upstream_parameterized_qos_policy.yfilter = yfilter;
    }
    if(value_path == "upstream-qos-policy")
    {
        upstream_qos_policy.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::UserProfileAttributes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-session-id" || name == "actual-data-rate-downstream" || name == "actual-data-rate-upstream" || name == "attainable-data-rate-downstream" || name == "attainable-data-rate-upstream" || name == "authorization-service-type" || name == "circuit-id" || name == "connection-receive-speed" || name == "connection-transmission-speed" || name == "destination-station-id" || name == "downstream-parameterized-qos-policy" || name == "downstream-qos-policy" || name == "egress-access-list" || name == "formatted-calling-station-id" || name == "ingress-access-list" || name == "interface-name" || name == "interface-type" || name == "interim-accounting-interval" || name == "ip-netmask" || name == "ipv4-unnumbered" || name == "ipv4mtu" || name == "is-interworking-functionality" || name == "max-data-rate-downstream" || name == "max-data-rate-upstream" || name == "max-interleaving-delay-downstream" || name == "max-interleaving-delay-upstream" || name == "min-data-rate-downstream" || name == "min-data-rate-downstream-low-power" || name == "min-data-rate-upstream-low-power" || name == "parent-interface-name" || name == "pool-address" || name == "primary-dns-server-address" || name == "primary-net-bios-server-address" || name == "remote-id" || name == "route" || name == "secondary-dns-server-address" || name == "secondary-net-bios-server-address" || name == "session-termination-cause" || name == "session-timeout" || name == "strict-rpf-packets" || name == "tunnel-client-authentication-id" || name == "tunnel-client-endpoint" || name == "tunnel-medium" || name == "tunnel-preference" || name == "tunnel-protocol" || name == "tunnel-server-endpoint" || name == "tunnel-tos-setting" || name == "upstream-parameterized-qos-policy" || name == "upstream-qos-policy")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummaries()
{

    yang_name = "state-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::~StateSummaries()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_data() const
{
    for (std::size_t index=0; index<state_summary.size(); index++)
    {
        if(state_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_operation() const
{
    for (std::size_t index=0; index<state_summary.size(); index++)
    {
        if(state_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-summary")
    {
        for(auto const & c : state_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary>();
        c->parent = this;
        state_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : state_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::StateSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateSummary()
    :
    state{YType::enumeration, "state"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr>())
{
    address_family_xr->parent = this;
    state_xr->parent = this;

    yang_name = "state-summary"; yang_parent_name = "state-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::~StateSummary()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_data() const
{
    return state.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summary" <<"[state='" <<state <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "state")
    {
        state = value;
        state.value_namespace = name_space;
        state.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "state")
    {
        state.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-xr" || name == "state-xr" || name == "state")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "state-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "state-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::Summary()
    :
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr>())
{
    address_family_xr->parent = this;
    state_xr->parent = this;

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::~Summary()
{
}

bool Subscriber::Session::Nodes::Node::Summary::has_data() const
{
    return (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-xr" || name == "state-xr")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummaries()
{

    yang_name = "username-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::~UsernameSummaries()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_data() const
{
    for (std::size_t index=0; index<username_summary.size(); index++)
    {
        if(username_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_operation() const
{
    for (std::size_t index=0; index<username_summary.size(); index++)
    {
        if(username_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username-summary")
    {
        for(auto const & c : username_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary>();
        c->parent = this;
        username_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : username_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "username-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::UsernameSummary()
    :
    username{YType::str, "username"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr>())
{
    address_family_xr->parent = this;
    state_xr->parent = this;

    yang_name = "username-summary"; yang_parent_name = "username-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::~UsernameSummary()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_data() const
{
    return username.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summary" <<"[username='" <<username <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-xr" || name == "state-xr" || name == "username")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "username-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "username-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummaries()
{

    yang_name = "vrf-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::~VrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_data() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.size(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        for(auto const & c : vrf_summary)
        {
            std::string segment = c->get_segment_path();
            if(segment_path == segment)
            {
                return c;
            }
        }
        auto c = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary>();
        c->parent = this;
        vrf_summary.push_back(c);
        return c;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    for (auto const & c : vrf_summary)
    {
        children[c->get_segment_path()] = c;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::VrfSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"}
    	,
    address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr>())
	,state_xr(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr>())
{
    address_family_xr->parent = this;
    state_xr->parent = this;

    yang_name = "vrf-summary"; yang_parent_name = "vrf-summaries"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::~VrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_data() const
{
    return vrf_name.is_set
	|| (address_family_xr !=  nullptr && address_family_xr->has_data())
	|| (state_xr !=  nullptr && state_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation())
	|| (state_xr !=  nullptr && state_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary" <<"[vrf-name='" <<vrf_name <<"']";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr>();
        }
        return state_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(address_family_xr != nullptr)
    {
        children["address-family-xr"] = address_family_xr;
    }

    if(state_xr != nullptr)
    {
        children["state-xr"] = state_xr;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-xr" || name == "state-xr" || name == "vrf-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "vrf-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    return dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions = value;
        dual_part_up_sessions.value_namespace = name_space;
        dual_part_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions = value;
        dual_up_sessions.value_namespace = name_space;
        dual_up_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions = value;
        in_progress_sessions.value_namespace = name_space;
        in_progress_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions = value;
        ipv4_only_sessions.value_namespace = name_space;
        ipv4_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions = value;
        ipv6_only_sessions.value_namespace = name_space;
        ipv6_only_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "in-progress-sessions")
    {
        in_progress_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv4-only-sessions")
    {
        ipv4_only_sessions.yfilter = yfilter;
    }
    if(value_path == "ipv6-only-sessions")
    {
        ipv6_only_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::StateXr()
    :
    ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>())
	,ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>())
	,pppoe(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe>())
{
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;
    pppoe->parent = this;

    yang_name = "state-xr"; yang_parent_name = "vrf-summary"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_data() const
{
    return (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data())
	|| (pppoe !=  nullptr && pppoe->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation())
	|| (pppoe !=  nullptr && pppoe->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    if(ip_subscriber_dhcp != nullptr)
    {
        children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    if(pppoe != nullptr)
    {
        children["pppoe"] = pppoe;
    }

    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet" || name == "pppoe")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::Pppoe()
    :
    activated_sessions{YType::uint32, "activated-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    initialized_sessions{YType::uint32, "initialized-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_data() const
{
    return activated_sessions.is_set
	|| connected_sessions.is_set
	|| connecting_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set
	|| idle_sessions.is_set
	|| initialized_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(initialized_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<Entity>> children{};
    return children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions = value;
        disconnecting_sessions.value_namespace = name_space;
        disconnecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "end-sessions")
    {
        end_sessions = value;
        end_sessions.value_namespace = name_space;
        end_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "activated-sessions" || name == "connected-sessions" || name == "connecting-sessions" || name == "disconnecting-sessions" || name == "end-sessions" || name == "idle-sessions" || name == "initialized-sessions")
        return true;
    return false;
}


}
}

