
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_oper {

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "username-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "username-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummaries()
    :
    access_interface_summary(this, {"interface_name"})
{

    yang_name = "access-interface-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::~AccessInterfaceSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_interface_summary.len(); index++)
    {
        if(access_interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<access_interface_summary.len(); index++)
    {
        if(access_interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary>();
        ent_->parent = this;
        access_interface_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : access_interface_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AccessInterfaceSummary()
    :
    interface_name{YType::str, "interface-name"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "access-interface-summary"; yang_parent_name = "access-interface-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::~AccessInterfaceSummary()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "interface-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "access-interface-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "access-interface-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummaries()
    :
    ipv4_address_summary(this, {"address"})
{

    yang_name = "ipv4-address-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::~Ipv4AddressSummaries()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_address_summary.len(); index++)
    {
        if(ipv4_address_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_summary.len(); index++)
    {
        if(ipv4_address_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary>();
        ent_->parent = this;
        ipv4_address_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_address_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::Ipv4AddressSummary()
    :
    address{YType::str, "address"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "ipv4-address-summary"; yang_parent_name = "ipv4-address-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::~Ipv4AddressSummary()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-summary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "address")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummaries()
    :
    vrf_summary(this, {"vrf_name"})
{

    yang_name = "vrf-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::~VrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_summary.len(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.len(); index++)
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary>();
        ent_->parent = this;
        vrf_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : vrf_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "vrf-summary"; yang_parent_name = "vrf-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::~VrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(state_xr != nullptr)
    {
        _children["state-xr"] = state_xr;
    }

    if(address_family_xr != nullptr)
    {
        _children["address-family-xr"] = address_family_xr;
    }

    return _children;
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
    if(name == "state-xr" || name == "address-family-xr" || name == "vrf-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "vrf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::Pppoe()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    initialized_sessions{YType::uint32, "initialized-sessions"},
    connecting_sessions{YType::uint32, "connecting-sessions"},
    connected_sessions{YType::uint32, "connected-sessions"},
    activated_sessions{YType::uint32, "activated-sessions"},
    idle_sessions{YType::uint32, "idle-sessions"},
    disconnecting_sessions{YType::uint32, "disconnecting-sessions"},
    end_sessions{YType::uint32, "end-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "state-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return initialized_sessions.is_set
	|| connecting_sessions.is_set
	|| connected_sessions.is_set
	|| activated_sessions.is_set
	|| idle_sessions.is_set
	|| disconnecting_sessions.is_set
	|| end_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(initialized_sessions.yfilter)
	|| ydk::is_set(connecting_sessions.yfilter)
	|| ydk::is_set(connected_sessions.yfilter)
	|| ydk::is_set(activated_sessions.yfilter)
	|| ydk::is_set(idle_sessions.yfilter)
	|| ydk::is_set(disconnecting_sessions.yfilter)
	|| ydk::is_set(end_sessions.yfilter);
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

    if (initialized_sessions.is_set || is_set(initialized_sessions.yfilter)) leaf_name_data.push_back(initialized_sessions.get_name_leafdata());
    if (connecting_sessions.is_set || is_set(connecting_sessions.yfilter)) leaf_name_data.push_back(connecting_sessions.get_name_leafdata());
    if (connected_sessions.is_set || is_set(connected_sessions.yfilter)) leaf_name_data.push_back(connected_sessions.get_name_leafdata());
    if (activated_sessions.is_set || is_set(activated_sessions.yfilter)) leaf_name_data.push_back(activated_sessions.get_name_leafdata());
    if (idle_sessions.is_set || is_set(idle_sessions.yfilter)) leaf_name_data.push_back(idle_sessions.get_name_leafdata());
    if (disconnecting_sessions.is_set || is_set(disconnecting_sessions.yfilter)) leaf_name_data.push_back(disconnecting_sessions.get_name_leafdata());
    if (end_sessions.is_set || is_set(end_sessions.yfilter)) leaf_name_data.push_back(end_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions = value;
        initialized_sessions.value_namespace = name_space;
        initialized_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions = value;
        connecting_sessions.value_namespace = name_space;
        connecting_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions = value;
        connected_sessions.value_namespace = name_space;
        connected_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions = value;
        activated_sessions.value_namespace = name_space;
        activated_sessions.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions = value;
        idle_sessions.value_namespace = name_space;
        idle_sessions.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "initialized-sessions")
    {
        initialized_sessions.yfilter = yfilter;
    }
    if(value_path == "connecting-sessions")
    {
        connecting_sessions.yfilter = yfilter;
    }
    if(value_path == "connected-sessions")
    {
        connected_sessions.yfilter = yfilter;
    }
    if(value_path == "activated-sessions")
    {
        activated_sessions.yfilter = yfilter;
    }
    if(value_path == "idle-sessions")
    {
        idle_sessions.yfilter = yfilter;
    }
    if(value_path == "disconnecting-sessions")
    {
        disconnecting_sessions.yfilter = yfilter;
    }
    if(value_path == "end-sessions")
    {
        end_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "vrf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(pppoe != nullptr)
    {
        _children["pppoe"] = pppoe;
    }

    if(ip_subscriber_dhcp != nullptr)
    {
        _children["ip-subscriber-dhcp"] = ip_subscriber_dhcp;
    }

    if(ip_subscriber_packet != nullptr)
    {
        _children["ip-subscriber-packet"] = ip_subscriber_packet;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::Pppoe()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "pppoe"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-dhcp"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
    :
    in_progress_sessions{YType::uint32, "in-progress-sessions"},
    ipv4_only_sessions{YType::uint32, "ipv4-only-sessions"},
    ipv6_only_sessions{YType::uint32, "ipv6-only-sessions"},
    dual_part_up_sessions{YType::uint32, "dual-part-up-sessions"},
    dual_up_sessions{YType::uint32, "dual-up-sessions"},
    lac_sessions{YType::uint32, "lac-sessions"}
{

    yang_name = "ip-subscriber-packet"; yang_parent_name = "address-family-xr"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "lac-sessions")
    {
        lac_sessions = value;
        lac_sessions.value_namespace = name_space;
        lac_sessions.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
{
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
    if(value_path == "dual-part-up-sessions")
    {
        dual_part_up_sessions.yfilter = yfilter;
    }
    if(value_path == "dual-up-sessions")
    {
        dual_up_sessions.yfilter = yfilter;
    }
    if(value_path == "lac-sessions")
    {
        lac_sessions.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Sessions()
    :
    session(this, {"session_id"})
{

    yang_name = "sessions"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Sessions::~Sessions()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<session.len(); index++)
    {
        if(session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Sessions::has_operation() const
{
    for (std::size_t index=0; index<session.len(); index++)
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Sessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "session")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_>();
        ent_->parent = this;
        session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Sessions::get_children() const
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
    session_type{YType::enumeration, "session-type"},
    pppoe_sub_type{YType::enumeration, "pppoe-sub-type"},
    interface_name{YType::str, "interface-name"},
    vrf_name{YType::str, "vrf-name"},
    circuit_id{YType::str, "circuit-id"},
    remote_id{YType::str, "remote-id"},
    lns_address{YType::str, "lns-address"},
    lac_address{YType::str, "lac-address"},
    tunnel_client_authentication_id{YType::str, "tunnel-client-authentication-id"},
    tunnel_server_authentication_id{YType::str, "tunnel-server-authentication-id"},
    session_ip_address{YType::str, "session-ip-address"},
    session_ipv6_address{YType::str, "session-ipv6-address"},
    session_ipv6_prefix{YType::str, "session-ipv6-prefix"},
    delegated_ipv6_prefix{YType::str, "delegated-ipv6-prefix"},
    ipv6_interface_id{YType::str, "ipv6-interface-id"},
    mac_address{YType::str, "mac-address"},
    account_session_id{YType::str, "account-session-id"},
    nas_port{YType::str, "nas-port"},
    username{YType::str, "username"},
    clientname{YType::str, "clientname"},
    formattedname{YType::str, "formattedname"},
    is_session_authentic{YType::boolean, "is-session-authentic"},
    is_session_author{YType::boolean, "is-session-author"},
    session_state{YType::enumeration, "session-state"},
    session_creation_time_epoch{YType::uint64, "session-creation-time-epoch"},
    idle_state_change_time{YType::str, "idle-state-change-time"},
    total_session_idle_time{YType::uint32, "total-session-idle-time"},
    access_interface_name{YType::str, "access-interface-name"}
        ,
    accounting(std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting>())
    , sub_policy_data(this, {})
    , session_service_info(this, {})
    , session_change_of_authorization(this, {})
{
    accounting->parent = this;

    yang_name = "session"; yang_parent_name = "sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Sessions::Session_::~Session_()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<sub_policy_data.len(); index++)
    {
        if(sub_policy_data[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<session_service_info.len(); index++)
    {
        if(session_service_info[index]->has_data())
            return true;
    }
    for (std::size_t index=0; index<session_change_of_authorization.len(); index++)
    {
        if(session_change_of_authorization[index]->has_data())
            return true;
    }
    return session_id.is_set
	|| session_type.is_set
	|| pppoe_sub_type.is_set
	|| interface_name.is_set
	|| vrf_name.is_set
	|| circuit_id.is_set
	|| remote_id.is_set
	|| lns_address.is_set
	|| lac_address.is_set
	|| tunnel_client_authentication_id.is_set
	|| tunnel_server_authentication_id.is_set
	|| session_ip_address.is_set
	|| session_ipv6_address.is_set
	|| session_ipv6_prefix.is_set
	|| delegated_ipv6_prefix.is_set
	|| ipv6_interface_id.is_set
	|| mac_address.is_set
	|| account_session_id.is_set
	|| nas_port.is_set
	|| username.is_set
	|| clientname.is_set
	|| formattedname.is_set
	|| is_session_authentic.is_set
	|| is_session_author.is_set
	|| session_state.is_set
	|| session_creation_time_epoch.is_set
	|| idle_state_change_time.is_set
	|| total_session_idle_time.is_set
	|| access_interface_name.is_set
	|| (accounting !=  nullptr && accounting->has_data());
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_operation() const
{
    for (std::size_t index=0; index<sub_policy_data.len(); index++)
    {
        if(sub_policy_data[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<session_service_info.len(); index++)
    {
        if(session_service_info[index]->has_operation())
            return true;
    }
    for (std::size_t index=0; index<session_change_of_authorization.len(); index++)
    {
        if(session_change_of_authorization[index]->has_operation())
            return true;
    }
    return is_set(yfilter)
	|| ydk::is_set(session_id.yfilter)
	|| ydk::is_set(session_type.yfilter)
	|| ydk::is_set(pppoe_sub_type.yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(circuit_id.yfilter)
	|| ydk::is_set(remote_id.yfilter)
	|| ydk::is_set(lns_address.yfilter)
	|| ydk::is_set(lac_address.yfilter)
	|| ydk::is_set(tunnel_client_authentication_id.yfilter)
	|| ydk::is_set(tunnel_server_authentication_id.yfilter)
	|| ydk::is_set(session_ip_address.yfilter)
	|| ydk::is_set(session_ipv6_address.yfilter)
	|| ydk::is_set(session_ipv6_prefix.yfilter)
	|| ydk::is_set(delegated_ipv6_prefix.yfilter)
	|| ydk::is_set(ipv6_interface_id.yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| ydk::is_set(account_session_id.yfilter)
	|| ydk::is_set(nas_port.yfilter)
	|| ydk::is_set(username.yfilter)
	|| ydk::is_set(clientname.yfilter)
	|| ydk::is_set(formattedname.yfilter)
	|| ydk::is_set(is_session_authentic.yfilter)
	|| ydk::is_set(is_session_author.yfilter)
	|| ydk::is_set(session_state.yfilter)
	|| ydk::is_set(session_creation_time_epoch.yfilter)
	|| ydk::is_set(idle_state_change_time.yfilter)
	|| ydk::is_set(total_session_idle_time.yfilter)
	|| ydk::is_set(access_interface_name.yfilter)
	|| (accounting !=  nullptr && accounting->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_id.is_set || is_set(session_id.yfilter)) leaf_name_data.push_back(session_id.get_name_leafdata());
    if (session_type.is_set || is_set(session_type.yfilter)) leaf_name_data.push_back(session_type.get_name_leafdata());
    if (pppoe_sub_type.is_set || is_set(pppoe_sub_type.yfilter)) leaf_name_data.push_back(pppoe_sub_type.get_name_leafdata());
    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());
    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (circuit_id.is_set || is_set(circuit_id.yfilter)) leaf_name_data.push_back(circuit_id.get_name_leafdata());
    if (remote_id.is_set || is_set(remote_id.yfilter)) leaf_name_data.push_back(remote_id.get_name_leafdata());
    if (lns_address.is_set || is_set(lns_address.yfilter)) leaf_name_data.push_back(lns_address.get_name_leafdata());
    if (lac_address.is_set || is_set(lac_address.yfilter)) leaf_name_data.push_back(lac_address.get_name_leafdata());
    if (tunnel_client_authentication_id.is_set || is_set(tunnel_client_authentication_id.yfilter)) leaf_name_data.push_back(tunnel_client_authentication_id.get_name_leafdata());
    if (tunnel_server_authentication_id.is_set || is_set(tunnel_server_authentication_id.yfilter)) leaf_name_data.push_back(tunnel_server_authentication_id.get_name_leafdata());
    if (session_ip_address.is_set || is_set(session_ip_address.yfilter)) leaf_name_data.push_back(session_ip_address.get_name_leafdata());
    if (session_ipv6_address.is_set || is_set(session_ipv6_address.yfilter)) leaf_name_data.push_back(session_ipv6_address.get_name_leafdata());
    if (session_ipv6_prefix.is_set || is_set(session_ipv6_prefix.yfilter)) leaf_name_data.push_back(session_ipv6_prefix.get_name_leafdata());
    if (delegated_ipv6_prefix.is_set || is_set(delegated_ipv6_prefix.yfilter)) leaf_name_data.push_back(delegated_ipv6_prefix.get_name_leafdata());
    if (ipv6_interface_id.is_set || is_set(ipv6_interface_id.yfilter)) leaf_name_data.push_back(ipv6_interface_id.get_name_leafdata());
    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());
    if (account_session_id.is_set || is_set(account_session_id.yfilter)) leaf_name_data.push_back(account_session_id.get_name_leafdata());
    if (nas_port.is_set || is_set(nas_port.yfilter)) leaf_name_data.push_back(nas_port.get_name_leafdata());
    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());
    if (clientname.is_set || is_set(clientname.yfilter)) leaf_name_data.push_back(clientname.get_name_leafdata());
    if (formattedname.is_set || is_set(formattedname.yfilter)) leaf_name_data.push_back(formattedname.get_name_leafdata());
    if (is_session_authentic.is_set || is_set(is_session_authentic.yfilter)) leaf_name_data.push_back(is_session_authentic.get_name_leafdata());
    if (is_session_author.is_set || is_set(is_session_author.yfilter)) leaf_name_data.push_back(is_session_author.get_name_leafdata());
    if (session_state.is_set || is_set(session_state.yfilter)) leaf_name_data.push_back(session_state.get_name_leafdata());
    if (session_creation_time_epoch.is_set || is_set(session_creation_time_epoch.yfilter)) leaf_name_data.push_back(session_creation_time_epoch.get_name_leafdata());
    if (idle_state_change_time.is_set || is_set(idle_state_change_time.yfilter)) leaf_name_data.push_back(idle_state_change_time.get_name_leafdata());
    if (total_session_idle_time.is_set || is_set(total_session_idle_time.yfilter)) leaf_name_data.push_back(total_session_idle_time.get_name_leafdata());
    if (access_interface_name.is_set || is_set(access_interface_name.yfilter)) leaf_name_data.push_back(access_interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "sub-policy-data")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData>();
        ent_->parent = this;
        sub_policy_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "session-service-info")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo>();
        ent_->parent = this;
        session_service_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "session-change-of-authorization")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization>();
        ent_->parent = this;
        session_change_of_authorization.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(accounting != nullptr)
    {
        _children["accounting"] = accounting;
    }

    count_ = 0;
    for (auto ent_ : sub_policy_data.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : session_service_info.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    count_ = 0;
    for (auto ent_ : session_change_of_authorization.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-id")
    {
        session_id = value;
        session_id.value_namespace = name_space;
        session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-type")
    {
        session_type = value;
        session_type.value_namespace = name_space;
        session_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "pppoe-sub-type")
    {
        pppoe_sub_type = value;
        pppoe_sub_type.value_namespace = name_space;
        pppoe_sub_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "circuit-id")
    {
        circuit_id = value;
        circuit_id.value_namespace = name_space;
        circuit_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "remote-id")
    {
        remote_id = value;
        remote_id.value_namespace = name_space;
        remote_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lns-address")
    {
        lns_address = value;
        lns_address.value_namespace = name_space;
        lns_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "lac-address")
    {
        lac_address = value;
        lac_address.value_namespace = name_space;
        lac_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "session-ip-address")
    {
        session_ip_address = value;
        session_ip_address.value_namespace = name_space;
        session_ip_address.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "delegated-ipv6-prefix")
    {
        delegated_ipv6_prefix = value;
        delegated_ipv6_prefix.value_namespace = name_space;
        delegated_ipv6_prefix.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "ipv6-interface-id")
    {
        ipv6_interface_id = value;
        ipv6_interface_id.value_namespace = name_space;
        ipv6_interface_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "mac-address")
    {
        mac_address = value;
        mac_address.value_namespace = name_space;
        mac_address.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-session-id")
    {
        account_session_id = value;
        account_session_id.value_namespace = name_space;
        account_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "nas-port")
    {
        nas_port = value;
        nas_port.value_namespace = name_space;
        nas_port.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "username")
    {
        username = value;
        username.value_namespace = name_space;
        username.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "clientname")
    {
        clientname = value;
        clientname.value_namespace = name_space;
        clientname.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "formattedname")
    {
        formattedname = value;
        formattedname.value_namespace = name_space;
        formattedname.value_namespace_prefix = name_space_prefix;
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
    if(value_path == "session-state")
    {
        session_state = value;
        session_state.value_namespace = name_space;
        session_state.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-creation-time-epoch")
    {
        session_creation_time_epoch = value;
        session_creation_time_epoch.value_namespace = name_space;
        session_creation_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "idle-state-change-time")
    {
        idle_state_change_time = value;
        idle_state_change_time.value_namespace = name_space;
        idle_state_change_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "total-session-idle-time")
    {
        total_session_idle_time = value;
        total_session_idle_time.value_namespace = name_space;
        total_session_idle_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name = value;
        access_interface_name.value_namespace = name_space;
        access_interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-id")
    {
        session_id.yfilter = yfilter;
    }
    if(value_path == "session-type")
    {
        session_type.yfilter = yfilter;
    }
    if(value_path == "pppoe-sub-type")
    {
        pppoe_sub_type.yfilter = yfilter;
    }
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "circuit-id")
    {
        circuit_id.yfilter = yfilter;
    }
    if(value_path == "remote-id")
    {
        remote_id.yfilter = yfilter;
    }
    if(value_path == "lns-address")
    {
        lns_address.yfilter = yfilter;
    }
    if(value_path == "lac-address")
    {
        lac_address.yfilter = yfilter;
    }
    if(value_path == "tunnel-client-authentication-id")
    {
        tunnel_client_authentication_id.yfilter = yfilter;
    }
    if(value_path == "tunnel-server-authentication-id")
    {
        tunnel_server_authentication_id.yfilter = yfilter;
    }
    if(value_path == "session-ip-address")
    {
        session_ip_address.yfilter = yfilter;
    }
    if(value_path == "session-ipv6-address")
    {
        session_ipv6_address.yfilter = yfilter;
    }
    if(value_path == "session-ipv6-prefix")
    {
        session_ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "delegated-ipv6-prefix")
    {
        delegated_ipv6_prefix.yfilter = yfilter;
    }
    if(value_path == "ipv6-interface-id")
    {
        ipv6_interface_id.yfilter = yfilter;
    }
    if(value_path == "mac-address")
    {
        mac_address.yfilter = yfilter;
    }
    if(value_path == "account-session-id")
    {
        account_session_id.yfilter = yfilter;
    }
    if(value_path == "nas-port")
    {
        nas_port.yfilter = yfilter;
    }
    if(value_path == "username")
    {
        username.yfilter = yfilter;
    }
    if(value_path == "clientname")
    {
        clientname.yfilter = yfilter;
    }
    if(value_path == "formattedname")
    {
        formattedname.yfilter = yfilter;
    }
    if(value_path == "is-session-authentic")
    {
        is_session_authentic.yfilter = yfilter;
    }
    if(value_path == "is-session-author")
    {
        is_session_author.yfilter = yfilter;
    }
    if(value_path == "session-state")
    {
        session_state.yfilter = yfilter;
    }
    if(value_path == "session-creation-time-epoch")
    {
        session_creation_time_epoch.yfilter = yfilter;
    }
    if(value_path == "idle-state-change-time")
    {
        idle_state_change_time.yfilter = yfilter;
    }
    if(value_path == "total-session-idle-time")
    {
        total_session_idle_time.yfilter = yfilter;
    }
    if(value_path == "access-interface-name")
    {
        access_interface_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "sub-policy-data" || name == "session-service-info" || name == "session-change-of-authorization" || name == "session-id" || name == "session-type" || name == "pppoe-sub-type" || name == "interface-name" || name == "vrf-name" || name == "circuit-id" || name == "remote-id" || name == "lns-address" || name == "lac-address" || name == "tunnel-client-authentication-id" || name == "tunnel-server-authentication-id" || name == "session-ip-address" || name == "session-ipv6-address" || name == "session-ipv6-prefix" || name == "delegated-ipv6-prefix" || name == "ipv6-interface-id" || name == "mac-address" || name == "account-session-id" || name == "nas-port" || name == "username" || name == "clientname" || name == "formattedname" || name == "is-session-authentic" || name == "is-session-author" || name == "session-state" || name == "session-creation-time-epoch" || name == "idle-state-change-time" || name == "total-session-idle-time" || name == "access-interface-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::Accounting()
    :
    accounting_session(this, {})
{

    yang_name = "accounting"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::~Accounting()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<accounting_session.len(); index++)
    {
        if(accounting_session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::has_operation() const
{
    for (std::size_t index=0; index<accounting_session.len(); index++)
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-session")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession>();
        ent_->parent = this;
        accounting_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : accounting_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    accounting_state_rc{YType::uint32, "accounting-state-rc"},
    accounting_stop_state{YType::uint32, "accounting-stop-state"},
    record_context_name{YType::str, "record-context-name"},
    method_list_name{YType::str, "method-list-name"},
    account_session_id{YType::str, "account-session-id"},
    accounting_start_time_epoch{YType::uint64, "accounting-start-time-epoch"},
    is_interim_accounting_enabled{YType::boolean, "is-interim-accounting-enabled"},
    interim_interval{YType::uint32, "interim-interval"},
    last_successful_interim_update_time_epoch{YType::uint64, "last-successful-interim-update-time-epoch"},
    next_interim_update_attempt_time{YType::uint32, "next-interim-update-attempt-time"},
    last_interim_update_attempt_time_epoch{YType::uint64, "last-interim-update-attempt-time-epoch"},
    sent_interim_updates{YType::uint32, "sent-interim-updates"},
    accepted_interim_updates{YType::uint32, "accepted-interim-updates"},
    rejected_interim_updates{YType::uint32, "rejected-interim-updates"},
    sent_interim_update_failures{YType::uint32, "sent-interim-update-failures"}
{

    yang_name = "accounting-session"; yang_parent_name = "accounting"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::~AccountingSession()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_data() const
{
    if (is_presence_container) return true;
    return accounting_state_rc.is_set
	|| accounting_stop_state.is_set
	|| record_context_name.is_set
	|| method_list_name.is_set
	|| account_session_id.is_set
	|| accounting_start_time_epoch.is_set
	|| is_interim_accounting_enabled.is_set
	|| interim_interval.is_set
	|| last_successful_interim_update_time_epoch.is_set
	|| next_interim_update_attempt_time.is_set
	|| last_interim_update_attempt_time_epoch.is_set
	|| sent_interim_updates.is_set
	|| accepted_interim_updates.is_set
	|| rejected_interim_updates.is_set
	|| sent_interim_update_failures.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(accounting_state_rc.yfilter)
	|| ydk::is_set(accounting_stop_state.yfilter)
	|| ydk::is_set(record_context_name.yfilter)
	|| ydk::is_set(method_list_name.yfilter)
	|| ydk::is_set(account_session_id.yfilter)
	|| ydk::is_set(accounting_start_time_epoch.yfilter)
	|| ydk::is_set(is_interim_accounting_enabled.yfilter)
	|| ydk::is_set(interim_interval.yfilter)
	|| ydk::is_set(last_successful_interim_update_time_epoch.yfilter)
	|| ydk::is_set(next_interim_update_attempt_time.yfilter)
	|| ydk::is_set(last_interim_update_attempt_time_epoch.yfilter)
	|| ydk::is_set(sent_interim_updates.yfilter)
	|| ydk::is_set(accepted_interim_updates.yfilter)
	|| ydk::is_set(rejected_interim_updates.yfilter)
	|| ydk::is_set(sent_interim_update_failures.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-session";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (accounting_state_rc.is_set || is_set(accounting_state_rc.yfilter)) leaf_name_data.push_back(accounting_state_rc.get_name_leafdata());
    if (accounting_stop_state.is_set || is_set(accounting_stop_state.yfilter)) leaf_name_data.push_back(accounting_stop_state.get_name_leafdata());
    if (record_context_name.is_set || is_set(record_context_name.yfilter)) leaf_name_data.push_back(record_context_name.get_name_leafdata());
    if (method_list_name.is_set || is_set(method_list_name.yfilter)) leaf_name_data.push_back(method_list_name.get_name_leafdata());
    if (account_session_id.is_set || is_set(account_session_id.yfilter)) leaf_name_data.push_back(account_session_id.get_name_leafdata());
    if (accounting_start_time_epoch.is_set || is_set(accounting_start_time_epoch.yfilter)) leaf_name_data.push_back(accounting_start_time_epoch.get_name_leafdata());
    if (is_interim_accounting_enabled.is_set || is_set(is_interim_accounting_enabled.yfilter)) leaf_name_data.push_back(is_interim_accounting_enabled.get_name_leafdata());
    if (interim_interval.is_set || is_set(interim_interval.yfilter)) leaf_name_data.push_back(interim_interval.get_name_leafdata());
    if (last_successful_interim_update_time_epoch.is_set || is_set(last_successful_interim_update_time_epoch.yfilter)) leaf_name_data.push_back(last_successful_interim_update_time_epoch.get_name_leafdata());
    if (next_interim_update_attempt_time.is_set || is_set(next_interim_update_attempt_time.yfilter)) leaf_name_data.push_back(next_interim_update_attempt_time.get_name_leafdata());
    if (last_interim_update_attempt_time_epoch.is_set || is_set(last_interim_update_attempt_time_epoch.yfilter)) leaf_name_data.push_back(last_interim_update_attempt_time_epoch.get_name_leafdata());
    if (sent_interim_updates.is_set || is_set(sent_interim_updates.yfilter)) leaf_name_data.push_back(sent_interim_updates.get_name_leafdata());
    if (accepted_interim_updates.is_set || is_set(accepted_interim_updates.yfilter)) leaf_name_data.push_back(accepted_interim_updates.get_name_leafdata());
    if (rejected_interim_updates.is_set || is_set(rejected_interim_updates.yfilter)) leaf_name_data.push_back(rejected_interim_updates.get_name_leafdata());
    if (sent_interim_update_failures.is_set || is_set(sent_interim_update_failures.yfilter)) leaf_name_data.push_back(sent_interim_update_failures.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
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
    if(value_path == "record-context-name")
    {
        record_context_name = value;
        record_context_name.value_namespace = name_space;
        record_context_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "method-list-name")
    {
        method_list_name = value;
        method_list_name.value_namespace = name_space;
        method_list_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "account-session-id")
    {
        account_session_id = value;
        account_session_id.value_namespace = name_space;
        account_session_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accounting-start-time-epoch")
    {
        accounting_start_time_epoch = value;
        accounting_start_time_epoch.value_namespace = name_space;
        accounting_start_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "is-interim-accounting-enabled")
    {
        is_interim_accounting_enabled = value;
        is_interim_accounting_enabled.value_namespace = name_space;
        is_interim_accounting_enabled.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "interim-interval")
    {
        interim_interval = value;
        interim_interval.value_namespace = name_space;
        interim_interval.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-successful-interim-update-time-epoch")
    {
        last_successful_interim_update_time_epoch = value;
        last_successful_interim_update_time_epoch.value_namespace = name_space;
        last_successful_interim_update_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "next-interim-update-attempt-time")
    {
        next_interim_update_attempt_time = value;
        next_interim_update_attempt_time.value_namespace = name_space;
        next_interim_update_attempt_time.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "last-interim-update-attempt-time-epoch")
    {
        last_interim_update_attempt_time_epoch = value;
        last_interim_update_attempt_time_epoch.value_namespace = name_space;
        last_interim_update_attempt_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "sent-interim-updates")
    {
        sent_interim_updates = value;
        sent_interim_updates.value_namespace = name_space;
        sent_interim_updates.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "accepted-interim-updates")
    {
        accepted_interim_updates = value;
        accepted_interim_updates.value_namespace = name_space;
        accepted_interim_updates.value_namespace_prefix = name_space_prefix;
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
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "accounting-state-rc")
    {
        accounting_state_rc.yfilter = yfilter;
    }
    if(value_path == "accounting-stop-state")
    {
        accounting_stop_state.yfilter = yfilter;
    }
    if(value_path == "record-context-name")
    {
        record_context_name.yfilter = yfilter;
    }
    if(value_path == "method-list-name")
    {
        method_list_name.yfilter = yfilter;
    }
    if(value_path == "account-session-id")
    {
        account_session_id.yfilter = yfilter;
    }
    if(value_path == "accounting-start-time-epoch")
    {
        accounting_start_time_epoch.yfilter = yfilter;
    }
    if(value_path == "is-interim-accounting-enabled")
    {
        is_interim_accounting_enabled.yfilter = yfilter;
    }
    if(value_path == "interim-interval")
    {
        interim_interval.yfilter = yfilter;
    }
    if(value_path == "last-successful-interim-update-time-epoch")
    {
        last_successful_interim_update_time_epoch.yfilter = yfilter;
    }
    if(value_path == "next-interim-update-attempt-time")
    {
        next_interim_update_attempt_time.yfilter = yfilter;
    }
    if(value_path == "last-interim-update-attempt-time-epoch")
    {
        last_interim_update_attempt_time_epoch.yfilter = yfilter;
    }
    if(value_path == "sent-interim-updates")
    {
        sent_interim_updates.yfilter = yfilter;
    }
    if(value_path == "accepted-interim-updates")
    {
        accepted_interim_updates.yfilter = yfilter;
    }
    if(value_path == "rejected-interim-updates")
    {
        rejected_interim_updates.yfilter = yfilter;
    }
    if(value_path == "sent-interim-update-failures")
    {
        sent_interim_update_failures.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::Accounting::AccountingSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-state-rc" || name == "accounting-stop-state" || name == "record-context-name" || name == "method-list-name" || name == "account-session-id" || name == "accounting-start-time-epoch" || name == "is-interim-accounting-enabled" || name == "interim-interval" || name == "last-successful-interim-update-time-epoch" || name == "next-interim-update-attempt-time" || name == "last-interim-update-attempt-time-epoch" || name == "sent-interim-updates" || name == "accepted-interim-updates" || name == "rejected-interim-updates" || name == "sent-interim-update-failures")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::SubPolicyData()
    :
    policy_epoch{YType::str, "policy-epoch"}
{

    yang_name = "sub-policy-data"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::~SubPolicyData()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::has_data() const
{
    if (is_presence_container) return true;
    return policy_epoch.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_epoch.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-policy-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_epoch.is_set || is_set(policy_epoch.yfilter)) leaf_name_data.push_back(policy_epoch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-epoch")
    {
        policy_epoch = value;
        policy_epoch.value_namespace = name_space;
        policy_epoch.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-epoch")
    {
        policy_epoch.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SubPolicyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-epoch")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::SessionServiceInfo()
    :
    service_name{YType::str, "service-name"},
    service_params{YType::str, "service-params"},
    service_type{YType::enumeration, "service-type"},
    service_status{YType::enumeration, "service-status"},
    service_id{YType::uint32, "service-id"},
    service_prepaid{YType::boolean, "service-prepaid"}
{

    yang_name = "session-service-info"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::~SessionServiceInfo()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set
	|| service_params.is_set
	|| service_type.is_set
	|| service_status.is_set
	|| service_id.is_set
	|| service_prepaid.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(service_params.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| ydk::is_set(service_status.yfilter)
	|| ydk::is_set(service_id.yfilter)
	|| ydk::is_set(service_prepaid.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-service-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (service_name.is_set || is_set(service_name.yfilter)) leaf_name_data.push_back(service_name.get_name_leafdata());
    if (service_params.is_set || is_set(service_params.yfilter)) leaf_name_data.push_back(service_params.get_name_leafdata());
    if (service_type.is_set || is_set(service_type.yfilter)) leaf_name_data.push_back(service_type.get_name_leafdata());
    if (service_status.is_set || is_set(service_status.yfilter)) leaf_name_data.push_back(service_status.get_name_leafdata());
    if (service_id.is_set || is_set(service_id.yfilter)) leaf_name_data.push_back(service_id.get_name_leafdata());
    if (service_prepaid.is_set || is_set(service_prepaid.yfilter)) leaf_name_data.push_back(service_prepaid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "service-name")
    {
        service_name = value;
        service_name.value_namespace = name_space;
        service_name.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-params")
    {
        service_params = value;
        service_params.value_namespace = name_space;
        service_params.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-type")
    {
        service_type = value;
        service_type.value_namespace = name_space;
        service_type.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-status")
    {
        service_status = value;
        service_status.value_namespace = name_space;
        service_status.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-id")
    {
        service_id = value;
        service_id.value_namespace = name_space;
        service_id.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "service-prepaid")
    {
        service_prepaid = value;
        service_prepaid.value_namespace = name_space;
        service_prepaid.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "service-name")
    {
        service_name.yfilter = yfilter;
    }
    if(value_path == "service-params")
    {
        service_params.yfilter = yfilter;
    }
    if(value_path == "service-type")
    {
        service_type.yfilter = yfilter;
    }
    if(value_path == "service-status")
    {
        service_status.yfilter = yfilter;
    }
    if(value_path == "service-id")
    {
        service_id.yfilter = yfilter;
    }
    if(value_path == "service-prepaid")
    {
        service_prepaid.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionServiceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name" || name == "service-params" || name == "service-type" || name == "service-status" || name == "service-id" || name == "service-prepaid")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::SessionChangeOfAuthorization()
    :
    request_acked{YType::boolean, "request-acked"},
    request_time_epoch{YType::uint64, "request-time-epoch"},
    reply_time_epoch{YType::uint64, "reply-time-epoch"}
{

    yang_name = "session-change-of-authorization"; yang_parent_name = "session"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::~SessionChangeOfAuthorization()
{
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_data() const
{
    if (is_presence_container) return true;
    return request_acked.is_set
	|| request_time_epoch.is_set
	|| reply_time_epoch.is_set;
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request_acked.yfilter)
	|| ydk::is_set(request_time_epoch.yfilter)
	|| ydk::is_set(reply_time_epoch.yfilter);
}

std::string Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-change-of-authorization";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_acked.is_set || is_set(request_acked.yfilter)) leaf_name_data.push_back(request_acked.get_name_leafdata());
    if (request_time_epoch.is_set || is_set(request_time_epoch.yfilter)) leaf_name_data.push_back(request_time_epoch.get_name_leafdata());
    if (reply_time_epoch.is_set || is_set(reply_time_epoch.yfilter)) leaf_name_data.push_back(reply_time_epoch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "request-acked")
    {
        request_acked = value;
        request_acked.value_namespace = name_space;
        request_acked.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "request-time-epoch")
    {
        request_time_epoch = value;
        request_time_epoch.value_namespace = name_space;
        request_time_epoch.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "reply-time-epoch")
    {
        reply_time_epoch = value;
        reply_time_epoch.value_namespace = name_space;
        reply_time_epoch.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "request-acked")
    {
        request_acked.yfilter = yfilter;
    }
    if(value_path == "request-time-epoch")
    {
        request_time_epoch.yfilter = yfilter;
    }
    if(value_path == "reply-time-epoch")
    {
        reply_time_epoch.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Sessions::Session_::SessionChangeOfAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-acked" || name == "request-time-epoch" || name == "reply-time-epoch")
        return true;
    return false;
}

IedgeLicenseManager::IedgeLicenseManager()
    :
    nodes(std::make_shared<IedgeLicenseManager::Nodes>())
{
    nodes->parent = this;

    yang_name = "iedge-license-manager"; yang_parent_name = "Cisco-IOS-XR-iedge4710-oper"; is_top_level_class = true; has_list_ancestor = false; 
}

IedgeLicenseManager::~IedgeLicenseManager()
{
}

bool IedgeLicenseManager::has_data() const
{
    if (is_presence_container) return true;
    return (nodes !=  nullptr && nodes->has_data());
}

bool IedgeLicenseManager::has_operation() const
{
    return is_set(yfilter)
	|| (nodes !=  nullptr && nodes->has_operation());
}

std::string IedgeLicenseManager::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IedgeLicenseManager::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IedgeLicenseManager::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "nodes")
    {
        if(nodes == nullptr)
        {
            nodes = std::make_shared<IedgeLicenseManager::Nodes>();
        }
        return nodes;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IedgeLicenseManager::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(nodes != nullptr)
    {
        _children["nodes"] = nodes;
    }

    return _children;
}

void IedgeLicenseManager::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IedgeLicenseManager::set_filter(const std::string & value_path, YFilter yfilter)
{
}

std::shared_ptr<ydk::Entity> IedgeLicenseManager::clone_ptr() const
{
    return std::make_shared<IedgeLicenseManager>();
}

std::string IedgeLicenseManager::get_bundle_yang_models_location() const
{
    return ydk_cisco_ios_xr_models_path;
}

std::string IedgeLicenseManager::get_bundle_name() const
{
    return "cisco_ios_xr";
}

augment_capabilities_function IedgeLicenseManager::get_augment_capabilities_function() const
{
    return cisco_ios_xr_augment_lookup_tables;
}

std::map<std::pair<std::string, std::string>, std::string> IedgeLicenseManager::get_namespace_identity_lookup() const
{
    return cisco_ios_xr_namespace_identity_lookup;
}

bool IedgeLicenseManager::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "nodes")
        return true;
    return false;
}

IedgeLicenseManager::Nodes::Nodes()
    :
    node(this, {"nodeid"})
{

    yang_name = "nodes"; yang_parent_name = "iedge-license-manager"; is_top_level_class = false; has_list_ancestor = false; 
}

IedgeLicenseManager::Nodes::~Nodes()
{
}

bool IedgeLicenseManager::Nodes::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_data())
            return true;
    }
    return false;
}

bool IedgeLicenseManager::Nodes::has_operation() const
{
    for (std::size_t index=0; index<node.len(); index++)
    {
        if(node[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string IedgeLicenseManager::Nodes::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager/" << get_segment_path();
    return path_buffer.str();
}

std::string IedgeLicenseManager::Nodes::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "nodes";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IedgeLicenseManager::Nodes::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IedgeLicenseManager::Nodes::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "node")
    {
        auto ent_ = std::make_shared<IedgeLicenseManager::Nodes::Node>();
        ent_->parent = this;
        node.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IedgeLicenseManager::Nodes::get_children() const
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

void IedgeLicenseManager::Nodes::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void IedgeLicenseManager::Nodes::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool IedgeLicenseManager::Nodes::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "node")
        return true;
    return false;
}

IedgeLicenseManager::Nodes::Node::Node()
    :
    nodeid{YType::str, "nodeid"}
        ,
    iedge_license_manager_summary(std::make_shared<IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary>())
{
    iedge_license_manager_summary->parent = this;

    yang_name = "node"; yang_parent_name = "nodes"; is_top_level_class = false; has_list_ancestor = false; 
}

IedgeLicenseManager::Nodes::Node::~Node()
{
}

bool IedgeLicenseManager::Nodes::Node::has_data() const
{
    if (is_presence_container) return true;
    return nodeid.is_set
	|| (iedge_license_manager_summary !=  nullptr && iedge_license_manager_summary->has_data());
}

bool IedgeLicenseManager::Nodes::Node::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(nodeid.yfilter)
	|| (iedge_license_manager_summary !=  nullptr && iedge_license_manager_summary->has_operation());
}

std::string IedgeLicenseManager::Nodes::Node::get_absolute_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "Cisco-IOS-XR-iedge4710-oper:iedge-license-manager/nodes/" << get_segment_path();
    return path_buffer.str();
}

std::string IedgeLicenseManager::Nodes::Node::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "node";
    ADD_KEY_TOKEN(nodeid, "nodeid");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IedgeLicenseManager::Nodes::Node::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (nodeid.is_set || is_set(nodeid.yfilter)) leaf_name_data.push_back(nodeid.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IedgeLicenseManager::Nodes::Node::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "iedge-license-manager-summary")
    {
        if(iedge_license_manager_summary == nullptr)
        {
            iedge_license_manager_summary = std::make_shared<IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary>();
        }
        return iedge_license_manager_summary;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IedgeLicenseManager::Nodes::Node::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    if(iedge_license_manager_summary != nullptr)
    {
        _children["iedge-license-manager-summary"] = iedge_license_manager_summary;
    }

    return _children;
}

void IedgeLicenseManager::Nodes::Node::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "nodeid")
    {
        nodeid = value;
        nodeid.value_namespace = name_space;
        nodeid.value_namespace_prefix = name_space_prefix;
    }
}

void IedgeLicenseManager::Nodes::Node::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "nodeid")
    {
        nodeid.yfilter = yfilter;
    }
}

bool IedgeLicenseManager::Nodes::Node::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "iedge-license-manager-summary" || name == "nodeid")
        return true;
    return false;
}

IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::IedgeLicenseManagerSummary()
    :
    session_limit{YType::uint32, "session-limit"},
    session_threshold{YType::uint32, "session-threshold"},
    session_license_count{YType::uint32, "session-license-count"},
    session_count{YType::uint32, "session-count"}
{

    yang_name = "iedge-license-manager-summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::~IedgeLicenseManagerSummary()
{
}

bool IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::has_data() const
{
    if (is_presence_container) return true;
    return session_limit.is_set
	|| session_threshold.is_set
	|| session_license_count.is_set
	|| session_count.is_set;
}

bool IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(session_limit.yfilter)
	|| ydk::is_set(session_threshold.yfilter)
	|| ydk::is_set(session_license_count.yfilter)
	|| ydk::is_set(session_count.yfilter);
}

std::string IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "iedge-license-manager-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (session_limit.is_set || is_set(session_limit.yfilter)) leaf_name_data.push_back(session_limit.get_name_leafdata());
    if (session_threshold.is_set || is_set(session_threshold.yfilter)) leaf_name_data.push_back(session_threshold.get_name_leafdata());
    if (session_license_count.is_set || is_set(session_license_count.yfilter)) leaf_name_data.push_back(session_license_count.get_name_leafdata());
    if (session_count.is_set || is_set(session_count.yfilter)) leaf_name_data.push_back(session_count.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "session-limit")
    {
        session_limit = value;
        session_limit.value_namespace = name_space;
        session_limit.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-threshold")
    {
        session_threshold = value;
        session_threshold.value_namespace = name_space;
        session_threshold.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-license-count")
    {
        session_license_count = value;
        session_license_count.value_namespace = name_space;
        session_license_count.value_namespace_prefix = name_space_prefix;
    }
    if(value_path == "session-count")
    {
        session_count = value;
        session_count.value_namespace = name_space;
        session_count.value_namespace_prefix = name_space_prefix;
    }
}

void IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "session-limit")
    {
        session_limit.yfilter = yfilter;
    }
    if(value_path == "session-threshold")
    {
        session_threshold.yfilter = yfilter;
    }
    if(value_path == "session-license-count")
    {
        session_license_count.yfilter = yfilter;
    }
    if(value_path == "session-count")
    {
        session_count.yfilter = yfilter;
    }
}

bool IedgeLicenseManager::Nodes::Node::IedgeLicenseManagerSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "session-limit" || name == "session-threshold" || name == "session-license-count" || name == "session-count")
        return true;
    return false;
}


}
}

