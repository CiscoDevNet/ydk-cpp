
#include <sstream>
#include <iostream>
#include <ydk/entity_util.hpp>
#include "bundle_info.hpp"
#include "generated_entity_lookup.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_1.hpp"
#include "Cisco_IOS_XR_iedge4710_oper_2.hpp"

using namespace ydk;

namespace cisco_ios_xr {
namespace Cisco_IOS_XR_iedge4710_oper {

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSessions()
    :
    subscriber_session(this, {"session_id"})
{

    yang_name = "subscriber-sessions"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::~SubscriberSessions()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<subscriber_session.len(); index++)
    {
        if(subscriber_session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::has_operation() const
{
    for (std::size_t index=0; index<subscriber_session.len(); index++)
    {
        if(subscriber_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-sessions";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "subscriber-session")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession>();
        ent_->parent = this;
        subscriber_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : subscriber_session.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "subscriber-session")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubscriberSession()
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
    accounting(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting>())
    , sub_policy_data(this, {})
    , session_service_info(this, {})
    , session_change_of_authorization(this, {})
{
    accounting->parent = this;

    yang_name = "subscriber-session"; yang_parent_name = "subscriber-sessions"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::~SubscriberSession()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "subscriber-session";
    ADD_KEY_TOKEN(session_id, "session-id");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting")
    {
        if(accounting == nullptr)
        {
            accounting = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting>();
        }
        return accounting;
    }

    if(child_yang_name == "sub-policy-data")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData>();
        ent_->parent = this;
        sub_policy_data.append(ent_);
        return ent_;
    }

    if(child_yang_name == "session-service-info")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo>();
        ent_->parent = this;
        session_service_info.append(ent_);
        return ent_;
    }

    if(child_yang_name == "session-change-of-authorization")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization>();
        ent_->parent = this;
        session_change_of_authorization.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting" || name == "sub-policy-data" || name == "session-service-info" || name == "session-change-of-authorization" || name == "session-id" || name == "session-type" || name == "pppoe-sub-type" || name == "interface-name" || name == "vrf-name" || name == "circuit-id" || name == "remote-id" || name == "lns-address" || name == "lac-address" || name == "tunnel-client-authentication-id" || name == "tunnel-server-authentication-id" || name == "session-ip-address" || name == "session-ipv6-address" || name == "session-ipv6-prefix" || name == "delegated-ipv6-prefix" || name == "ipv6-interface-id" || name == "mac-address" || name == "account-session-id" || name == "nas-port" || name == "username" || name == "clientname" || name == "formattedname" || name == "is-session-authentic" || name == "is-session-author" || name == "session-state" || name == "session-creation-time-epoch" || name == "idle-state-change-time" || name == "total-session-idle-time" || name == "access-interface-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::Accounting()
    :
    accounting_session(this, {})
{

    yang_name = "accounting"; yang_parent_name = "subscriber-session"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::~Accounting()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<accounting_session.len(); index++)
    {
        if(accounting_session[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::has_operation() const
{
    for (std::size_t index=0; index<accounting_session.len(); index++)
    {
        if(accounting_session[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "accounting-session")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession>();
        ent_->parent = this;
        accounting_session.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-session")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::AccountingSession()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::~AccountingSession()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "accounting-session";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::Accounting::AccountingSession::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "accounting-state-rc" || name == "accounting-stop-state" || name == "record-context-name" || name == "method-list-name" || name == "account-session-id" || name == "accounting-start-time-epoch" || name == "is-interim-accounting-enabled" || name == "interim-interval" || name == "last-successful-interim-update-time-epoch" || name == "next-interim-update-attempt-time" || name == "last-interim-update-attempt-time-epoch" || name == "sent-interim-updates" || name == "accepted-interim-updates" || name == "rejected-interim-updates" || name == "sent-interim-update-failures")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::SubPolicyData()
    :
    policy_epoch{YType::str, "policy-epoch"}
{

    yang_name = "sub-policy-data"; yang_parent_name = "subscriber-session"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::~SubPolicyData()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::has_data() const
{
    if (is_presence_container) return true;
    return policy_epoch.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(policy_epoch.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "sub-policy-data";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (policy_epoch.is_set || is_set(policy_epoch.yfilter)) leaf_name_data.push_back(policy_epoch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "policy-epoch")
    {
        policy_epoch = value;
        policy_epoch.value_namespace = name_space;
        policy_epoch.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "policy-epoch")
    {
        policy_epoch.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SubPolicyData::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "policy-epoch")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::SessionServiceInfo()
    :
    service_name{YType::str, "service-name"},
    service_params{YType::str, "service-params"},
    service_type{YType::enumeration, "service-type"},
    service_status{YType::enumeration, "service-status"},
    service_id{YType::uint32, "service-id"},
    service_prepaid{YType::boolean, "service-prepaid"}
{

    yang_name = "session-service-info"; yang_parent_name = "subscriber-session"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::~SessionServiceInfo()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::has_data() const
{
    if (is_presence_container) return true;
    return service_name.is_set
	|| service_params.is_set
	|| service_type.is_set
	|| service_status.is_set
	|| service_id.is_set
	|| service_prepaid.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(service_name.yfilter)
	|| ydk::is_set(service_params.yfilter)
	|| ydk::is_set(service_type.yfilter)
	|| ydk::is_set(service_status.yfilter)
	|| ydk::is_set(service_id.yfilter)
	|| ydk::is_set(service_prepaid.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-service-info";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionServiceInfo::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "service-name" || name == "service-params" || name == "service-type" || name == "service-status" || name == "service-id" || name == "service-prepaid")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::SessionChangeOfAuthorization()
    :
    request_acked{YType::boolean, "request-acked"},
    request_time_epoch{YType::uint64, "request-time-epoch"},
    reply_time_epoch{YType::uint64, "reply-time-epoch"}
{

    yang_name = "session-change-of-authorization"; yang_parent_name = "subscriber-session"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::~SessionChangeOfAuthorization()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::has_data() const
{
    if (is_presence_container) return true;
    return request_acked.is_set
	|| request_time_epoch.is_set
	|| reply_time_epoch.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(request_acked.yfilter)
	|| ydk::is_set(request_time_epoch.yfilter)
	|| ydk::is_set(reply_time_epoch.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "session-change-of-authorization";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (request_acked.is_set || is_set(request_acked.yfilter)) leaf_name_data.push_back(request_acked.get_name_leafdata());
    if (request_time_epoch.is_set || is_set(request_time_epoch.yfilter)) leaf_name_data.push_back(request_time_epoch.get_name_leafdata());
    if (reply_time_epoch.is_set || is_set(reply_time_epoch.yfilter)) leaf_name_data.push_back(reply_time_epoch.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SubscriberSessions::SubscriberSession::SessionChangeOfAuthorization::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "request-acked" || name == "request-time-epoch" || name == "reply-time-epoch")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummaries()
    :
    ipv4_address_vrf_summary(this, {})
{

    yang_name = "ipv4-address-vrf-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::~Ipv4AddressVrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_address_vrf_summary.len(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_vrf_summary.len(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-vrf-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary>();
        ent_->parent = this;
        ipv4_address_vrf_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_address_vrf_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-vrf-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::Ipv4AddressVrfSummary()
    :
    vrf_name{YType::str, "vrf-name"},
    address{YType::str, "address"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "ipv4-address-vrf-summary"; yang_parent_name = "ipv4-address-vrf-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::~Ipv4AddressVrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| address.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "vrf-name" || name == "address")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-vrf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-vrf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::SrgSummary()
    :
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "srg-summary"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::~SrgSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::has_data() const
{
    if (is_presence_container) return true;
    return (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::has_operation() const
{
    return is_set(yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "srg-summary";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "srg-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "srg-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::SrgSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummaries()
    :
    access_interface_summary(this, {"interface_name"})
{

    yang_name = "access-interface-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::~AccessInterfaceSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<access_interface_summary.len(); index++)
    {
        if(access_interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<access_interface_summary.len(); index++)
    {
        if(access_interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "access-interface-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary>();
        ent_->parent = this;
        access_interface_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "access-interface-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AccessInterfaceSummary()
    :
    interface_name{YType::str, "interface-name"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "access-interface-summary"; yang_parent_name = "access-interface-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::~AccessInterfaceSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "access-interface-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "interface-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "access-interface-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "access-interface-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AccessInterfaceSummaries::AccessInterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummaries()
    :
    address_family_summary(this, {"address_family"})
{

    yang_name = "address-family-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::~AddressFamilySummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_family_summary.len(); index++)
    {
        if(address_family_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::has_operation() const
{
    for (std::size_t index=0; index<address_family_summary.len(); index++)
    {
        if(address_family_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary>();
        ent_->parent = this;
        address_family_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_family_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilySummary()
    :
    address_family{YType::enumeration, "address-family"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "address-family-summary"; yang_parent_name = "address-family-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::~AddressFamilySummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-summary";
    ADD_KEY_TOKEN(address_family, "address-family");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "address-family")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "address-family-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "address-family-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummaries()
    :
    ipv4_address_summary(this, {"address"})
{

    yang_name = "ipv4-address-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::~Ipv4AddressSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_address_summary.len(); index++)
    {
        if(ipv4_address_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_summary.len(); index++)
    {
        if(ipv4_address_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary>();
        ent_->parent = this;
        ipv4_address_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "ipv4-address-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::Ipv4AddressSummary()
    :
    address{YType::str, "address"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "ipv4-address-summary"; yang_parent_name = "ipv4-address-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::~Ipv4AddressSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::has_data() const
{
    if (is_presence_container) return true;
    return address.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-summary";
    ADD_KEY_TOKEN(address, "address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address")
    {
        address = value;
        address.value_namespace = name_space;
        address.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "address")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::Ipv4AddressSummaries::Ipv4AddressSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummaries()
    :
    vrf_summary(this, {"vrf_name"})
{

    yang_name = "vrf-summaries"; yang_parent_name = "srg-role"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::~VrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<vrf_summary.len(); index++)
    {
        if(vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<vrf_summary.len(); index++)
    {
        if(vrf_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "vrf-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary>();
        ent_->parent = this;
        vrf_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "vrf-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::VrfSummary()
    :
    vrf_name{YType::str, "vrf-name"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "vrf-summary"; yang_parent_name = "vrf-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::~VrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "vrf-summary";
    ADD_KEY_TOKEN(vrf_name, "vrf-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "vrf-name")
    {
        vrf_name = value;
        vrf_name.value_namespace = name_space;
        vrf_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "vrf-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "vrf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "vrf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::SrgRoles::SrgRole::VrfSummaries::VrfSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummaries()
    :
    author_summary(this, {"author_state"})
{

    yang_name = "author-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AuthorSummaries::~AuthorSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<author_summary.len(); index++)
    {
        if(author_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::has_operation() const
{
    for (std::size_t index=0; index<author_summary.len(); index++)
    {
        if(author_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "author-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "author-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary>();
        ent_->parent = this;
        author_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : author_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "author-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AuthorSummary()
    :
    author_state{YType::enumeration, "author-state"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "author-summary"; yang_parent_name = "author-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::~AuthorSummary()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::has_data() const
{
    if (is_presence_container) return true;
    return author_state.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(author_state.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "author-summary";
    ADD_KEY_TOKEN(author_state, "author-state");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (author_state.is_set || is_set(author_state.yfilter)) leaf_name_data.push_back(author_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "author-state")
    {
        author_state = value;
        author_state.value_namespace = name_space;
        author_state.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "author-state")
    {
        author_state.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "author-state")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "author-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "author-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthorSummaries::AuthorSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::Summary()
    :
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "summary"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Summary::~Summary()
{
}

bool Subscriber::Session::Nodes::Node::Summary::has_data() const
{
    if (is_presence_container) return true;
    return (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::has_operation() const
{
    return is_set(yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::get_children() const
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

void Subscriber::Session::Nodes::Node::Summary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Summary::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Summary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Summary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::Summary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Summary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Summary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Summary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummaries()
    :
    mac_summary(this, {"mac_address"})
{

    yang_name = "mac-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::MacSummaries::~MacSummaries()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<mac_summary.len(); index++)
    {
        if(mac_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::has_operation() const
{
    for (std::size_t index=0; index<mac_summary.len(); index++)
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "mac-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary>();
        ent_->parent = this;
        mac_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : mac_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "mac-summary"; yang_parent_name = "mac-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::~MacSummary()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_data() const
{
    if (is_presence_container) return true;
    return mac_address.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(mac_address.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "mac-summary";
    ADD_KEY_TOKEN(mac_address, "mac-address");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (mac_address.is_set || is_set(mac_address.yfilter)) leaf_name_data.push_back(mac_address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::get_children() const
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
    if(name == "state-xr" || name == "address-family-xr" || name == "mac-address")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "mac-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "mac-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::MacSummaries::MacSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummaries()
    :
    interface_summary(this, {"interface_name"})
{

    yang_name = "interface-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::~InterfaceSummaries()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::has_operation() const
{
    for (std::size_t index=0; index<interface_summary.len(); index++)
    {
        if(interface_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "interface-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary>();
        ent_->parent = this;
        interface_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : interface_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "interface-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::InterfaceSummary()
    :
    interface_name{YType::str, "interface-name"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "interface-summary"; yang_parent_name = "interface-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::~InterfaceSummary()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::has_data() const
{
    if (is_presence_container) return true;
    return interface_name.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(interface_name.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "interface-summary";
    ADD_KEY_TOKEN(interface_name, "interface-name");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (interface_name.is_set || is_set(interface_name.yfilter)) leaf_name_data.push_back(interface_name.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "interface-name")
    {
        interface_name = value;
        interface_name.value_namespace = name_space;
        interface_name.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "interface-name")
    {
        interface_name.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "interface-name")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "interface-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "interface-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::InterfaceSummaries::InterfaceSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummaries()
    :
    authentication_summary(this, {"authentication_state"})
{

    yang_name = "authentication-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::~AuthenticationSummaries()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<authentication_summary.len(); index++)
    {
        if(authentication_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::has_operation() const
{
    for (std::size_t index=0; index<authentication_summary.len(); index++)
    {
        if(authentication_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "authentication-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary>();
        ent_->parent = this;
        authentication_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : authentication_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "authentication-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AuthenticationSummary()
    :
    authentication_state{YType::enumeration, "authentication-state"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "authentication-summary"; yang_parent_name = "authentication-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::~AuthenticationSummary()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::has_data() const
{
    if (is_presence_container) return true;
    return authentication_state.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(authentication_state.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "authentication-summary";
    ADD_KEY_TOKEN(authentication_state, "authentication-state");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (authentication_state.is_set || is_set(authentication_state.yfilter)) leaf_name_data.push_back(authentication_state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "authentication-state")
    {
        authentication_state = value;
        authentication_state.value_namespace = name_space;
        authentication_state.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "authentication-state")
    {
        authentication_state.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "authentication-state")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "authentication-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "authentication-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AuthenticationSummaries::AuthenticationSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummaries()
    :
    state_summary(this, {"state"})
{

    yang_name = "state-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::StateSummaries::~StateSummaries()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<state_summary.len(); index++)
    {
        if(state_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::has_operation() const
{
    for (std::size_t index=0; index<state_summary.len(); index++)
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary>();
        ent_->parent = this;
        state_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : state_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "state-summary"; yang_parent_name = "state-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::~StateSummary()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_data() const
{
    if (is_presence_container) return true;
    return state.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(state.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-summary";
    ADD_KEY_TOKEN(state, "state");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (state.is_set || is_set(state.yfilter)) leaf_name_data.push_back(state.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::get_children() const
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
    if(name == "state-xr" || name == "address-family-xr" || name == "state")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "state-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "state-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::StateSummaries::StateSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummaries()
    :
    ipv4_address_vrf_summary(this, {})
{

    yang_name = "ipv4-address-vrf-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::~Ipv4AddressVrfSummaries()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<ipv4_address_vrf_summary.len(); index++)
    {
        if(ipv4_address_vrf_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::has_operation() const
{
    for (std::size_t index=0; index<ipv4_address_vrf_summary.len(); index++)
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "ipv4-address-vrf-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary>();
        ent_->parent = this;
        ipv4_address_vrf_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : ipv4_address_vrf_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    vrf_name{YType::str, "vrf-name"},
    address{YType::str, "address"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "ipv4-address-vrf-summary"; yang_parent_name = "ipv4-address-vrf-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::~Ipv4AddressVrfSummary()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_data() const
{
    if (is_presence_container) return true;
    return vrf_name.is_set
	|| address.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(vrf_name.yfilter)
	|| ydk::is_set(address.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ipv4-address-vrf-summary";
    path_buffer << "[" << get_ylist_key() << "]";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (vrf_name.is_set || is_set(vrf_name.yfilter)) leaf_name_data.push_back(vrf_name.get_name_leafdata());
    if (address.is_set || is_set(address.yfilter)) leaf_name_data.push_back(address.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::get_children() const
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "vrf-name")
    {
        vrf_name.yfilter = yfilter;
    }
    if(value_path == "address")
    {
        address.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "vrf-name" || name == "address")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "ipv4-address-vrf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "ipv4-address-vrf-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

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

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
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

    if (in_progress_sessions.is_set || is_set(in_progress_sessions.yfilter)) leaf_name_data.push_back(in_progress_sessions.get_name_leafdata());
    if (ipv4_only_sessions.is_set || is_set(ipv4_only_sessions.yfilter)) leaf_name_data.push_back(ipv4_only_sessions.get_name_leafdata());
    if (ipv6_only_sessions.is_set || is_set(ipv6_only_sessions.yfilter)) leaf_name_data.push_back(ipv6_only_sessions.get_name_leafdata());
    if (dual_part_up_sessions.is_set || is_set(dual_part_up_sessions.yfilter)) leaf_name_data.push_back(dual_part_up_sessions.get_name_leafdata());
    if (dual_up_sessions.is_set || is_set(dual_up_sessions.yfilter)) leaf_name_data.push_back(dual_up_sessions.get_name_leafdata());
    if (lac_sessions.is_set || is_set(lac_sessions.yfilter)) leaf_name_data.push_back(lac_sessions.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::Ipv4AddressVrfSummaries::Ipv4AddressVrfSummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummaries()
    :
    address_family_summary(this, {"address_family"})
{

    yang_name = "address-family-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::~AddressFamilySummaries()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<address_family_summary.len(); index++)
    {
        if(address_family_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::has_operation() const
{
    for (std::size_t index=0; index<address_family_summary.len(); index++)
    {
        if(address_family_summary[index]->has_operation())
            return true;
    }
    return is_set(yfilter);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-summaries";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "address-family-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary>();
        ent_->parent = this;
        address_family_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : address_family_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "address-family-summary")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilySummary()
    :
    address_family{YType::enumeration, "address-family"}
        ,
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "address-family-summary"; yang_parent_name = "address-family-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::~AddressFamilySummary()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::has_data() const
{
    if (is_presence_container) return true;
    return address_family.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(address_family.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-summary";
    ADD_KEY_TOKEN(address_family, "address-family");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (address_family.is_set || is_set(address_family.yfilter)) leaf_name_data.push_back(address_family.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::get_children() const
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
    if(value_path == "address-family")
    {
        address_family = value;
        address_family.value_namespace = name_space;
        address_family.value_namespace_prefix = name_space_prefix;
    }
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::set_filter(const std::string & value_path, YFilter yfilter)
{
    if(value_path == "address-family")
    {
        address_family.yfilter = yfilter;
    }
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "state-xr" || name == "address-family-xr" || name == "address-family")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::StateXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "state-xr"; yang_parent_name = "address-family-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::~StateXr()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "state-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::get_children() const
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_data() const
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_data() const
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_data() const
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_operation() const
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

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::StateXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "initialized-sessions" || name == "connecting-sessions" || name == "connected-sessions" || name == "activated-sessions" || name == "idle-sessions" || name == "disconnecting-sessions" || name == "end-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::AddressFamilyXr()
    :
    pppoe(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe>())
    , ip_subscriber_dhcp(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp>())
    , ip_subscriber_packet(std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket>())
{
    pppoe->parent = this;
    ip_subscriber_dhcp->parent = this;
    ip_subscriber_packet->parent = this;

    yang_name = "address-family-xr"; yang_parent_name = "address-family-summary"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::~AddressFamilyXr()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_data() const
{
    if (is_presence_container) return true;
    return (pppoe !=  nullptr && pppoe->has_data())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_data())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_data());
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_operation() const
{
    return is_set(yfilter)
	|| (pppoe !=  nullptr && pppoe->has_operation())
	|| (ip_subscriber_dhcp !=  nullptr && ip_subscriber_dhcp->has_operation())
	|| (ip_subscriber_packet !=  nullptr && ip_subscriber_packet->has_operation());
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "address-family-xr";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};


    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "pppoe")
    {
        if(pppoe == nullptr)
        {
            pppoe = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe>();
        }
        return pppoe;
    }

    if(child_yang_name == "ip-subscriber-dhcp")
    {
        if(ip_subscriber_dhcp == nullptr)
        {
            ip_subscriber_dhcp = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp>();
        }
        return ip_subscriber_dhcp;
    }

    if(child_yang_name == "ip-subscriber-packet")
    {
        if(ip_subscriber_packet == nullptr)
        {
            ip_subscriber_packet = std::make_shared<Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket>();
        }
        return ip_subscriber_packet;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::get_children() const
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
{
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::set_filter(const std::string & value_path, YFilter yfilter)
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "pppoe" || name == "ip-subscriber-dhcp" || name == "ip-subscriber-packet")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::Pppoe()
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

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::~Pppoe()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "pppoe";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::Pppoe::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::IpSubscriberDhcp()
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

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::~IpSubscriberDhcp()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-dhcp";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberDhcp::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::IpSubscriberPacket()
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

Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::~IpSubscriberPacket()
{
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_data() const
{
    if (is_presence_container) return true;
    return in_progress_sessions.is_set
	|| ipv4_only_sessions.is_set
	|| ipv6_only_sessions.is_set
	|| dual_part_up_sessions.is_set
	|| dual_up_sessions.is_set
	|| lac_sessions.is_set;
}

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(in_progress_sessions.yfilter)
	|| ydk::is_set(ipv4_only_sessions.yfilter)
	|| ydk::is_set(ipv6_only_sessions.yfilter)
	|| ydk::is_set(dual_part_up_sessions.yfilter)
	|| ydk::is_set(dual_up_sessions.yfilter)
	|| ydk::is_set(lac_sessions.yfilter);
}

std::string Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "ip-subscriber-packet";
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_name_leaf_data() const
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    return _children;
}

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::set_value(const std::string & value_path, const std::string & value, const std::string & name_space, const std::string & name_space_prefix)
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

void Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::set_filter(const std::string & value_path, YFilter yfilter)
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

bool Subscriber::Session::Nodes::Node::AddressFamilySummaries::AddressFamilySummary::AddressFamilyXr::IpSubscriberPacket::has_leaf_or_child_of_name(const std::string & name) const
{
    if(name == "in-progress-sessions" || name == "ipv4-only-sessions" || name == "ipv6-only-sessions" || name == "dual-part-up-sessions" || name == "dual-up-sessions" || name == "lac-sessions")
        return true;
    return false;
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummaries()
    :
    username_summary(this, {"username"})
{

    yang_name = "username-summaries"; yang_parent_name = "node"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::~UsernameSummaries()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_data() const
{
    if (is_presence_container) return true;
    for (std::size_t index=0; index<username_summary.len(); index++)
    {
        if(username_summary[index]->has_data())
            return true;
    }
    return false;
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::has_operation() const
{
    for (std::size_t index=0; index<username_summary.len(); index++)
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

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "username-summary")
    {
        auto ent_ = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary>();
        ent_->parent = this;
        username_summary.append(ent_);
        return ent_;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::get_children() const
{
    std::map<std::string, std::shared_ptr<ydk::Entity>> _children{};
    char count_=0;
    count_ = 0;
    for (auto ent_ : username_summary.entities())
    {
        if(_children.find(ent_->get_segment_path()) == _children.end())
            _children[ent_->get_segment_path()] = ent_;
        else
            _children[ent_->get_segment_path()+count_++] = ent_;
    }

    return _children;
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
    state_xr(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr>())
    , address_family_xr(std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr>())
{
    state_xr->parent = this;
    address_family_xr->parent = this;

    yang_name = "username-summary"; yang_parent_name = "username-summaries"; is_top_level_class = false; has_list_ancestor = true; 
}

Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::~UsernameSummary()
{
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_data() const
{
    if (is_presence_container) return true;
    return username.is_set
	|| (state_xr !=  nullptr && state_xr->has_data())
	|| (address_family_xr !=  nullptr && address_family_xr->has_data());
}

bool Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::has_operation() const
{
    return is_set(yfilter)
	|| ydk::is_set(username.yfilter)
	|| (state_xr !=  nullptr && state_xr->has_operation())
	|| (address_family_xr !=  nullptr && address_family_xr->has_operation());
}

std::string Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_segment_path() const
{
    std::ostringstream path_buffer;
    path_buffer << "username-summary";
    ADD_KEY_TOKEN(username, "username");
    return path_buffer.str();
}

std::vector<std::pair<std::string, LeafData> > Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_name_leaf_data() const
{
    std::vector<std::pair<std::string, LeafData> > leaf_name_data {};

    if (username.is_set || is_set(username.yfilter)) leaf_name_data.push_back(username.get_name_leafdata());

    return leaf_name_data;

}

std::shared_ptr<ydk::Entity> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_child_by_name(const std::string & child_yang_name, const std::string & segment_path)
{
    if(child_yang_name == "state-xr")
    {
        if(state_xr == nullptr)
        {
            state_xr = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::StateXr>();
        }
        return state_xr;
    }

    if(child_yang_name == "address-family-xr")
    {
        if(address_family_xr == nullptr)
        {
            address_family_xr = std::make_shared<Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::AddressFamilyXr>();
        }
        return address_family_xr;
    }

    return nullptr;
}

std::map<std::string, std::shared_ptr<ydk::Entity>> Subscriber::Session::Nodes::Node::UsernameSummaries::UsernameSummary::get_children() const
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
    if(name == "state-xr" || name == "address-family-xr" || name == "username")
        return true;
    return false;
}


}
}

